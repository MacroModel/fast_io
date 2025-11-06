#pragma once

#include <atomic>
#if !defined(__linux__)
#error "This file is for linux only"
#endif

#include <cstddef>
#include <cstdint>
#include <utility>
#include <ranges>
#include <unistd.h>
#include <signal.h>
#include <sys/syscall.h>
#include <linux/futex.h>
#include <linux/sched.h>
#include "stack_pointer.h"

namespace fast_io
{

class linux_clone3_thread
{
	using id = ::pid_t;

private:
	template <typename F, typename... A>
	struct alignas(16) child_ctx
	{
		F func;
		::fast_io::containers::tuple<A...> args;
	};

	template <typename F, typename... A>
	[[gnu::noreturn]]
	static void child_entry(child_ctx<F, A...> *ctx) noexcept
	{
		apply(ctx->func, ctx->args);
		// 依赖内核的 CLONE_CHILD_CLEARTID 在退出时清 0 并 futex 唤醒
		::fast_io::fast_exit(0);
	}

	struct alignas(16) clone3_thread_stack
	{
		static constexpr ::std::size_t stack_size_{1024 * 1024};

		::std::byte tail_[stack_size_];
		alignas(4)::std::atomic<int> futex_word_{1};
	};

	using thread_stack_type_allocator = ::fast_io::native_typed_global_allocator<clone3_thread_stack>;

	id id_{};
	clone3_thread_stack *stack_{};

public:
	constexpr linux_clone3_thread() noexcept = default;

	template <typename Func, typename... Args>
		requires std::invocable<Func, Args...>
	constexpr linux_clone3_thread(Func &&func, Args &&...args)
	{
		// Assume the returned address is 16 aligned
		this->stack_ = thread_stack_type_allocator::allocate(1u);
		::new (this->stack_) clone3_thread_stack{};

		using decF = ::std::decay_t<Func>;
		using decArgsTuple = ::fast_io::containers::tuple<::std::decay_t<Args>...>;
		using ctx_t = child_ctx<decF, ::std::decay_t<Args>...>;

		// 在子线程栈顶预构造上下文，子线程通过 RSP 反推得到地址
		auto tail_base{reinterpret_cast<::std::uintptr_t>(__builtin_addressof(this->stack_->tail_))};
		auto top_of_stack{tail_base + clone3_thread_stack::stack_size_};
		constexpr ::std::size_t ctx_size{sizeof(ctx_t)};
		constexpr ::std::size_t ctx_align{alignof(ctx_t)};
		auto ctx_addr{(top_of_stack - ctx_size) & ~static_cast<::std::uintptr_t>(ctx_align - 1u)};
		auto ctx_ptr{reinterpret_cast<ctx_t *>(ctx_addr)};
		::new (ctx_ptr) ctx_t{::std::forward<Func>(func), decArgsTuple{::std::forward<Args>(args)...}};

		// TODO support tls（当前避免使用任何需要 TLS 的 glibc 包装）
		clone_args clone3_arg{
			.flags = CLONE_VM | CLONE_FS | CLONE_FILES | CLONE_SIGHAND | CLONE_THREAD | CLONE_CHILD_CLEARTID | CLONE_CHILD_SETTID,
			.pidfd = 0,
			.child_tid = reinterpret_cast<::std::size_t>(__builtin_addressof(this->stack_->futex_word_)),
			.parent_tid = 0,
			.exit_signal = 0,
			.stack = reinterpret_cast<::std::size_t>(__builtin_addressof(this->stack_->tail_)),
			.stack_size = clone3_thread_stack::stack_size_,
			.tls = 0,
			.set_tid = 0,
			.set_tid_size = 0,
			.cgroup = 0,
		};

		// futex_word_ 初始为 1（运行中），内核在退出时会清 0 并唤醒

		auto clone3_result = ::fast_io::inline_syscall<__NR_clone3, ::pid_t>(__builtin_addressof(clone3_arg), sizeof(clone_args));
		if (clone3_result < 0)
		{
			::fast_io::throw_posix_error();
		}
		else if (clone3_result == 0)
		{
			// 子线程：仅依赖 RSP 推导出 ctx 地址，避免访问父栈与 this
			constexpr ::std::size_t ctx_size_c{sizeof(ctx_t)};
			constexpr ::std::size_t ctx_align_c{alignof(ctx_t)};
			auto sp{reinterpret_cast<::std::uintptr_t>(::fast_io::details::get_stack_pointer())};
			auto ctx_addr_child{(sp - ctx_size_c) & ~static_cast<::std::uintptr_t>(ctx_align_c - 1u)};
			auto ctx_child{reinterpret_cast<ctx_t *>(ctx_addr_child)};
			// 预留足够栈空间，避免后续调用覆盖 ctx；并对齐到 16 字节
			auto reserve{(sp - ctx_addr_child) + static_cast<::std::uintptr_t>(128u)};
			reserve = (reserve + 15u) & ~static_cast<::std::uintptr_t>(15u);

			linux_clone3_thread::child_entry<decF, ::std::decay_t<Args>...>(ctx_child);

			__builtin_unreachable();
		}
		else
		{
			this->id_ = clone3_result;
		}
	}

	constexpr linux_clone3_thread(linux_clone3_thread &&other) noexcept = default;

	constexpr linux_clone3_thread(linux_clone3_thread const &) noexcept = delete;

	constexpr ~linux_clone3_thread()
	{
		if (this->joinable()) [[unlikely]]
		{
			::fast_io::fast_terminate();
		}

		thread_stack_type_allocator::deallocate_n(this->stack_, 1u);
	}

	constexpr linux_clone3_thread &operator=(linux_clone3_thread const &) noexcept = delete;

	constexpr linux_clone3_thread &operator=(linux_clone3_thread &&other) & noexcept
	{
		this->swap(other);
		return *this;
	}

	constexpr void swap(linux_clone3_thread &other) noexcept
	{
		::std::ranges::swap(this->id_, other.id_);
		::std::ranges::swap(this->stack_, other.stack_);
	}

	constexpr bool joinable() const noexcept
	{
		return this->stack_->futex_word_.load() != 0;
	}

	constexpr void join()
	{
		if (!this->joinable()) [[unlikely]]
		{
			::fast_io::throw_posix_error();
		}
		// 等待 futex_word_ 从 1 变为 0（由内核在子线程退出时清零并唤醒）
		for (;;)
		{
			int v = this->stack_->futex_word_.load(::std::memory_order_acquire);
			if (v == 0)
			{
				break;
			}
			(void)::fast_io::system_call<__NR_futex, long>(
				reinterpret_cast<int *>(__builtin_addressof(this->stack_->futex_word_)),
				FUTEX_WAIT,
				v,
				nullptr,
				nullptr,
				0);
		}
	}

	constexpr void detach() noexcept
	{
		// 放弃释放责任（泄漏），交给进程退出时清理
		this->id_ = 0;
	}
};

} // namespace fast_io
