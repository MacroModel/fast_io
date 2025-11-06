#pragma once

#include <atomic>
#if !defined(__linux__)
#error "This file is for linux only"
#endif

#include <cstddef>
#include <utility>
#include <ranges>
#include <unistd.h>
#include <signal.h>
#include <sys/syscall.h>
#include <linux/futex.h>
#include <linux/sched.h>
#include "stack_pointer.h"
#include "../../../fast_io_core_impl/allocation/c_malloc.h"

namespace fast_io
{

class linux_clone3_thread
{
	using id = ::pid_t;

private:
	struct alignas(16) clone3_thread_stack
	{
		static constexpr ::std::size_t stack_size_{1024 * 1024 - 8};

		::std::byte tail_[stack_size_];
		::std::atomic<bool> joinable_{false};

		void *head() noexcept
		{
			return reinterpret_cast<void *>(__builtin_addressof(this->joinable_));
		}
	};

	id id_{};
	clone3_thread_stack *stack_{nullptr};

public:
	constexpr linux_clone3_thread() noexcept = default;

	template <typename Func, typename... Args>
		requires std::invocable<Func, Args...>
	constexpr linux_clone3_thread(Func &&func, Args &&...args)
	{
		// Assume the returned address is 16 aligned
		this->stack_ = static_cast<clone3_thread_stack *>(::fast_io::generic_allocator_adapter<::fast_io::c_malloc_allocator>::allocate(sizeof(clone3_thread_stack)));
		::new (this->stack_) clone3_thread_stack{};

		// TODO support tls
		clone_args clone3_arg{
			.flags = CLONE_VM | CLONE_FS | CLONE_FILES | CLONE_SIGHAND | CLONE_THREAD,
			.pidfd = 0,
			.child_tid = 0,
			.parent_tid = 0,
			.exit_signal = 0,
			.stack = reinterpret_cast<::std::size_t>(this->stack_->tail_),
			.stack_size = clone3_thread_stack::stack_size_,
			.tls = 0,
			.set_tid = 0,
			.set_tid_size = 0,
			.cgroup = 0,
		};

		auto clone3_result = ::fast_io::inline_syscall<SYS_clone3, ::pid_t>(__builtin_addressof(clone3_arg), sizeof(clone_args));
		if (clone3_result < 0)
		{
			::fast_io::throw_posix_error();
		}
		else if (clone3_result == 0)
		{
			auto pjoinable = static_cast<::std::atomic<bool> *>(::fast_io::details::get_stack_pointer());
			func(::std::forward<Args>(args)...);
			pjoinable->store(false);
			pjoinable->notify_all();
			::fast_io::fast_exit(0);
		}
		else
		{
			this->id_ = clone3_result;
			this->stack_->joinable_.store(true);
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
		::fast_io::generic_allocator_adapter<::fast_io::c_malloc_allocator>::deallocate(this->stack_);
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
		return this->stack_->joinable_.load();
	}

	constexpr void join()
	{
		if (!this->joinable()) [[unlikely]]
		{
			::fast_io::throw_posix_error();
		}
		// this->id_ = 0;
		this->stack_->joinable_.wait(true);
	}

	constexpr void detach() noexcept
	{
		// relinquish responsibility for freeing the stack (leak)
		this->stack_->joinable_.store(false);
		// do NOT deallocate stack_tail_ here (can't safely)
		this->id_ = 0;
	}
};

} // namespace fast_io
