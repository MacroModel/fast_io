#pragma once

namespace fast_io
{

namespace details
{

template <::std::integral char_type>
#if __has_cpp_attribute(__gnu__::__cold__)
[[__gnu__::__cold__]]
#endif
inline constexpr char_type *win32_get_locale_name_from_lcid(::std::uint_least32_t lcid, char_type *p) noexcept
{
#include "win32_lcid_table.h"
}

// reference to .NET Framework 4.8
#if __has_cpp_attribute(__gnu__::__cold__)
[[__gnu__::__cold__]]
#endif
inline constexpr ::fast_io::MIB_enum windows_codepage_to_MIB_enum(unsigned int acp) noexcept
{
#include "win32_cp_table.h"
}

template <::std::integral char_type>
#if __has_cpp_attribute(__gnu__::__cold__)
[[__gnu__::__cold__]]
#endif
inline constexpr char_type *win32_get_locale_encoding_from_code_page(::std::uint_least32_t acp, char_type *p) noexcept
{
	auto const mib{windows_codepage_to_MIB_enum(acp)};
	return ::fast_io::details::pr_rsv_MIB_impl<char_type>(p, mib);
}

template <bool use_get_user_default_locale_name, ::std::integral char_type>
inline char_type *win32_get_locale_name_from_win32(char_type *iter)
{
	if constexpr (use_get_user_default_locale_name)
	{
		using char16_may_alias_ptr
#if __has_cpp_attribute(__gnu__::__may_alias__)
			[[__gnu__::__may_alias__]]
#endif
			= char16_t *;
		int ret{::fast_io::win32::GetUserDefaultLocaleName(reinterpret_cast<char16_may_alias_ptr>(iter), 85)};
		if (ret)
		{
			--ret;
			for (auto p{iter}, pe{iter + ret}; p != pe; ++p)
			{
				switch (*p)
				{
				case char_literal_v<u8'.', native_char_type>:
				case char_literal_v<u8'/', native_char_type>:
				case char_literal_v<u8'\\', native_char_type>:
				{
					throw_win32_error(0x0000203C);
				}
				case char_literal_v<u8'-', native_char_type>:
				{
					*p = char_literal_v<u8'_', native_char_type>;
					break;
				}
				};
			}
			iter += ret;
		}
		else
		{
			*iter = char_literal_v<u8'C', native_char_type>;
			++iter;
		}
	}
	else
	{
		iter = win32_get_locale_name_from_lcid(::fast_io::win32::GetUserDefaultLCID(), iter);
	}
	return iter;
}

template <::std::integral char_type>
inline char_type *win32_get_locale_name_from_env(char_type *iter) noexcept
{
	if constexpr (::std::same_as<char_type, char8_t>)
	{
		constexpr char_type const *candidates[]{u8"L10N", u8"LANG"};
		for (auto i{candidates}, ed{i + sizeof(candidates) / sizeof(candidates[0])}; i != ed; ++i)
		{
			char name[64];
			::std::uint_least32_t env_size{::fast_io::win32::GetEnvironmentVariableA(
				reinterpret_cast<char const *>(*i), name,
				64u)};
			if (env_size < 2u)
			{
				continue;
			}
			else if (env_size >= 64u)
			{
				return iter;
			}
			return ::fast_io::details::non_overlapped_copy_n(reinterpret_cast<char8_t *>(name), env_size, iter);
		}
	}
	else if constexpr (::std::same_as<char_type, char16_t>)
	{
		constexpr char_type const *candidates[]{u"L10N", u"LANG"};
		for (auto i{candidates}, ed{i + sizeof(candidates) / sizeof(candidates[0])}; i != ed; ++i)
		{
			char16_t name[64];
			::std::uint_least32_t env_size{::fast_io::win32::GetEnvironmentVariableW(
				*i, name, 64u)};
			if (env_size < 2u)
			{
				continue;
			}
			else if (env_size >= 64u)
			{
				return iter;
			}
			return ::fast_io::details::non_overlapped_copy_n(name, env_size, iter);
		}
	}
	else
	{
		static_assert(::std::same_as<char_type, char8_t>);
	}
	return iter;
}

template <::fast_io::win32_family family>
inline void win32_family_load_l10n_impl(
	::std::conditional_t<family == ::fast_io::win32_family::wide_nt, char16_t, char8_t> const *cstr, ::std::size_t n, ::fast_io::freestanding::array<::fast_io::native_file_loader, 4> &filebuffers)
{
	// {locale_name}.fast_io_i18n_locale
	constexpr ::std::size_t buffer_size{256u}; //< strlen("fast_io_i18n_locale") + strlen(localename)
											   //< localename under mysys2 is less than 64 chars, under win32 is less than 85 chars + encoding name
	using native_char_type = ::std::conditional_t<family == ::fast_io::win32_family::wide_nt, char16_t, char8_t>;
	using native_char_type_alias
#if __has_cpp_attribute(__gnu__::__may_alias__)
		[[__gnu__::__may_alias__]]
#endif
		= native_char_type;
	native_char_type_alias buffer[buffer_size], *pbuffer{buffer};
	if (n >= buffer_size) [[unlikely]] // locale should not contain so many characters
	{
		throw_win32_error(0x0000203C);
	}
	native_char_type_alias *iter{buffer};
	native_char_type *name_end;
	if (n != 0)
	{
		name_end = ::fast_io::details::non_overlapped_copy_n(cstr, n, iter);
	}
	else
	{
		name_end = win32_get_locale_name_from_env(iter);
	}
	// there is highly prossible that [iter, name_end) contains a locale name with an encoding name. split it
	// it's also possible that there is no name in between. acquire the name later
	auto found_dot{name_end};
	for (auto i{iter}; i != name_end; ++i)
	{
		switch (*i)
		{
		case 0:
		case char_literal_v<u8'/', native_char_type>:
		case char_literal_v<u8'\\', native_char_type>:
		{
			throw_win32_error(0x0000203C);
		}
		case char_literal_v<u8'.', native_char_type>:
		{
			if (found_dot != name_end)
			{
				throw_win32_error(0x0000203C);
			}
			found_dot = i;
			break;
		}
		}
	}
	// found_dot now points to dot
	// handle the case that there is still no locale name, the name acquired here will not contain an encoding name
	if (iter == name_end)
	{
		iter = win32_get_locale_name_from_win32<
#if !defined(_WIN32_WINDOWS) && (!defined(_WIN32_WINNT) || _WIN32_WINNT >= 0x0600)
			family == ::fast_io::win32_family::wide_nt
#endif
			>(iter);
		*iter++ = char_literal_v<u8'.', native_char_type>;
		iter = win32_get_locale_encoding_from_code_page(::fast_io::win32::GetACP(), iter);
	}
	// there is no encoding name passed in, acquire the default value from code page
	else if (found_dot == name_end)
	{
		*iter++ = char_literal_v<u8'.', native_char_type>;
		iter = win32_get_locale_encoding_from_code_page(::fast_io::win32::GetACP(), iter);
	}
	else
	{
		iter = name_end;
	}
	if constexpr (family == ::fast_io::win32_family::wide_nt)
	{
		iter = ::fast_io::details::copy_string_literal(u".fast_io_i18n_locale", iter);
	}
	else
	{
		iter = ::fast_io::details::copy_string_literal(u8".fast_io_i18n_locale", iter);
	}
	*iter = 0;
	// now we have constructed a file name for the locale in char
	try
	{
		filebuffers[0] = ::fast_io::native_file_loader{::fast_io::mnp::os_c_str(pbuffer)};
	}
	catch (fast_io::error)
	{}
	iter = found_dot + 1; //< now points to "pass the dot"
	if constexpr (family == ::fast_io::win32_family::wide_nt)
	{
		iter = ::fast_io::details::copy_string_literal(u"UTF8.fast_io_i18n_locale", iter);
	}
	else
	{
		iter = ::fast_io::details::copy_string_literal(u8"UTF8.fast_io_i18n_locale", iter);
	}
	*iter = 0;
	try
	{
		filebuffers[1] = ::fast_io::native_file_loader{::fast_io::mnp::os_c_str(pbuffer)};
	}
	catch (fast_io::error)
	{}
	iter = found_dot + 4;
	if constexpr (family == ::fast_io::win32_family::wide_nt)
	{
		iter = ::fast_io::details::copy_string_literal(u"16.fast_io_i18n_locale", iter);
	}
	else
	{
		iter = ::fast_io::details::copy_string_literal(u8"16.fast_io_i18n_locale", iter);
	}
	*iter = 0;
	try
	{
		filebuffers[2] = ::fast_io::native_file_loader{::fast_io::mnp::os_c_str(pbuffer)};
	}
	catch (fast_io::error)
	{}
	iter = found_dot + 4;
	if constexpr (family == ::fast_io::win32_family::wide_nt)
	{
		iter = ::fast_io::details::copy_string_literal(u"32", iter);
	}
	else
	{
		iter = ::fast_io::details::copy_string_literal(u8"32", iter);
	}
	try
	{
		filebuffers[3] = ::fast_io::native_file_loader{::fast_io::mnp::os_c_str(pbuffer)};
	}
	catch (fast_io::error)
	{}
}

} // namespace details

template <::fast_io::win32_family family>
class win32_family_l10n
{
public:
	using native_file_type = ::fast_io::native_file_loader;
	lc_locale loc{};
	::fast_io::freestanding::array<native_file_type, 4> buffer; //< char, char8_t, char16_t, char32_t. wchar_t is char##sizeof(wchar_t)##_t
	constexpr win32_family_l10n() noexcept = default;

	template <::fast_io::constructible_to_os_c_str path_type>
	explicit win32_family_l10n(path_type const &p)
	{
		::fast_io::win32_family_api_common<family>(
			p,
			[this](auto const *cstr_ptr, ::std::size_t n) {
				using native_char_type = ::std::conditional_t<family == ::fast_io::win32_family::wide_nt, char16_t, char8_t>;
				using native_char_type_may_alias_const_ptr
#if __has_cpp_attribute(__gnu__::__may_alias__)
					[[__gnu__::__may_alias__]]
#endif
					= native_char_type const *;
				return ::fast_io::details::win32_family_load_l10n_impl<family>(
					reinterpret_cast<native_char_type_may_alias_const_ptr>(cstr_ptr), n, buffer);
			});
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

	win32_family_l10n(win32_family_l10n const &) = delete;
	win32_family_l10n &operator=(win32_family_l10n const &) = delete;
	win32_family_l10n(win32_family_l10n &&__restrict other) noexcept
		: loc{other.loc}, buffer{::std::move(other.buffer)}
	{}
	win32_family_l10n &operator=(win32_family_l10n &&__restrict other) noexcept
	{
		loc = other.loc;
		buffer = ::std::move(other.buffer);
		return *this;
	}
	~win32_family_l10n() noexcept = default;
};

template <::std::integral char_type, ::fast_io::win32_family family>
inline constexpr ::fast_io::parameter<basic_lc_all<char_type> const &>
status_io_print_forward(io_alias_type_t<char_type>, win32_family_l10n<family> const &loc) noexcept
{
	return status_io_print_forward(io_alias_type<char_type>, loc.loc);
}

template <::fast_io::win32_family family, typename output>
inline constexpr auto imbue(win32_family_l10n<family> &loc, output &&out) noexcept
{
	using char_type = typename ::std::remove_cvref_t<output>::char_type;
	auto lc{get_lc<char_type>(loc.loc)};
	if (lc == nullptr)
	{
		panicln("Locale not loaded");
	}
	return imbue(*lc, ::std::forward<output>(out));
}

using win32_l10n_9xa = win32_family_l10n<::fast_io::win32_family::ansi_9x>;
using win32_l10n_ntw = win32_family_l10n<::fast_io::win32_family::wide_nt>;
using win32_l10n = win32_family_l10n<::fast_io::win32_family::native>;

#if !defined(__CYGWIN__) && !defined(__WINE__)
using native_l10n = win32_l10n;
#endif

} // namespace fast_io
