﻿#pragma once

#include "lc_hexfloat.h"
#include "lc_roundtrip.h"

namespace fast_io
{

namespace details
{

template <::std::integral char_type, ::fast_io::details::my_floating_point flt, ::fast_io::manipulators::floating_format mf>
inline constexpr ::std::size_t lc_print_rsv_iec559_size(::fast_io::basic_lc_object<char_type> const *lc)
{
	using trait = ::fast_io::details::iec559_traits<flt>;
	if constexpr (mf == ::fast_io::manipulators::floating_format::fixed)
	{
		//(+/-)(significants+sep)
		constexpr ::std::size_t sum{2};
		constexpr ::std::size_t digits{trait::e10max + trait::m10digits};
		static_assert(digits != 0);
		constexpr ::std::size_t digitsm1{digits - 1};
		return sum + digitsm1 + lc->all.numeric.decimal_point.len + digitsm1 * lc->all.numeric.thousands_sep.len;
	}
	else if constexpr (mf == ::fast_io::manipulators::floating_format::scientific)
	{
		constexpr ::std::size_t sum{print_rsv_cache<flt, mf>};
		return sum + lc->all.numeric.decimal_point.len;
	}
	else
	{
		constexpr ::std::size_t sum{3 + trait::e10digits};
		constexpr ::std::size_t digitsplus3{trait::m10digits + 3};
		return sum + digitsplus3 + lc->all.numeric.decimal_point.len + digitsplus3 * lc->all.numeric.thousands_sep.len;
	}
}

template <::std::integral char_type, ::fast_io::manipulators::scalar_flags flags, ::fast_io::details::my_floating_point flt>
inline constexpr ::std::size_t lc_print_reserve_float_size_impl(::fast_io::basic_lc_object<char_type> const *lc) noexcept
{
	static_assert(::fast_io::manipulators::floating_format::general == flags.floating ||
				  ::fast_io::manipulators::floating_format::scientific == flags.floating ||
				  ::fast_io::manipulators::floating_format::fixed == flags.floating ||
				  ::fast_io::manipulators::floating_format::decimal == flags.floating ||
				  ::fast_io::manipulators::floating_format::hexfloat == flags.floating);
	if constexpr (flags.floating == ::fast_io::manipulators::floating_format::hexfloat)
	{
		constexpr ::std::size_t non_lc_reserve_size{print_reserve_size(
			::fast_io::io_reserve_type<char_type, ::fast_io::manipulators::scalar_manip_t<flags, flt>>)};
		static_assert(non_lc_reserve_size != 0);
		constexpr ::std::size_t non_lc_reserve_size_m1{non_lc_reserve_size - 1u};
		return lc->all.numeric.decimal_point.len + non_lc_reserve_size_m1;
	}
	else
	{
		if constexpr (::std::same_as<::std::remove_cvref_t<flt>, long double> &&
					  sizeof(flt) == sizeof(double)) // this is the case on xxx-windows-msvc
		{
			return lc_print_rsv_iec559_size<char_type, double, flags.floating>(lc);
		}
		static_assert((::std::same_as<::std::remove_cvref_t<flt>, double> ||
					   ::std::same_as<::std::remove_cvref_t<flt>, float>
#ifdef __STDCPP_FLOAT32_T__
					   || ::std::same_as<::std::remove_cvref_t<flt>, _Float32>
#endif
#ifdef __STDCPP_FLOAT64_T__
					   || ::std::same_as<::std::remove_cvref_t<flt>, _Float64>
#endif
					   ),
					  "currently only support iec559 float32 and float64, sorry");
		return lc_print_rsv_iec559_size<char_type, ::std::remove_cvref_t<flt>, flags.floating>(lc);
	}
}

} // namespace details

template <::std::integral char_type, ::fast_io::manipulators::scalar_flags flags, details::my_floating_point flt>
	requires(flags.base == 10)
inline constexpr ::std::size_t print_reserve_size(::fast_io::basic_lc_object<char_type> const *lc,
												  ::fast_io::manipulators::scalar_manip_t<flags, flt>) noexcept
{
	return ::fast_io::details::lc_print_reserve_float_size_impl<char_type, flags, flt>(lc);
}

template <::std::integral char_type, ::fast_io::manipulators::scalar_flags flags, details::my_floating_point flt>
	requires(flags.base == 10)
inline constexpr char_type *print_reserve_define(::fast_io::basic_lc_object<char_type> const *lc, char_type *iter,
												 ::fast_io::manipulators::scalar_manip_t<flags, flt> f) noexcept
{
	static_assert(::fast_io::manipulators::floating_format::general == flags.floating ||
				  ::fast_io::manipulators::floating_format::scientific == flags.floating ||
				  ::fast_io::manipulators::floating_format::fixed == flags.floating ||
				  ::fast_io::manipulators::floating_format::decimal == flags.floating ||
				  ::fast_io::manipulators::floating_format::hexfloat == flags.floating);

	if constexpr (flags.floating == ::fast_io::manipulators::floating_format::hexfloat)
	{
		auto decimal_point{lc->data_storage.to_io_scatter(lc->all.numeric.decimal_point)};
		if constexpr (::std::same_as<::std::remove_cvref_t<flt>, long double>
#if defined(__SIZEOF_FLOAT128__) || defined(__FLOAT128__)
					  || ::std::same_as<::std::remove_cvref_t<flt>, __float128>
#endif
		)
		{
#if (defined(__SIZEOF_FLOAT128__) || defined(__FLOAT128__)) && defined(__SIZEOF_INT128__)
			if constexpr (sizeof(flt) > sizeof(double))
			{
				return ::fast_io::details::lc_print_rsvhexfloat_define_impl<
					flags.showbase, flags.uppercase_showbase, flags.showpos, flags.uppercase, flags.uppercase_e>(
					iter, static_cast<__float128>(f.reference), decimal_point.base, decimal_point.len);
			}
			else
#endif
				return ::fast_io::details::lc_print_rsvhexfloat_define_impl<
					flags.showbase, flags.uppercase_showbase, flags.showpos, flags.uppercase, flags.uppercase_e>(
					iter, static_cast<double>(f.reference), decimal_point.base, decimal_point.len);
		}
		else
		{
			return ::fast_io::details::lc_print_rsvhexfloat_define_impl<
				flags.showbase, flags.uppercase_showbase, flags.showpos, flags.uppercase, flags.uppercase_e>(
				iter, f.reference, decimal_point.base, decimal_point.len);
		}
	}
	else
	{
		if constexpr (::std::same_as<::std::remove_cvref_t<flt>, long double> &&
					  sizeof(flt) == sizeof(double)) // this is the case on xxx-windows-msvc
		{
			return ::fast_io::details::lc_print_rsvflt_define_impl<flags.showpos, flags.uppercase, flags.uppercase_e, flags.floating>(
				lc, iter, static_cast<double>(f.reference));
		}
		else
		{
			// this is the case for every other platform, including xxx-windows-gnu
			static_assert((::std::same_as<::std::remove_cvref_t<flt>, double> ||
						   ::std::same_as<::std::remove_cvref_t<flt>, float>
#ifdef __STDCPP_FLOAT32_T__
						   || ::std::same_as<::std::remove_cvref_t<flt>, _Float32>
#endif
#ifdef __STDCPP_FLOAT64_T__
						   || ::std::same_as<::std::remove_cvref_t<flt>, _Float64>
#endif
						   ),
						  "currently only support iec559 float32 and float64, sorry");
			return ::fast_io::details::lc_print_rsvflt_define_impl<flags.showpos, flags.uppercase, flags.uppercase_e, flags.floating>(
				lc, iter, f.reference);
		}
		return iter;
	}
}

} // namespace fast_io
