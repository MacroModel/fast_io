#pragma once

#include <fast_io_dsal/span.h>

namespace fast_io
{

struct lc_scatter_base {
	using size_type = ::std::uint_least32_t;
	size_type rva;
	size_type len;
};

template <typename T>
struct basic_lc_scatter : lc_scatter_base
{
	using typename lc_scatter_base::size_type;
	using lc_scatter_base::rva;
	using lc_scatter_base::len;
};

template <typename char_type>
struct basic_lc_identification
{
	basic_lc_scatter<char_type> title{};
	basic_lc_scatter<char_type> source{};
	basic_lc_scatter<char_type> address{};
	basic_lc_scatter<char_type> contact{};
	basic_lc_scatter<char_type> email{};
	basic_lc_scatter<char_type> tel{};
	basic_lc_scatter<char_type> fax{};
	basic_lc_scatter<char_type> language{};
	basic_lc_scatter<char_type> territory{};
	basic_lc_scatter<char_type> audience{};
	basic_lc_scatter<char_type> application{};
	basic_lc_scatter<char_type> abbreviation{};
	basic_lc_scatter<char_type> revision{};
	basic_lc_scatter<char_type> date{};
};

using lc_identification = basic_lc_identification<char>;
using wlc_identification = basic_lc_identification<wchar_t>;
using u8lc_identification = basic_lc_identification<char8_t>;
using u16lc_identification = basic_lc_identification<char16_t>;
using u32lc_identification = basic_lc_identification<char32_t>;

template <typename char_type>
struct basic_lc_monetary
{
	basic_lc_scatter<char_type> int_curr_symbol{};
	basic_lc_scatter<char_type> currency_symbol{};
	basic_lc_scatter<char_type> mon_decimal_point{};
	basic_lc_scatter<char_type> mon_thousands_sep{};
	basic_lc_scatter<::std::size_t> mon_grouping{};
	basic_lc_scatter<char_type> positive_sign{};
	basic_lc_scatter<char_type> negative_sign{};
	::std::size_t int_frac_digits{};
	::std::size_t frac_digits{};
	::std::size_t p_cs_precedes{};
	::std::size_t p_sep_by_space{};
	::std::size_t n_cs_precedes{};
	::std::size_t n_sep_by_space{};
	::std::size_t int_p_cs_precedes{};
	::std::size_t int_p_sep_by_space{};
	::std::size_t int_n_cs_precedes{};
	::std::size_t int_n_sep_by_space{};
	::std::size_t p_sign_posn{};
	::std::size_t n_sign_posn{};
	::std::size_t int_p_sign_posn{};
	::std::size_t int_n_sign_posn{};
};

using lc_monetary = basic_lc_monetary<char>;
using wlc_monetary = basic_lc_monetary<wchar_t>;
using u8lc_monetary = basic_lc_monetary<char8_t>;
using u16lc_monetary = basic_lc_monetary<char16_t>;
using u32lc_monetary = basic_lc_monetary<char32_t>;

template <typename char_type>
struct basic_lc_numeric
{
	basic_lc_scatter<char_type> decimal_point{};
	basic_lc_scatter<char_type> thousands_sep{};
	basic_lc_scatter<::std::size_t> grouping{};
};

using lc_numeric = basic_lc_numeric<char>;
using wlc_numeric = basic_lc_numeric<wchar_t>;
using u8lc_numeric = basic_lc_numeric<char8_t>;
using u16lc_numeric = basic_lc_numeric<char16_t>;
using u32lc_numeric = basic_lc_numeric<char32_t>;

template <typename char_type>
struct basic_lc_time_era
{
	bool direction{}; //+ is true, - is false
	::std::int_least64_t offset{};
	::std::int_least64_t start_date_year{};
	::std::uint_least8_t start_date_month{};
	::std::uint_least8_t start_date_day{};
	::std::int_least8_t end_date_special{}; //-1 is -*, 0 means end_date exist, 1 is +*
	::std::int_least64_t end_date_year{};
	::std::uint_least8_t end_date_month{};
	::std::uint_least8_t end_date_day{};
	basic_lc_scatter<char_type> era_name;
	basic_lc_scatter<char_type> era_format;
};

using lc_time_era = basic_lc_time_era<char>;
using wlc_time_era = basic_lc_time_era<wchar_t>;
using u8lc_time_era = basic_lc_time_era<char8_t>;
using u16lc_time_era = basic_lc_time_era<char16_t>;
using u32lc_time_era = basic_lc_time_era<char32_t>;

template <typename char_type>
struct basic_lc_time
{
	basic_lc_scatter<char_type> abday[7]{};
	basic_lc_scatter<char_type> day[7]{};
	basic_lc_scatter<char_type> abmon[12]{};
	basic_lc_scatter<char_type> ab_alt_mon[12]{};
	basic_lc_scatter<char_type> mon[12]{};
	basic_lc_scatter<char_type> d_t_fmt{};
	basic_lc_scatter<char_type> d_fmt{};
	basic_lc_scatter<char_type> t_fmt{};
	basic_lc_scatter<char_type> t_fmt_ampm{};
	basic_lc_scatter<char_type> date_fmt{};
	basic_lc_scatter<char_type> am_pm[2]{};
	basic_lc_scatter<basic_lc_time_era<char_type>> era{};
	basic_lc_scatter<char_type> era_d_fmt{};
	basic_lc_scatter<char_type> era_d_t_fmt{};
	basic_lc_scatter<char_type> era_t_fmt{};
	basic_lc_scatter<basic_lc_scatter<char_type>> alt_digits{};
	struct
	{
		::std::size_t ndays{7};
		::std::int_least64_t first_day{19971201};
		::std::size_t first_week{4};
	} week{};
	::std::size_t first_weekday{};
	::std::size_t first_workday{};
	::std::size_t cal_direction{};
	basic_lc_scatter<basic_lc_scatter<char_type>> timezone{};
};

using lc_time = basic_lc_time<char>;
using wlc_time = basic_lc_time<wchar_t>;
using u8lc_time = basic_lc_time<char8_t>;
using u16lc_time = basic_lc_time<char16_t>;
using u32lc_time = basic_lc_time<char32_t>;

template <typename char_type>
struct basic_lc_messages
{
	basic_lc_scatter<char_type> yesexpr{};
	basic_lc_scatter<char_type> noexpr{};
	basic_lc_scatter<char_type> yesstr{};
	basic_lc_scatter<char_type> nostr{};
};

using lc_messages = basic_lc_messages<char>;
using wlc_messages = basic_lc_messages<wchar_t>;
using u8lc_messages = basic_lc_messages<char8_t>;
using u16lc_messages = basic_lc_messages<char16_t>;
using u32lc_messages = basic_lc_messages<char32_t>;

template <typename char_type>
struct basic_lc_paper
{
	::std::uint_least64_t width{};
	::std::uint_least64_t height{};
};

using lc_paper = basic_lc_paper<char>;
using wlc_paper = basic_lc_paper<wchar_t>;
using u8lc_paper = basic_lc_paper<char8_t>;
using u16lc_paper = basic_lc_paper<char16_t>;
using u32lc_paper = basic_lc_paper<char32_t>;

template <typename char_type>
struct basic_lc_telephone
{
	basic_lc_scatter<char_type> tel_int_fmt{};
	basic_lc_scatter<char_type> tel_dom_fmt{};
	basic_lc_scatter<char_type> int_select{};
	basic_lc_scatter<char_type> int_prefix{};
};

using lc_telephone = basic_lc_telephone<char>;
using wlc_telephone = basic_lc_telephone<wchar_t>;
using u8lc_telephone = basic_lc_telephone<char8_t>;
using u16lc_telephone = basic_lc_telephone<char16_t>;
using u32lc_telephone = basic_lc_telephone<char32_t>;

template <typename char_type>
struct basic_lc_name
{
	basic_lc_scatter<char_type> name_fmt{};
	basic_lc_scatter<char_type> name_gen{};
	basic_lc_scatter<char_type> name_miss{};
	basic_lc_scatter<char_type> name_mr{};
	basic_lc_scatter<char_type> name_mrs{};
	basic_lc_scatter<char_type> name_ms{};
};

using lc_name = basic_lc_name<char>;
using wlc_name = basic_lc_name<wchar_t>;
using u8lc_name = basic_lc_name<char8_t>;
using u16lc_name = basic_lc_name<char16_t>;
using u32lc_name = basic_lc_name<char32_t>;

template <typename char_type>
struct basic_lc_address
{
	basic_lc_scatter<char_type> postal_fmt{};
	basic_lc_scatter<char_type> country_name{};
	basic_lc_scatter<char_type> country_post{};
	basic_lc_scatter<char_type> country_ab2{};
	basic_lc_scatter<char_type> country_ab3{};
	basic_lc_scatter<char_type> country_num{};
	basic_lc_scatter<char_type> country_car{};
	basic_lc_scatter<char_type> country_isbn{};
	basic_lc_scatter<char_type> lang_name{};
	basic_lc_scatter<char_type> lang_ab{};
	basic_lc_scatter<char_type> lang_term{};
	basic_lc_scatter<char_type> lang_lib{};
};

using lc_address = basic_lc_address<char>;
using wlc_address = basic_lc_address<wchar_t>;
using u8lc_address = basic_lc_address<char8_t>;
using u16lc_address = basic_lc_address<char16_t>;
using u32lc_address = basic_lc_address<char32_t>;

template <typename char_type>
struct basic_lc_measurement
{
	::std::uint_least64_t measurement{};
};

using lc_measurement = basic_lc_measurement<char>;
using wlc_measurement = basic_lc_measurement<wchar_t>;
using u8lc_measurement = basic_lc_measurement<char8_t>;
using u16lc_measurement = basic_lc_measurement<char16_t>;
using u32lc_measurement = basic_lc_measurement<char32_t>;

template <typename char_type>
struct basic_lc_keyboard
{
	basic_lc_scatter<basic_lc_scatter<char_type>> keyboards{};
};

using lc_keyboard = basic_lc_keyboard<char>;
using wlc_keyboard = basic_lc_keyboard<wchar_t>;
using u8lc_keyboard = basic_lc_keyboard<char8_t>;
using u16lc_keyboard = basic_lc_keyboard<char16_t>;
using u32lc_keyboard = basic_lc_keyboard<char32_t>;

template <typename char_type>
struct basic_lc_all
{
	basic_lc_identification<char_type> identification{};
	basic_lc_monetary<char_type> monetary{};
	basic_lc_numeric<char_type> numeric{};
	basic_lc_time<char_type> time{};
	basic_lc_messages<char_type> messages{};
	basic_lc_paper<char_type> paper{};
	basic_lc_telephone<char_type> telephone{};
	basic_lc_name<char_type> name{};
	basic_lc_address<char_type> address{};
	basic_lc_measurement<char_type> measurement{};
	basic_lc_keyboard<char_type> keyboard{};
};

using lc_all = basic_lc_all<char>;
using wlc_all = basic_lc_all<wchar_t>;
using u8lc_all = basic_lc_all<char8_t>;
using u16lc_all = basic_lc_all<char16_t>;
using u32lc_all = basic_lc_all<char32_t>;

template <typename char_type>
struct basic_lc_data_storage
{
	::fast_io::span<char_type const> chars{};
	::fast_io::span<::std::size_t const> integers{};
	::fast_io::span<basic_lc_time_era<char_type> const> eras{};
	::fast_io::span<basic_lc_scatter<char_type> const> strings{};
	template <typename T>
	inline constexpr T const *get(::fast_io::basic_lc_scatter<T> scatter) const noexcept
	{
		if constexpr (::std::same_as<T, char_type>)
		{
			return chars.data() + scatter.rva;
		}
		else if constexpr (::std::same_as<T, ::std::size_t>)
		{
			return integers.data() + scatter.rva;
		}
		else if constexpr (::std::same_as<T, basic_lc_time_era<char_type>>)
		{
			return eras.data() + scatter.rva;
		}
		else if constexpr (::std::same_as<T, basic_lc_scatter<char_type>>)
		{
			return strings.data() + scatter.rva;
		}
		else
		{
			static_assert(::std::same_as<T, char_type> || ::std::same_as<T, ::std::size_t> || ::std::same_as<T, basic_lc_time_era<char_type>> || ::std::same_as<T, basic_lc_scatter<char_type>>, "Unsupported data type.");
		}
	}
	template <typename T>
	inline constexpr ::fast_io::basic_io_scatter_t<T> to_io_scatter(::fast_io::basic_lc_scatter<T> scatter) const noexcept
	{
		return {get(scatter), scatter.len};
	}
};

using lc_data_storage = basic_lc_data_storage<char>;
using wlc_data_storage = basic_lc_data_storage<wchar_t>;
using u8lc_data_storage = basic_lc_data_storage<char8_t>;
using u16lc_data_storage = basic_lc_data_storage<char16_t>;
using u32lc_data_storage = basic_lc_data_storage<char32_t>;

template <typename char_type>
struct basic_lc_object
{
	basic_lc_all<char_type> all{};
	basic_lc_data_storage<char_type> data_storage{};
};

using lc_object = basic_lc_object<char>;
using wlc_object = basic_lc_object<wchar_t>;
using u8lc_object = basic_lc_object<char8_t>;
using u16lc_object = basic_lc_object<char16_t>;
using u32lc_object = basic_lc_object<char32_t>;

struct lc_locale
{
	lc_object const *lc;
	wlc_object const *wlc;
	u8lc_object const *u8lc;
	u16lc_object const *u16lc;
	u32lc_object const *u32lc;
};

template <::std::integral char_type>
	requires(::std::same_as<char_type, char> || ::std::same_as<char_type, wchar_t> ||
			 ::std::same_as<char_type, char8_t> || ::std::same_as<char_type, char16_t> || ::std::same_as<char_type, char32_t>)
inline constexpr basic_lc_object<char_type> const *get_lc(lc_locale const &loc) noexcept
{
	if constexpr (::std::same_as<char_type, char>)
	{
		return loc.lc;
	}
	else if constexpr (::std::same_as<char_type, wchar_t>)
	{
		return loc.wlc;
	}
	else if constexpr (::std::same_as<char_type, char8_t>)
	{
		return loc.u8lc;
	}
	else if constexpr (::std::same_as<char_type, char16_t>)
	{
		return loc.u16lc;
	}
	else if constexpr (::std::same_as<char_type, char32_t>)
	{
		return loc.u32lc;
	}
	else
	{
		static_assert(::std::same_as<char_type, char>, "Unsupported char type for locale");
	}
}

namespace details
{

#if defined(_MSC_VER) && !defined(__clang__)
#pragma pack(push, 1)
#elif defined(__has_cpp_attribute) && __has_cpp_attribute(__gnu__::__packed__)
[[__gnu__::__packed__]]
#else
#error "Cannot make struct packed"
#endif
struct header
{
	char8_t magic_number[8];
	lc_scatter_base::size_type offsets[6]; //< lc.all, lc.data_storage.chars, lc.data_storage.integers, lc.data_storage.eras, lc.data_storage.strings, total file size
	lc_scatter_base::size_type major_version;
	lc_scatter_base::size_type minor_version;
	lc_scatter_base::size_type patch_version;
	fast_io::MIB_enum mib;
	fast_io::unix_timestamp time;
};
#if defined(_MSC_VER) && !defined(__clang__)
#pragma pack(pop)
#endif

template <::std::integral char_type>
inline constexpr void map_locale_from_file(::fast_io::native_file_loader& file, ::fast_io::basic_lc_object<char_type> const *&lc) noexcept
{
	if (file.empty())
	{
		return;
	}
	constexpr auto assert = [](bool b) {
		if (!b)
		{
			::fast_io::io::panicln("Broken locale file, or the file version is too old");
		}
	};
	assert(file.size() >= sizeof(header));
	auto const head{reinterpret_cast<header const *>(file.begin())};
	assert(head->magic_number[0] == u8'F');
	assert(head->magic_number[1] == u8'A');
	assert(head->magic_number[2] == u8'S');
	assert(head->magic_number[3] == u8'T');
	assert(head->magic_number[4] == u8'I');
	assert(head->magic_number[5] == u8'O');
	assert(head->magic_number[6] == u8'L');
	assert(head->magic_number[7] == u8'C');
	assert(head->offsets[0] == sizeof(header));
	assert(head->offsets[1] == head->offsets[0] + sizeof(*lc));
	assert(head->offsets[5] == file.end() - file.begin());
	assert(head->major_version == 0);
	lc = reinterpret_cast<::fast_io::basic_lc_object<char_type> const *>(file.begin() + head->offsets[0]);
	const_cast<::fast_io::basic_lc_object<char_type> *>(lc)->data_storage.chars = {reinterpret_cast<char_type const *>(file.begin() + head->offsets[1]), head->offsets[2]};
	const_cast<::fast_io::basic_lc_object<char_type> *>(lc)->data_storage.integers = {reinterpret_cast<::std::size_t const *>(file.begin() + head->offsets[2]), head->offsets[3]};
	const_cast<::fast_io::basic_lc_object<char_type> *>(lc)->data_storage.eras = {reinterpret_cast<basic_lc_time_era<char_type> const *>(file.begin() + head->offsets[3]), head->offsets[4]};
	const_cast<::fast_io::basic_lc_object<char_type> *>(lc)->data_storage.strings = {reinterpret_cast<basic_lc_scatter<char_type> const *>(file.begin() + head->offsets[4]), head->offsets[5]};
}

} // namespace details

} // namespace fast_io
