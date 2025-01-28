#pragma once

namespace fast_io
{

namespace details
{
#if defined(_GNU_SOURCE) && !defined(__ANDROID__)
extern char const *libc_secure_getenv(char const *) noexcept __asm__("secure_getenv");
#else
extern char const *libc_getenv(char const *) noexcept __asm__("getenv");
#endif

inline char const *my_u8getenv(char8_t const *env) noexcept
{
	return
#if defined(_GNU_SOURCE) && !defined(__ANDROID__)
		libc_secure_getenv(reinterpret_cast<char const *>(env));
#else
		libc_getenv(reinterpret_cast<char const *>(env));
#endif
}

inline char8_t *posix_get_locale_name_from_env(char8_t *iter)
{
	constexpr char8_t const *candidates[]{u8"L10N", u8"LANG"};
	char const *lc_all_env{reinterpret_cast<char const *>(u8"C")};
	for (auto i{candidates}, ed{candidates + sizeof(candidates) / sizeof(candidates[0])}; i != ed; ++i)
	{
		char const *ret{my_u8getenv(*i)};
		if (ret != nullptr && *ret != 0)
		{
			lc_all_env = ret;
			break;
		}
	}
	auto n =
#if defined(__has_builtin) && __has_builtin(__builtin_strlen)
		__builtin_strlen(lc_all_env);
#else
		::std::strlen(lc_all_env);
#endif
	if (n >= 64u)
	{
		throw_posix_error(EINVAL);
	}
	return ::fast_io::details::non_overlapped_copy_n(reinterpret_cast<char8_t const *>(lc_all_env), n, iter);
}

inline void *posix_load_l10n_common_impl(char8_t const *cstr, ::std::size_t n, ::fast_io::freestanding::array<::fast_io::native_file_loader, 4> &filebuffers)
{
	// {locale_name}.fast_io_i18n_locale
	constexpr ::std::size_t buffer_size{256u}; //< strlen("fast_io_i18n_locale") + strlen(localename)
											   //< localename under mysys2 is less than 64 chars, under win32 is less than 85 chars + encoding name
	using native_char_type = char8_t;
	using native_char_type_alias
#if __has_cpp_attribute(__gnu__::__may_alias__)
		[[__gnu__::__may_alias__]]
#endif
		= native_char_type;
	native_char_type_alias buffer[buffer_size], *pbuffer{buffer};
	if (n >= buffer_size) // locale should not contain so many characters
	{
		throw_posix_error(EINVAL);
	}
	native_char_type_alias *iter{buffer};
	native_char_type *name_end;
	if (n != 0)
	{
		name_end = ::fast_io::details::non_overlapped_copy_n(cstr, n, iter);
	}
	else
	{
		name_end = posix_get_locale_name_from_env(iter);
	}
	if (name_end == iter)
	{
		throw_posix_error(EINVAL);
	}
	auto found_dot{name_end};
	for (auto i{iter}; i != name_end; ++i)
	{
		switch (*i)
		{
		case 0:
		case ::fast_io::char_literal_v<u8'/', native_char_type>:
		case ::fast_io::char_literal_v<u8'\\', native_char_type>:
		{
			throw_posix_error(EINVAL);
		}
		case ::fast_io::char_literal_v<u8'.', native_char_type>:
		{
			if (found_dot != name_end)
			{
				throw_posix_error(EINVAL);
			}
			found_dot = i;
			break;
		}
		}
	}
	iter = name_end;
	if (found_dot == name_end)
	{
		iter = ::fast_io::details::copy_string_literal(u8".UTF8", iter);
	}
	iter = ::fast_io::details::copy_string_literal(u8".fast_io_i18n_locale", iter);
	*iter = 0;
	// now we have constructed a file name for the locale in char
	try
	{
		filebuffers[0] = ::fast_io::native_file_loader{::fast_io::mnp::os_c_str(pbuffer)};
	}
	catch (fast_io::error)
	{}
	iter = found_dot + 1;
	iter = ::fast_io::details::copy_string_literal(u8"UTF8.fast_io_i18n_locale", iter);
	*iter = 0;
	try
	{
		filebuffers[1] = ::fast_io::native_file_loader{::fast_io::mnp::os_c_str(pbuffer)};
	}
	catch (fast_io::error)
	{}
	iter = found_dot + 4;
	iter = ::fast_io::details::copy_string_literal(u8"16.fast_io_i18n_locale", iter);
	*iter = 0;
	try
	{
		filebuffers[2] = ::fast_io::native_file_loader{::fast_io::mnp::os_c_str(pbuffer)};
	}
	catch (fast_io::error)
	{}
	iter = found_dot + 4;
	iter = ::fast_io::details::copy_string_literal(u8"32", iter);
	try
	{
		filebuffers[3] = ::fast_io::native_file_loader{::fast_io::mnp::os_c_str(pbuffer)};
	}
	catch (fast_io::error)
	{}
}

} // namespace details

class posix_l10n
{
public:
	using native_file_type = ::fast_io::native_file_loader;
	lc_locale loc{};
	::fast_io::freestanding::array<native_file_type, 4> buffer; //< char, char8_t, char16_t, char32_t. wchar_t is char##sizeof(wchar_t)##_t
	constexpr posix_l10n() noexcept = default;

	template <::fast_io::constructible_to_os_c_str path_type>
	explicit posix_l10n(path_type const &p)
	{
		::fast_io::posix_api_common(
			p,
			[this](auto const *cstr_ptr, ::std::size_t n) {
				using native_char_type = char8_t;
				using native_char_type_may_alias_const_ptr
#if __has_cpp_attribute(__gnu__::__may_alias__)
					[[__gnu__::__may_alias__]]
#endif
					= native_char_type const *;
				return ::fast_io::details::posix_load_l10n_common_impl(
					reinterpret_cast<native_char_type_may_alias_const_ptr>(cstr_ptr), n, buffer);
			});
		::fast_io::details::posix_load_l10n_impl(p, buffer);
		::fast_io::details::map_locale_from_file(buffer[0], loc.lc);
		::fast_io::details::map_locale_from_file(buffer[1], loc.u8lc);
		::fast_io::details::map_locale_from_file(buffer[2], loc.u16lc);
		::fast_io::details::map_locale_from_file(buffer[3], loc.u32lc);
		if constexpr (sizeof(wchar_t) == 1)
		{
			loc.wlc = reinterpret_cast<::fast_io::wlc_object const *>(loc.u8lc);
		}
		else if constexpr (sizeof(wchar_t) == 2)
		{
			loc.wlc = reinterpret_cast<::fast_io::wlc_object const *>(loc.u16lc);
		}
		else if constexpr (sizeof(wchar_t) == 4)
		{
			loc.wlc = reinterpret_cast<::fast_io::wlc_object const *>(loc.u32lc);
		}
		else
		{
			static_assert(sizeof(wchar_t) == 1 || sizeof(wchar_t) == 2 || sizeof(wchar_t) == 4);
		}
	}

	explicit constexpr operator bool() const noexcept
	{
		return loc.lc != nullptr || loc.u8lc != nullptr || loc.u16lc != nullptr || loc.u32lc != nullptr;
	}

	posix_l10n(posix_l10n const &) = delete;
	posix_l10n &operator=(posix_l10n const &) = delete;
	posix_l10n(posix_l10n &&__restrict other) noexcept
		: loc{other.loc}, buffer{::std::move(other.buffer)}
	{}
	posix_l10n &operator=(posix_l10n &&__restrict other) noexcept
	{
		loc = other.loc;
		buffer = ::std::move(other.buffer);
		return *this;
	}
	~posix_l10n() noexcept = default;
};

template <::std::integral char_type>
inline constexpr ::fast_io::parameter<basic_lc_all<char_type> const &>
status_io_print_forward(io_alias_type_t<char_type>, posix_l10n const &loc) noexcept
{
	return status_io_print_forward(io_alias_type<char_type>, loc.loc);
}

template <typename output>
inline constexpr auto imbue(posix_l10n &loc, output &&out) noexcept
{
	using char_type = typename ::std::remove_cvref_t<output>::char_type;
	auto lc{get_lc<char_type>(loc.loc)};
	if (lc == nullptr)
	{
		panicln("Locale not loaded");
	}
	return imbue(*lc, ::std::forward<output>(out));
}

using native_l10n = posix_l10n;

} // namespace fast_io
