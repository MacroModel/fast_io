#pragma once

namespace fast_io
{

namespace details
{

template <::std::integral char_type, typename T>
inline constexpr ::std::size_t lc_print_reserve_size_width_impl(::fast_io::basic_lc_object<char_type> const *lc, T w, ::std::size_t width) noexcept
{
	if constexpr (::fast_io::lc_dynamic_reserve_printable<char_type, T>)
	{
		::std::size_t const sz{print_reserve_size(lc, w)};
		if (width < sz)
		{
			return sz;
		}
		return width;
	}
	else if constexpr (::fast_io::lc_scatter_printable<char_type, T>)
	{
		::fast_io::basic_io_scatter_t<char_type> const scatter{print_scatter_define(lc, w)};
		if (width < scatter.len)
		{
			return scatter.len;
		}
		return width;
	}
}

template <::fast_io::manipulators::scalar_placement placement, ::std::integral char_type, typename T>
inline constexpr char_type *lc_print_reserve_define_width_ch_impl(
	::fast_io::basic_lc_object<char_type> const *lc, char_type *iter, T t,
	::std::size_t wdt, char_type fillch) noexcept
{
	if constexpr (placement == ::fast_io::manipulators::scalar_placement::internal)
	{
		if constexpr (::fast_io::lc_printable_internal_shift<char_type, T>)
		{
			if constexpr (::fast_io::lc_scatter_printable<char_type, T>)
			{
				auto sc{print_scatter_define(lc, t)};
				auto it{::fast_io::details::copy_scatter(sc, iter)};
				return handle_common_internal_ch(iter, it, wdt, fillch, print_define_internal_shift(lc, t));
			}
			else
			{
				char_type *it{print_reserve_define(lc, iter, t)};
				return handle_common_internal_ch(iter, it, wdt, fillch, print_define_internal_shift(lc, t));
			}
		}
		else
		{
			return print_reserve_define_width_ch_impl<::fast_io::manipulators::scalar_placement::right>(iter, t, wdt, fillch);
		}
	}
	else
	{
		if constexpr (::fast_io::lc_scatter_printable<char_type, T>)
		{
			auto sc{print_scatter_define(lc, t)};
			auto it{::fast_io::details::copy_scatter(sc, iter)};
			return handle_common_ch<placement>(iter, it, wdt, fillch);
		}
		else
		{
			char_type *it{print_reserve_define(lc, iter, t)};
			return handle_common_ch<placement>(iter, it, wdt, fillch);
		}
	}
}

template <::fast_io::manipulators::scalar_placement wm, ::std::integral char_type, typename T>
inline constexpr char_type *lc_print_reserve_define_width_impl(::fast_io::basic_lc_object<char_type> const *lc,
															   char_type *iter, T t, ::std::size_t width) noexcept
{
	return lc_print_reserve_define_width_ch_impl<wm>(lc, iter, t, width, ::fast_io::char_literal_v<u8' ', char_type>);
}

} // namespace details

template <::std::integral char_type, ::fast_io::manipulators::scalar_placement wm, typename T>
	requires((::fast_io::lc_dynamic_reserve_printable<char_type, ::std::remove_cvref_t<T>> ||
			  ::fast_io::lc_scatter_printable<char_type, ::std::remove_cvref_t<T>>))
inline constexpr ::std::size_t print_reserve_size(::fast_io::basic_lc_object<char_type> const *lc,
												  ::fast_io::manipulators::width_t<wm, T> w) noexcept
{
	if constexpr (::std::is_reference_v<T>)
	{
		return details::lc_print_reserve_size_width_impl<char_type>(lc, ::fast_io::parameter<T>{w.reference}, w.width);
	}
	else
	{
		return details::lc_print_reserve_size_width_impl<char_type>(lc, w.reference, w.width);
	}
}

template <::std::integral char_type, ::fast_io::manipulators::scalar_placement wm, typename T>
	requires((::fast_io::lc_dynamic_reserve_printable<char_type, ::std::remove_cvref_t<T>> ||
			  ::fast_io::lc_scatter_printable<char_type, ::std::remove_cvref_t<T>>))
inline constexpr char_type *print_reserve_define(::fast_io::basic_lc_object<char_type> const *lc, char_type *iter,
												 ::fast_io::manipulators::width_t<wm, T> w) noexcept
{
	if constexpr (::std::is_reference_v<T>)
	{
		return details::lc_print_reserve_define_width_impl<wm>(lc, iter, ::fast_io::parameter<T>{w.reference}, w.width);
	}
	else
	{
		return details::lc_print_reserve_define_width_impl<wm>(lc, iter, w.reference, w.width);
	}
}

template <::std::integral char_type, ::fast_io::manipulators::scalar_placement wm, typename T>
	requires((::fast_io::lc_dynamic_reserve_printable<char_type, ::std::remove_cvref_t<T>> ||
			  ::fast_io::lc_scatter_printable<char_type, ::std::remove_cvref_t<T>>))
inline constexpr ::std::size_t print_reserve_size(::fast_io::basic_lc_object<char_type> const *lc,
												  ::fast_io::manipulators::width_ch_t<wm, T, char_type> w) noexcept
{
	if constexpr (::std::is_reference_v<T>)
	{
		return details::lc_print_reserve_size_width_impl<char_type>(lc, ::fast_io::parameter<T>{w.reference}, w.width);
	}
	else
	{
		return details::lc_print_reserve_size_width_impl<char_type>(lc, w.reference, w.width);
	}
}

template <::std::integral char_type, ::fast_io::manipulators::scalar_placement wm, typename T>
	requires((::fast_io::lc_dynamic_reserve_printable<char_type, ::std::remove_cvref_t<T>> ||
			  ::fast_io::lc_scatter_printable<char_type, ::std::remove_cvref_t<T>>))
inline constexpr char_type *print_reserve_define(::fast_io::basic_lc_object<char_type> const *lc, char_type *iter,
												 ::fast_io::manipulators::width_ch_t<wm, T, char_type> w) noexcept
{
	if constexpr (::std::is_reference_v<T>)
	{
		return details::lc_print_reserve_define_width_ch_impl<wm>(lc, iter, ::fast_io::parameter<T>{w.reference}, w.width, w.ch);
	}
	else
	{
		return details::lc_print_reserve_define_width_ch_impl<wm>(lc, iter, w.reference, w.width, w.ch);
	}
}

} // namespace fast_io
