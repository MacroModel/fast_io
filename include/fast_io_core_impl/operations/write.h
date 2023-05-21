#pragma once

namespace fast_io
{

inline constexpr io_scatter_status_t scatter_size_to_status(std::size_t sz,io_scatter_t const *base,::std::size_t len) noexcept
{
	std::size_t total{sz};
	for(std::size_t i{};i!=len;++i)
	{
		::std::size_t blen{base[i].len};
		if(total<blen)[[unlikely]]
			return {sz,i,total};
		total-=blen;
	}
	return {sz,len,0};
}

template<typename T>
inline constexpr ::std::size_t scatter_total_size(basic_io_scatter_t<T> const *base,::std::size_t len) noexcept
{
	std::size_t total{};
	for(auto i{base},e{base+len};i!=e;++i)
	{
		total+=i->len;
	}
	return total;
}

namespace details
{

template<typename outstmtype,typename value_type>
inline constexpr value_type const* nobuffer_write_some_impl(outstmtype outstm,value_type const* first,value_type const* last);

template<typename outstmtype,typename value_type>
#if __has_cpp_attribute(__gnu__::__cold__)
[[__gnu__::__cold__]]
#endif
inline constexpr value_type const* nobuffer_pwrite_some_impl(outstmtype outstm,
	value_type const* first,
	value_type const* last,
	intfpos_t off)
{
	using char_type = typename outstmtype::output_char_type;
	constexpr bool smtp{::std::same_as<char_type,value_type>};
	if constexpr(smtp&&(::fast_io::details::streamreflect::has_pwrite_some_overflow_define<outstmtype>))
	{
		return pwrite_some_overflow_define(outstm,first,last);
	}
	else if constexpr(smtp&&(::fast_io::details::streamreflect::has_scatter_pwrite_some_overflow_define<outstmtype>))
	{
		basic_io_scatter_t<value_type> scatter
		{
			first,
			static_cast<::std::size_t>(last-first)
		};
		auto ret{scatter_pwrite_some_overflow_define(outstm,__builtin_addressof(scatter),1,off)};
		return ret.total_size+first;
	}
	else if constexpr(smtp&&(::fast_io::details::streamreflect::has_pwrite_all_overflow_define<outstmtype>))
	{
		pwrite_all_overflow_define(outstm,first,last,off);
		return last;
	}
	else if constexpr(smtp&&(::fast_io::details::streamreflect::has_scatter_pwrite_all_overflow_define<outstmtype>))
	{
		basic_io_scatter_t<value_type> scatter
		{
			first,
			static_cast<::std::size_t>(last-first)
		};
		auto ret{scatter_pwrite_all_overflow_define(outstm,__builtin_addressof(scatter),1,off)};
		return last;
	}
	else if constexpr(::fast_io::details::streamreflect::has_pwrite_some_bytes_overflow_define<outstmtype>)
	{
		::std::byte const *firstbyteptr{reinterpret_cast<::std::byte const*>(first)};
		::std::byte const *lastbyteptr{reinterpret_cast<::std::byte const*>(last)};
		if constexpr(sizeof(char_type)==sizeof(::std::byte))
		{
			auto p{pwrite_some_bytes_overflow_define(outstm,
				firstbyteptr,
				lastbyteptr,off)};
			return p-firstbyteptr+first;
		}
		else
		{
			auto it{firstbyteptr};
			::std::size_t n{};
			do
			{
				it=pwrite_some_bytes_overflow_define(outstm,it,lastbyteptr,off);
				::std::ptrdiff_t diff{it-firstbyteptr};
				off+=diff;
				n=static_cast<::std::size_t>(diff);
				if(n%sizeof(value_type)==0)
				{
					break;
				}
			}
			while(it!=lastbyteptr);
			::std::size_t const diff{n/sizeof(value_type)};

			auto retv{first+diff};
#if __has_cpp_attribute(assume)
			[[assume(reinterpret_cast<::std::byte const*>(retv)==it)]];
#endif
			return retv;
		}
	}
	else if constexpr(::fast_io::details::streamreflect::has_pwrite_all_bytes_overflow_define<outstmtype>)
	{
		::std::byte const *firstbyteptr{reinterpret_cast<::std::byte const*>(first)};
		::std::byte const *lastbyteptr{reinterpret_cast<::std::byte const*>(last)};
		pwrite_all_bytes_overflow_define(outstm,firstbyteptr,lastbyteptr,off);
		return last;
	}
}

template<typename outstmtype,typename value_type>
#if __has_cpp_attribute(__gnu__::__cold__)
[[__gnu__::__cold__]]
#endif
inline constexpr value_type const* nobuffer_write_some_impl(outstmtype outstm,value_type const* first,value_type const* last)
{
	using char_type = typename outstmtype::output_char_type;
	constexpr bool smtp{::std::same_as<char_type,value_type>};
	if constexpr(smtp&&(::fast_io::details::streamreflect::has_write_some_overflow_define<outstmtype>))
	{
		return write_some_overflow_define(outstm,first,last);
	}
	else if constexpr(smtp&&(::fast_io::details::streamreflect::has_scatter_write_some_overflow_define<outstmtype>))
	{
		basic_io_scatter_t<value_type> scatter
		{
			first,
			static_cast<::std::size_t>(last-first)
		};
		auto ret{scatter_write_some_overflow_define(outstm,__builtin_addressof(scatter),1)};
		return ret.total_size+first;
	}
	else if constexpr(smtp&&(::fast_io::details::streamreflect::has_write_all_overflow_define<outstmtype>))
	{
		write_all_overflow_define(outstm,first,last);
		return last;
	}
	else if constexpr(smtp&&(::fast_io::details::streamreflect::has_scatter_write_all_overflow_define<outstmtype>))
	{
		basic_io_scatter_t<value_type> scatter
		{
			first,
			static_cast<::std::size_t>(last-first)
		};
		auto ret{scatter_write_all_overflow_define(outstm,__builtin_addressof(scatter),1)};
		return last;
	}
	else if constexpr(::fast_io::details::streamreflect::has_write_some_bytes_overflow_define<outstmtype>)
	{
		::std::byte const *firstbyteptr{reinterpret_cast<::std::byte const*>(first)};
		::std::byte const *lastbyteptr{reinterpret_cast<::std::byte const*>(last)};
		if constexpr(sizeof(char_type)==sizeof(::std::byte))
		{
			auto p{write_some_bytes_overflow_define(outstm,
				firstbyteptr,
				lastbyteptr)};
			return p-firstbyteptr+first;
		}
		else
		{
			auto it{firstbyteptr};
			::std::size_t n{};
			do
			{
				it=write_some_bytes_overflow_define(outstm,it,lastbyteptr);
				n=static_cast<::std::size_t>(it-firstbyteptr);
				if(n%sizeof(value_type)==0)
				{
					break;
				}
			}
			while(it!=lastbyteptr);
			::std::size_t const diff{n/sizeof(value_type)};

			auto retv{first+diff};
#if __has_cpp_attribute(assume)
			[[assume(reinterpret_cast<::std::byte const*>(retv)==it)]];
#endif
			return retv;
		}
	}
	else if constexpr(::fast_io::details::streamreflect::has_write_all_bytes_overflow_define<outstmtype>)
	{
		::std::byte const *firstbyteptr{reinterpret_cast<::std::byte const*>(first)};
		::std::byte const *lastbyteptr{reinterpret_cast<::std::byte const*>(last)};
		write_all_bytes_overflow_define(outstm,firstbyteptr,lastbyteptr);
		return last;
	}
	else if constexpr(::fast_io::details::streamreflect::has_output_stream_seek<outstmtype>||
		::fast_io::details::streamreflect::has_output_stream_seek_bytes<outstmtype>)
	{
		if constexpr(smtp)
		{
			if constexpr(::fast_io::details::streamreflect::has_pwrite_some_overflow_define<outstmtype>)
			{
				last=pwrite_some_overflow_define(outstm,first,last,0);
			}
			else if constexpr(::fast_io::details::streamreflect::has_scatter_pwrite_some_overflow_define<outstmtype>)
			{
				basic_io_scatter_t<value_type> scatter
				{
					first,
					static_cast<::std::size_t>(last-first)
				};
				auto ret{scatter_pwrite_some_overflow_define(outstm,__builtin_addressof(scatter),1,0)};
				last=ret.total_size+first;
			}
/*
Todo:
*/
			if constexpr(::fast_io::details::streamreflect::has_output_stream_seek<outstmtype>)
			{
			::fast_io::details::output_stream_seek_impl(outstm,last-first,::fast_io::seekdir::cur);
			}
			else
			{
			::fast_io::details::output_stream_seek_bytes_impl(outstm,
				(reinterpret_cast<::std::byte const*>(last)-
				reinterpret_cast<::std::byte const*>(first)),
				::fast_io::seekdir::cur);
			}
			return last;
		}
	}
	return first;
}

template<typename outstmtype>
inline constexpr void nobuffer_write_all_bytes_with_write_some_or_all_bytes(outstmtype outstm,::std::byte const* first,::std::byte const* last)
{
	if constexpr(::fast_io::details::streamreflect::has_write_all_bytes_overflow_define<outstmtype>)
	{
		write_all_bytes_overflow_define(outstm,first,last);
	}
	else if constexpr(::fast_io::details::streamreflect::has_scatter_write_all_bytes_overflow_define<outstmtype>)
	{
		io_scatter_t scatter
		{
			first,
			static_cast<::std::size_t>(last-first)
		};
		scatter_write_all_bytes_overflow_define(outstm,__builtin_addressof(scatter),1);
	}
	else if constexpr(::fast_io::details::streamreflect::has_write_some_bytes_overflow_define<outstmtype>)
	{
		while((first=write_some_bytes_overflow_define(outstm,
			first,
			last))!=last);
	}
	else
	{
		do
		{
			io_scatter_t scatter
			{
				first,
				static_cast<::std::size_t>(last-first)
			};
			auto ret{scatter_write_some_bytes_overflow_define(outstm,__builtin_addressof(scatter),1)};
			first+=ret.total_size;
		}
		while(first!=last);
	}
}

template<typename outstmtype,typename value_type>
#if __has_cpp_attribute(__gnu__::__cold__)
[[__gnu__::__cold__]]
#endif
inline constexpr void nobuffer_write_all_impl(outstmtype outstm,value_type const* first,value_type const* last)
{
	using char_type = typename outstmtype::output_char_type;
	constexpr bool smtp{::std::same_as<char_type,value_type>};
	if constexpr(smtp&&(::fast_io::details::streamreflect::has_write_all_overflow_define<outstmtype>))
	{
		write_all_overflow_define(outstm,first,last);
	}
	else if constexpr(smtp&&(::fast_io::details::streamreflect::has_scatter_write_all_overflow_define<outstmtype>))
	{
		basic_io_scatter_t<value_type> scatter
		{
			first,
			static_cast<::std::size_t>(last-first)
		};
		scatter_write_all_overflow_define(outstm,__builtin_addressof(scatter),1);
	}
	else if constexpr(smtp&&(::fast_io::details::streamreflect::has_write_some_overflow_define<outstmtype>))
	{
		while((first=write_some_overflow_define(outstm,first,last))!=last);
	}
	else if constexpr(smtp&&(::fast_io::details::streamreflect::has_scatter_write_some_overflow_define<outstmtype>))
	{
		do
		{
			basic_io_scatter_t<value_type> scatter
			{
				first,
				static_cast<::std::size_t>(last-first)
			};
			auto ret{scatter_write_some_overflow_define(outstm,__builtin_addressof(scatter),1)};
			first+=ret.total_size;
		}
		while(first!=last);
	}
	else if constexpr(
		::fast_io::details::streamreflect::has_write_all_bytes_overflow_define<outstmtype>||
		::fast_io::details::streamreflect::has_scatter_write_all_bytes_overflow_define<outstmtype>||
		::fast_io::details::streamreflect::has_write_some_bytes_overflow_define<outstmtype>||
		::fast_io::details::streamreflect::has_scatter_write_some_bytes_overflow_define<outstmtype>)
	{
		::std::byte const *firstbyteptr{reinterpret_cast<::std::byte const*>(first)};
		::std::byte const *lastbyteptr{reinterpret_cast<::std::byte const*>(last)};
		nobuffer_write_all_bytes_with_write_some_or_all_bytes(outstm,firstbyteptr,lastbyteptr);
	}
	else if constexpr(smtp&&::fast_io::details::streamreflect::has_output_stream_char_put_overflow_define<outstmtype>)
	{
		for(;first!=last;++first)
		{
			output_stream_char_put_overflow_define(outstm,*first);
		}
	}
}


template<typename outstmtype>
#if __has_cpp_attribute(__gnu__::__cold__)
[[__gnu__::__cold__]]
#endif
inline constexpr io_scatter_status_t nobuffer_scatter_write_some_bytes_impl(outstmtype outstm,io_scatter_t const *base,::std::size_t len)
{
	if constexpr(::fast_io::details::streamreflect::has_scatter_write_some_bytes_overflow_define<outstmtype>)
	{
		return scatter_write_some_bytes_overflow_define(outstm,base,len);
	}
	else if constexpr(::fast_io::details::streamreflect::has_scatter_write_all_bytes_overflow_define<outstmtype>)
	{
		scatter_write_all_bytes_overflow_define(outstm,base,len);
		return {scatter_total_size(base,len),len,0};
	}
	else if constexpr(::fast_io::details::streamreflect::has_write_some_bytes_overflow_define<outstmtype>)
	{
		::std::size_t written{};
		auto i{base};
		::std::size_t posinsp{};
		for(auto ed{base+len};i!=ed;++i)
		{
			auto ele{*i};
			auto basebg{reinterpret_cast<::std::byte const*>(ele.base)};
			auto baseed{basebg+ele.len};
			auto ret{write_some_bytes_overflow_define(outstm,
			reinterpret_cast<::std::byte const*>(basebg),
			reinterpret_cast<::std::byte const*>(baseed))};
			::std::size_t diff{static_cast<::std::size_t>(ret-basebg)};
			written+=diff;
			if(ret!=baseed)
			{
				posinsp=diff;
				break;
			}
		}
		return {written,static_cast<::std::size_t>(i-base),posinsp};
	}
	else if constexpr(::fast_io::details::streamreflect::has_write_all_bytes_overflow_define<outstmtype>)
	{
		::std::size_t written{};
		auto i{base};
		for(auto ed{base+len};i!=ed;++i)
		{
			auto ele{*i};
			auto basebg{reinterpret_cast<::std::byte const*>(ele.base)};
			auto baseed{basebg+ele.len};
			write_all_bytes_overflow_define(outstm,basebg,baseed);
			::std::size_t diff{static_cast<::std::size_t>(baseed-basebg)};
			written+=diff;
		}
		return {written,len,0};
	}
}


template<typename outstmtype>
#if __has_cpp_attribute(__gnu__::__cold__)
[[__gnu__::__cold__]]
#endif
inline constexpr void nobuffer_char_put_impl(outstmtype outstm,
	typename decltype(::fast_io::manipulators::output_stream_ref(outstm))::output_char_type ch)
{
	if constexpr(::fast_io::details::streamreflect::has_output_stream_char_put_overflow_define<outstmtype>)
	{
		output_stream_char_put_overflow_define(outstm,ch);
	}
	else
	{
		::fast_io::details::nobuffer_write_all_impl(
			outstm,__builtin_addressof(ch),__builtin_addressof(ch)+1);
	}
}

template<typename outstmtype,typename value_type>
inline constexpr value_type const* buffer_write_some_impl(outstmtype outstm,value_type const* first,value_type const* last)
{
	if constexpr(::fast_io::details::mutex_unlocked_buffer_output_stream_impl<outstmtype>)
	{
		::fast_io::operations::stream_ref_lock_guard lg{output_stream_mutex_ref_impl(outstm)};
		return ::fast_io::details::buffer_write_some_impl(output_stream_unlocked_ref_define(outstm),first,last);
	}
	using char_type = typename outstmtype::output_char_type;
	constexpr bool smtp{::std::same_as<char_type,value_type>};
	if constexpr(::fast_io::details::streamreflect::has_obuffer_ops<outstmtype>)
	{
		if constexpr(smtp)
		{
			char_type *curr{obuffer_curr(outstm)};
			char_type *ed{obuffer_end(outstm)};
			auto bufferremain{ed-curr};
			auto itdf{last-first};
			if(itdf<bufferremain)
#if __has_cpp_attribute(likely)
			[[likely]]
#endif
			{
				obuffer_set_curr(outstm,non_overlapped_copy_n(first,static_cast<::std::size_t>(itdf),curr));
				return last;
			}
		}
		else
		{
			using char_type_const_ptr
#if __has_cpp_attribute(__gnu__::__may_alias__)
			[[__gnu__::__may_alias__]]
#endif
			=
			char_type const*;
			auto firstptr = reinterpret_cast<char_type_const_ptr>(first);
			auto lastptr = reinterpret_cast<char_type_const_ptr>(last);
			if constexpr(sizeof(char_type)==sizeof(value_type))
			{
				return ::fast_io::details::buffer_write_some_impl(
					outstm,firstptr,lastptr)-firstptr+first;
			}
			else
			{
				do
				{
					auto newfirstptr =
					::fast_io::details::buffer_write_some_impl(
					outstm,firstptr,lastptr);
					::std::size_t n{static_cast<::std::size_t>(newfirstptr-firstptr)};
					if(n%sizeof(value_type)==0)
					{
						using value_type_const_ptr
#if __has_cpp_attribute(__gnu__::__may_alias__)
						[[__gnu__::__may_alias__]]
#endif
						= value_type const*;
						return reinterpret_cast<value_type_const_ptr>(newfirstptr);
					}
				}
				while(firstptr!=lastptr);
				return last;
			}
		}
	}
	return ::fast_io::details::nobuffer_write_some_impl(outstm,first,last);
}


template<typename outstmtype,typename value_type>
inline constexpr void buffer_write_all_impl(outstmtype outstm,value_type const* first,value_type const* last)
{
	if constexpr(::fast_io::details::mutex_unlocked_buffer_output_stream_impl<outstmtype>)
	{
		::fast_io::operations::stream_ref_lock_guard lg{output_stream_mutex_ref_impl(outstm)};
		return ::fast_io::details::buffer_write_all_impl(output_stream_unlocked_ref_define(outstm),first,last);
	}
	using char_type = typename outstmtype::output_char_type;
	constexpr bool smtp{::std::same_as<char_type,value_type>};
	if constexpr(smtp)
	{
		if constexpr(::fast_io::details::streamreflect::has_obuffer_ops<outstmtype>)
		{
		char_type *curr{obuffer_curr(outstm)};
		char_type *ed{obuffer_end(outstm)};
		auto bufferremain{ed-curr};
		auto itdf{last-first};
		if(itdf<bufferremain)
#if __has_cpp_attribute(likely)
		[[likely]]
#endif
		{
			obuffer_set_curr(outstm,non_overlapped_copy_n(first,static_cast<::std::size_t>(itdf),curr));
			return;
		}
		}
		::fast_io::details::nobuffer_write_all_impl(outstm,first,last);
	}
	else
	{
		using char_type_const_ptr
#if __has_cpp_attribute(__gnu__::__may_alias__)
		[[__gnu__::__may_alias__]]
#endif
		= char_type const*;
		auto firstptr = reinterpret_cast<char_type_const_ptr>(first);
		auto lastptr = reinterpret_cast<char_type_const_ptr>(last);
		::fast_io::details::buffer_write_all_impl(outstm,firstptr,lastptr);
	}
}


template<typename outstmtype,::std::forward_iterator Iter>
requires (sizeof(::std::iter_value_t<Iter>)%sizeof(typename outstmtype::output_char_type)==0)
inline constexpr Iter write_some_impl(outstmtype outsm,Iter first, Iter last)
{
	if constexpr(::std::is_pointer_v<Iter>)
	{
		return ::fast_io::details::buffer_write_some_impl(outsm,first,last);
	}
	else if constexpr(::std::contiguous_iterator<Iter>)
	{
		return ::fast_io::details::buffer_write_some_impl(
			outsm,
			::std::to_address(first),
			::std::to_address(last))-::std::to_address(first)+first;
	}
	else
	{
		if constexpr(::fast_io::details::mutex_unlocked_buffer_output_stream_impl<outstmtype>)
		{
			::fast_io::operations::stream_ref_lock_guard lg{output_stream_mutex_ref_impl(outsm)};
			return ::fast_io::details::write_some_impl(output_stream_unlocked_ref_define(outsm),first,last);
		}
		for(;first!=last;++first)
		{
			auto fptr{__builtin_addressof(*first)};
			auto fptrp1{fptr+1};
			if(::fast_io::details::buffer_write_some_impl(
				outsm,fptr,fptrp1)!=fptrp1)
			{
				break;
			}
		}
		return first;
	}
}
#if 0
template<typename outstm,::std::forward_iterator Iter>
requires (sizeof(::std::iter_value_t<Iter>)%sizeof(typename outstm::output_char_type)==0)
inline constexpr Iter pwrite_some_impl(outstm outsm,Iter first, Iter last,intfpos_t off)
{
	if constexpr(::std::is_pointer_v<Iter>)
	{
		return ::fast_io::details::buffer_write_some_impl(outsm,first,last);
	}
	else if constexpr(::std::contiguous_iterator<Iter>)
	{
		return ::fast_io::details::buffer_write_some_impl(
			outsm,
			::std::to_address(first),
			::std::to_address(last))-::std::to_address(first)+first;
	}
	else if constexpr(::fast_io::)
	{

		for(;first!=last;++first)
		{
			auto fptr{__builtin_addressof(*first)};
			auto fptrp1{fptr+1};
			if(::fast_io::details::buffer_pwrite_some_impl(
				outsm,fptr,fptrp1,off)!=fptrp1)
			{
				break;
			}
			off=static_cast<::std::ptrdiff_t>(static_cast<::std::size_t>(off)+sizeof(::std::iter_value_t<Iter>));
		}
		return first;
	}
	else
	{
		for(;first!=last;++first)
		{
			auto fptr{__builtin_addressof(*first)};
			auto fptrp1{fptr+1};
			if(::fast_io::details::buffer_write_some_impl(
				outsm,fptr,fptrp1)!=fptrp1)
			{
				break;
			}
		}
		return first;
	}
}
#endif
template<typename outstm,::std::forward_iterator Iter>
requires (sizeof(::std::iter_value_t<Iter>)%sizeof(typename outstm::output_char_type)==0)
inline constexpr void write_all_impl(outstm outsm,Iter first, Iter last)
{
	if constexpr(::std::contiguous_iterator<Iter>)
	{
		::fast_io::details::buffer_write_all_impl(
			outsm,
			::std::to_address(first),
			::std::to_address(last));
	}
	else
	{
		for(;first!=last;++first)
		{
			auto fptr{__builtin_addressof(*first)};
			auto fptrp1{fptr+1};
			::fast_io::details::buffer_write_all_impl(
				outsm,fptr,fptrp1);
		}
	}
}

template<typename outstm>
inline constexpr void char_put_impl(outstm outsm,
	typename decltype(::fast_io::manipulators::output_stream_ref(outsm))::output_char_type ch)
{
	if constexpr(::fast_io::details::mutex_unlocked_buffer_output_stream_impl<outstm>)
	{
		::fast_io::operations::stream_ref_lock_guard lg{output_stream_mutex_ref_impl(outsm)};
		return ::fast_io::details::char_put_impl(::fast_io::details::output_stream_unlocked_ref_impl(outsm),ch);
	}
	if constexpr(::fast_io::details::streamreflect::has_obuffer_ops<outstm>)
	{
		using char_type = typename outstm::output_char_type;
		char_type *curr{obuffer_curr(outsm)};
		char_type *ed{obuffer_end(outsm)};
		bool condition;
		if constexpr(::fast_io::details::streamreflect::has_obuffer_is_line_buffering_define<outstm>)
		{
			condition=curr<ed;
		}
		else
		{
			condition=curr!=ed;
		}
		if(condition)
#if __has_cpp_attribute(likely)
			[[likely]]
#endif

		{
			*curr=ch;
			obuffer_set_curr(outsm,curr+1);
			return;
		}
	}
	::fast_io::details::nobuffer_char_put_impl(outsm,ch);
}

template<typename outstmtype>
inline constexpr io_scatter_status_t scatter_write_some_bytes_impl(outstmtype outstm,io_scatter_t const *base,::std::size_t len)
{
	if constexpr(::fast_io::details::mutex_unlocked_buffer_output_stream_impl<outstmtype>)
	{
		::fast_io::operations::stream_ref_lock_guard lg{output_stream_mutex_ref_impl(outstm)};
		return ::fast_io::details::scatter_write_some_bytes_impl(
			::fast_io::details::output_stream_unlocked_ref_impl(outstm),
			base,len);
	}
	if constexpr(::fast_io::details::streamreflect::has_obuffer_ops<outstmtype>)
	{
		auto iptr{base},eptr{iptr+len};
		::std::size_t written{};
		::std::size_t positioninscatter{};
		for(;iptr!=eptr;++iptr)
		{
			auto val{*iptr};
			::std::byte const* valbase{reinterpret_cast<::std::byte const*>(val.base)};
			::std::byte const* valed{valbase+val.len};
			auto valit{write_some_impl(outstm,valbase,valed)};
			::std::size_t diff{static_cast<::std::size_t>(valit-valbase)};
			written+=diff;
			if(valit!=valed)
			{
				positioninscatter=diff;
				break;
			}
		}
		return {written,static_cast<::std::size_t>(iptr-base),positioninscatter};
	}
	else
	{
		return ::fast_io::details::nobuffer_scatter_write_some_bytes_impl(outstm,base,len);
	}
}

template<typename outstmtype>
#if __has_cpp_attribute(__gnu__::__cold__)
[[__gnu__::__cold__]]
#endif

#if __has_cpp_attribute(__gnu__::__noinline__)
[[__gnu__::__noinline__]]
#endif
inline constexpr void nobuffer_scatter_write_all_bytes_impl(outstmtype outstm,io_scatter_t const *base,::std::size_t len)
{
	if constexpr(::fast_io::details::streamreflect::has_scatter_write_all_bytes_overflow_define<outstmtype>)
	{
		scatter_write_all_bytes_overflow_define(outstm,base,len);
	}
	else if constexpr(::fast_io::details::streamreflect::has_scatter_write_some_bytes_overflow_define<outstmtype>)
	{
		while(len)
		{
			auto ret{scatter_write_some_bytes_overflow_define(outstm,base,len)};
			::std::size_t position{ret.position};
			::std::size_t position_in_scatter{ret.position_in_scatter};
			if(position==len)
#if __has_cpp_attribute(likely)
			[[likely]]
#endif
			{
				return;
			}
			base+=position;
			len-=position;
			if(!position_in_scatter)
			{
				continue;
			}
			auto b{reinterpret_cast<::std::byte const*>(base->base)};
			::fast_io::details::write_all_impl(outstm,
				b+position_in_scatter,b+base->len);
			++base;
			--len;
		}
	}
	else if constexpr(::fast_io::details::streamreflect::has_write_some_bytes_overflow_define<outstmtype>
		||::fast_io::details::streamreflect::has_write_all_bytes_overflow_define<outstmtype>)
	{
		for(auto i{base},ed{base+len};i!=ed;++i)
		{
			auto ele{*i};
			auto basebg{reinterpret_cast<::std::byte const*>(ele.base)};
			auto baseed{basebg+ele.len};
			::fast_io::details::write_all_impl(outstm,basebg,baseed);
		}
	}
}

template<typename outstmtype>
inline constexpr void scatter_write_all_bytes_impl(outstmtype outstm,io_scatter_t const *base,::std::size_t len)
{
	if constexpr(::fast_io::details::mutex_unlocked_buffer_output_stream_impl<outstmtype>)
	{
		::fast_io::operations::stream_ref_lock_guard lg{output_stream_mutex_ref_impl(outstm)};
		return ::fast_io::details::scatter_write_all_bytes_impl(
			::fast_io::details::output_stream_unlocked_ref_impl(outstm),
			base,len);
	}
	if constexpr(::fast_io::details::streamreflect::has_obuffer_ops<outstmtype>)
	{
		auto iptr{base},eptr{iptr+len};
		for(;iptr!=eptr;++iptr)
		{
			auto val{*iptr};
			auto baseptr{reinterpret_cast<::std::byte const*>(val.base)};
			auto baseed{baseptr+val.len};
			write_all_impl(outstm,baseptr,baseed);
		}
	}
	else
	{
		return ::fast_io::details::nobuffer_scatter_write_all_bytes_impl(outstm,base,len);
	}
}

template<typename outstmtype>
#if __has_cpp_attribute(__gnu__::__cold__)
[[__gnu__::__cold__]]
#endif
inline constexpr io_scatter_status_t nobuffer_scatter_write_some_impl(outstmtype outstm,basic_io_scatter_t<typename outstmtype::output_char_type> const *base,::std::size_t len)
{
	using char_type = typename outstmtype::output_char_type;
	if constexpr(::fast_io::details::streamreflect::has_scatter_write_some_overflow_define<outstmtype>)
	{
		return scatter_write_some_overflow_define(outstm,base,len);
	}
	else if constexpr(::fast_io::details::streamreflect::has_scatter_write_all_overflow_define<outstmtype>)
	{
		scatter_write_all_overflow_define(outstm,base,len);
		return {scatter_total_size(base,len),len,0};
	}
	else if constexpr(sizeof(char_type)==sizeof(::std::byte))
	{
		using scatterbyteptr_constaliasptr
#if __has_cpp_attribute(__gnu__::__may_alias__)
[[__gnu__::__may_alias__]]
#endif
		= io_scatter_t const *;
		return ::fast_io::details::nobuffer_scatter_write_some_bytes_impl(outstm,
			reinterpret_cast<scatterbyteptr_constaliasptr>(base),len);
	}
	else if constexpr(::fast_io::details::streamreflect::has_write_some_overflow_define<outstmtype>)
	{
		::std::size_t written{};
		auto i{base};
		::std::size_t posinsp{};
		for(auto ed{base+len};i!=ed;++i)
		{
			auto ele{*i};
			auto basebg{ele.base};
			auto baseed{basebg+ele.len};
			auto ret{write_some_overflow_define(outstm,basebg,baseed)};
			::std::size_t diff{static_cast<::std::size_t>(ret-basebg)};
			written+=diff;
			if(ret!=baseed)
			{
				posinsp=diff;
				break;
			}
		}
		return {written,static_cast<::std::size_t>(i-base),posinsp};
	}
	else if constexpr(::fast_io::details::streamreflect::has_write_all_overflow_define<outstmtype>)
	{
		::std::size_t written{};
		auto i{base};
		for(auto ed{base+len};i!=ed;++i)
		{
			auto ele{*i};
			auto basebg{ele.base};
			auto baseed{basebg+ele.len};
			write_all_overflow_define(outstm,basebg,baseed);
			::std::size_t diff{static_cast<::std::size_t>(baseed-basebg)};
			written+=diff;
		}
		return {written,len,0};
	}
	else if constexpr(::fast_io::details::streamreflect::has_write_some_bytes_overflow_define<outstmtype>)
	{
		::std::size_t written{};
		auto i{base};
		::std::size_t posinsp{};
		for(auto ed{base+len};i!=ed;++i)
		{
			auto ele{*i};
			auto basebg{ele.base};
			auto baseed{basebg+ele.len};
			auto ret{::fast_io::details::write_some_impl(outstm,basebg,baseed)};
			::std::size_t diff{static_cast<::std::size_t>(ret-basebg)};
			written+=diff;
			if(ret!=baseed)
			{
				posinsp=diff;
				break;
			}
		}
		return {written,static_cast<::std::size_t>(i-base),posinsp};
	}
	else if constexpr(::fast_io::details::streamreflect::has_write_all_overflow_define<outstmtype>)
	{
		::std::size_t written{};
		auto i{base};
		for(auto ed{base+len};i!=ed;++i)
		{
			auto ele{*i};
			auto basebg{ele.base};
			auto baseed{basebg+ele.len};
			write_all_overflow_define(outstm,basebg,baseed);
			::std::size_t diff{static_cast<::std::size_t>(baseed-basebg)};
			written+=diff;
		}
		return {written,len,0};
	}
}

template<typename outstmtype>
#if __has_cpp_attribute(__gnu__::__cold__)
[[__gnu__::__cold__]]
#endif
inline constexpr void nobuffer_scatter_write_all_impl(outstmtype outstm,
	basic_io_scatter_t<typename outstmtype::output_char_type> const *base,
	::std::size_t len)
{
	using char_type = typename outstmtype::output_char_type;
	if constexpr(::fast_io::details::streamreflect::has_scatter_write_all_overflow_define<outstmtype>)
	{
		scatter_write_all_overflow_define(outstm,base,len);
	}
	else if constexpr(::fast_io::details::streamreflect::has_scatter_write_some_overflow_define<outstmtype>)
	{
		while(len)
		{
			auto ret{scatter_write_define(outstm,base,len)};
			::std::size_t position{ret.position};
			::std::size_t position_in_scatter{ret.position_in_scatter};
			if(position==len)
#if __has_cpp_attribute(likely)
			[[likely]]
#endif
			{
				return;
			}
			base+=position;
			len-=position;
			if(!position_in_scatter)
			{
				continue;
			}
			auto b{base->base};
			::fast_io::details::write_some_impl(outstm,
				b+position_in_scatter,b+base->len);
			++base;
			--len;
		}
	}
	else if constexpr(sizeof(char_type)==sizeof(::std::byte))
	{
		using scatterbyteptr_constaliasptr
#if __has_cpp_attribute(__gnu__::__may_alias__)
		[[__gnu__::__may_alias__]]
#endif
		= io_scatter_t const *;
		::fast_io::details::scatter_write_all_bytes_impl(outstm,
			reinterpret_cast<scatterbyteptr_constaliasptr>(base),
			len);
	}
	else if constexpr(::fast_io::details::streamreflect::has_write_all_overflow_define<outstmtype>||
		::fast_io::details::streamreflect::has_write_some_overflow_define<outstmtype>)
	{
		for(auto i{base},e{base+len};i!=e;++i)
		{
			auto [bibs,bilen]{*i};
			::fast_io::details::write_some_impl(outstm,
			bibs,bibs+bilen);
		}
	}
}

template<typename outstmtype>
inline constexpr void scatter_write_all_impl(outstmtype outstm,
	basic_io_scatter_t<typename outstmtype::output_char_type> const *base,
	::std::size_t len)
{
	if constexpr(::fast_io::details::mutex_unlocked_buffer_output_stream_impl<outstmtype>)
	{
		::fast_io::operations::stream_ref_lock_guard lg{output_stream_mutex_ref_impl(outstm)};
		return ::fast_io::details::scatter_write_all_impl(
			::fast_io::details::output_stream_unlocked_ref_impl(outstm),
			base,len);
	}
	if constexpr(::fast_io::details::streamreflect::has_obuffer_ops<outstmtype>)
	{
		auto iptr{base},eptr{iptr+len};
		for(;iptr!=eptr;++iptr)
		{
			auto val{*iptr};
			write_all_impl(outstm,val.base,val.base+val.len);
		}
	}
	else
	{
		return ::fast_io::details::nobuffer_scatter_write_all_impl(outstm,base,len);
	}
}

template<typename outstmtype>
inline constexpr io_scatter_status_t scatter_write_some_impl(outstmtype outstm,
	basic_io_scatter_t<typename outstmtype::output_char_type> const *base,
	::std::size_t len)
{
	if constexpr(::fast_io::details::mutex_unlocked_buffer_output_stream_impl<outstmtype>)
	{
		::fast_io::operations::stream_ref_lock_guard lg{output_stream_mutex_ref_impl(outstm)};
		return ::fast_io::details::scatter_write_all_impl(
			::fast_io::details::output_stream_unlocked_ref_impl(outstm),
			base,len);
	}
	if constexpr(::fast_io::details::streamreflect::has_obuffer_ops<outstmtype>)
	{
		auto iptr{base},eptr{iptr+len};
		::std::size_t written{};
		::std::size_t positioninscatter{};
		for(;iptr!=eptr;++iptr)
		{
			auto val{*iptr};
			auto valbase{val.base};
			auto valed{valbase+val.len};
			auto valit{write_some_impl(outstm,valbase,valed)};
			::std::size_t diff{static_cast<::std::size_t>(valit-valbase)};
			written+=diff;
			if(valit!=valed)
			{
				positioninscatter=diff;
				break;
			}
		}
		return {written,static_cast<::std::size_t>(iptr-base),positioninscatter};
	}
	else
	{
		return ::fast_io::details::nobuffer_scatter_write_some_impl(outstm,base,len);
	}
}

}

namespace operations
{

/**
 * @brief Writes a range of values to an output stream, returning an iterator to the end of the written range.
 * 
 * This function writes a range of values to an output stream using the `write_some` operation,
 * returning an iterator to the end of the written range. If an error occurs during the write operation,
 * the function will return an iterator to the point at which the error occurred. 
 * 
 * @tparam outstmtype The output stream type, which satisfies the `output_stream` concept.
 * @tparam Iter The type of the iterator representing the range of values to be written.
 * @param outstm The output stream object to which values will be written.
 * @param first An iterator representing the start of the range of values to be written.
 * @param last An iterator representing the end of the range of values to be written.
 * @return An iterator pointing to the end of the written range, or an iterator pointing to the location of an error.
 */
template<::fast_io::output_stream outstmtype,::std::forward_iterator Iter>
requires requires(outstmtype&& outstm,Iter first, Iter last)
{
	{::fast_io::details::write_some_impl(::fast_io::manipulators::output_stream_ref(outstm),first,last)}->::std::same_as<Iter>;
}
#if __has_cpp_attribute(__gnu__::__always_inline__)
[[__gnu__::__always_inline__]]
#elif __has_cpp_attribute(msvc::forceinline)
[[msvc::forceinline]]
#endif
inline constexpr Iter write_some(outstmtype&& outstm,Iter first, Iter last)
{
	return ::fast_io::details::write_some_impl(::fast_io::manipulators::output_stream_ref(outstm),first,last);
}

/**
 * @brief Writes a range of values to an output stream, throwing an exception if the entire range cannot be written.
 * 
 * This function writes a range of values to an output stream using the `write_some` operation,
 * and will throw an exception if the entire range cannot be written.
 * 
 * @tparam outstmtype The output stream type, which satisfies the `output_stream` concept.
 * @tparam Iter The type of the iterator representing the range of values to be written.
 * @param outstm The output stream object to which values will be written.
 * @param first An iterator representing the start of the range of values to be written.
 * @param last An iterator representing the end of the range of values to be written.
 * @throws An exception if the entire range cannot be written.
 */
template<::fast_io::output_stream outstmtype,::std::forward_iterator Iter>
requires requires(outstmtype&& outstm,Iter first, Iter last)
{
	::fast_io::details::write_all_impl(::fast_io::manipulators::output_stream_ref(outstm),first,last);
}
#if __has_cpp_attribute(__gnu__::__always_inline__)
[[__gnu__::__always_inline__]]
#elif __has_cpp_attribute(msvc::forceinline)
[[msvc::forceinline]]
#endif
inline constexpr void write_all(outstmtype&& outstm,Iter first,Iter last)
{
	::fast_io::details::write_all_impl(::fast_io::manipulators::output_stream_ref(outstm),first,last);
}



template<::fast_io::output_stream outstmtype>
#if __has_cpp_attribute(__gnu__::__always_inline__)
[[__gnu__::__always_inline__]]
#elif __has_cpp_attribute(msvc::forceinline)
[[msvc::forceinline]]
#endif
inline constexpr io_scatter_status_t scatter_write_some_bytes(outstmtype&& outstm,
	io_scatter_t const* pscatter,::std::size_t len)
{
	return ::fast_io::details::scatter_write_some_bytes_impl(::fast_io::manipulators::output_stream_ref(outstm),pscatter,len);
}

template<::fast_io::output_stream outstmtype>
#if __has_cpp_attribute(__gnu__::__always_inline__)
[[__gnu__::__always_inline__]]
#elif __has_cpp_attribute(msvc::forceinline)
[[msvc::forceinline]]
#endif
inline constexpr void scatter_write_all_bytes(outstmtype&& outstm,
	io_scatter_t const* pscatter,::std::size_t len)
{
	::fast_io::details::scatter_write_all_bytes_impl(::fast_io::manipulators::output_stream_ref(outstm),pscatter,len);
}

template<::fast_io::output_stream outstmtype>
#if __has_cpp_attribute(__gnu__::__always_inline__)
[[__gnu__::__always_inline__]]
#elif __has_cpp_attribute(msvc::forceinline)
[[msvc::forceinline]]
#endif
inline constexpr io_scatter_status_t scatter_write_some(outstmtype&& outstm,
	basic_io_scatter_t<typename decltype(::fast_io::manipulators::output_stream_ref(outstm))::output_char_type> const* pscatter,::std::size_t len)
{
	return ::fast_io::details::scatter_write_some_impl(::fast_io::manipulators::output_stream_ref(outstm),pscatter,len);
}

template<::fast_io::output_stream outstmtype>
#if __has_cpp_attribute(__gnu__::__always_inline__)
[[__gnu__::__always_inline__]]
#elif __has_cpp_attribute(msvc::forceinline)
[[msvc::forceinline]]
#endif
inline constexpr void scatter_write_all(outstmtype&& outstm,
	basic_io_scatter_t<typename decltype(::fast_io::manipulators::output_stream_ref(outstm))::output_char_type> const* pscatter,::std::size_t len)
{
	return ::fast_io::details::scatter_write_all_impl(::fast_io::manipulators::output_stream_ref(outstm),pscatter,len);
}

/**
 * @brief Writes a single character to the output stream.
 * @tparam outstmtype The type of the output stream to write to, which should satisfy the output_stream concept.
 * @param outstm The output stream to write to.
 * @param ch The character to write to the output stream.
 * @note This function is marked constexpr, allowing its invocation in constant expressions.
 */
template<::fast_io::output_stream outstmtype>
#if __has_cpp_attribute(__gnu__::__always_inline__)
[[__gnu__::__always_inline__]]
#elif __has_cpp_attribute(msvc::forceinline)
[[msvc::forceinline]]
#endif
inline constexpr void char_put(outstmtype&& outstm,
	typename decltype(::fast_io::manipulators::output_stream_ref(outstm))::output_char_type ch)
{
	::fast_io::details::char_put_impl(::fast_io::manipulators::output_stream_ref(outstm),ch);
}


#if 0
template<::fast_io::output_stream outstmtype,::std::forward_iterator Iter>
requires requires(outstmtype&& outstm,Iter first, Iter last,intfpot_t off)
{
	{::fast_io::details::pwrite_some_impl(::fast_io::manipulators::output_stream_ref(outstm),first,last,off)}->::std::same_as<Iter>;
}
#if __has_cpp_attribute(__gnu__::__always_inline__)
[[__gnu__::__always_inline__]]
#elif __has_cpp_attribute(msvc::forceinline)
[[msvc::forceinline]]
#endif
inline constexpr Iter pwrite_some(outstmtype&& outstm,Iter first,Iter last,intfpot_t off)
{
	return ::fast_io::details::pwrite_some_impl(::fast_io::manipulators::output_stream_ref(outstm),first,last,off);
}

template<::fast_io::output_stream outstmtype,::std::forward_iterator Iter>
requires requires(outstmtype&& outstm,Iter first, Iter last,intfpot_t off)
{
	::fast_io::details::pwrite_all_impl(::fast_io::manipulators::output_stream_ref(outstm),first,last,off);
}
#if __has_cpp_attribute(__gnu__::__always_inline__)
[[__gnu__::__always_inline__]]
#elif __has_cpp_attribute(msvc::forceinline)
[[msvc::forceinline]]
#endif
inline constexpr void pwrite_all(outstmtype&& outstm,Iter first,Iter last,intfpot_t off)
{
	::fast_io::details::pwrite_all_impl(::fast_io::manipulators::output_stream_ref(outstm),first,last,off);
}


template<::fast_io::output_stream outstmtype,::std::forward_iterator Iter>
requires requires(outstmtype&& outstm,Iter first, Iter last,intfpot_t off)
{
	{::fast_io::details::pwrite_some_bytes_impl(::fast_io::manipulators::output_stream_ref(outstm),first,last,off)}->::std::same_as<Iter>;
}
#if __has_cpp_attribute(__gnu__::__always_inline__)
[[__gnu__::__always_inline__]]
#elif __has_cpp_attribute(msvc::forceinline)
[[msvc::forceinline]]
#endif
inline constexpr Iter pwrite_some_bytes(outstmtype&& outstm,Iter first,Iter last,intfpot_t off)
{
	return ::fast_io::details::pwrite_some_bytes_impl(::fast_io::manipulators::output_stream_ref(outstm),first,last,off);
}

template<::fast_io::output_stream outstmtype,::std::forward_iterator Iter>
requires requires(outstmtype&& outstm,Iter first, Iter last,intfpot_t off)
{
	::fast_io::details::pwrite_all_bytes_impl(::fast_io::manipulators::output_stream_ref(outstm),first,last,off);
}
#if __has_cpp_attribute(__gnu__::__always_inline__)
[[__gnu__::__always_inline__]]
#elif __has_cpp_attribute(msvc::forceinline)
[[msvc::forceinline]]
#endif
inline constexpr void pwrite_all_bytes(outstmtype&& outstm,Iter first,Iter last,intfpot_t off)
{
	::fast_io::details::pwrite_all_bytes_impl(::fast_io::manipulators::output_stream_ref(outstm),first,last,off);
}
#endif

}

}