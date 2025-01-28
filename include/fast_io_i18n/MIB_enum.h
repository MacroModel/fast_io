#pragma once

namespace fast_io
{

// IANA MIB enum
// https://www.iana.org/assignments/character-sets/character-sets.xhtml
// https://en.cppreference.com/w/cpp/locale/text_encoding/id
enum class MIB_enum : ::std::int_least32_t
{
	other = 1,
	unknown = 2,
	ASCII = 3,
	ISOLatin1 = 4,
	ISOLatin2 = 5,
	ISOLatin3 = 6,
	ISOLatin4 = 7,
	ISOLatinCyrillic = 8,
	ISOLatinArabic = 9,
	ISOLatinGreek = 10,
	ISOLatinHebrew = 11,
	ISOLatin5 = 12,
	ISOLatin6 = 13,
	ISOTextComm = 14,
	HalfWidthKatakana = 15,
	JISEncoding = 16,
	ShiftJIS = 17,
	EUCPkdFmtJapanese = 18,
	EUCFixWidJapanese = 19,
	ISO4UnitedKingdom = 20,
	ISO11SwedishForNames = 21,
	ISO15Italian = 22,
	ISO17Spanish = 23,
	ISO21German = 24,
	ISO60DanishNorwegian = 25,
	ISO69French = 26,
	ISO10646UTF1 = 27,
	ISO646basic1983 = 28,
	INVARIANT = 29,
	ISO2IntlRefVersion = 30,
	NATSSEFI = 31,
	NATSSEFIADD = 32,
	NATSDANO = 33,
	NATSDANOADD = 34,
	ISO10Swedish = 35,
	KSC56011987 = 36,
	ISO2022KR = 37,
	EUCKR = 38,
	ISO2022JP = 39,
	ISO2022JP2 = 40,
	ISO13JISC6220jp = 41,
	ISO14JISC6220ro = 42,
	ISO16Portuguese = 43,
	ISO18Greek7Old = 44,
	ISO19LatinGreek = 45,
	ISO25French = 46,
	ISO27LatinGreek1 = 47,
	ISO5427Cyrillic = 48,
	ISO42JISC62261978 = 49,
	ISO47BSViewdata = 50,
	ISO49INIS = 51,
	ISO50INIS8 = 52,
	ISO51INISCyrillic = 53,
	ISO54271981 = 54,
	ISO5428Greek = 55,
	ISO57GB1988 = 56,
	ISO58GB231280 = 57,
	ISO61Norwegian2 = 58,
	ISO70VideotexSupp1 = 59,
	ISO84Portuguese2 = 60,
	ISO85Spanish2 = 61,
	ISO86Hungarian = 62,
	ISO87JISX0208 = 63,
	ISO88Greek7 = 64,
	ISO89ASMO449 = 65,
	ISO90 = 66,
	ISO91JISC62291984a = 67,
	ISO92JISC62991984b = 68,
	ISO93JIS62291984badd = 69,
	ISO94JIS62291984hand = 70,
	ISO95JIS62291984handadd = 71,
	ISO96JISC62291984kana = 72,
	ISO2033 = 73,
	ISO99NAPLPS = 74,
	ISO102T617bit = 75,
	ISO103T618bit = 76,
	ISO111ECMACyrillic = 77,
	ISO121Canadian1 = 78,
	ISO122Canadian2 = 79,
	ISO123CSAZ24341985gr = 80,
	ISO88596E = 81,
	ISO88596I = 82,
	ISO128T101G2 = 83,
	ISO88598E = 84,
	ISO88598I = 85,
	ISO139CSN369103 = 86,
	ISO141JUSIB1002 = 87,
	ISO143IECP271 = 88,
	ISO146Serbian = 89,
	ISO147Macedonian = 90,
	ISO150 = 91,
	ISO151Cuba = 92,
	ISO6937Add = 93,
	ISO153GOST1976874 = 94,
	ISO8859Supp = 95,
	ISO10367Box = 96,
	ISO158Lap = 97,
	ISO159JISX02121990 = 98,
	ISO646Danish = 99,
	USDK = 100,
	DKUS = 101,
	KSC5636 = 102,
	Unicode11UTF7 = 103,
	ISO2022CN = 104,
	ISO2022CNEXT = 105,
	UTF8 = 106,
	ISO885913 = 109,
	ISO885914 = 110,
	ISO885915 = 111,
	ISO885916 = 112,
	GBK = 113,
	GB18030 = 114,
	OSDEBCDICDF0415 = 115,
	OSDEBCDICDF03IRV = 116,
	OSDEBCDICDF041 = 117,
	ISO115481 = 118,
	KZ1048 = 119,
	Unicode = 1000,
	UCS4 = 1001,
	UnicodeASCII = 1002,
	UnicodeLatin1 = 1003,
	UnicodeJapanese = 1004,
	UnicodeIBM1261 = 1005,
	UnicodeIBM1268 = 1006,
	UnicodeIBM1276 = 1007,
	UnicodeIBM1264 = 1008,
	UnicodeIBM1265 = 1009,
	Unicode11 = 1010,
	SCSU = 1011,
	UTF7 = 1012,
	UTF16BE = 1013,
	UTF16LE = 1014,
	UTF16 = 1015,
	CESU8 = 1016,
	UTF32 = 1017,
	UTF32BE = 1018,
	UTF32LE = 1019,
	BOCU1 = 1020,
	UTF7IMAP = 1021,
	Windows30Latin1 = 2000,
	Windows31Latin1 = 2001,
	Windows31Latin2 = 2002,
	Windows31Latin5 = 2003,
	HPRoman8 = 2004,
	AdobeStandardEncoding = 2005,
	VenturaUS = 2006,
	VenturaInternational = 2007,
	DECMCS = 2008,
	PC850Multilingual = 2009,
	PCp852 = 2010,
	PC8CodePage437 = 2011,
	PC8DanishNorwegian = 2012,
	PC862LatinHebrew = 2013,
	PC8Turkish = 2014,
	IBMSymbols = 2015,
	IBMThai = 2016,
	HPLegal = 2017,
	HPPiFont = 2018,
	HPMath8 = 2019,
	HPPSMath = 2020,
	HPDesktop = 2021,
	VenturaMath = 2022,
	MicrosoftPublishing = 2023,
	Windows31J = 2024,
	GB2312 = 2025,
	Big5 = 2026,
	Macintosh = 2027,
	IBM037 = 2028,
	IBM038 = 2029,
	IBM273 = 2030,
	IBM274 = 2031,
	IBM275 = 2032,
	IBM277 = 2033,
	IBM278 = 2034,
	IBM280 = 2035,
	IBM281 = 2036,
	IBM284 = 2037,
	IBM285 = 2038,
	IBM290 = 2039,
	IBM297 = 2040,
	IBM420 = 2041,
	IBM423 = 2042,
	IBM424 = 2043,
	IBM500 = 2044,
	IBM851 = 2045,
	IBM855 = 2046,
	IBM857 = 2047,
	IBM860 = 2048,
	IBM861 = 2049,
	IBM863 = 2050,
	IBM864 = 2051,
	IBM865 = 2052,
	IBM868 = 2053,
	IBM869 = 2054,
	IBM870 = 2055,
	IBM871 = 2056,
	IBM880 = 2057,
	IBM891 = 2058,
	IBM903 = 2059,
	IBBM904 = 2060,
	IBM905 = 2061,
	IBM918 = 2062,
	IBM1026 = 2063,
	IBMEBCDICATDE = 2064,
	EBCDICATDEA = 2065,
	EBCDICCAFR = 2066,
	EBCDICDKNO = 2067,
	EBCDICDKNOA = 2068,
	EBCDICFISE = 2069,
	EBCDICFISEA = 2070,
	EBCDICFR = 2071,
	EBCDICIT = 2072,
	EBCDICPT = 2073,
	EBCDICES = 2074,
	EBCDICESA = 2075,
	EBCDICESS = 2076,
	EBCDICUK = 2077,
	EBCDICUS = 2078,
	Unknown8BiT = 2079,
	Mnemonic = 2080,
	Mnem = 2081,
	VISCII = 2082,
	VIQR = 2083,
	KOI8R = 2084,
	HZGB2312 = 2085,
	IBM866 = 2086,
	PC775Baltic = 2087,
	KOI8U = 2088,
	IBM00858 = 2089,
	IBM00924 = 2090,
	IBM01140 = 2091,
	IBM01141 = 2092,
	IBM01142 = 2093,
	IBM01143 = 2094,
	IBM01144 = 2095,
	IBM01145 = 2096,
	IBM01146 = 2097,
	IBM01147 = 2098,
	IBM01148 = 2099,
	IBM01149 = 2100,
	Big5HKSCS = 2101,
	IBM1047 = 2102,
	PTCP154 = 2103,
	Amiga1251 = 2104,
	KOI7switched = 2105,
	BRF = 2106,
	TSCII = 2107,
	CP51932 = 2108,
	windows874 = 2109,
	windows1250 = 2250,
	windows1251 = 2251,
	windows1252 = 2252,
	windows1253 = 2253,
	windows1254 = 2254,
	windows1255 = 2255,
	windows1256 = 2256,
	windows1257 = 2257,
	windows1258 = 2258,
	TIS620 = 2259,
	CP50220 = 2260,
};

template <::std::integral char_type = char>
inline constexpr char_type const *MIB_to_literal(MIB_enum mib) noexcept
{
	using enum MIB_enum;
	if constexpr (sizeof(char_type) == 1)
	{
		switch (mib)
		{
		case ASCII:
			return reinterpret_cast<char_type const *>(u8"ASCII");
		case ISOLatin1:
			return reinterpret_cast<char_type const *>(u8"ISOLatin1");
		case ISOLatin2:
			return reinterpret_cast<char_type const *>(u8"ISOLatin2");
		case ISOLatin3:
			return reinterpret_cast<char_type const *>(u8"ISOLatin3");
		case ISOLatin4:
			return reinterpret_cast<char_type const *>(u8"ISOLatin4");
		case ISOLatinCyrillic:
			return reinterpret_cast<char_type const *>(u8"ISOLatinCyrillic");
		case ISOLatinArabic:
			return reinterpret_cast<char_type const *>(u8"ISOLatinArabic");
		case ISOLatinGreek:
			return reinterpret_cast<char_type const *>(u8"ISOLatinGreek");
		case ISOLatinHebrew:
			return reinterpret_cast<char_type const *>(u8"ISOLatinHebrew");
		case ISOLatin5:
			return reinterpret_cast<char_type const *>(u8"ISOLatin5");
		case ISOLatin6:
			return reinterpret_cast<char_type const *>(u8"ISOLatin6");
		case ISOTextComm:
			return reinterpret_cast<char_type const *>(u8"ISOTextComm");
		case HalfWidthKatakana:
			return reinterpret_cast<char_type const *>(u8"HalfWidthKatakana");
		case JISEncoding:
			return reinterpret_cast<char_type const *>(u8"JISEncoding");
		case ShiftJIS:
			return reinterpret_cast<char_type const *>(u8"ShiftJIS");
		case EUCPkdFmtJapanese:
			return reinterpret_cast<char_type const *>(u8"EUCPkdFmtJapanese");
		case EUCFixWidJapanese:
			return reinterpret_cast<char_type const *>(u8"EUCFixWidJapanese");
		case ISO4UnitedKingdom:
			return reinterpret_cast<char_type const *>(u8"ISO4UnitedKingdom");
		case ISO11SwedishForNames:
			return reinterpret_cast<char_type const *>(u8"ISO11SwedishForNames");
		case ISO15Italian:
			return reinterpret_cast<char_type const *>(u8"ISO15Italian");
		case ISO17Spanish:
			return reinterpret_cast<char_type const *>(u8"ISO17Spanish");
		case ISO21German:
			return reinterpret_cast<char_type const *>(u8"ISO21German");
		case ISO60DanishNorwegian:
			return reinterpret_cast<char_type const *>(u8"ISO60DanishNorwegian");
		case ISO69French:
			return reinterpret_cast<char_type const *>(u8"ISO69French");
		case ISO10646UTF1:
			return reinterpret_cast<char_type const *>(u8"ISO10646UTF1");
		case ISO646basic1983:
			return reinterpret_cast<char_type const *>(u8"ISO646basic1983");
		case INVARIANT:
			return reinterpret_cast<char_type const *>(u8"INVARIANT");
		case ISO2IntlRefVersion:
			return reinterpret_cast<char_type const *>(u8"ISO2IntlRefVersion");
		case NATSSEFI:
			return reinterpret_cast<char_type const *>(u8"NATSSEFI");
		case NATSSEFIADD:
			return reinterpret_cast<char_type const *>(u8"NATSSEFIADD");
		case NATSDANO:
			return reinterpret_cast<char_type const *>(u8"NATSDANO");
		case NATSDANOADD:
			return reinterpret_cast<char_type const *>(u8"NATSDANOADD");
		case ISO10Swedish:
			return reinterpret_cast<char_type const *>(u8"ISO10Swedish");
		case KSC56011987:
			return reinterpret_cast<char_type const *>(u8"KSC56011987");
		case ISO2022KR:
			return reinterpret_cast<char_type const *>(u8"ISO2022KR");
		case EUCKR:
			return reinterpret_cast<char_type const *>(u8"EUCKR");
		case ISO2022JP:
			return reinterpret_cast<char_type const *>(u8"ISO2022JP");
		case ISO2022JP2:
			return reinterpret_cast<char_type const *>(u8"ISO2022JP2");
		case ISO13JISC6220jp:
			return reinterpret_cast<char_type const *>(u8"ISO13JISC6220jp");
		case ISO14JISC6220ro:
			return reinterpret_cast<char_type const *>(u8"ISO14JISC6220ro");
		case ISO16Portuguese:
			return reinterpret_cast<char_type const *>(u8"ISO16Portuguese");
		case ISO18Greek7Old:
			return reinterpret_cast<char_type const *>(u8"ISO18Greek7Old");
		case ISO19LatinGreek:
			return reinterpret_cast<char_type const *>(u8"ISO19LatinGreek");
		case ISO25French:
			return reinterpret_cast<char_type const *>(u8"ISO25French");
		case ISO27LatinGreek1:
			return reinterpret_cast<char_type const *>(u8"ISO27LatinGreek1");
		case ISO5427Cyrillic:
			return reinterpret_cast<char_type const *>(u8"ISO5427Cyrillic");
		case ISO42JISC62261978:
			return reinterpret_cast<char_type const *>(u8"ISO42JISC62261978");
		case ISO47BSViewdata:
			return reinterpret_cast<char_type const *>(u8"ISO47BSViewdata");
		case ISO49INIS:
			return reinterpret_cast<char_type const *>(u8"ISO49INIS");
		case ISO50INIS8:
			return reinterpret_cast<char_type const *>(u8"ISO50INIS8");
		case ISO51INISCyrillic:
			return reinterpret_cast<char_type const *>(u8"ISO51INISCyrillic");
		case ISO54271981:
			return reinterpret_cast<char_type const *>(u8"ISO54271981");
		case ISO5428Greek:
			return reinterpret_cast<char_type const *>(u8"ISO5428Greek");
		case ISO57GB1988:
			return reinterpret_cast<char_type const *>(u8"ISO57GB1988");
		case ISO58GB231280:
			return reinterpret_cast<char_type const *>(u8"ISO58GB231280");
		case ISO61Norwegian2:
			return reinterpret_cast<char_type const *>(u8"ISO61Norwegian2");
		case ISO70VideotexSupp1:
			return reinterpret_cast<char_type const *>(u8"ISO70VideotexSupp1");
		case ISO84Portuguese2:
			return reinterpret_cast<char_type const *>(u8"ISO84Portuguese2");
		case ISO85Spanish2:
			return reinterpret_cast<char_type const *>(u8"ISO85Spanish2");
		case ISO86Hungarian:
			return reinterpret_cast<char_type const *>(u8"ISO86Hungarian");
		case ISO87JISX0208:
			return reinterpret_cast<char_type const *>(u8"ISO87JISX0208");
		case ISO88Greek7:
			return reinterpret_cast<char_type const *>(u8"ISO88Greek7");
		case ISO89ASMO449:
			return reinterpret_cast<char_type const *>(u8"ISO89ASMO449");
		case ISO90:
			return reinterpret_cast<char_type const *>(u8"ISO90");
		case ISO91JISC62291984a:
			return reinterpret_cast<char_type const *>(u8"ISO91JISC62291984a");
		case ISO92JISC62991984b:
			return reinterpret_cast<char_type const *>(u8"ISO92JISC62991984b");
		case ISO93JIS62291984badd:
			return reinterpret_cast<char_type const *>(u8"ISO93JIS62291984badd");
		case ISO94JIS62291984hand:
			return reinterpret_cast<char_type const *>(u8"ISO94JIS62291984hand");
		case ISO95JIS62291984handadd:
			return reinterpret_cast<char_type const *>(u8"ISO95JIS62291984handadd");
		case ISO96JISC62291984kana:
			return reinterpret_cast<char_type const *>(u8"ISO96JISC62291984kana");
		case ISO2033:
			return reinterpret_cast<char_type const *>(u8"ISO2033");
		case ISO99NAPLPS:
			return reinterpret_cast<char_type const *>(u8"ISO99NAPLPS");
		case ISO102T617bit:
			return reinterpret_cast<char_type const *>(u8"ISO102T617bit");
		case ISO103T618bit:
			return reinterpret_cast<char_type const *>(u8"ISO103T618bit");
		case ISO111ECMACyrillic:
			return reinterpret_cast<char_type const *>(u8"ISO111ECMACyrillic");
		case ISO121Canadian1:
			return reinterpret_cast<char_type const *>(u8"ISO121Canadian1");
		case ISO122Canadian2:
			return reinterpret_cast<char_type const *>(u8"ISO122Canadian2");
		case ISO123CSAZ24341985gr:
			return reinterpret_cast<char_type const *>(u8"ISO123CSAZ24341985gr");
		case ISO88596E:
			return reinterpret_cast<char_type const *>(u8"ISO88596E");
		case ISO88596I:
			return reinterpret_cast<char_type const *>(u8"ISO88596I");
		case ISO128T101G2:
			return reinterpret_cast<char_type const *>(u8"ISO128T101G2");
		case ISO88598E:
			return reinterpret_cast<char_type const *>(u8"ISO88598E");
		case ISO88598I:
			return reinterpret_cast<char_type const *>(u8"ISO88598I");
		case ISO139CSN369103:
			return reinterpret_cast<char_type const *>(u8"ISO139CSN369103");
		case ISO141JUSIB1002:
			return reinterpret_cast<char_type const *>(u8"ISO141JUSIB1002");
		case ISO143IECP271:
			return reinterpret_cast<char_type const *>(u8"ISO143IECP271");
		case ISO146Serbian:
			return reinterpret_cast<char_type const *>(u8"ISO146Serbian");
		case ISO147Macedonian:
			return reinterpret_cast<char_type const *>(u8"ISO147Macedonian");
		case ISO150:
			return reinterpret_cast<char_type const *>(u8"ISO150");
		case ISO151Cuba:
			return reinterpret_cast<char_type const *>(u8"ISO151Cuba");
		case ISO6937Add:
			return reinterpret_cast<char_type const *>(u8"ISO6937Add");
		case ISO153GOST1976874:
			return reinterpret_cast<char_type const *>(u8"ISO153GOST1976874");
		case ISO8859Supp:
			return reinterpret_cast<char_type const *>(u8"ISO8859Supp");
		case ISO10367Box:
			return reinterpret_cast<char_type const *>(u8"ISO10367Box");
		case ISO158Lap:
			return reinterpret_cast<char_type const *>(u8"ISO158Lap");
		case ISO159JISX02121990:
			return reinterpret_cast<char_type const *>(u8"ISO159JISX02121990");
		case ISO646Danish:
			return reinterpret_cast<char_type const *>(u8"ISO646Danish");
		case USDK:
			return reinterpret_cast<char_type const *>(u8"USDK");
		case DKUS:
			return reinterpret_cast<char_type const *>(u8"DKUS");
		case KSC5636:
			return reinterpret_cast<char_type const *>(u8"KSC5636");
		case Unicode11UTF7:
			return reinterpret_cast<char_type const *>(u8"Unicode11UTF7");
		case ISO2022CN:
			return reinterpret_cast<char_type const *>(u8"ISO2022CN");
		case ISO2022CNEXT:
			return reinterpret_cast<char_type const *>(u8"ISO2022CNEXT");
		case UTF8:
			return reinterpret_cast<char_type const *>(u8"UTF8");
		case ISO885913:
			return reinterpret_cast<char_type const *>(u8"ISO885913");
		case ISO885914:
			return reinterpret_cast<char_type const *>(u8"ISO885914");
		case ISO885915:
			return reinterpret_cast<char_type const *>(u8"ISO885915");
		case ISO885916:
			return reinterpret_cast<char_type const *>(u8"ISO885916");
		case GBK:
			return reinterpret_cast<char_type const *>(u8"GBK");
		case GB18030:
			return reinterpret_cast<char_type const *>(u8"GB18030");
		case OSDEBCDICDF0415:
			return reinterpret_cast<char_type const *>(u8"OSDEBCDICDF0415");
		case OSDEBCDICDF03IRV:
			return reinterpret_cast<char_type const *>(u8"OSDEBCDICDF03IRV");
		case OSDEBCDICDF041:
			return reinterpret_cast<char_type const *>(u8"OSDEBCDICDF041");
		case ISO115481:
			return reinterpret_cast<char_type const *>(u8"ISO115481");
		case KZ1048:
			return reinterpret_cast<char_type const *>(u8"KZ1048");
		case Unicode:
			return reinterpret_cast<char_type const *>(u8"Unicode");
		case UCS4:
			return reinterpret_cast<char_type const *>(u8"UCS4");
		case UnicodeASCII:
			return reinterpret_cast<char_type const *>(u8"UnicodeASCII");
		case UnicodeLatin1:
			return reinterpret_cast<char_type const *>(u8"UnicodeLatin1");
		case UnicodeJapanese:
			return reinterpret_cast<char_type const *>(u8"UnicodeJapanese");
		case UnicodeIBM1261:
			return reinterpret_cast<char_type const *>(u8"UnicodeIBM1261");
		case UnicodeIBM1268:
			return reinterpret_cast<char_type const *>(u8"UnicodeIBM1268");
		case UnicodeIBM1276:
			return reinterpret_cast<char_type const *>(u8"UnicodeIBM1276");
		case UnicodeIBM1264:
			return reinterpret_cast<char_type const *>(u8"UnicodeIBM1264");
		case UnicodeIBM1265:
			return reinterpret_cast<char_type const *>(u8"UnicodeIBM1265");
		case Unicode11:
			return reinterpret_cast<char_type const *>(u8"Unicode11");
		case SCSU:
			return reinterpret_cast<char_type const *>(u8"SCSU");
		case UTF7:
			return reinterpret_cast<char_type const *>(u8"UTF7");
		case UTF16BE:
			return reinterpret_cast<char_type const *>(u8"UTF16BE");
		case UTF16LE:
			return reinterpret_cast<char_type const *>(u8"UTF16LE");
		case UTF16:
			return reinterpret_cast<char_type const *>(u8"UTF16");
		case CESU8:
			return reinterpret_cast<char_type const *>(u8"CESU8");
		case UTF32:
			return reinterpret_cast<char_type const *>(u8"UTF32");
		case UTF32BE:
			return reinterpret_cast<char_type const *>(u8"UTF32BE");
		case UTF32LE:
			return reinterpret_cast<char_type const *>(u8"UTF32LE");
		case BOCU1:
			return reinterpret_cast<char_type const *>(u8"BOCU1");
		case UTF7IMAP:
			return reinterpret_cast<char_type const *>(u8"UTF7IMAP");
		case Windows30Latin1:
			return reinterpret_cast<char_type const *>(u8"Windows30Latin1");
		case Windows31Latin1:
			return reinterpret_cast<char_type const *>(u8"Windows31Latin1");
		case Windows31Latin2:
			return reinterpret_cast<char_type const *>(u8"Windows31Latin2");
		case Windows31Latin5:
			return reinterpret_cast<char_type const *>(u8"Windows31Latin5");
		case HPRoman8:
			return reinterpret_cast<char_type const *>(u8"HPRoman8");
		case AdobeStandardEncoding:
			return reinterpret_cast<char_type const *>(u8"AdobeStandardEncoding");
		case VenturaUS:
			return reinterpret_cast<char_type const *>(u8"VenturaUS");
		case VenturaInternational:
			return reinterpret_cast<char_type const *>(u8"VenturaInternational");
		case DECMCS:
			return reinterpret_cast<char_type const *>(u8"DECMCS");
		case PC850Multilingual:
			return reinterpret_cast<char_type const *>(u8"PC850Multilingual");
		case PCp852:
			return reinterpret_cast<char_type const *>(u8"PCp852");
		case PC8CodePage437:
			return reinterpret_cast<char_type const *>(u8"PC8CodePage437");
		case PC8DanishNorwegian:
			return reinterpret_cast<char_type const *>(u8"PC8DanishNorwegian");
		case PC862LatinHebrew:
			return reinterpret_cast<char_type const *>(u8"PC862LatinHebrew");
		case PC8Turkish:
			return reinterpret_cast<char_type const *>(u8"PC8Turkish");
		case IBMSymbols:
			return reinterpret_cast<char_type const *>(u8"IBMSymbols");
		case IBMThai:
			return reinterpret_cast<char_type const *>(u8"IBMThai");
		case HPLegal:
			return reinterpret_cast<char_type const *>(u8"HPLegal");
		case HPPiFont:
			return reinterpret_cast<char_type const *>(u8"HPPiFont");
		case HPMath8:
			return reinterpret_cast<char_type const *>(u8"HPMath8");
		case HPPSMath:
			return reinterpret_cast<char_type const *>(u8"HPPSMath");
		case HPDesktop:
			return reinterpret_cast<char_type const *>(u8"HPDesktop");
		case VenturaMath:
			return reinterpret_cast<char_type const *>(u8"VenturaMath");
		case MicrosoftPublishing:
			return reinterpret_cast<char_type const *>(u8"MicrosoftPublishing");
		case Windows31J:
			return reinterpret_cast<char_type const *>(u8"Windows31J");
		case GB2312:
			return reinterpret_cast<char_type const *>(u8"GB2312");
		case Big5:
			return reinterpret_cast<char_type const *>(u8"Big5");
		case Macintosh:
			return reinterpret_cast<char_type const *>(u8"Macintosh");
		case IBM037:
			return reinterpret_cast<char_type const *>(u8"IBM037");
		case IBM038:
			return reinterpret_cast<char_type const *>(u8"IBM038");
		case IBM273:
			return reinterpret_cast<char_type const *>(u8"IBM273");
		case IBM274:
			return reinterpret_cast<char_type const *>(u8"IBM274");
		case IBM275:
			return reinterpret_cast<char_type const *>(u8"IBM275");
		case IBM277:
			return reinterpret_cast<char_type const *>(u8"IBM277");
		case IBM278:
			return reinterpret_cast<char_type const *>(u8"IBM278");
		case IBM280:
			return reinterpret_cast<char_type const *>(u8"IBM280");
		case IBM281:
			return reinterpret_cast<char_type const *>(u8"IBM281");
		case IBM284:
			return reinterpret_cast<char_type const *>(u8"IBM284");
		case IBM285:
			return reinterpret_cast<char_type const *>(u8"IBM285");
		case IBM290:
			return reinterpret_cast<char_type const *>(u8"IBM290");
		case IBM297:
			return reinterpret_cast<char_type const *>(u8"IBM297");
		case IBM420:
			return reinterpret_cast<char_type const *>(u8"IBM420");
		case IBM423:
			return reinterpret_cast<char_type const *>(u8"IBM423");
		case IBM424:
			return reinterpret_cast<char_type const *>(u8"IBM424");
		case IBM500:
			return reinterpret_cast<char_type const *>(u8"IBM500");
		case IBM851:
			return reinterpret_cast<char_type const *>(u8"IBM851");
		case IBM855:
			return reinterpret_cast<char_type const *>(u8"IBM855");
		case IBM857:
			return reinterpret_cast<char_type const *>(u8"IBM857");
		case IBM860:
			return reinterpret_cast<char_type const *>(u8"IBM860");
		case IBM861:
			return reinterpret_cast<char_type const *>(u8"IBM861");
		case IBM863:
			return reinterpret_cast<char_type const *>(u8"IBM863");
		case IBM864:
			return reinterpret_cast<char_type const *>(u8"IBM864");
		case IBM865:
			return reinterpret_cast<char_type const *>(u8"IBM865");
		case IBM868:
			return reinterpret_cast<char_type const *>(u8"IBM868");
		case IBM869:
			return reinterpret_cast<char_type const *>(u8"IBM869");
		case IBM870:
			return reinterpret_cast<char_type const *>(u8"IBM870");
		case IBM871:
			return reinterpret_cast<char_type const *>(u8"IBM871");
		case IBM880:
			return reinterpret_cast<char_type const *>(u8"IBM880");
		case IBM891:
			return reinterpret_cast<char_type const *>(u8"IBM891");
		case IBM903:
			return reinterpret_cast<char_type const *>(u8"IBM903");
		case IBBM904:
			return reinterpret_cast<char_type const *>(u8"IBBM904");
		case IBM905:
			return reinterpret_cast<char_type const *>(u8"IBM905");
		case IBM918:
			return reinterpret_cast<char_type const *>(u8"IBM918");
		case IBM1026:
			return reinterpret_cast<char_type const *>(u8"IBM1026");
		case IBMEBCDICATDE:
			return reinterpret_cast<char_type const *>(u8"IBMEBCDICATDE");
		case EBCDICATDEA:
			return reinterpret_cast<char_type const *>(u8"EBCDICATDEA");
		case EBCDICCAFR:
			return reinterpret_cast<char_type const *>(u8"EBCDICCAFR");
		case EBCDICDKNO:
			return reinterpret_cast<char_type const *>(u8"EBCDICDKNO");
		case EBCDICDKNOA:
			return reinterpret_cast<char_type const *>(u8"EBCDICDKNOA");
		case EBCDICFISE:
			return reinterpret_cast<char_type const *>(u8"EBCDICFISE");
		case EBCDICFISEA:
			return reinterpret_cast<char_type const *>(u8"EBCDICFISEA");
		case EBCDICFR:
			return reinterpret_cast<char_type const *>(u8"EBCDICFR");
		case EBCDICIT:
			return reinterpret_cast<char_type const *>(u8"EBCDICIT");
		case EBCDICPT:
			return reinterpret_cast<char_type const *>(u8"EBCDICPT");
		case EBCDICES:
			return reinterpret_cast<char_type const *>(u8"EBCDICES");
		case EBCDICESA:
			return reinterpret_cast<char_type const *>(u8"EBCDICESA");
		case EBCDICESS:
			return reinterpret_cast<char_type const *>(u8"EBCDICESS");
		case EBCDICUK:
			return reinterpret_cast<char_type const *>(u8"EBCDICUK");
		case EBCDICUS:
			return reinterpret_cast<char_type const *>(u8"EBCDICUS");
		case Unknown8BiT:
			return reinterpret_cast<char_type const *>(u8"Unknown8BiT");
		case Mnemonic:
			return reinterpret_cast<char_type const *>(u8"Mnemonic");
		case Mnem:
			return reinterpret_cast<char_type const *>(u8"Mnem");
		case VISCII:
			return reinterpret_cast<char_type const *>(u8"VISCII");
		case VIQR:
			return reinterpret_cast<char_type const *>(u8"VIQR");
		case KOI8R:
			return reinterpret_cast<char_type const *>(u8"KOI8R");
		case HZGB2312:
			return reinterpret_cast<char_type const *>(u8"HZGB2312");
		case IBM866:
			return reinterpret_cast<char_type const *>(u8"IBM866");
		case PC775Baltic:
			return reinterpret_cast<char_type const *>(u8"PC775Baltic");
		case KOI8U:
			return reinterpret_cast<char_type const *>(u8"KOI8U");
		case IBM00858:
			return reinterpret_cast<char_type const *>(u8"IBM00858");
		case IBM00924:
			return reinterpret_cast<char_type const *>(u8"IBM00924");
		case IBM01140:
			return reinterpret_cast<char_type const *>(u8"IBM01140");
		case IBM01141:
			return reinterpret_cast<char_type const *>(u8"IBM01141");
		case IBM01142:
			return reinterpret_cast<char_type const *>(u8"IBM01142");
		case IBM01143:
			return reinterpret_cast<char_type const *>(u8"IBM01143");
		case IBM01144:
			return reinterpret_cast<char_type const *>(u8"IBM01144");
		case IBM01145:
			return reinterpret_cast<char_type const *>(u8"IBM01145");
		case IBM01146:
			return reinterpret_cast<char_type const *>(u8"IBM01146");
		case IBM01147:
			return reinterpret_cast<char_type const *>(u8"IBM01147");
		case IBM01148:
			return reinterpret_cast<char_type const *>(u8"IBM01148");
		case IBM01149:
			return reinterpret_cast<char_type const *>(u8"IBM01149");
		case Big5HKSCS:
			return reinterpret_cast<char_type const *>(u8"Big5HKSCS");
		case IBM1047:
			return reinterpret_cast<char_type const *>(u8"IBM1047");
		case PTCP154:
			return reinterpret_cast<char_type const *>(u8"PTCP154");
		case Amiga1251:
			return reinterpret_cast<char_type const *>(u8"Amiga1251");
		case KOI7switched:
			return reinterpret_cast<char_type const *>(u8"KOI7switched");
		case BRF:
			return reinterpret_cast<char_type const *>(u8"BRF");
		case TSCII:
			return reinterpret_cast<char_type const *>(u8"TSCII");
		case CP51932:
			return reinterpret_cast<char_type const *>(u8"CP51932");
		case windows874:
			return reinterpret_cast<char_type const *>(u8"windows874");
		case windows1250:
			return reinterpret_cast<char_type const *>(u8"windows1250");
		case windows1251:
			return reinterpret_cast<char_type const *>(u8"windows1251");
		case windows1252:
			return reinterpret_cast<char_type const *>(u8"windows1252");
		case windows1253:
			return reinterpret_cast<char_type const *>(u8"windows1253");
		case windows1254:
			return reinterpret_cast<char_type const *>(u8"windows1254");
		case windows1255:
			return reinterpret_cast<char_type const *>(u8"windows1255");
		case windows1256:
			return reinterpret_cast<char_type const *>(u8"windows1256");
		case windows1257:
			return reinterpret_cast<char_type const *>(u8"windows1257");
		case windows1258:
			return reinterpret_cast<char_type const *>(u8"windows1258");
		case TIS620:
			return reinterpret_cast<char_type const *>(u8"TIS620");
		case CP50220:
			return reinterpret_cast<char_type const *>(u8"CP50220");
		default:
			return reinterpret_cast<char_type const*>(u8"unknown");
		}
	}
	else if constexpr (sizeof(char_type) == 2)
	{
		switch (mib)
		{
		case ASCII:
			return reinterpret_cast<char_type const *>(u"ASCII");
		case ISOLatin1:
			return reinterpret_cast<char_type const *>(u"ISOLatin1");
		case ISOLatin2:
			return reinterpret_cast<char_type const *>(u"ISOLatin2");
		case ISOLatin3:
			return reinterpret_cast<char_type const *>(u"ISOLatin3");
		case ISOLatin4:
			return reinterpret_cast<char_type const *>(u"ISOLatin4");
		case ISOLatinCyrillic:
			return reinterpret_cast<char_type const *>(u"ISOLatinCyrillic");
		case ISOLatinArabic:
			return reinterpret_cast<char_type const *>(u"ISOLatinArabic");
		case ISOLatinGreek:
			return reinterpret_cast<char_type const *>(u"ISOLatinGreek");
		case ISOLatinHebrew:
			return reinterpret_cast<char_type const *>(u"ISOLatinHebrew");
		case ISOLatin5:
			return reinterpret_cast<char_type const *>(u"ISOLatin5");
		case ISOLatin6:
			return reinterpret_cast<char_type const *>(u"ISOLatin6");
		case ISOTextComm:
			return reinterpret_cast<char_type const *>(u"ISOTextComm");
		case HalfWidthKatakana:
			return reinterpret_cast<char_type const *>(u"HalfWidthKatakana");
		case JISEncoding:
			return reinterpret_cast<char_type const *>(u"JISEncoding");
		case ShiftJIS:
			return reinterpret_cast<char_type const *>(u"ShiftJIS");
		case EUCPkdFmtJapanese:
			return reinterpret_cast<char_type const *>(u"EUCPkdFmtJapanese");
		case EUCFixWidJapanese:
			return reinterpret_cast<char_type const *>(u"EUCFixWidJapanese");
		case ISO4UnitedKingdom:
			return reinterpret_cast<char_type const *>(u"ISO4UnitedKingdom");
		case ISO11SwedishForNames:
			return reinterpret_cast<char_type const *>(u"ISO11SwedishForNames");
		case ISO15Italian:
			return reinterpret_cast<char_type const *>(u"ISO15Italian");
		case ISO17Spanish:
			return reinterpret_cast<char_type const *>(u"ISO17Spanish");
		case ISO21German:
			return reinterpret_cast<char_type const *>(u"ISO21German");
		case ISO60DanishNorwegian:
			return reinterpret_cast<char_type const *>(u"ISO60DanishNorwegian");
		case ISO69French:
			return reinterpret_cast<char_type const *>(u"ISO69French");
		case ISO10646UTF1:
			return reinterpret_cast<char_type const *>(u"ISO10646UTF1");
		case ISO646basic1983:
			return reinterpret_cast<char_type const *>(u"ISO646basic1983");
		case INVARIANT:
			return reinterpret_cast<char_type const *>(u"INVARIANT");
		case ISO2IntlRefVersion:
			return reinterpret_cast<char_type const *>(u"ISO2IntlRefVersion");
		case NATSSEFI:
			return reinterpret_cast<char_type const *>(u"NATSSEFI");
		case NATSSEFIADD:
			return reinterpret_cast<char_type const *>(u"NATSSEFIADD");
		case NATSDANO:
			return reinterpret_cast<char_type const *>(u"NATSDANO");
		case NATSDANOADD:
			return reinterpret_cast<char_type const *>(u"NATSDANOADD");
		case ISO10Swedish:
			return reinterpret_cast<char_type const *>(u"ISO10Swedish");
		case KSC56011987:
			return reinterpret_cast<char_type const *>(u"KSC56011987");
		case ISO2022KR:
			return reinterpret_cast<char_type const *>(u"ISO2022KR");
		case EUCKR:
			return reinterpret_cast<char_type const *>(u"EUCKR");
		case ISO2022JP:
			return reinterpret_cast<char_type const *>(u"ISO2022JP");
		case ISO2022JP2:
			return reinterpret_cast<char_type const *>(u"ISO2022JP2");
		case ISO13JISC6220jp:
			return reinterpret_cast<char_type const *>(u"ISO13JISC6220jp");
		case ISO14JISC6220ro:
			return reinterpret_cast<char_type const *>(u"ISO14JISC6220ro");
		case ISO16Portuguese:
			return reinterpret_cast<char_type const *>(u"ISO16Portuguese");
		case ISO18Greek7Old:
			return reinterpret_cast<char_type const *>(u"ISO18Greek7Old");
		case ISO19LatinGreek:
			return reinterpret_cast<char_type const *>(u"ISO19LatinGreek");
		case ISO25French:
			return reinterpret_cast<char_type const *>(u"ISO25French");
		case ISO27LatinGreek1:
			return reinterpret_cast<char_type const *>(u"ISO27LatinGreek1");
		case ISO5427Cyrillic:
			return reinterpret_cast<char_type const *>(u"ISO5427Cyrillic");
		case ISO42JISC62261978:
			return reinterpret_cast<char_type const *>(u"ISO42JISC62261978");
		case ISO47BSViewdata:
			return reinterpret_cast<char_type const *>(u"ISO47BSViewdata");
		case ISO49INIS:
			return reinterpret_cast<char_type const *>(u"ISO49INIS");
		case ISO50INIS8:
			return reinterpret_cast<char_type const *>(u"ISO50INIS8");
		case ISO51INISCyrillic:
			return reinterpret_cast<char_type const *>(u"ISO51INISCyrillic");
		case ISO54271981:
			return reinterpret_cast<char_type const *>(u"ISO54271981");
		case ISO5428Greek:
			return reinterpret_cast<char_type const *>(u"ISO5428Greek");
		case ISO57GB1988:
			return reinterpret_cast<char_type const *>(u"ISO57GB1988");
		case ISO58GB231280:
			return reinterpret_cast<char_type const *>(u"ISO58GB231280");
		case ISO61Norwegian2:
			return reinterpret_cast<char_type const *>(u"ISO61Norwegian2");
		case ISO70VideotexSupp1:
			return reinterpret_cast<char_type const *>(u"ISO70VideotexSupp1");
		case ISO84Portuguese2:
			return reinterpret_cast<char_type const *>(u"ISO84Portuguese2");
		case ISO85Spanish2:
			return reinterpret_cast<char_type const *>(u"ISO85Spanish2");
		case ISO86Hungarian:
			return reinterpret_cast<char_type const *>(u"ISO86Hungarian");
		case ISO87JISX0208:
			return reinterpret_cast<char_type const *>(u"ISO87JISX0208");
		case ISO88Greek7:
			return reinterpret_cast<char_type const *>(u"ISO88Greek7");
		case ISO89ASMO449:
			return reinterpret_cast<char_type const *>(u"ISO89ASMO449");
		case ISO90:
			return reinterpret_cast<char_type const *>(u"ISO90");
		case ISO91JISC62291984a:
			return reinterpret_cast<char_type const *>(u"ISO91JISC62291984a");
		case ISO92JISC62991984b:
			return reinterpret_cast<char_type const *>(u"ISO92JISC62991984b");
		case ISO93JIS62291984badd:
			return reinterpret_cast<char_type const *>(u"ISO93JIS62291984badd");
		case ISO94JIS62291984hand:
			return reinterpret_cast<char_type const *>(u"ISO94JIS62291984hand");
		case ISO95JIS62291984handadd:
			return reinterpret_cast<char_type const *>(u"ISO95JIS62291984handadd");
		case ISO96JISC62291984kana:
			return reinterpret_cast<char_type const *>(u"ISO96JISC62291984kana");
		case ISO2033:
			return reinterpret_cast<char_type const *>(u"ISO2033");
		case ISO99NAPLPS:
			return reinterpret_cast<char_type const *>(u"ISO99NAPLPS");
		case ISO102T617bit:
			return reinterpret_cast<char_type const *>(u"ISO102T617bit");
		case ISO103T618bit:
			return reinterpret_cast<char_type const *>(u"ISO103T618bit");
		case ISO111ECMACyrillic:
			return reinterpret_cast<char_type const *>(u"ISO111ECMACyrillic");
		case ISO121Canadian1:
			return reinterpret_cast<char_type const *>(u"ISO121Canadian1");
		case ISO122Canadian2:
			return reinterpret_cast<char_type const *>(u"ISO122Canadian2");
		case ISO123CSAZ24341985gr:
			return reinterpret_cast<char_type const *>(u"ISO123CSAZ24341985gr");
		case ISO88596E:
			return reinterpret_cast<char_type const *>(u"ISO88596E");
		case ISO88596I:
			return reinterpret_cast<char_type const *>(u"ISO88596I");
		case ISO128T101G2:
			return reinterpret_cast<char_type const *>(u"ISO128T101G2");
		case ISO88598E:
			return reinterpret_cast<char_type const *>(u"ISO88598E");
		case ISO88598I:
			return reinterpret_cast<char_type const *>(u"ISO88598I");
		case ISO139CSN369103:
			return reinterpret_cast<char_type const *>(u"ISO139CSN369103");
		case ISO141JUSIB1002:
			return reinterpret_cast<char_type const *>(u"ISO141JUSIB1002");
		case ISO143IECP271:
			return reinterpret_cast<char_type const *>(u"ISO143IECP271");
		case ISO146Serbian:
			return reinterpret_cast<char_type const *>(u"ISO146Serbian");
		case ISO147Macedonian:
			return reinterpret_cast<char_type const *>(u"ISO147Macedonian");
		case ISO150:
			return reinterpret_cast<char_type const *>(u"ISO150");
		case ISO151Cuba:
			return reinterpret_cast<char_type const *>(u"ISO151Cuba");
		case ISO6937Add:
			return reinterpret_cast<char_type const *>(u"ISO6937Add");
		case ISO153GOST1976874:
			return reinterpret_cast<char_type const *>(u"ISO153GOST1976874");
		case ISO8859Supp:
			return reinterpret_cast<char_type const *>(u"ISO8859Supp");
		case ISO10367Box:
			return reinterpret_cast<char_type const *>(u"ISO10367Box");
		case ISO158Lap:
			return reinterpret_cast<char_type const *>(u"ISO158Lap");
		case ISO159JISX02121990:
			return reinterpret_cast<char_type const *>(u"ISO159JISX02121990");
		case ISO646Danish:
			return reinterpret_cast<char_type const *>(u"ISO646Danish");
		case USDK:
			return reinterpret_cast<char_type const *>(u"USDK");
		case DKUS:
			return reinterpret_cast<char_type const *>(u"DKUS");
		case KSC5636:
			return reinterpret_cast<char_type const *>(u"KSC5636");
		case Unicode11UTF7:
			return reinterpret_cast<char_type const *>(u"Unicode11UTF7");
		case ISO2022CN:
			return reinterpret_cast<char_type const *>(u"ISO2022CN");
		case ISO2022CNEXT:
			return reinterpret_cast<char_type const *>(u"ISO2022CNEXT");
		case UTF8:
			return reinterpret_cast<char_type const *>(u"UTF8");
		case ISO885913:
			return reinterpret_cast<char_type const *>(u"ISO885913");
		case ISO885914:
			return reinterpret_cast<char_type const *>(u"ISO885914");
		case ISO885915:
			return reinterpret_cast<char_type const *>(u"ISO885915");
		case ISO885916:
			return reinterpret_cast<char_type const *>(u"ISO885916");
		case GBK:
			return reinterpret_cast<char_type const *>(u"GBK");
		case GB18030:
			return reinterpret_cast<char_type const *>(u"GB18030");
		case OSDEBCDICDF0415:
			return reinterpret_cast<char_type const *>(u"OSDEBCDICDF0415");
		case OSDEBCDICDF03IRV:
			return reinterpret_cast<char_type const *>(u"OSDEBCDICDF03IRV");
		case OSDEBCDICDF041:
			return reinterpret_cast<char_type const *>(u"OSDEBCDICDF041");
		case ISO115481:
			return reinterpret_cast<char_type const *>(u"ISO115481");
		case KZ1048:
			return reinterpret_cast<char_type const *>(u"KZ1048");
		case Unicode:
			return reinterpret_cast<char_type const *>(u"Unicode");
		case UCS4:
			return reinterpret_cast<char_type const *>(u"UCS4");
		case UnicodeASCII:
			return reinterpret_cast<char_type const *>(u"UnicodeASCII");
		case UnicodeLatin1:
			return reinterpret_cast<char_type const *>(u"UnicodeLatin1");
		case UnicodeJapanese:
			return reinterpret_cast<char_type const *>(u"UnicodeJapanese");
		case UnicodeIBM1261:
			return reinterpret_cast<char_type const *>(u"UnicodeIBM1261");
		case UnicodeIBM1268:
			return reinterpret_cast<char_type const *>(u"UnicodeIBM1268");
		case UnicodeIBM1276:
			return reinterpret_cast<char_type const *>(u"UnicodeIBM1276");
		case UnicodeIBM1264:
			return reinterpret_cast<char_type const *>(u"UnicodeIBM1264");
		case UnicodeIBM1265:
			return reinterpret_cast<char_type const *>(u"UnicodeIBM1265");
		case Unicode11:
			return reinterpret_cast<char_type const *>(u"Unicode11");
		case SCSU:
			return reinterpret_cast<char_type const *>(u"SCSU");
		case UTF7:
			return reinterpret_cast<char_type const *>(u"UTF7");
		case UTF16BE:
			return reinterpret_cast<char_type const *>(u"UTF16BE");
		case UTF16LE:
			return reinterpret_cast<char_type const *>(u"UTF16LE");
		case UTF16:
			return reinterpret_cast<char_type const *>(u"UTF16");
		case CESU8:
			return reinterpret_cast<char_type const *>(u"CESU8");
		case UTF32:
			return reinterpret_cast<char_type const *>(u"UTF32");
		case UTF32BE:
			return reinterpret_cast<char_type const *>(u"UTF32BE");
		case UTF32LE:
			return reinterpret_cast<char_type const *>(u"UTF32LE");
		case BOCU1:
			return reinterpret_cast<char_type const *>(u"BOCU1");
		case UTF7IMAP:
			return reinterpret_cast<char_type const *>(u"UTF7IMAP");
		case Windows30Latin1:
			return reinterpret_cast<char_type const *>(u"Windows30Latin1");
		case Windows31Latin1:
			return reinterpret_cast<char_type const *>(u"Windows31Latin1");
		case Windows31Latin2:
			return reinterpret_cast<char_type const *>(u"Windows31Latin2");
		case Windows31Latin5:
			return reinterpret_cast<char_type const *>(u"Windows31Latin5");
		case HPRoman8:
			return reinterpret_cast<char_type const *>(u"HPRoman8");
		case AdobeStandardEncoding:
			return reinterpret_cast<char_type const *>(u"AdobeStandardEncoding");
		case VenturaUS:
			return reinterpret_cast<char_type const *>(u"VenturaUS");
		case VenturaInternational:
			return reinterpret_cast<char_type const *>(u"VenturaInternational");
		case DECMCS:
			return reinterpret_cast<char_type const *>(u"DECMCS");
		case PC850Multilingual:
			return reinterpret_cast<char_type const *>(u"PC850Multilingual");
		case PCp852:
			return reinterpret_cast<char_type const *>(u"PCp852");
		case PC8CodePage437:
			return reinterpret_cast<char_type const *>(u"PC8CodePage437");
		case PC8DanishNorwegian:
			return reinterpret_cast<char_type const *>(u"PC8DanishNorwegian");
		case PC862LatinHebrew:
			return reinterpret_cast<char_type const *>(u"PC862LatinHebrew");
		case PC8Turkish:
			return reinterpret_cast<char_type const *>(u"PC8Turkish");
		case IBMSymbols:
			return reinterpret_cast<char_type const *>(u"IBMSymbols");
		case IBMThai:
			return reinterpret_cast<char_type const *>(u"IBMThai");
		case HPLegal:
			return reinterpret_cast<char_type const *>(u"HPLegal");
		case HPPiFont:
			return reinterpret_cast<char_type const *>(u"HPPiFont");
		case HPMath8:
			return reinterpret_cast<char_type const *>(u"HPMath8");
		case HPPSMath:
			return reinterpret_cast<char_type const *>(u"HPPSMath");
		case HPDesktop:
			return reinterpret_cast<char_type const *>(u"HPDesktop");
		case VenturaMath:
			return reinterpret_cast<char_type const *>(u"VenturaMath");
		case MicrosoftPublishing:
			return reinterpret_cast<char_type const *>(u"MicrosoftPublishing");
		case Windows31J:
			return reinterpret_cast<char_type const *>(u"Windows31J");
		case GB2312:
			return reinterpret_cast<char_type const *>(u"GB2312");
		case Big5:
			return reinterpret_cast<char_type const *>(u"Big5");
		case Macintosh:
			return reinterpret_cast<char_type const *>(u"Macintosh");
		case IBM037:
			return reinterpret_cast<char_type const *>(u"IBM037");
		case IBM038:
			return reinterpret_cast<char_type const *>(u"IBM038");
		case IBM273:
			return reinterpret_cast<char_type const *>(u"IBM273");
		case IBM274:
			return reinterpret_cast<char_type const *>(u"IBM274");
		case IBM275:
			return reinterpret_cast<char_type const *>(u"IBM275");
		case IBM277:
			return reinterpret_cast<char_type const *>(u"IBM277");
		case IBM278:
			return reinterpret_cast<char_type const *>(u"IBM278");
		case IBM280:
			return reinterpret_cast<char_type const *>(u"IBM280");
		case IBM281:
			return reinterpret_cast<char_type const *>(u"IBM281");
		case IBM284:
			return reinterpret_cast<char_type const *>(u"IBM284");
		case IBM285:
			return reinterpret_cast<char_type const *>(u"IBM285");
		case IBM290:
			return reinterpret_cast<char_type const *>(u"IBM290");
		case IBM297:
			return reinterpret_cast<char_type const *>(u"IBM297");
		case IBM420:
			return reinterpret_cast<char_type const *>(u"IBM420");
		case IBM423:
			return reinterpret_cast<char_type const *>(u"IBM423");
		case IBM424:
			return reinterpret_cast<char_type const *>(u"IBM424");
		case IBM500:
			return reinterpret_cast<char_type const *>(u"IBM500");
		case IBM851:
			return reinterpret_cast<char_type const *>(u"IBM851");
		case IBM855:
			return reinterpret_cast<char_type const *>(u"IBM855");
		case IBM857:
			return reinterpret_cast<char_type const *>(u"IBM857");
		case IBM860:
			return reinterpret_cast<char_type const *>(u"IBM860");
		case IBM861:
			return reinterpret_cast<char_type const *>(u"IBM861");
		case IBM863:
			return reinterpret_cast<char_type const *>(u"IBM863");
		case IBM864:
			return reinterpret_cast<char_type const *>(u"IBM864");
		case IBM865:
			return reinterpret_cast<char_type const *>(u"IBM865");
		case IBM868:
			return reinterpret_cast<char_type const *>(u"IBM868");
		case IBM869:
			return reinterpret_cast<char_type const *>(u"IBM869");
		case IBM870:
			return reinterpret_cast<char_type const *>(u"IBM870");
		case IBM871:
			return reinterpret_cast<char_type const *>(u"IBM871");
		case IBM880:
			return reinterpret_cast<char_type const *>(u"IBM880");
		case IBM891:
			return reinterpret_cast<char_type const *>(u"IBM891");
		case IBM903:
			return reinterpret_cast<char_type const *>(u"IBM903");
		case IBBM904:
			return reinterpret_cast<char_type const *>(u"IBBM904");
		case IBM905:
			return reinterpret_cast<char_type const *>(u"IBM905");
		case IBM918:
			return reinterpret_cast<char_type const *>(u"IBM918");
		case IBM1026:
			return reinterpret_cast<char_type const *>(u"IBM1026");
		case IBMEBCDICATDE:
			return reinterpret_cast<char_type const *>(u"IBMEBCDICATDE");
		case EBCDICATDEA:
			return reinterpret_cast<char_type const *>(u"EBCDICATDEA");
		case EBCDICCAFR:
			return reinterpret_cast<char_type const *>(u"EBCDICCAFR");
		case EBCDICDKNO:
			return reinterpret_cast<char_type const *>(u"EBCDICDKNO");
		case EBCDICDKNOA:
			return reinterpret_cast<char_type const *>(u"EBCDICDKNOA");
		case EBCDICFISE:
			return reinterpret_cast<char_type const *>(u"EBCDICFISE");
		case EBCDICFISEA:
			return reinterpret_cast<char_type const *>(u"EBCDICFISEA");
		case EBCDICFR:
			return reinterpret_cast<char_type const *>(u"EBCDICFR");
		case EBCDICIT:
			return reinterpret_cast<char_type const *>(u"EBCDICIT");
		case EBCDICPT:
			return reinterpret_cast<char_type const *>(u"EBCDICPT");
		case EBCDICES:
			return reinterpret_cast<char_type const *>(u"EBCDICES");
		case EBCDICESA:
			return reinterpret_cast<char_type const *>(u"EBCDICESA");
		case EBCDICESS:
			return reinterpret_cast<char_type const *>(u"EBCDICESS");
		case EBCDICUK:
			return reinterpret_cast<char_type const *>(u"EBCDICUK");
		case EBCDICUS:
			return reinterpret_cast<char_type const *>(u"EBCDICUS");
		case Unknown8BiT:
			return reinterpret_cast<char_type const *>(u"Unknown8BiT");
		case Mnemonic:
			return reinterpret_cast<char_type const *>(u"Mnemonic");
		case Mnem:
			return reinterpret_cast<char_type const *>(u"Mnem");
		case VISCII:
			return reinterpret_cast<char_type const *>(u"VISCII");
		case VIQR:
			return reinterpret_cast<char_type const *>(u"VIQR");
		case KOI8R:
			return reinterpret_cast<char_type const *>(u"KOI8R");
		case HZGB2312:
			return reinterpret_cast<char_type const *>(u"HZGB2312");
		case IBM866:
			return reinterpret_cast<char_type const *>(u"IBM866");
		case PC775Baltic:
			return reinterpret_cast<char_type const *>(u"PC775Baltic");
		case KOI8U:
			return reinterpret_cast<char_type const *>(u"KOI8U");
		case IBM00858:
			return reinterpret_cast<char_type const *>(u"IBM00858");
		case IBM00924:
			return reinterpret_cast<char_type const *>(u"IBM00924");
		case IBM01140:
			return reinterpret_cast<char_type const *>(u"IBM01140");
		case IBM01141:
			return reinterpret_cast<char_type const *>(u"IBM01141");
		case IBM01142:
			return reinterpret_cast<char_type const *>(u"IBM01142");
		case IBM01143:
			return reinterpret_cast<char_type const *>(u"IBM01143");
		case IBM01144:
			return reinterpret_cast<char_type const *>(u"IBM01144");
		case IBM01145:
			return reinterpret_cast<char_type const *>(u"IBM01145");
		case IBM01146:
			return reinterpret_cast<char_type const *>(u"IBM01146");
		case IBM01147:
			return reinterpret_cast<char_type const *>(u"IBM01147");
		case IBM01148:
			return reinterpret_cast<char_type const *>(u"IBM01148");
		case IBM01149:
			return reinterpret_cast<char_type const *>(u"IBM01149");
		case Big5HKSCS:
			return reinterpret_cast<char_type const *>(u"Big5HKSCS");
		case IBM1047:
			return reinterpret_cast<char_type const *>(u"IBM1047");
		case PTCP154:
			return reinterpret_cast<char_type const *>(u"PTCP154");
		case Amiga1251:
			return reinterpret_cast<char_type const *>(u"Amiga1251");
		case KOI7switched:
			return reinterpret_cast<char_type const *>(u"KOI7switched");
		case BRF:
			return reinterpret_cast<char_type const *>(u"BRF");
		case TSCII:
			return reinterpret_cast<char_type const *>(u"TSCII");
		case CP51932:
			return reinterpret_cast<char_type const *>(u"CP51932");
		case windows874:
			return reinterpret_cast<char_type const *>(u"windows874");
		case windows1250:
			return reinterpret_cast<char_type const *>(u"windows1250");
		case windows1251:
			return reinterpret_cast<char_type const *>(u"windows1251");
		case windows1252:
			return reinterpret_cast<char_type const *>(u"windows1252");
		case windows1253:
			return reinterpret_cast<char_type const *>(u"windows1253");
		case windows1254:
			return reinterpret_cast<char_type const *>(u"windows1254");
		case windows1255:
			return reinterpret_cast<char_type const *>(u"windows1255");
		case windows1256:
			return reinterpret_cast<char_type const *>(u"windows1256");
		case windows1257:
			return reinterpret_cast<char_type const *>(u"windows1257");
		case windows1258:
			return reinterpret_cast<char_type const *>(u"windows1258");
		case TIS620:
			return reinterpret_cast<char_type const *>(u"TIS620");
		case CP50220:
			return reinterpret_cast<char_type const *>(u"CP50220");
		default:
			return reinterpret_cast<char_type const*>(u"unknown");
		}
	}
	else
	{
		switch (mib)
		{
		case ASCII:
			return reinterpret_cast<char_type const *>(U"ASCII");
		case ISOLatin1:
			return reinterpret_cast<char_type const *>(U"ISOLatin1");
		case ISOLatin2:
			return reinterpret_cast<char_type const *>(U"ISOLatin2");
		case ISOLatin3:
			return reinterpret_cast<char_type const *>(U"ISOLatin3");
		case ISOLatin4:
			return reinterpret_cast<char_type const *>(U"ISOLatin4");
		case ISOLatinCyrillic:
			return reinterpret_cast<char_type const *>(U"ISOLatinCyrillic");
		case ISOLatinArabic:
			return reinterpret_cast<char_type const *>(U"ISOLatinArabic");
		case ISOLatinGreek:
			return reinterpret_cast<char_type const *>(U"ISOLatinGreek");
		case ISOLatinHebrew:
			return reinterpret_cast<char_type const *>(U"ISOLatinHebrew");
		case ISOLatin5:
			return reinterpret_cast<char_type const *>(U"ISOLatin5");
		case ISOLatin6:
			return reinterpret_cast<char_type const *>(U"ISOLatin6");
		case ISOTextComm:
			return reinterpret_cast<char_type const *>(U"ISOTextComm");
		case HalfWidthKatakana:
			return reinterpret_cast<char_type const *>(U"HalfWidthKatakana");
		case JISEncoding:
			return reinterpret_cast<char_type const *>(U"JISEncoding");
		case ShiftJIS:
			return reinterpret_cast<char_type const *>(U"ShiftJIS");
		case EUCPkdFmtJapanese:
			return reinterpret_cast<char_type const *>(U"EUCPkdFmtJapanese");
		case EUCFixWidJapanese:
			return reinterpret_cast<char_type const *>(U"EUCFixWidJapanese");
		case ISO4UnitedKingdom:
			return reinterpret_cast<char_type const *>(U"ISO4UnitedKingdom");
		case ISO11SwedishForNames:
			return reinterpret_cast<char_type const *>(U"ISO11SwedishForNames");
		case ISO15Italian:
			return reinterpret_cast<char_type const *>(U"ISO15Italian");
		case ISO17Spanish:
			return reinterpret_cast<char_type const *>(U"ISO17Spanish");
		case ISO21German:
			return reinterpret_cast<char_type const *>(U"ISO21German");
		case ISO60DanishNorwegian:
			return reinterpret_cast<char_type const *>(U"ISO60DanishNorwegian");
		case ISO69French:
			return reinterpret_cast<char_type const *>(U"ISO69French");
		case ISO10646UTF1:
			return reinterpret_cast<char_type const *>(U"ISO10646UTF1");
		case ISO646basic1983:
			return reinterpret_cast<char_type const *>(U"ISO646basic1983");
		case INVARIANT:
			return reinterpret_cast<char_type const *>(U"INVARIANT");
		case ISO2IntlRefVersion:
			return reinterpret_cast<char_type const *>(U"ISO2IntlRefVersion");
		case NATSSEFI:
			return reinterpret_cast<char_type const *>(U"NATSSEFI");
		case NATSSEFIADD:
			return reinterpret_cast<char_type const *>(U"NATSSEFIADD");
		case NATSDANO:
			return reinterpret_cast<char_type const *>(U"NATSDANO");
		case NATSDANOADD:
			return reinterpret_cast<char_type const *>(U"NATSDANOADD");
		case ISO10Swedish:
			return reinterpret_cast<char_type const *>(U"ISO10Swedish");
		case KSC56011987:
			return reinterpret_cast<char_type const *>(U"KSC56011987");
		case ISO2022KR:
			return reinterpret_cast<char_type const *>(U"ISO2022KR");
		case EUCKR:
			return reinterpret_cast<char_type const *>(U"EUCKR");
		case ISO2022JP:
			return reinterpret_cast<char_type const *>(U"ISO2022JP");
		case ISO2022JP2:
			return reinterpret_cast<char_type const *>(U"ISO2022JP2");
		case ISO13JISC6220jp:
			return reinterpret_cast<char_type const *>(U"ISO13JISC6220jp");
		case ISO14JISC6220ro:
			return reinterpret_cast<char_type const *>(U"ISO14JISC6220ro");
		case ISO16Portuguese:
			return reinterpret_cast<char_type const *>(U"ISO16Portuguese");
		case ISO18Greek7Old:
			return reinterpret_cast<char_type const *>(U"ISO18Greek7Old");
		case ISO19LatinGreek:
			return reinterpret_cast<char_type const *>(U"ISO19LatinGreek");
		case ISO25French:
			return reinterpret_cast<char_type const *>(U"ISO25French");
		case ISO27LatinGreek1:
			return reinterpret_cast<char_type const *>(U"ISO27LatinGreek1");
		case ISO5427Cyrillic:
			return reinterpret_cast<char_type const *>(U"ISO5427Cyrillic");
		case ISO42JISC62261978:
			return reinterpret_cast<char_type const *>(U"ISO42JISC62261978");
		case ISO47BSViewdata:
			return reinterpret_cast<char_type const *>(U"ISO47BSViewdata");
		case ISO49INIS:
			return reinterpret_cast<char_type const *>(U"ISO49INIS");
		case ISO50INIS8:
			return reinterpret_cast<char_type const *>(U"ISO50INIS8");
		case ISO51INISCyrillic:
			return reinterpret_cast<char_type const *>(U"ISO51INISCyrillic");
		case ISO54271981:
			return reinterpret_cast<char_type const *>(U"ISO54271981");
		case ISO5428Greek:
			return reinterpret_cast<char_type const *>(U"ISO5428Greek");
		case ISO57GB1988:
			return reinterpret_cast<char_type const *>(U"ISO57GB1988");
		case ISO58GB231280:
			return reinterpret_cast<char_type const *>(U"ISO58GB231280");
		case ISO61Norwegian2:
			return reinterpret_cast<char_type const *>(U"ISO61Norwegian2");
		case ISO70VideotexSupp1:
			return reinterpret_cast<char_type const *>(U"ISO70VideotexSupp1");
		case ISO84Portuguese2:
			return reinterpret_cast<char_type const *>(U"ISO84Portuguese2");
		case ISO85Spanish2:
			return reinterpret_cast<char_type const *>(U"ISO85Spanish2");
		case ISO86Hungarian:
			return reinterpret_cast<char_type const *>(U"ISO86Hungarian");
		case ISO87JISX0208:
			return reinterpret_cast<char_type const *>(U"ISO87JISX0208");
		case ISO88Greek7:
			return reinterpret_cast<char_type const *>(U"ISO88Greek7");
		case ISO89ASMO449:
			return reinterpret_cast<char_type const *>(U"ISO89ASMO449");
		case ISO90:
			return reinterpret_cast<char_type const *>(U"ISO90");
		case ISO91JISC62291984a:
			return reinterpret_cast<char_type const *>(U"ISO91JISC62291984a");
		case ISO92JISC62991984b:
			return reinterpret_cast<char_type const *>(U"ISO92JISC62991984b");
		case ISO93JIS62291984badd:
			return reinterpret_cast<char_type const *>(U"ISO93JIS62291984badd");
		case ISO94JIS62291984hand:
			return reinterpret_cast<char_type const *>(U"ISO94JIS62291984hand");
		case ISO95JIS62291984handadd:
			return reinterpret_cast<char_type const *>(U"ISO95JIS62291984handadd");
		case ISO96JISC62291984kana:
			return reinterpret_cast<char_type const *>(U"ISO96JISC62291984kana");
		case ISO2033:
			return reinterpret_cast<char_type const *>(U"ISO2033");
		case ISO99NAPLPS:
			return reinterpret_cast<char_type const *>(U"ISO99NAPLPS");
		case ISO102T617bit:
			return reinterpret_cast<char_type const *>(U"ISO102T617bit");
		case ISO103T618bit:
			return reinterpret_cast<char_type const *>(U"ISO103T618bit");
		case ISO111ECMACyrillic:
			return reinterpret_cast<char_type const *>(U"ISO111ECMACyrillic");
		case ISO121Canadian1:
			return reinterpret_cast<char_type const *>(U"ISO121Canadian1");
		case ISO122Canadian2:
			return reinterpret_cast<char_type const *>(U"ISO122Canadian2");
		case ISO123CSAZ24341985gr:
			return reinterpret_cast<char_type const *>(U"ISO123CSAZ24341985gr");
		case ISO88596E:
			return reinterpret_cast<char_type const *>(U"ISO88596E");
		case ISO88596I:
			return reinterpret_cast<char_type const *>(U"ISO88596I");
		case ISO128T101G2:
			return reinterpret_cast<char_type const *>(U"ISO128T101G2");
		case ISO88598E:
			return reinterpret_cast<char_type const *>(U"ISO88598E");
		case ISO88598I:
			return reinterpret_cast<char_type const *>(U"ISO88598I");
		case ISO139CSN369103:
			return reinterpret_cast<char_type const *>(U"ISO139CSN369103");
		case ISO141JUSIB1002:
			return reinterpret_cast<char_type const *>(U"ISO141JUSIB1002");
		case ISO143IECP271:
			return reinterpret_cast<char_type const *>(U"ISO143IECP271");
		case ISO146Serbian:
			return reinterpret_cast<char_type const *>(U"ISO146Serbian");
		case ISO147Macedonian:
			return reinterpret_cast<char_type const *>(U"ISO147Macedonian");
		case ISO150:
			return reinterpret_cast<char_type const *>(U"ISO150");
		case ISO151Cuba:
			return reinterpret_cast<char_type const *>(U"ISO151Cuba");
		case ISO6937Add:
			return reinterpret_cast<char_type const *>(U"ISO6937Add");
		case ISO153GOST1976874:
			return reinterpret_cast<char_type const *>(U"ISO153GOST1976874");
		case ISO8859Supp:
			return reinterpret_cast<char_type const *>(U"ISO8859Supp");
		case ISO10367Box:
			return reinterpret_cast<char_type const *>(U"ISO10367Box");
		case ISO158Lap:
			return reinterpret_cast<char_type const *>(U"ISO158Lap");
		case ISO159JISX02121990:
			return reinterpret_cast<char_type const *>(U"ISO159JISX02121990");
		case ISO646Danish:
			return reinterpret_cast<char_type const *>(U"ISO646Danish");
		case USDK:
			return reinterpret_cast<char_type const *>(U"USDK");
		case DKUS:
			return reinterpret_cast<char_type const *>(U"DKUS");
		case KSC5636:
			return reinterpret_cast<char_type const *>(U"KSC5636");
		case Unicode11UTF7:
			return reinterpret_cast<char_type const *>(U"Unicode11UTF7");
		case ISO2022CN:
			return reinterpret_cast<char_type const *>(U"ISO2022CN");
		case ISO2022CNEXT:
			return reinterpret_cast<char_type const *>(U"ISO2022CNEXT");
		case UTF8:
			return reinterpret_cast<char_type const *>(U"UTF8");
		case ISO885913:
			return reinterpret_cast<char_type const *>(U"ISO885913");
		case ISO885914:
			return reinterpret_cast<char_type const *>(U"ISO885914");
		case ISO885915:
			return reinterpret_cast<char_type const *>(U"ISO885915");
		case ISO885916:
			return reinterpret_cast<char_type const *>(U"ISO885916");
		case GBK:
			return reinterpret_cast<char_type const *>(U"GBK");
		case GB18030:
			return reinterpret_cast<char_type const *>(U"GB18030");
		case OSDEBCDICDF0415:
			return reinterpret_cast<char_type const *>(U"OSDEBCDICDF0415");
		case OSDEBCDICDF03IRV:
			return reinterpret_cast<char_type const *>(U"OSDEBCDICDF03IRV");
		case OSDEBCDICDF041:
			return reinterpret_cast<char_type const *>(U"OSDEBCDICDF041");
		case ISO115481:
			return reinterpret_cast<char_type const *>(U"ISO115481");
		case KZ1048:
			return reinterpret_cast<char_type const *>(U"KZ1048");
		case Unicode:
			return reinterpret_cast<char_type const *>(U"Unicode");
		case UCS4:
			return reinterpret_cast<char_type const *>(U"UCS4");
		case UnicodeASCII:
			return reinterpret_cast<char_type const *>(U"UnicodeASCII");
		case UnicodeLatin1:
			return reinterpret_cast<char_type const *>(U"UnicodeLatin1");
		case UnicodeJapanese:
			return reinterpret_cast<char_type const *>(U"UnicodeJapanese");
		case UnicodeIBM1261:
			return reinterpret_cast<char_type const *>(U"UnicodeIBM1261");
		case UnicodeIBM1268:
			return reinterpret_cast<char_type const *>(U"UnicodeIBM1268");
		case UnicodeIBM1276:
			return reinterpret_cast<char_type const *>(U"UnicodeIBM1276");
		case UnicodeIBM1264:
			return reinterpret_cast<char_type const *>(U"UnicodeIBM1264");
		case UnicodeIBM1265:
			return reinterpret_cast<char_type const *>(U"UnicodeIBM1265");
		case Unicode11:
			return reinterpret_cast<char_type const *>(U"Unicode11");
		case SCSU:
			return reinterpret_cast<char_type const *>(U"SCSU");
		case UTF7:
			return reinterpret_cast<char_type const *>(U"UTF7");
		case UTF16BE:
			return reinterpret_cast<char_type const *>(U"UTF16BE");
		case UTF16LE:
			return reinterpret_cast<char_type const *>(U"UTF16LE");
		case UTF16:
			return reinterpret_cast<char_type const *>(U"UTF16");
		case CESU8:
			return reinterpret_cast<char_type const *>(U"CESU8");
		case UTF32:
			return reinterpret_cast<char_type const *>(U"UTF32");
		case UTF32BE:
			return reinterpret_cast<char_type const *>(U"UTF32BE");
		case UTF32LE:
			return reinterpret_cast<char_type const *>(U"UTF32LE");
		case BOCU1:
			return reinterpret_cast<char_type const *>(U"BOCU1");
		case UTF7IMAP:
			return reinterpret_cast<char_type const *>(U"UTF7IMAP");
		case Windows30Latin1:
			return reinterpret_cast<char_type const *>(U"Windows30Latin1");
		case Windows31Latin1:
			return reinterpret_cast<char_type const *>(U"Windows31Latin1");
		case Windows31Latin2:
			return reinterpret_cast<char_type const *>(U"Windows31Latin2");
		case Windows31Latin5:
			return reinterpret_cast<char_type const *>(U"Windows31Latin5");
		case HPRoman8:
			return reinterpret_cast<char_type const *>(U"HPRoman8");
		case AdobeStandardEncoding:
			return reinterpret_cast<char_type const *>(U"AdobeStandardEncoding");
		case VenturaUS:
			return reinterpret_cast<char_type const *>(U"VenturaUS");
		case VenturaInternational:
			return reinterpret_cast<char_type const *>(U"VenturaInternational");
		case DECMCS:
			return reinterpret_cast<char_type const *>(U"DECMCS");
		case PC850Multilingual:
			return reinterpret_cast<char_type const *>(U"PC850Multilingual");
		case PCp852:
			return reinterpret_cast<char_type const *>(U"PCp852");
		case PC8CodePage437:
			return reinterpret_cast<char_type const *>(U"PC8CodePage437");
		case PC8DanishNorwegian:
			return reinterpret_cast<char_type const *>(U"PC8DanishNorwegian");
		case PC862LatinHebrew:
			return reinterpret_cast<char_type const *>(U"PC862LatinHebrew");
		case PC8Turkish:
			return reinterpret_cast<char_type const *>(U"PC8Turkish");
		case IBMSymbols:
			return reinterpret_cast<char_type const *>(U"IBMSymbols");
		case IBMThai:
			return reinterpret_cast<char_type const *>(U"IBMThai");
		case HPLegal:
			return reinterpret_cast<char_type const *>(U"HPLegal");
		case HPPiFont:
			return reinterpret_cast<char_type const *>(U"HPPiFont");
		case HPMath8:
			return reinterpret_cast<char_type const *>(U"HPMath8");
		case HPPSMath:
			return reinterpret_cast<char_type const *>(U"HPPSMath");
		case HPDesktop:
			return reinterpret_cast<char_type const *>(U"HPDesktop");
		case VenturaMath:
			return reinterpret_cast<char_type const *>(U"VenturaMath");
		case MicrosoftPublishing:
			return reinterpret_cast<char_type const *>(U"MicrosoftPublishing");
		case Windows31J:
			return reinterpret_cast<char_type const *>(U"Windows31J");
		case GB2312:
			return reinterpret_cast<char_type const *>(U"GB2312");
		case Big5:
			return reinterpret_cast<char_type const *>(U"Big5");
		case Macintosh:
			return reinterpret_cast<char_type const *>(U"Macintosh");
		case IBM037:
			return reinterpret_cast<char_type const *>(U"IBM037");
		case IBM038:
			return reinterpret_cast<char_type const *>(U"IBM038");
		case IBM273:
			return reinterpret_cast<char_type const *>(U"IBM273");
		case IBM274:
			return reinterpret_cast<char_type const *>(U"IBM274");
		case IBM275:
			return reinterpret_cast<char_type const *>(U"IBM275");
		case IBM277:
			return reinterpret_cast<char_type const *>(U"IBM277");
		case IBM278:
			return reinterpret_cast<char_type const *>(U"IBM278");
		case IBM280:
			return reinterpret_cast<char_type const *>(U"IBM280");
		case IBM281:
			return reinterpret_cast<char_type const *>(U"IBM281");
		case IBM284:
			return reinterpret_cast<char_type const *>(U"IBM284");
		case IBM285:
			return reinterpret_cast<char_type const *>(U"IBM285");
		case IBM290:
			return reinterpret_cast<char_type const *>(U"IBM290");
		case IBM297:
			return reinterpret_cast<char_type const *>(U"IBM297");
		case IBM420:
			return reinterpret_cast<char_type const *>(U"IBM420");
		case IBM423:
			return reinterpret_cast<char_type const *>(U"IBM423");
		case IBM424:
			return reinterpret_cast<char_type const *>(U"IBM424");
		case IBM500:
			return reinterpret_cast<char_type const *>(U"IBM500");
		case IBM851:
			return reinterpret_cast<char_type const *>(U"IBM851");
		case IBM855:
			return reinterpret_cast<char_type const *>(U"IBM855");
		case IBM857:
			return reinterpret_cast<char_type const *>(U"IBM857");
		case IBM860:
			return reinterpret_cast<char_type const *>(U"IBM860");
		case IBM861:
			return reinterpret_cast<char_type const *>(U"IBM861");
		case IBM863:
			return reinterpret_cast<char_type const *>(U"IBM863");
		case IBM864:
			return reinterpret_cast<char_type const *>(U"IBM864");
		case IBM865:
			return reinterpret_cast<char_type const *>(U"IBM865");
		case IBM868:
			return reinterpret_cast<char_type const *>(U"IBM868");
		case IBM869:
			return reinterpret_cast<char_type const *>(U"IBM869");
		case IBM870:
			return reinterpret_cast<char_type const *>(U"IBM870");
		case IBM871:
			return reinterpret_cast<char_type const *>(U"IBM871");
		case IBM880:
			return reinterpret_cast<char_type const *>(U"IBM880");
		case IBM891:
			return reinterpret_cast<char_type const *>(U"IBM891");
		case IBM903:
			return reinterpret_cast<char_type const *>(U"IBM903");
		case IBBM904:
			return reinterpret_cast<char_type const *>(U"IBBM904");
		case IBM905:
			return reinterpret_cast<char_type const *>(U"IBM905");
		case IBM918:
			return reinterpret_cast<char_type const *>(U"IBM918");
		case IBM1026:
			return reinterpret_cast<char_type const *>(U"IBM1026");
		case IBMEBCDICATDE:
			return reinterpret_cast<char_type const *>(U"IBMEBCDICATDE");
		case EBCDICATDEA:
			return reinterpret_cast<char_type const *>(U"EBCDICATDEA");
		case EBCDICCAFR:
			return reinterpret_cast<char_type const *>(U"EBCDICCAFR");
		case EBCDICDKNO:
			return reinterpret_cast<char_type const *>(U"EBCDICDKNO");
		case EBCDICDKNOA:
			return reinterpret_cast<char_type const *>(U"EBCDICDKNOA");
		case EBCDICFISE:
			return reinterpret_cast<char_type const *>(U"EBCDICFISE");
		case EBCDICFISEA:
			return reinterpret_cast<char_type const *>(U"EBCDICFISEA");
		case EBCDICFR:
			return reinterpret_cast<char_type const *>(U"EBCDICFR");
		case EBCDICIT:
			return reinterpret_cast<char_type const *>(U"EBCDICIT");
		case EBCDICPT:
			return reinterpret_cast<char_type const *>(U"EBCDICPT");
		case EBCDICES:
			return reinterpret_cast<char_type const *>(U"EBCDICES");
		case EBCDICESA:
			return reinterpret_cast<char_type const *>(U"EBCDICESA");
		case EBCDICESS:
			return reinterpret_cast<char_type const *>(U"EBCDICESS");
		case EBCDICUK:
			return reinterpret_cast<char_type const *>(U"EBCDICUK");
		case EBCDICUS:
			return reinterpret_cast<char_type const *>(U"EBCDICUS");
		case Unknown8BiT:
			return reinterpret_cast<char_type const *>(U"Unknown8BiT");
		case Mnemonic:
			return reinterpret_cast<char_type const *>(U"Mnemonic");
		case Mnem:
			return reinterpret_cast<char_type const *>(U"Mnem");
		case VISCII:
			return reinterpret_cast<char_type const *>(U"VISCII");
		case VIQR:
			return reinterpret_cast<char_type const *>(U"VIQR");
		case KOI8R:
			return reinterpret_cast<char_type const *>(U"KOI8R");
		case HZGB2312:
			return reinterpret_cast<char_type const *>(U"HZGB2312");
		case IBM866:
			return reinterpret_cast<char_type const *>(U"IBM866");
		case PC775Baltic:
			return reinterpret_cast<char_type const *>(U"PC775Baltic");
		case KOI8U:
			return reinterpret_cast<char_type const *>(U"KOI8U");
		case IBM00858:
			return reinterpret_cast<char_type const *>(U"IBM00858");
		case IBM00924:
			return reinterpret_cast<char_type const *>(U"IBM00924");
		case IBM01140:
			return reinterpret_cast<char_type const *>(U"IBM01140");
		case IBM01141:
			return reinterpret_cast<char_type const *>(U"IBM01141");
		case IBM01142:
			return reinterpret_cast<char_type const *>(U"IBM01142");
		case IBM01143:
			return reinterpret_cast<char_type const *>(U"IBM01143");
		case IBM01144:
			return reinterpret_cast<char_type const *>(U"IBM01144");
		case IBM01145:
			return reinterpret_cast<char_type const *>(U"IBM01145");
		case IBM01146:
			return reinterpret_cast<char_type const *>(U"IBM01146");
		case IBM01147:
			return reinterpret_cast<char_type const *>(U"IBM01147");
		case IBM01148:
			return reinterpret_cast<char_type const *>(U"IBM01148");
		case IBM01149:
			return reinterpret_cast<char_type const *>(U"IBM01149");
		case Big5HKSCS:
			return reinterpret_cast<char_type const *>(U"Big5HKSCS");
		case IBM1047:
			return reinterpret_cast<char_type const *>(U"IBM1047");
		case PTCP154:
			return reinterpret_cast<char_type const *>(U"PTCP154");
		case Amiga1251:
			return reinterpret_cast<char_type const *>(U"Amiga1251");
		case KOI7switched:
			return reinterpret_cast<char_type const *>(U"KOI7switched");
		case BRF:
			return reinterpret_cast<char_type const *>(U"BRF");
		case TSCII:
			return reinterpret_cast<char_type const *>(U"TSCII");
		case CP51932:
			return reinterpret_cast<char_type const *>(U"CP51932");
		case windows874:
			return reinterpret_cast<char_type const *>(U"windows874");
		case windows1250:
			return reinterpret_cast<char_type const *>(U"windows1250");
		case windows1251:
			return reinterpret_cast<char_type const *>(U"windows1251");
		case windows1252:
			return reinterpret_cast<char_type const *>(U"windows1252");
		case windows1253:
			return reinterpret_cast<char_type const *>(U"windows1253");
		case windows1254:
			return reinterpret_cast<char_type const *>(U"windows1254");
		case windows1255:
			return reinterpret_cast<char_type const *>(U"windows1255");
		case windows1256:
			return reinterpret_cast<char_type const *>(U"windows1256");
		case windows1257:
			return reinterpret_cast<char_type const *>(U"windows1257");
		case windows1258:
			return reinterpret_cast<char_type const *>(U"windows1258");
		case TIS620:
			return reinterpret_cast<char_type const *>(U"TIS620");
		case CP50220:
			return reinterpret_cast<char_type const *>(U"CP50220");
		default:
			return reinterpret_cast<char_type const*>(U"unknown");
		}
	}
}

namespace details
{

inline constexpr ::std::size_t pr_rsv_precise_size_MIB_impl(MIB_enum mib) noexcept
{
	using enum MIB_enum;
	switch (mib)
	{
	case MIB_enum::ASCII:
		return 5;
	case MIB_enum::ISOLatin1:
		return 9;
	case MIB_enum::ISOLatin2:
		return 9;
	case MIB_enum::ISOLatin3:
		return 9;
	case MIB_enum::ISOLatin4:
		return 9;
	case MIB_enum::ISOLatinCyrillic:
		return 16;
	case MIB_enum::ISOLatinArabic:
		return 14;
	case MIB_enum::ISOLatinGreek:
		return 13;
	case MIB_enum::ISOLatinHebrew:
		return 14;
	case MIB_enum::ISOLatin5:
		return 9;
	case MIB_enum::ISOLatin6:
		return 9;
	case MIB_enum::ISOTextComm:
		return 11;
	case MIB_enum::HalfWidthKatakana:
		return 17;
	case MIB_enum::JISEncoding:
		return 11;
	case MIB_enum::ShiftJIS:
		return 8;
	case MIB_enum::EUCPkdFmtJapanese:
		return 17;
	case MIB_enum::EUCFixWidJapanese:
		return 17;
	case MIB_enum::ISO4UnitedKingdom:
		return 17;
	case MIB_enum::ISO11SwedishForNames:
		return 20;
	case MIB_enum::ISO15Italian:
		return 12;
	case MIB_enum::ISO17Spanish:
		return 12;
	case MIB_enum::ISO21German:
		return 11;
	case MIB_enum::ISO60DanishNorwegian:
		return 20;
	case MIB_enum::ISO69French:
		return 11;
	case MIB_enum::ISO10646UTF1:
		return 12;
	case MIB_enum::ISO646basic1983:
		return 15;
	case MIB_enum::INVARIANT:
		return 9;
	case MIB_enum::ISO2IntlRefVersion:
		return 18;
	case MIB_enum::NATSSEFI:
		return 8;
	case MIB_enum::NATSSEFIADD:
		return 11;
	case MIB_enum::NATSDANO:
		return 8;
	case MIB_enum::NATSDANOADD:
		return 11;
	case MIB_enum::ISO10Swedish:
		return 12;
	case MIB_enum::KSC56011987:
		return 11;
	case MIB_enum::ISO2022KR:
		return 9;
	case MIB_enum::EUCKR:
		return 5;
	case MIB_enum::ISO2022JP:
		return 9;
	case MIB_enum::ISO2022JP2:
		return 10;
	case MIB_enum::ISO13JISC6220jp:
		return 15;
	case MIB_enum::ISO14JISC6220ro:
		return 15;
	case MIB_enum::ISO16Portuguese:
		return 15;
	case MIB_enum::ISO18Greek7Old:
		return 14;
	case MIB_enum::ISO19LatinGreek:
		return 15;
	case MIB_enum::ISO25French:
		return 11;
	case MIB_enum::ISO27LatinGreek1:
		return 16;
	case MIB_enum::ISO5427Cyrillic:
		return 15;
	case MIB_enum::ISO42JISC62261978:
		return 17;
	case MIB_enum::ISO47BSViewdata:
		return 15;
	case MIB_enum::ISO49INIS:
		return 9;
	case MIB_enum::ISO50INIS8:
		return 10;
	case MIB_enum::ISO51INISCyrillic:
		return 17;
	case MIB_enum::ISO54271981:
		return 11;
	case MIB_enum::ISO5428Greek:
		return 12;
	case MIB_enum::ISO57GB1988:
		return 11;
	case MIB_enum::ISO58GB231280:
		return 13;
	case MIB_enum::ISO61Norwegian2:
		return 15;
	case MIB_enum::ISO70VideotexSupp1:
		return 18;
	case MIB_enum::ISO84Portuguese2:
		return 16;
	case MIB_enum::ISO85Spanish2:
		return 13;
	case MIB_enum::ISO86Hungarian:
		return 14;
	case MIB_enum::ISO87JISX0208:
		return 13;
	case MIB_enum::ISO88Greek7:
		return 11;
	case MIB_enum::ISO89ASMO449:
		return 12;
	case MIB_enum::ISO90:
		return 5;
	case MIB_enum::ISO91JISC62291984a:
		return 18;
	case MIB_enum::ISO92JISC62991984b:
		return 18;
	case MIB_enum::ISO93JIS62291984badd:
		return 20;
	case MIB_enum::ISO94JIS62291984hand:
		return 20;
	case MIB_enum::ISO95JIS62291984handadd:
		return 23;
	case MIB_enum::ISO96JISC62291984kana:
		return 21;
	case MIB_enum::ISO2033:
		return 7;
	case MIB_enum::ISO99NAPLPS:
		return 11;
	case MIB_enum::ISO102T617bit:
		return 13;
	case MIB_enum::ISO103T618bit:
		return 13;
	case MIB_enum::ISO111ECMACyrillic:
		return 18;
	case MIB_enum::ISO121Canadian1:
		return 15;
	case MIB_enum::ISO122Canadian2:
		return 15;
	case MIB_enum::ISO123CSAZ24341985gr:
		return 20;
	case MIB_enum::ISO88596E:
		return 9;
	case MIB_enum::ISO88596I:
		return 9;
	case MIB_enum::ISO128T101G2:
		return 12;
	case MIB_enum::ISO88598E:
		return 9;
	case MIB_enum::ISO88598I:
		return 9;
	case MIB_enum::ISO139CSN369103:
		return 15;
	case MIB_enum::ISO141JUSIB1002:
		return 15;
	case MIB_enum::ISO143IECP271:
		return 13;
	case MIB_enum::ISO146Serbian:
		return 13;
	case MIB_enum::ISO147Macedonian:
		return 16;
	case MIB_enum::ISO150:
		return 6;
	case MIB_enum::ISO151Cuba:
		return 10;
	case MIB_enum::ISO6937Add:
		return 10;
	case MIB_enum::ISO153GOST1976874:
		return 17;
	case MIB_enum::ISO8859Supp:
		return 11;
	case MIB_enum::ISO10367Box:
		return 11;
	case MIB_enum::ISO158Lap:
		return 9;
	case MIB_enum::ISO159JISX02121990:
		return 18;
	case MIB_enum::ISO646Danish:
		return 12;
	case MIB_enum::USDK:
		return 4;
	case MIB_enum::DKUS:
		return 4;
	case MIB_enum::KSC5636:
		return 7;
	case MIB_enum::Unicode11UTF7:
		return 13;
	case MIB_enum::ISO2022CN:
		return 9;
	case MIB_enum::ISO2022CNEXT:
		return 12;
	case MIB_enum::UTF8:
		return 4;
	case MIB_enum::ISO885913:
		return 9;
	case MIB_enum::ISO885914:
		return 9;
	case MIB_enum::ISO885915:
		return 9;
	case MIB_enum::ISO885916:
		return 9;
	case MIB_enum::GBK:
		return 3;
	case MIB_enum::GB18030:
		return 7;
	case MIB_enum::OSDEBCDICDF0415:
		return 15;
	case MIB_enum::OSDEBCDICDF03IRV:
		return 16;
	case MIB_enum::OSDEBCDICDF041:
		return 14;
	case MIB_enum::ISO115481:
		return 9;
	case MIB_enum::KZ1048:
		return 6;
	case MIB_enum::Unicode:
		return 7;
	case MIB_enum::UCS4:
		return 4;
	case MIB_enum::UnicodeASCII:
		return 12;
	case MIB_enum::UnicodeLatin1:
		return 13;
	case MIB_enum::UnicodeJapanese:
		return 15;
	case MIB_enum::UnicodeIBM1261:
		return 14;
	case MIB_enum::UnicodeIBM1268:
		return 14;
	case MIB_enum::UnicodeIBM1276:
		return 14;
	case MIB_enum::UnicodeIBM1264:
		return 14;
	case MIB_enum::UnicodeIBM1265:
		return 14;
	case MIB_enum::Unicode11:
		return 9;
	case MIB_enum::SCSU:
		return 4;
	case MIB_enum::UTF7:
		return 4;
	case MIB_enum::UTF16BE:
		return 7;
	case MIB_enum::UTF16LE:
		return 7;
	case MIB_enum::UTF16:
		return 5;
	case MIB_enum::CESU8:
		return 5;
	case MIB_enum::UTF32:
		return 5;
	case MIB_enum::UTF32BE:
		return 7;
	case MIB_enum::UTF32LE:
		return 7;
	case MIB_enum::BOCU1:
		return 5;
	case MIB_enum::UTF7IMAP:
		return 8;
	case MIB_enum::Windows30Latin1:
		return 15;
	case MIB_enum::Windows31Latin1:
		return 15;
	case MIB_enum::Windows31Latin2:
		return 15;
	case MIB_enum::Windows31Latin5:
		return 15;
	case MIB_enum::HPRoman8:
		return 8;
	case MIB_enum::AdobeStandardEncoding:
		return 21;
	case MIB_enum::VenturaUS:
		return 9;
	case MIB_enum::VenturaInternational:
		return 20;
	case MIB_enum::DECMCS:
		return 6;
	case MIB_enum::PC850Multilingual:
		return 17;
	case MIB_enum::PCp852:
		return 6;
	case MIB_enum::PC8CodePage437:
		return 14;
	case MIB_enum::PC8DanishNorwegian:
		return 18;
	case MIB_enum::PC862LatinHebrew:
		return 16;
	case MIB_enum::PC8Turkish:
		return 10;
	case MIB_enum::IBMSymbols:
		return 10;
	case MIB_enum::IBMThai:
		return 7;
	case MIB_enum::HPLegal:
		return 7;
	case MIB_enum::HPPiFont:
		return 8;
	case MIB_enum::HPMath8:
		return 7;
	case MIB_enum::HPPSMath:
		return 8;
	case MIB_enum::HPDesktop:
		return 9;
	case MIB_enum::VenturaMath:
		return 11;
	case MIB_enum::MicrosoftPublishing:
		return 19;
	case MIB_enum::Windows31J:
		return 10;
	case MIB_enum::GB2312:
		return 6;
	case MIB_enum::Big5:
		return 4;
	case MIB_enum::Macintosh:
		return 9;
	case MIB_enum::IBM037:
		return 6;
	case MIB_enum::IBM038:
		return 6;
	case MIB_enum::IBM273:
		return 6;
	case MIB_enum::IBM274:
		return 6;
	case MIB_enum::IBM275:
		return 6;
	case MIB_enum::IBM277:
		return 6;
	case MIB_enum::IBM278:
		return 6;
	case MIB_enum::IBM280:
		return 6;
	case MIB_enum::IBM281:
		return 6;
	case MIB_enum::IBM284:
		return 6;
	case MIB_enum::IBM285:
		return 6;
	case MIB_enum::IBM290:
		return 6;
	case MIB_enum::IBM297:
		return 6;
	case MIB_enum::IBM420:
		return 6;
	case MIB_enum::IBM423:
		return 6;
	case MIB_enum::IBM424:
		return 6;
	case MIB_enum::IBM500:
		return 6;
	case MIB_enum::IBM851:
		return 6;
	case MIB_enum::IBM855:
		return 6;
	case MIB_enum::IBM857:
		return 6;
	case MIB_enum::IBM860:
		return 6;
	case MIB_enum::IBM861:
		return 6;
	case MIB_enum::IBM863:
		return 6;
	case MIB_enum::IBM864:
		return 6;
	case MIB_enum::IBM865:
		return 6;
	case MIB_enum::IBM868:
		return 6;
	case MIB_enum::IBM869:
		return 6;
	case MIB_enum::IBM870:
		return 6;
	case MIB_enum::IBM871:
		return 6;
	case MIB_enum::IBM880:
		return 6;
	case MIB_enum::IBM891:
		return 6;
	case MIB_enum::IBM903:
		return 6;
	case MIB_enum::IBBM904:
		return 7;
	case MIB_enum::IBM905:
		return 6;
	case MIB_enum::IBM918:
		return 6;
	case MIB_enum::IBM1026:
		return 7;
	case MIB_enum::IBMEBCDICATDE:
		return 13;
	case MIB_enum::EBCDICATDEA:
		return 11;
	case MIB_enum::EBCDICCAFR:
		return 10;
	case MIB_enum::EBCDICDKNO:
		return 10;
	case MIB_enum::EBCDICDKNOA:
		return 11;
	case MIB_enum::EBCDICFISE:
		return 10;
	case MIB_enum::EBCDICFISEA:
		return 11;
	case MIB_enum::EBCDICFR:
		return 8;
	case MIB_enum::EBCDICIT:
		return 8;
	case MIB_enum::EBCDICPT:
		return 8;
	case MIB_enum::EBCDICES:
		return 8;
	case MIB_enum::EBCDICESA:
		return 9;
	case MIB_enum::EBCDICESS:
		return 9;
	case MIB_enum::EBCDICUK:
		return 8;
	case MIB_enum::EBCDICUS:
		return 8;
	case MIB_enum::Unknown8BiT:
		return 11;
	case MIB_enum::Mnemonic:
		return 8;
	case MIB_enum::Mnem:
		return 4;
	case MIB_enum::VISCII:
		return 6;
	case MIB_enum::VIQR:
		return 4;
	case MIB_enum::KOI8R:
		return 5;
	case MIB_enum::HZGB2312:
		return 8;
	case MIB_enum::IBM866:
		return 6;
	case MIB_enum::PC775Baltic:
		return 11;
	case MIB_enum::KOI8U:
		return 5;
	case MIB_enum::IBM00858:
		return 8;
	case MIB_enum::IBM00924:
		return 8;
	case MIB_enum::IBM01140:
		return 8;
	case MIB_enum::IBM01141:
		return 8;
	case MIB_enum::IBM01142:
		return 8;
	case MIB_enum::IBM01143:
		return 8;
	case MIB_enum::IBM01144:
		return 8;
	case MIB_enum::IBM01145:
		return 8;
	case MIB_enum::IBM01146:
		return 8;
	case MIB_enum::IBM01147:
		return 8;
	case MIB_enum::IBM01148:
		return 8;
	case MIB_enum::IBM01149:
		return 8;
	case MIB_enum::Big5HKSCS:
		return 9;
	case MIB_enum::IBM1047:
		return 7;
	case MIB_enum::PTCP154:
		return 7;
	case MIB_enum::Amiga1251:
		return 9;
	case MIB_enum::KOI7switched:
		return 12;
	case MIB_enum::BRF:
		return 3;
	case MIB_enum::TSCII:
		return 5;
	case MIB_enum::CP51932:
		return 7;
	case MIB_enum::windows874:
		return 10;
	case MIB_enum::windows1250:
		return 11;
	case MIB_enum::windows1251:
		return 11;
	case MIB_enum::windows1252:
		return 11;
	case MIB_enum::windows1253:
		return 11;
	case MIB_enum::windows1254:
		return 11;
	case MIB_enum::windows1255:
		return 11;
	case MIB_enum::windows1256:
		return 11;
	case MIB_enum::windows1257:
		return 11;
	case MIB_enum::windows1258:
		return 11;
	case MIB_enum::TIS620:
		return 6;
	case MIB_enum::CP50220:
		return 7;
	default:
		return 7;
	}
}

template <::std::integral char_type>
inline constexpr char_type *pr_rsv_MIB_impl(char_type *ptr, MIB_enum mib) noexcept
{
	using enum MIB_enum;
	if constexpr (sizeof(char_type) == 1)
	{
		switch (mib)
		{
		case ASCII:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[6]>(u8"ASCII"), ptr);
		case ISOLatin1:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u8"ISOLatin1"), ptr);
		case ISOLatin2:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u8"ISOLatin2"), ptr);
		case ISOLatin3:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u8"ISOLatin3"), ptr);
		case ISOLatin4:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u8"ISOLatin4"), ptr);
		case ISOLatinCyrillic:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[17]>(u8"ISOLatinCyrillic"), ptr);
		case ISOLatinArabic:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[15]>(u8"ISOLatinArabic"), ptr);
		case ISOLatinGreek:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[14]>(u8"ISOLatinGreek"), ptr);
		case ISOLatinHebrew:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[15]>(u8"ISOLatinHebrew"), ptr);
		case ISOLatin5:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u8"ISOLatin5"), ptr);
		case ISOLatin6:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u8"ISOLatin6"), ptr);
		case ISOTextComm:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u8"ISOTextComm"), ptr);
		case HalfWidthKatakana:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[18]>(u8"HalfWidthKatakana"), ptr);
		case JISEncoding:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u8"JISEncoding"), ptr);
		case ShiftJIS:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u8"ShiftJIS"), ptr);
		case EUCPkdFmtJapanese:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[18]>(u8"EUCPkdFmtJapanese"), ptr);
		case EUCFixWidJapanese:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[18]>(u8"EUCFixWidJapanese"), ptr);
		case ISO4UnitedKingdom:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[18]>(u8"ISO4UnitedKingdom"), ptr);
		case ISO11SwedishForNames:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[21]>(u8"ISO11SwedishForNames"), ptr);
		case ISO15Italian:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[13]>(u8"ISO15Italian"), ptr);
		case ISO17Spanish:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[13]>(u8"ISO17Spanish"), ptr);
		case ISO21German:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u8"ISO21German"), ptr);
		case ISO60DanishNorwegian:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[21]>(u8"ISO60DanishNorwegian"), ptr);
		case ISO69French:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u8"ISO69French"), ptr);
		case ISO10646UTF1:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[13]>(u8"ISO10646UTF1"), ptr);
		case ISO646basic1983:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(u8"ISO646basic1983"), ptr);
		case INVARIANT:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u8"INVARIANT"), ptr);
		case ISO2IntlRefVersion:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[19]>(u8"ISO2IntlRefVersion"), ptr);
		case NATSSEFI:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u8"NATSSEFI"), ptr);
		case NATSSEFIADD:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u8"NATSSEFIADD"), ptr);
		case NATSDANO:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u8"NATSDANO"), ptr);
		case NATSDANOADD:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u8"NATSDANOADD"), ptr);
		case ISO10Swedish:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[13]>(u8"ISO10Swedish"), ptr);
		case KSC56011987:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u8"KSC56011987"), ptr);
		case ISO2022KR:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u8"ISO2022KR"), ptr);
		case EUCKR:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[6]>(u8"EUCKR"), ptr);
		case ISO2022JP:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u8"ISO2022JP"), ptr);
		case ISO2022JP2:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[11]>(u8"ISO2022JP2"), ptr);
		case ISO13JISC6220jp:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(u8"ISO13JISC6220jp"), ptr);
		case ISO14JISC6220ro:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(u8"ISO14JISC6220ro"), ptr);
		case ISO16Portuguese:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(u8"ISO16Portuguese"), ptr);
		case ISO18Greek7Old:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[15]>(u8"ISO18Greek7Old"), ptr);
		case ISO19LatinGreek:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(u8"ISO19LatinGreek"), ptr);
		case ISO25French:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u8"ISO25French"), ptr);
		case ISO27LatinGreek1:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[17]>(u8"ISO27LatinGreek1"), ptr);
		case ISO5427Cyrillic:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(u8"ISO5427Cyrillic"), ptr);
		case ISO42JISC62261978:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[18]>(u8"ISO42JISC62261978"), ptr);
		case ISO47BSViewdata:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(u8"ISO47BSViewdata"), ptr);
		case ISO49INIS:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u8"ISO49INIS"), ptr);
		case ISO50INIS8:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[11]>(u8"ISO50INIS8"), ptr);
		case ISO51INISCyrillic:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[18]>(u8"ISO51INISCyrillic"), ptr);
		case ISO54271981:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u8"ISO54271981"), ptr);
		case ISO5428Greek:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[13]>(u8"ISO5428Greek"), ptr);
		case ISO57GB1988:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u8"ISO57GB1988"), ptr);
		case ISO58GB231280:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[14]>(u8"ISO58GB231280"), ptr);
		case ISO61Norwegian2:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(u8"ISO61Norwegian2"), ptr);
		case ISO70VideotexSupp1:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[19]>(u8"ISO70VideotexSupp1"), ptr);
		case ISO84Portuguese2:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[17]>(u8"ISO84Portuguese2"), ptr);
		case ISO85Spanish2:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[14]>(u8"ISO85Spanish2"), ptr);
		case ISO86Hungarian:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[15]>(u8"ISO86Hungarian"), ptr);
		case ISO87JISX0208:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[14]>(u8"ISO87JISX0208"), ptr);
		case ISO88Greek7:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u8"ISO88Greek7"), ptr);
		case ISO89ASMO449:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[13]>(u8"ISO89ASMO449"), ptr);
		case ISO90:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[6]>(u8"ISO90"), ptr);
		case ISO91JISC62291984a:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[19]>(u8"ISO91JISC62291984a"), ptr);
		case ISO92JISC62991984b:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[19]>(u8"ISO92JISC62991984b"), ptr);
		case ISO93JIS62291984badd:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[21]>(u8"ISO93JIS62291984badd"), ptr);
		case ISO94JIS62291984hand:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[21]>(u8"ISO94JIS62291984hand"), ptr);
		case ISO95JIS62291984handadd:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[24]>(u8"ISO95JIS62291984handadd"), ptr);
		case ISO96JISC62291984kana:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[22]>(u8"ISO96JISC62291984kana"), ptr);
		case ISO2033:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(u8"ISO2033"), ptr);
		case ISO99NAPLPS:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u8"ISO99NAPLPS"), ptr);
		case ISO102T617bit:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[14]>(u8"ISO102T617bit"), ptr);
		case ISO103T618bit:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[14]>(u8"ISO103T618bit"), ptr);
		case ISO111ECMACyrillic:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[19]>(u8"ISO111ECMACyrillic"), ptr);
		case ISO121Canadian1:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(u8"ISO121Canadian1"), ptr);
		case ISO122Canadian2:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(u8"ISO122Canadian2"), ptr);
		case ISO123CSAZ24341985gr:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[21]>(u8"ISO123CSAZ24341985gr"), ptr);
		case ISO88596E:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u8"ISO88596E"), ptr);
		case ISO88596I:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u8"ISO88596I"), ptr);
		case ISO128T101G2:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[13]>(u8"ISO128T101G2"), ptr);
		case ISO88598E:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u8"ISO88598E"), ptr);
		case ISO88598I:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u8"ISO88598I"), ptr);
		case ISO139CSN369103:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(u8"ISO139CSN369103"), ptr);
		case ISO141JUSIB1002:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(u8"ISO141JUSIB1002"), ptr);
		case ISO143IECP271:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[14]>(u8"ISO143IECP271"), ptr);
		case ISO146Serbian:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[14]>(u8"ISO146Serbian"), ptr);
		case ISO147Macedonian:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[17]>(u8"ISO147Macedonian"), ptr);
		case ISO150:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u8"ISO150"), ptr);
		case ISO151Cuba:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[11]>(u8"ISO151Cuba"), ptr);
		case ISO6937Add:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[11]>(u8"ISO6937Add"), ptr);
		case ISO153GOST1976874:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[18]>(u8"ISO153GOST1976874"), ptr);
		case ISO8859Supp:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u8"ISO8859Supp"), ptr);
		case ISO10367Box:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u8"ISO10367Box"), ptr);
		case ISO158Lap:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u8"ISO158Lap"), ptr);
		case ISO159JISX02121990:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[19]>(u8"ISO159JISX02121990"), ptr);
		case ISO646Danish:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[13]>(u8"ISO646Danish"), ptr);
		case USDK:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[5]>(u8"USDK"), ptr);
		case DKUS:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[5]>(u8"DKUS"), ptr);
		case KSC5636:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(u8"KSC5636"), ptr);
		case Unicode11UTF7:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[14]>(u8"Unicode11UTF7"), ptr);
		case ISO2022CN:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u8"ISO2022CN"), ptr);
		case ISO2022CNEXT:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[13]>(u8"ISO2022CNEXT"), ptr);
		case UTF8:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[5]>(u8"UTF8"), ptr);
		case ISO885913:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u8"ISO885913"), ptr);
		case ISO885914:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u8"ISO885914"), ptr);
		case ISO885915:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u8"ISO885915"), ptr);
		case ISO885916:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u8"ISO885916"), ptr);
		case GBK:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[4]>(u8"GBK"), ptr);
		case GB18030:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(u8"GB18030"), ptr);
		case OSDEBCDICDF0415:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(u8"OSDEBCDICDF0415"), ptr);
		case OSDEBCDICDF03IRV:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[17]>(u8"OSDEBCDICDF03IRV"), ptr);
		case OSDEBCDICDF041:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[15]>(u8"OSDEBCDICDF041"), ptr);
		case ISO115481:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u8"ISO115481"), ptr);
		case KZ1048:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u8"KZ1048"), ptr);
		case Unicode:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(u8"Unicode"), ptr);
		case UCS4:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[5]>(u8"UCS4"), ptr);
		case UnicodeASCII:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[13]>(u8"UnicodeASCII"), ptr);
		case UnicodeLatin1:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[14]>(u8"UnicodeLatin1"), ptr);
		case UnicodeJapanese:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(u8"UnicodeJapanese"), ptr);
		case UnicodeIBM1261:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[15]>(u8"UnicodeIBM1261"), ptr);
		case UnicodeIBM1268:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[15]>(u8"UnicodeIBM1268"), ptr);
		case UnicodeIBM1276:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[15]>(u8"UnicodeIBM1276"), ptr);
		case UnicodeIBM1264:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[15]>(u8"UnicodeIBM1264"), ptr);
		case UnicodeIBM1265:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[15]>(u8"UnicodeIBM1265"), ptr);
		case Unicode11:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u8"Unicode11"), ptr);
		case SCSU:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[5]>(u8"SCSU"), ptr);
		case UTF7:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[5]>(u8"UTF7"), ptr);
		case UTF16BE:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(u8"UTF16BE"), ptr);
		case UTF16LE:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(u8"UTF16LE"), ptr);
		case UTF16:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[6]>(u8"UTF16"), ptr);
		case CESU8:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[6]>(u8"CESU8"), ptr);
		case UTF32:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[6]>(u8"UTF32"), ptr);
		case UTF32BE:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(u8"UTF32BE"), ptr);
		case UTF32LE:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(u8"UTF32LE"), ptr);
		case BOCU1:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[6]>(u8"BOCU1"), ptr);
		case UTF7IMAP:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u8"UTF7IMAP"), ptr);
		case Windows30Latin1:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(u8"Windows30Latin1"), ptr);
		case Windows31Latin1:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(u8"Windows31Latin1"), ptr);
		case Windows31Latin2:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(u8"Windows31Latin2"), ptr);
		case Windows31Latin5:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(u8"Windows31Latin5"), ptr);
		case HPRoman8:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u8"HPRoman8"), ptr);
		case AdobeStandardEncoding:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[22]>(u8"AdobeStandardEncoding"), ptr);
		case VenturaUS:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u8"VenturaUS"), ptr);
		case VenturaInternational:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[21]>(u8"VenturaInternational"), ptr);
		case DECMCS:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u8"DECMCS"), ptr);
		case PC850Multilingual:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[18]>(u8"PC850Multilingual"), ptr);
		case PCp852:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u8"PCp852"), ptr);
		case PC8CodePage437:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[15]>(u8"PC8CodePage437"), ptr);
		case PC8DanishNorwegian:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[19]>(u8"PC8DanishNorwegian"), ptr);
		case PC862LatinHebrew:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[17]>(u8"PC862LatinHebrew"), ptr);
		case PC8Turkish:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[11]>(u8"PC8Turkish"), ptr);
		case IBMSymbols:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[11]>(u8"IBMSymbols"), ptr);
		case IBMThai:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(u8"IBMThai"), ptr);
		case HPLegal:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(u8"HPLegal"), ptr);
		case HPPiFont:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u8"HPPiFont"), ptr);
		case HPMath8:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(u8"HPMath8"), ptr);
		case HPPSMath:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u8"HPPSMath"), ptr);
		case HPDesktop:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u8"HPDesktop"), ptr);
		case VenturaMath:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u8"VenturaMath"), ptr);
		case MicrosoftPublishing:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[20]>(u8"MicrosoftPublishing"), ptr);
		case Windows31J:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[11]>(u8"Windows31J"), ptr);
		case GB2312:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u8"GB2312"), ptr);
		case Big5:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[5]>(u8"Big5"), ptr);
		case Macintosh:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u8"Macintosh"), ptr);
		case IBM037:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u8"IBM037"), ptr);
		case IBM038:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u8"IBM038"), ptr);
		case IBM273:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u8"IBM273"), ptr);
		case IBM274:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u8"IBM274"), ptr);
		case IBM275:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u8"IBM275"), ptr);
		case IBM277:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u8"IBM277"), ptr);
		case IBM278:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u8"IBM278"), ptr);
		case IBM280:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u8"IBM280"), ptr);
		case IBM281:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u8"IBM281"), ptr);
		case IBM284:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u8"IBM284"), ptr);
		case IBM285:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u8"IBM285"), ptr);
		case IBM290:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u8"IBM290"), ptr);
		case IBM297:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u8"IBM297"), ptr);
		case IBM420:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u8"IBM420"), ptr);
		case IBM423:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u8"IBM423"), ptr);
		case IBM424:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u8"IBM424"), ptr);
		case IBM500:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u8"IBM500"), ptr);
		case IBM851:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u8"IBM851"), ptr);
		case IBM855:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u8"IBM855"), ptr);
		case IBM857:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u8"IBM857"), ptr);
		case IBM860:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u8"IBM860"), ptr);
		case IBM861:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u8"IBM861"), ptr);
		case IBM863:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u8"IBM863"), ptr);
		case IBM864:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u8"IBM864"), ptr);
		case IBM865:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u8"IBM865"), ptr);
		case IBM868:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u8"IBM868"), ptr);
		case IBM869:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u8"IBM869"), ptr);
		case IBM870:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u8"IBM870"), ptr);
		case IBM871:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u8"IBM871"), ptr);
		case IBM880:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u8"IBM880"), ptr);
		case IBM891:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u8"IBM891"), ptr);
		case IBM903:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u8"IBM903"), ptr);
		case IBBM904:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(u8"IBBM904"), ptr);
		case IBM905:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u8"IBM905"), ptr);
		case IBM918:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u8"IBM918"), ptr);
		case IBM1026:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(u8"IBM1026"), ptr);
		case IBMEBCDICATDE:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[14]>(u8"IBMEBCDICATDE"), ptr);
		case EBCDICATDEA:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u8"EBCDICATDEA"), ptr);
		case EBCDICCAFR:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[11]>(u8"EBCDICCAFR"), ptr);
		case EBCDICDKNO:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[11]>(u8"EBCDICDKNO"), ptr);
		case EBCDICDKNOA:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u8"EBCDICDKNOA"), ptr);
		case EBCDICFISE:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[11]>(u8"EBCDICFISE"), ptr);
		case EBCDICFISEA:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u8"EBCDICFISEA"), ptr);
		case EBCDICFR:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u8"EBCDICFR"), ptr);
		case EBCDICIT:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u8"EBCDICIT"), ptr);
		case EBCDICPT:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u8"EBCDICPT"), ptr);
		case EBCDICES:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u8"EBCDICES"), ptr);
		case EBCDICESA:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u8"EBCDICESA"), ptr);
		case EBCDICESS:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u8"EBCDICESS"), ptr);
		case EBCDICUK:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u8"EBCDICUK"), ptr);
		case EBCDICUS:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u8"EBCDICUS"), ptr);
		case Unknown8BiT:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u8"Unknown8BiT"), ptr);
		case Mnemonic:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u8"Mnemonic"), ptr);
		case Mnem:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[5]>(u8"Mnem"), ptr);
		case VISCII:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u8"VISCII"), ptr);
		case VIQR:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[5]>(u8"VIQR"), ptr);
		case KOI8R:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[6]>(u8"KOI8R"), ptr);
		case HZGB2312:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u8"HZGB2312"), ptr);
		case IBM866:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u8"IBM866"), ptr);
		case PC775Baltic:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u8"PC775Baltic"), ptr);
		case KOI8U:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[6]>(u8"KOI8U"), ptr);
		case IBM00858:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u8"IBM00858"), ptr);
		case IBM00924:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u8"IBM00924"), ptr);
		case IBM01140:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u8"IBM01140"), ptr);
		case IBM01141:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u8"IBM01141"), ptr);
		case IBM01142:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u8"IBM01142"), ptr);
		case IBM01143:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u8"IBM01143"), ptr);
		case IBM01144:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u8"IBM01144"), ptr);
		case IBM01145:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u8"IBM01145"), ptr);
		case IBM01146:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u8"IBM01146"), ptr);
		case IBM01147:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u8"IBM01147"), ptr);
		case IBM01148:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u8"IBM01148"), ptr);
		case IBM01149:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u8"IBM01149"), ptr);
		case Big5HKSCS:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u8"Big5HKSCS"), ptr);
		case IBM1047:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(u8"IBM1047"), ptr);
		case PTCP154:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(u8"PTCP154"), ptr);
		case Amiga1251:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u8"Amiga1251"), ptr);
		case KOI7switched:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[13]>(u8"KOI7switched"), ptr);
		case BRF:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[4]>(u8"BRF"), ptr);
		case TSCII:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[6]>(u8"TSCII"), ptr);
		case CP51932:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(u8"CP51932"), ptr);
		case windows874:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[11]>(u8"windows874"), ptr);
		case windows1250:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u8"windows1250"), ptr);
		case windows1251:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u8"windows1251"), ptr);
		case windows1252:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u8"windows1252"), ptr);
		case windows1253:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u8"windows1253"), ptr);
		case windows1254:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u8"windows1254"), ptr);
		case windows1255:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u8"windows1255"), ptr);
		case windows1256:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u8"windows1256"), ptr);
		case windows1257:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u8"windows1257"), ptr);
		case windows1258:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u8"windows1258"), ptr);
		case TIS620:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u8"TIS620"), ptr);
		case CP50220:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(u8"CP50220"), ptr);
		default:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(u8"unknown"), ptr);
		}
	}
	else if constexpr (sizeof(char_type) == 2)
	{
		switch (mib)
		{
		case ASCII:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[6]>(u"ASCII"), ptr);
		case ISOLatin1:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u"ISOLatin1"), ptr);
		case ISOLatin2:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u"ISOLatin2"), ptr);
		case ISOLatin3:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u"ISOLatin3"), ptr);
		case ISOLatin4:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u"ISOLatin4"), ptr);
		case ISOLatinCyrillic:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[17]>(u"ISOLatinCyrillic"), ptr);
		case ISOLatinArabic:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[15]>(u"ISOLatinArabic"), ptr);
		case ISOLatinGreek:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[14]>(u"ISOLatinGreek"), ptr);
		case ISOLatinHebrew:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[15]>(u"ISOLatinHebrew"), ptr);
		case ISOLatin5:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u"ISOLatin5"), ptr);
		case ISOLatin6:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u"ISOLatin6"), ptr);
		case ISOTextComm:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u"ISOTextComm"), ptr);
		case HalfWidthKatakana:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[18]>(u"HalfWidthKatakana"), ptr);
		case JISEncoding:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u"JISEncoding"), ptr);
		case ShiftJIS:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u"ShiftJIS"), ptr);
		case EUCPkdFmtJapanese:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[18]>(u"EUCPkdFmtJapanese"), ptr);
		case EUCFixWidJapanese:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[18]>(u"EUCFixWidJapanese"), ptr);
		case ISO4UnitedKingdom:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[18]>(u"ISO4UnitedKingdom"), ptr);
		case ISO11SwedishForNames:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[21]>(u"ISO11SwedishForNames"), ptr);
		case ISO15Italian:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[13]>(u"ISO15Italian"), ptr);
		case ISO17Spanish:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[13]>(u"ISO17Spanish"), ptr);
		case ISO21German:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u"ISO21German"), ptr);
		case ISO60DanishNorwegian:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[21]>(u"ISO60DanishNorwegian"), ptr);
		case ISO69French:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u"ISO69French"), ptr);
		case ISO10646UTF1:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[13]>(u"ISO10646UTF1"), ptr);
		case ISO646basic1983:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(u"ISO646basic1983"), ptr);
		case INVARIANT:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u"INVARIANT"), ptr);
		case ISO2IntlRefVersion:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[19]>(u"ISO2IntlRefVersion"), ptr);
		case NATSSEFI:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u"NATSSEFI"), ptr);
		case NATSSEFIADD:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u"NATSSEFIADD"), ptr);
		case NATSDANO:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u"NATSDANO"), ptr);
		case NATSDANOADD:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u"NATSDANOADD"), ptr);
		case ISO10Swedish:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[13]>(u"ISO10Swedish"), ptr);
		case KSC56011987:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u"KSC56011987"), ptr);
		case ISO2022KR:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u"ISO2022KR"), ptr);
		case EUCKR:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[6]>(u"EUCKR"), ptr);
		case ISO2022JP:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u"ISO2022JP"), ptr);
		case ISO2022JP2:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[11]>(u"ISO2022JP2"), ptr);
		case ISO13JISC6220jp:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(u"ISO13JISC6220jp"), ptr);
		case ISO14JISC6220ro:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(u"ISO14JISC6220ro"), ptr);
		case ISO16Portuguese:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(u"ISO16Portuguese"), ptr);
		case ISO18Greek7Old:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[15]>(u"ISO18Greek7Old"), ptr);
		case ISO19LatinGreek:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(u"ISO19LatinGreek"), ptr);
		case ISO25French:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u"ISO25French"), ptr);
		case ISO27LatinGreek1:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[17]>(u"ISO27LatinGreek1"), ptr);
		case ISO5427Cyrillic:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(u"ISO5427Cyrillic"), ptr);
		case ISO42JISC62261978:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[18]>(u"ISO42JISC62261978"), ptr);
		case ISO47BSViewdata:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(u"ISO47BSViewdata"), ptr);
		case ISO49INIS:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u"ISO49INIS"), ptr);
		case ISO50INIS8:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[11]>(u"ISO50INIS8"), ptr);
		case ISO51INISCyrillic:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[18]>(u"ISO51INISCyrillic"), ptr);
		case ISO54271981:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u"ISO54271981"), ptr);
		case ISO5428Greek:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[13]>(u"ISO5428Greek"), ptr);
		case ISO57GB1988:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u"ISO57GB1988"), ptr);
		case ISO58GB231280:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[14]>(u"ISO58GB231280"), ptr);
		case ISO61Norwegian2:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(u"ISO61Norwegian2"), ptr);
		case ISO70VideotexSupp1:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[19]>(u"ISO70VideotexSupp1"), ptr);
		case ISO84Portuguese2:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[17]>(u"ISO84Portuguese2"), ptr);
		case ISO85Spanish2:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[14]>(u"ISO85Spanish2"), ptr);
		case ISO86Hungarian:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[15]>(u"ISO86Hungarian"), ptr);
		case ISO87JISX0208:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[14]>(u"ISO87JISX0208"), ptr);
		case ISO88Greek7:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u"ISO88Greek7"), ptr);
		case ISO89ASMO449:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[13]>(u"ISO89ASMO449"), ptr);
		case ISO90:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[6]>(u"ISO90"), ptr);
		case ISO91JISC62291984a:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[19]>(u"ISO91JISC62291984a"), ptr);
		case ISO92JISC62991984b:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[19]>(u"ISO92JISC62991984b"), ptr);
		case ISO93JIS62291984badd:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[21]>(u"ISO93JIS62291984badd"), ptr);
		case ISO94JIS62291984hand:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[21]>(u"ISO94JIS62291984hand"), ptr);
		case ISO95JIS62291984handadd:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[24]>(u"ISO95JIS62291984handadd"), ptr);
		case ISO96JISC62291984kana:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[22]>(u"ISO96JISC62291984kana"), ptr);
		case ISO2033:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(u"ISO2033"), ptr);
		case ISO99NAPLPS:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u"ISO99NAPLPS"), ptr);
		case ISO102T617bit:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[14]>(u"ISO102T617bit"), ptr);
		case ISO103T618bit:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[14]>(u"ISO103T618bit"), ptr);
		case ISO111ECMACyrillic:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[19]>(u"ISO111ECMACyrillic"), ptr);
		case ISO121Canadian1:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(u"ISO121Canadian1"), ptr);
		case ISO122Canadian2:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(u"ISO122Canadian2"), ptr);
		case ISO123CSAZ24341985gr:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[21]>(u"ISO123CSAZ24341985gr"), ptr);
		case ISO88596E:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u"ISO88596E"), ptr);
		case ISO88596I:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u"ISO88596I"), ptr);
		case ISO128T101G2:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[13]>(u"ISO128T101G2"), ptr);
		case ISO88598E:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u"ISO88598E"), ptr);
		case ISO88598I:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u"ISO88598I"), ptr);
		case ISO139CSN369103:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(u"ISO139CSN369103"), ptr);
		case ISO141JUSIB1002:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(u"ISO141JUSIB1002"), ptr);
		case ISO143IECP271:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[14]>(u"ISO143IECP271"), ptr);
		case ISO146Serbian:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[14]>(u"ISO146Serbian"), ptr);
		case ISO147Macedonian:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[17]>(u"ISO147Macedonian"), ptr);
		case ISO150:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u"ISO150"), ptr);
		case ISO151Cuba:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[11]>(u"ISO151Cuba"), ptr);
		case ISO6937Add:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[11]>(u"ISO6937Add"), ptr);
		case ISO153GOST1976874:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[18]>(u"ISO153GOST1976874"), ptr);
		case ISO8859Supp:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u"ISO8859Supp"), ptr);
		case ISO10367Box:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u"ISO10367Box"), ptr);
		case ISO158Lap:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u"ISO158Lap"), ptr);
		case ISO159JISX02121990:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[19]>(u"ISO159JISX02121990"), ptr);
		case ISO646Danish:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[13]>(u"ISO646Danish"), ptr);
		case USDK:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[5]>(u"USDK"), ptr);
		case DKUS:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[5]>(u"DKUS"), ptr);
		case KSC5636:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(u"KSC5636"), ptr);
		case Unicode11UTF7:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[14]>(u"Unicode11UTF7"), ptr);
		case ISO2022CN:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u"ISO2022CN"), ptr);
		case ISO2022CNEXT:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[13]>(u"ISO2022CNEXT"), ptr);
		case UTF8:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[5]>(u"UTF8"), ptr);
		case ISO885913:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u"ISO885913"), ptr);
		case ISO885914:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u"ISO885914"), ptr);
		case ISO885915:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u"ISO885915"), ptr);
		case ISO885916:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u"ISO885916"), ptr);
		case GBK:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[4]>(u"GBK"), ptr);
		case GB18030:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(u"GB18030"), ptr);
		case OSDEBCDICDF0415:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(u"OSDEBCDICDF0415"), ptr);
		case OSDEBCDICDF03IRV:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[17]>(u"OSDEBCDICDF03IRV"), ptr);
		case OSDEBCDICDF041:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[15]>(u"OSDEBCDICDF041"), ptr);
		case ISO115481:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u"ISO115481"), ptr);
		case KZ1048:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u"KZ1048"), ptr);
		case Unicode:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(u"Unicode"), ptr);
		case UCS4:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[5]>(u"UCS4"), ptr);
		case UnicodeASCII:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[13]>(u"UnicodeASCII"), ptr);
		case UnicodeLatin1:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[14]>(u"UnicodeLatin1"), ptr);
		case UnicodeJapanese:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(u"UnicodeJapanese"), ptr);
		case UnicodeIBM1261:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[15]>(u"UnicodeIBM1261"), ptr);
		case UnicodeIBM1268:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[15]>(u"UnicodeIBM1268"), ptr);
		case UnicodeIBM1276:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[15]>(u"UnicodeIBM1276"), ptr);
		case UnicodeIBM1264:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[15]>(u"UnicodeIBM1264"), ptr);
		case UnicodeIBM1265:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[15]>(u"UnicodeIBM1265"), ptr);
		case Unicode11:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u"Unicode11"), ptr);
		case SCSU:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[5]>(u"SCSU"), ptr);
		case UTF7:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[5]>(u"UTF7"), ptr);
		case UTF16BE:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(u"UTF16BE"), ptr);
		case UTF16LE:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(u"UTF16LE"), ptr);
		case UTF16:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[6]>(u"UTF16"), ptr);
		case CESU8:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[6]>(u"CESU8"), ptr);
		case UTF32:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[6]>(u"UTF32"), ptr);
		case UTF32BE:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(u"UTF32BE"), ptr);
		case UTF32LE:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(u"UTF32LE"), ptr);
		case BOCU1:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[6]>(u"BOCU1"), ptr);
		case UTF7IMAP:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u"UTF7IMAP"), ptr);
		case Windows30Latin1:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(u"Windows30Latin1"), ptr);
		case Windows31Latin1:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(u"Windows31Latin1"), ptr);
		case Windows31Latin2:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(u"Windows31Latin2"), ptr);
		case Windows31Latin5:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(u"Windows31Latin5"), ptr);
		case HPRoman8:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u"HPRoman8"), ptr);
		case AdobeStandardEncoding:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[22]>(u"AdobeStandardEncoding"), ptr);
		case VenturaUS:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u"VenturaUS"), ptr);
		case VenturaInternational:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[21]>(u"VenturaInternational"), ptr);
		case DECMCS:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u"DECMCS"), ptr);
		case PC850Multilingual:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[18]>(u"PC850Multilingual"), ptr);
		case PCp852:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u"PCp852"), ptr);
		case PC8CodePage437:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[15]>(u"PC8CodePage437"), ptr);
		case PC8DanishNorwegian:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[19]>(u"PC8DanishNorwegian"), ptr);
		case PC862LatinHebrew:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[17]>(u"PC862LatinHebrew"), ptr);
		case PC8Turkish:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[11]>(u"PC8Turkish"), ptr);
		case IBMSymbols:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[11]>(u"IBMSymbols"), ptr);
		case IBMThai:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(u"IBMThai"), ptr);
		case HPLegal:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(u"HPLegal"), ptr);
		case HPPiFont:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u"HPPiFont"), ptr);
		case HPMath8:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(u"HPMath8"), ptr);
		case HPPSMath:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u"HPPSMath"), ptr);
		case HPDesktop:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u"HPDesktop"), ptr);
		case VenturaMath:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u"VenturaMath"), ptr);
		case MicrosoftPublishing:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[20]>(u"MicrosoftPublishing"), ptr);
		case Windows31J:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[11]>(u"Windows31J"), ptr);
		case GB2312:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u"GB2312"), ptr);
		case Big5:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[5]>(u"Big5"), ptr);
		case Macintosh:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u"Macintosh"), ptr);
		case IBM037:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u"IBM037"), ptr);
		case IBM038:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u"IBM038"), ptr);
		case IBM273:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u"IBM273"), ptr);
		case IBM274:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u"IBM274"), ptr);
		case IBM275:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u"IBM275"), ptr);
		case IBM277:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u"IBM277"), ptr);
		case IBM278:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u"IBM278"), ptr);
		case IBM280:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u"IBM280"), ptr);
		case IBM281:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u"IBM281"), ptr);
		case IBM284:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u"IBM284"), ptr);
		case IBM285:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u"IBM285"), ptr);
		case IBM290:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u"IBM290"), ptr);
		case IBM297:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u"IBM297"), ptr);
		case IBM420:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u"IBM420"), ptr);
		case IBM423:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u"IBM423"), ptr);
		case IBM424:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u"IBM424"), ptr);
		case IBM500:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u"IBM500"), ptr);
		case IBM851:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u"IBM851"), ptr);
		case IBM855:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u"IBM855"), ptr);
		case IBM857:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u"IBM857"), ptr);
		case IBM860:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u"IBM860"), ptr);
		case IBM861:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u"IBM861"), ptr);
		case IBM863:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u"IBM863"), ptr);
		case IBM864:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u"IBM864"), ptr);
		case IBM865:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u"IBM865"), ptr);
		case IBM868:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u"IBM868"), ptr);
		case IBM869:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u"IBM869"), ptr);
		case IBM870:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u"IBM870"), ptr);
		case IBM871:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u"IBM871"), ptr);
		case IBM880:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u"IBM880"), ptr);
		case IBM891:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u"IBM891"), ptr);
		case IBM903:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u"IBM903"), ptr);
		case IBBM904:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(u"IBBM904"), ptr);
		case IBM905:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u"IBM905"), ptr);
		case IBM918:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u"IBM918"), ptr);
		case IBM1026:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(u"IBM1026"), ptr);
		case IBMEBCDICATDE:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[14]>(u"IBMEBCDICATDE"), ptr);
		case EBCDICATDEA:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u"EBCDICATDEA"), ptr);
		case EBCDICCAFR:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[11]>(u"EBCDICCAFR"), ptr);
		case EBCDICDKNO:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[11]>(u"EBCDICDKNO"), ptr);
		case EBCDICDKNOA:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u"EBCDICDKNOA"), ptr);
		case EBCDICFISE:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[11]>(u"EBCDICFISE"), ptr);
		case EBCDICFISEA:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u"EBCDICFISEA"), ptr);
		case EBCDICFR:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u"EBCDICFR"), ptr);
		case EBCDICIT:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u"EBCDICIT"), ptr);
		case EBCDICPT:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u"EBCDICPT"), ptr);
		case EBCDICES:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u"EBCDICES"), ptr);
		case EBCDICESA:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u"EBCDICESA"), ptr);
		case EBCDICESS:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u"EBCDICESS"), ptr);
		case EBCDICUK:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u"EBCDICUK"), ptr);
		case EBCDICUS:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u"EBCDICUS"), ptr);
		case Unknown8BiT:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u"Unknown8BiT"), ptr);
		case Mnemonic:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u"Mnemonic"), ptr);
		case Mnem:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[5]>(u"Mnem"), ptr);
		case VISCII:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u"VISCII"), ptr);
		case VIQR:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[5]>(u"VIQR"), ptr);
		case KOI8R:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[6]>(u"KOI8R"), ptr);
		case HZGB2312:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u"HZGB2312"), ptr);
		case IBM866:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u"IBM866"), ptr);
		case PC775Baltic:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u"PC775Baltic"), ptr);
		case KOI8U:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[6]>(u"KOI8U"), ptr);
		case IBM00858:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u"IBM00858"), ptr);
		case IBM00924:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u"IBM00924"), ptr);
		case IBM01140:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u"IBM01140"), ptr);
		case IBM01141:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u"IBM01141"), ptr);
		case IBM01142:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u"IBM01142"), ptr);
		case IBM01143:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u"IBM01143"), ptr);
		case IBM01144:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u"IBM01144"), ptr);
		case IBM01145:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u"IBM01145"), ptr);
		case IBM01146:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u"IBM01146"), ptr);
		case IBM01147:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u"IBM01147"), ptr);
		case IBM01148:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u"IBM01148"), ptr);
		case IBM01149:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(u"IBM01149"), ptr);
		case Big5HKSCS:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u"Big5HKSCS"), ptr);
		case IBM1047:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(u"IBM1047"), ptr);
		case PTCP154:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(u"PTCP154"), ptr);
		case Amiga1251:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(u"Amiga1251"), ptr);
		case KOI7switched:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[13]>(u"KOI7switched"), ptr);
		case BRF:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[4]>(u"BRF"), ptr);
		case TSCII:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[6]>(u"TSCII"), ptr);
		case CP51932:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(u"CP51932"), ptr);
		case windows874:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[11]>(u"windows874"), ptr);
		case windows1250:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u"windows1250"), ptr);
		case windows1251:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u"windows1251"), ptr);
		case windows1252:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u"windows1252"), ptr);
		case windows1253:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u"windows1253"), ptr);
		case windows1254:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u"windows1254"), ptr);
		case windows1255:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u"windows1255"), ptr);
		case windows1256:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u"windows1256"), ptr);
		case windows1257:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u"windows1257"), ptr);
		case windows1258:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(u"windows1258"), ptr);
		case TIS620:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(u"TIS620"), ptr);
		case CP50220:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(u"CP50220"), ptr);
		default:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(u"unknown"), ptr);
		}
	}
	else
	{
		switch (mib)
		{
		case ASCII:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[6]>(U"ASCII"), ptr);
		case ISOLatin1:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(U"ISOLatin1"), ptr);
		case ISOLatin2:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(U"ISOLatin2"), ptr);
		case ISOLatin3:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(U"ISOLatin3"), ptr);
		case ISOLatin4:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(U"ISOLatin4"), ptr);
		case ISOLatinCyrillic:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[17]>(U"ISOLatinCyrillic"), ptr);
		case ISOLatinArabic:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[15]>(U"ISOLatinArabic"), ptr);
		case ISOLatinGreek:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[14]>(U"ISOLatinGreek"), ptr);
		case ISOLatinHebrew:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[15]>(U"ISOLatinHebrew"), ptr);
		case ISOLatin5:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(U"ISOLatin5"), ptr);
		case ISOLatin6:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(U"ISOLatin6"), ptr);
		case ISOTextComm:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(U"ISOTextComm"), ptr);
		case HalfWidthKatakana:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[18]>(U"HalfWidthKatakana"), ptr);
		case JISEncoding:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(U"JISEncoding"), ptr);
		case ShiftJIS:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(U"ShiftJIS"), ptr);
		case EUCPkdFmtJapanese:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[18]>(U"EUCPkdFmtJapanese"), ptr);
		case EUCFixWidJapanese:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[18]>(U"EUCFixWidJapanese"), ptr);
		case ISO4UnitedKingdom:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[18]>(U"ISO4UnitedKingdom"), ptr);
		case ISO11SwedishForNames:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[21]>(U"ISO11SwedishForNames"), ptr);
		case ISO15Italian:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[13]>(U"ISO15Italian"), ptr);
		case ISO17Spanish:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[13]>(U"ISO17Spanish"), ptr);
		case ISO21German:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(U"ISO21German"), ptr);
		case ISO60DanishNorwegian:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[21]>(U"ISO60DanishNorwegian"), ptr);
		case ISO69French:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(U"ISO69French"), ptr);
		case ISO10646UTF1:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[13]>(U"ISO10646UTF1"), ptr);
		case ISO646basic1983:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(U"ISO646basic1983"), ptr);
		case INVARIANT:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(U"INVARIANT"), ptr);
		case ISO2IntlRefVersion:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[19]>(U"ISO2IntlRefVersion"), ptr);
		case NATSSEFI:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(U"NATSSEFI"), ptr);
		case NATSSEFIADD:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(U"NATSSEFIADD"), ptr);
		case NATSDANO:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(U"NATSDANO"), ptr);
		case NATSDANOADD:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(U"NATSDANOADD"), ptr);
		case ISO10Swedish:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[13]>(U"ISO10Swedish"), ptr);
		case KSC56011987:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(U"KSC56011987"), ptr);
		case ISO2022KR:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(U"ISO2022KR"), ptr);
		case EUCKR:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[6]>(U"EUCKR"), ptr);
		case ISO2022JP:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(U"ISO2022JP"), ptr);
		case ISO2022JP2:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[11]>(U"ISO2022JP2"), ptr);
		case ISO13JISC6220jp:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(U"ISO13JISC6220jp"), ptr);
		case ISO14JISC6220ro:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(U"ISO14JISC6220ro"), ptr);
		case ISO16Portuguese:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(U"ISO16Portuguese"), ptr);
		case ISO18Greek7Old:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[15]>(U"ISO18Greek7Old"), ptr);
		case ISO19LatinGreek:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(U"ISO19LatinGreek"), ptr);
		case ISO25French:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(U"ISO25French"), ptr);
		case ISO27LatinGreek1:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[17]>(U"ISO27LatinGreek1"), ptr);
		case ISO5427Cyrillic:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(U"ISO5427Cyrillic"), ptr);
		case ISO42JISC62261978:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[18]>(U"ISO42JISC62261978"), ptr);
		case ISO47BSViewdata:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(U"ISO47BSViewdata"), ptr);
		case ISO49INIS:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(U"ISO49INIS"), ptr);
		case ISO50INIS8:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[11]>(U"ISO50INIS8"), ptr);
		case ISO51INISCyrillic:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[18]>(U"ISO51INISCyrillic"), ptr);
		case ISO54271981:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(U"ISO54271981"), ptr);
		case ISO5428Greek:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[13]>(U"ISO5428Greek"), ptr);
		case ISO57GB1988:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(U"ISO57GB1988"), ptr);
		case ISO58GB231280:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[14]>(U"ISO58GB231280"), ptr);
		case ISO61Norwegian2:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(U"ISO61Norwegian2"), ptr);
		case ISO70VideotexSupp1:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[19]>(U"ISO70VideotexSupp1"), ptr);
		case ISO84Portuguese2:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[17]>(U"ISO84Portuguese2"), ptr);
		case ISO85Spanish2:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[14]>(U"ISO85Spanish2"), ptr);
		case ISO86Hungarian:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[15]>(U"ISO86Hungarian"), ptr);
		case ISO87JISX0208:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[14]>(U"ISO87JISX0208"), ptr);
		case ISO88Greek7:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(U"ISO88Greek7"), ptr);
		case ISO89ASMO449:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[13]>(U"ISO89ASMO449"), ptr);
		case ISO90:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[6]>(U"ISO90"), ptr);
		case ISO91JISC62291984a:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[19]>(U"ISO91JISC62291984a"), ptr);
		case ISO92JISC62991984b:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[19]>(U"ISO92JISC62991984b"), ptr);
		case ISO93JIS62291984badd:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[21]>(U"ISO93JIS62291984badd"), ptr);
		case ISO94JIS62291984hand:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[21]>(U"ISO94JIS62291984hand"), ptr);
		case ISO95JIS62291984handadd:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[24]>(U"ISO95JIS62291984handadd"), ptr);
		case ISO96JISC62291984kana:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[22]>(U"ISO96JISC62291984kana"), ptr);
		case ISO2033:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(U"ISO2033"), ptr);
		case ISO99NAPLPS:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(U"ISO99NAPLPS"), ptr);
		case ISO102T617bit:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[14]>(U"ISO102T617bit"), ptr);
		case ISO103T618bit:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[14]>(U"ISO103T618bit"), ptr);
		case ISO111ECMACyrillic:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[19]>(U"ISO111ECMACyrillic"), ptr);
		case ISO121Canadian1:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(U"ISO121Canadian1"), ptr);
		case ISO122Canadian2:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(U"ISO122Canadian2"), ptr);
		case ISO123CSAZ24341985gr:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[21]>(U"ISO123CSAZ24341985gr"), ptr);
		case ISO88596E:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(U"ISO88596E"), ptr);
		case ISO88596I:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(U"ISO88596I"), ptr);
		case ISO128T101G2:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[13]>(U"ISO128T101G2"), ptr);
		case ISO88598E:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(U"ISO88598E"), ptr);
		case ISO88598I:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(U"ISO88598I"), ptr);
		case ISO139CSN369103:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(U"ISO139CSN369103"), ptr);
		case ISO141JUSIB1002:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(U"ISO141JUSIB1002"), ptr);
		case ISO143IECP271:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[14]>(U"ISO143IECP271"), ptr);
		case ISO146Serbian:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[14]>(U"ISO146Serbian"), ptr);
		case ISO147Macedonian:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[17]>(U"ISO147Macedonian"), ptr);
		case ISO150:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(U"ISO150"), ptr);
		case ISO151Cuba:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[11]>(U"ISO151Cuba"), ptr);
		case ISO6937Add:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[11]>(U"ISO6937Add"), ptr);
		case ISO153GOST1976874:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[18]>(U"ISO153GOST1976874"), ptr);
		case ISO8859Supp:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(U"ISO8859Supp"), ptr);
		case ISO10367Box:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(U"ISO10367Box"), ptr);
		case ISO158Lap:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(U"ISO158Lap"), ptr);
		case ISO159JISX02121990:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[19]>(U"ISO159JISX02121990"), ptr);
		case ISO646Danish:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[13]>(U"ISO646Danish"), ptr);
		case USDK:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[5]>(U"USDK"), ptr);
		case DKUS:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[5]>(U"DKUS"), ptr);
		case KSC5636:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(U"KSC5636"), ptr);
		case Unicode11UTF7:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[14]>(U"Unicode11UTF7"), ptr);
		case ISO2022CN:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(U"ISO2022CN"), ptr);
		case ISO2022CNEXT:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[13]>(U"ISO2022CNEXT"), ptr);
		case UTF8:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[5]>(U"UTF8"), ptr);
		case ISO885913:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(U"ISO885913"), ptr);
		case ISO885914:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(U"ISO885914"), ptr);
		case ISO885915:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(U"ISO885915"), ptr);
		case ISO885916:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(U"ISO885916"), ptr);
		case GBK:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[4]>(U"GBK"), ptr);
		case GB18030:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(U"GB18030"), ptr);
		case OSDEBCDICDF0415:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(U"OSDEBCDICDF0415"), ptr);
		case OSDEBCDICDF03IRV:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[17]>(U"OSDEBCDICDF03IRV"), ptr);
		case OSDEBCDICDF041:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[15]>(U"OSDEBCDICDF041"), ptr);
		case ISO115481:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(U"ISO115481"), ptr);
		case KZ1048:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(U"KZ1048"), ptr);
		case Unicode:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(U"Unicode"), ptr);
		case UCS4:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[5]>(U"UCS4"), ptr);
		case UnicodeASCII:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[13]>(U"UnicodeASCII"), ptr);
		case UnicodeLatin1:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[14]>(U"UnicodeLatin1"), ptr);
		case UnicodeJapanese:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(U"UnicodeJapanese"), ptr);
		case UnicodeIBM1261:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[15]>(U"UnicodeIBM1261"), ptr);
		case UnicodeIBM1268:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[15]>(U"UnicodeIBM1268"), ptr);
		case UnicodeIBM1276:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[15]>(U"UnicodeIBM1276"), ptr);
		case UnicodeIBM1264:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[15]>(U"UnicodeIBM1264"), ptr);
		case UnicodeIBM1265:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[15]>(U"UnicodeIBM1265"), ptr);
		case Unicode11:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(U"Unicode11"), ptr);
		case SCSU:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[5]>(U"SCSU"), ptr);
		case UTF7:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[5]>(U"UTF7"), ptr);
		case UTF16BE:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(U"UTF16BE"), ptr);
		case UTF16LE:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(U"UTF16LE"), ptr);
		case UTF16:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[6]>(U"UTF16"), ptr);
		case CESU8:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[6]>(U"CESU8"), ptr);
		case UTF32:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[6]>(U"UTF32"), ptr);
		case UTF32BE:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(U"UTF32BE"), ptr);
		case UTF32LE:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(U"UTF32LE"), ptr);
		case BOCU1:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[6]>(U"BOCU1"), ptr);
		case UTF7IMAP:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(U"UTF7IMAP"), ptr);
		case Windows30Latin1:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(U"Windows30Latin1"), ptr);
		case Windows31Latin1:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(U"Windows31Latin1"), ptr);
		case Windows31Latin2:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(U"Windows31Latin2"), ptr);
		case Windows31Latin5:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[16]>(U"Windows31Latin5"), ptr);
		case HPRoman8:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(U"HPRoman8"), ptr);
		case AdobeStandardEncoding:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[22]>(U"AdobeStandardEncoding"), ptr);
		case VenturaUS:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(U"VenturaUS"), ptr);
		case VenturaInternational:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[21]>(U"VenturaInternational"), ptr);
		case DECMCS:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(U"DECMCS"), ptr);
		case PC850Multilingual:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[18]>(U"PC850Multilingual"), ptr);
		case PCp852:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(U"PCp852"), ptr);
		case PC8CodePage437:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[15]>(U"PC8CodePage437"), ptr);
		case PC8DanishNorwegian:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[19]>(U"PC8DanishNorwegian"), ptr);
		case PC862LatinHebrew:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[17]>(U"PC862LatinHebrew"), ptr);
		case PC8Turkish:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[11]>(U"PC8Turkish"), ptr);
		case IBMSymbols:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[11]>(U"IBMSymbols"), ptr);
		case IBMThai:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(U"IBMThai"), ptr);
		case HPLegal:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(U"HPLegal"), ptr);
		case HPPiFont:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(U"HPPiFont"), ptr);
		case HPMath8:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(U"HPMath8"), ptr);
		case HPPSMath:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(U"HPPSMath"), ptr);
		case HPDesktop:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(U"HPDesktop"), ptr);
		case VenturaMath:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(U"VenturaMath"), ptr);
		case MicrosoftPublishing:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[20]>(U"MicrosoftPublishing"), ptr);
		case Windows31J:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[11]>(U"Windows31J"), ptr);
		case GB2312:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(U"GB2312"), ptr);
		case Big5:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[5]>(U"Big5"), ptr);
		case Macintosh:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(U"Macintosh"), ptr);
		case IBM037:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(U"IBM037"), ptr);
		case IBM038:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(U"IBM038"), ptr);
		case IBM273:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(U"IBM273"), ptr);
		case IBM274:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(U"IBM274"), ptr);
		case IBM275:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(U"IBM275"), ptr);
		case IBM277:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(U"IBM277"), ptr);
		case IBM278:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(U"IBM278"), ptr);
		case IBM280:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(U"IBM280"), ptr);
		case IBM281:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(U"IBM281"), ptr);
		case IBM284:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(U"IBM284"), ptr);
		case IBM285:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(U"IBM285"), ptr);
		case IBM290:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(U"IBM290"), ptr);
		case IBM297:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(U"IBM297"), ptr);
		case IBM420:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(U"IBM420"), ptr);
		case IBM423:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(U"IBM423"), ptr);
		case IBM424:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(U"IBM424"), ptr);
		case IBM500:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(U"IBM500"), ptr);
		case IBM851:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(U"IBM851"), ptr);
		case IBM855:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(U"IBM855"), ptr);
		case IBM857:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(U"IBM857"), ptr);
		case IBM860:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(U"IBM860"), ptr);
		case IBM861:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(U"IBM861"), ptr);
		case IBM863:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(U"IBM863"), ptr);
		case IBM864:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(U"IBM864"), ptr);
		case IBM865:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(U"IBM865"), ptr);
		case IBM868:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(U"IBM868"), ptr);
		case IBM869:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(U"IBM869"), ptr);
		case IBM870:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(U"IBM870"), ptr);
		case IBM871:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(U"IBM871"), ptr);
		case IBM880:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(U"IBM880"), ptr);
		case IBM891:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(U"IBM891"), ptr);
		case IBM903:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(U"IBM903"), ptr);
		case IBBM904:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(U"IBBM904"), ptr);
		case IBM905:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(U"IBM905"), ptr);
		case IBM918:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(U"IBM918"), ptr);
		case IBM1026:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(U"IBM1026"), ptr);
		case IBMEBCDICATDE:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[14]>(U"IBMEBCDICATDE"), ptr);
		case EBCDICATDEA:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(U"EBCDICATDEA"), ptr);
		case EBCDICCAFR:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[11]>(U"EBCDICCAFR"), ptr);
		case EBCDICDKNO:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[11]>(U"EBCDICDKNO"), ptr);
		case EBCDICDKNOA:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(U"EBCDICDKNOA"), ptr);
		case EBCDICFISE:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[11]>(U"EBCDICFISE"), ptr);
		case EBCDICFISEA:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(U"EBCDICFISEA"), ptr);
		case EBCDICFR:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(U"EBCDICFR"), ptr);
		case EBCDICIT:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(U"EBCDICIT"), ptr);
		case EBCDICPT:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(U"EBCDICPT"), ptr);
		case EBCDICES:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(U"EBCDICES"), ptr);
		case EBCDICESA:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(U"EBCDICESA"), ptr);
		case EBCDICESS:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(U"EBCDICESS"), ptr);
		case EBCDICUK:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(U"EBCDICUK"), ptr);
		case EBCDICUS:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(U"EBCDICUS"), ptr);
		case Unknown8BiT:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(U"Unknown8BiT"), ptr);
		case Mnemonic:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(U"Mnemonic"), ptr);
		case Mnem:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[5]>(U"Mnem"), ptr);
		case VISCII:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(U"VISCII"), ptr);
		case VIQR:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[5]>(U"VIQR"), ptr);
		case KOI8R:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[6]>(U"KOI8R"), ptr);
		case HZGB2312:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(U"HZGB2312"), ptr);
		case IBM866:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(U"IBM866"), ptr);
		case PC775Baltic:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(U"PC775Baltic"), ptr);
		case KOI8U:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[6]>(U"KOI8U"), ptr);
		case IBM00858:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(U"IBM00858"), ptr);
		case IBM00924:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(U"IBM00924"), ptr);
		case IBM01140:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(U"IBM01140"), ptr);
		case IBM01141:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(U"IBM01141"), ptr);
		case IBM01142:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(U"IBM01142"), ptr);
		case IBM01143:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(U"IBM01143"), ptr);
		case IBM01144:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(U"IBM01144"), ptr);
		case IBM01145:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(U"IBM01145"), ptr);
		case IBM01146:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(U"IBM01146"), ptr);
		case IBM01147:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(U"IBM01147"), ptr);
		case IBM01148:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(U"IBM01148"), ptr);
		case IBM01149:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[9]>(U"IBM01149"), ptr);
		case Big5HKSCS:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(U"Big5HKSCS"), ptr);
		case IBM1047:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(U"IBM1047"), ptr);
		case PTCP154:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(U"PTCP154"), ptr);
		case Amiga1251:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[10]>(U"Amiga1251"), ptr);
		case KOI7switched:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[13]>(U"KOI7switched"), ptr);
		case BRF:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[4]>(U"BRF"), ptr);
		case TSCII:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[6]>(U"TSCII"), ptr);
		case CP51932:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(U"CP51932"), ptr);
		case windows874:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[11]>(U"windows874"), ptr);
		case windows1250:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(U"windows1250"), ptr);
		case windows1251:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(U"windows1251"), ptr);
		case windows1252:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(U"windows1252"), ptr);
		case windows1253:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(U"windows1253"), ptr);
		case windows1254:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(U"windows1254"), ptr);
		case windows1255:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(U"windows1255"), ptr);
		case windows1256:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(U"windows1256"), ptr);
		case windows1257:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(U"windows1257"), ptr);
		case windows1258:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[12]>(U"windows1258"), ptr);
		case TIS620:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[7]>(U"TIS620"), ptr);
		case CP50220:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(U"CP50220"), ptr);
		default:
			return fast_io::details::copy_string_literal(reinterpret_cast<char_type const[8]>(U"unknown"), ptr);
		}
	}
}

} // namespace details

template <::std::integral char_type>
inline constexpr ::std::size_t print_reserve_size(::fast_io::io_reserve_type_t<char_type, MIB_enum>) noexcept
{
	return 64;
}

template <::std::integral char_type>
inline constexpr char_type *print_reserve_define(::fast_io::io_reserve_type_t<char_type, MIB_enum>, char_type *ptr, MIB_enum mib) noexcept
{
	return ::fast_io::details::pr_rsv_MIB_impl(ptr, mib);
}

template <::std::integral char_type>
inline constexpr ::std::size_t print_reserve_precise_size(::fast_io::io_reserve_type_t<char_type, MIB_enum>, MIB_enum mib) noexcept
{
	return ::fast_io::details::pr_rsv_precise_size_MIB_impl(mib);
}

template <::std::integral char_type>
inline constexpr void print_reserve_precise_define(::fast_io::io_reserve_type_t<char_type, MIB_enum>, char_type *ptr, ::std::size_t, MIB_enum mib) noexcept
{
	::fast_io::details::pr_rsv_MIB_impl(ptr, mib);
}

namespace details
{

inline constexpr bool MIB_name_string_compare(::fast_io::io_scatter_t left, ::fast_io::io_scatter_t right) noexcept
{
	return ::std::lexicographical_compare((char const *)left.base, (char const *)left.base + left.len, (char const *)right.base, (char const *)right.base + right.len);
}

} // namespace details

template <::std::integral char_type = char>
	requires (sizeof(char_type) == 1)
inline constexpr MIB_enum literal_to_MIB(char_type const *begin, char_type const *end) noexcept
{
	// ::fast_io::freestanding::array does not provide template deduction guide, so we have to use ::std::array
	::std::array names{
		::fast_io::io_scatter_t{u8"ASCII", 5},
		::fast_io::io_scatter_t{u8"AdobeStandardEncoding", 21},
		::fast_io::io_scatter_t{u8"Amiga1251", 9},
		::fast_io::io_scatter_t{u8"BOCU1", 5},
		::fast_io::io_scatter_t{u8"BRF", 3},
		::fast_io::io_scatter_t{u8"Big5", 4},
		::fast_io::io_scatter_t{u8"Big5HKSCS", 9},
		::fast_io::io_scatter_t{u8"CESU8", 5},
		::fast_io::io_scatter_t{u8"CP50220", 7},
		::fast_io::io_scatter_t{u8"CP51932", 7},
		::fast_io::io_scatter_t{u8"DECMCS", 6},
		::fast_io::io_scatter_t{u8"DKUS", 4},
		::fast_io::io_scatter_t{u8"EBCDICATDEA", 11},
		::fast_io::io_scatter_t{u8"EBCDICCAFR", 10},
		::fast_io::io_scatter_t{u8"EBCDICDKNO", 10},
		::fast_io::io_scatter_t{u8"EBCDICDKNOA", 11},
		::fast_io::io_scatter_t{u8"EBCDICES", 8},
		::fast_io::io_scatter_t{u8"EBCDICESA", 9},
		::fast_io::io_scatter_t{u8"EBCDICESS", 9},
		::fast_io::io_scatter_t{u8"EBCDICFISE", 10},
		::fast_io::io_scatter_t{u8"EBCDICFISEA", 11},
		::fast_io::io_scatter_t{u8"EBCDICFR", 8},
		::fast_io::io_scatter_t{u8"EBCDICIT", 8},
		::fast_io::io_scatter_t{u8"EBCDICPT", 8},
		::fast_io::io_scatter_t{u8"EBCDICUK", 8},
		::fast_io::io_scatter_t{u8"EBCDICUS", 8},
		::fast_io::io_scatter_t{u8"EUCFixWidJapanese", 17},
		::fast_io::io_scatter_t{u8"EUCKR", 5},
		::fast_io::io_scatter_t{u8"EUCPkdFmtJapanese", 17},
		::fast_io::io_scatter_t{u8"GB18030", 7},
		::fast_io::io_scatter_t{u8"GB2312", 6},
		::fast_io::io_scatter_t{u8"GBK", 3},
		::fast_io::io_scatter_t{u8"HPDesktop", 9},
		::fast_io::io_scatter_t{u8"HPLegal", 7},
		::fast_io::io_scatter_t{u8"HPMath8", 7},
		::fast_io::io_scatter_t{u8"HPPSMath", 8},
		::fast_io::io_scatter_t{u8"HPPiFont", 8},
		::fast_io::io_scatter_t{u8"HPRoman8", 8},
		::fast_io::io_scatter_t{u8"HZGB2312", 8},
		::fast_io::io_scatter_t{u8"HalfWidthKatakana", 17},
		::fast_io::io_scatter_t{u8"IBBM904", 7},
		::fast_io::io_scatter_t{u8"IBM00858", 8},
		::fast_io::io_scatter_t{u8"IBM00924", 8},
		::fast_io::io_scatter_t{u8"IBM01140", 8},
		::fast_io::io_scatter_t{u8"IBM01141", 8},
		::fast_io::io_scatter_t{u8"IBM01142", 8},
		::fast_io::io_scatter_t{u8"IBM01143", 8},
		::fast_io::io_scatter_t{u8"IBM01144", 8},
		::fast_io::io_scatter_t{u8"IBM01145", 8},
		::fast_io::io_scatter_t{u8"IBM01146", 8},
		::fast_io::io_scatter_t{u8"IBM01147", 8},
		::fast_io::io_scatter_t{u8"IBM01148", 8},
		::fast_io::io_scatter_t{u8"IBM01149", 8},
		::fast_io::io_scatter_t{u8"IBM037", 6},
		::fast_io::io_scatter_t{u8"IBM038", 6},
		::fast_io::io_scatter_t{u8"IBM1026", 7},
		::fast_io::io_scatter_t{u8"IBM1047", 7},
		::fast_io::io_scatter_t{u8"IBM273", 6},
		::fast_io::io_scatter_t{u8"IBM274", 6},
		::fast_io::io_scatter_t{u8"IBM275", 6},
		::fast_io::io_scatter_t{u8"IBM277", 6},
		::fast_io::io_scatter_t{u8"IBM278", 6},
		::fast_io::io_scatter_t{u8"IBM280", 6},
		::fast_io::io_scatter_t{u8"IBM281", 6},
		::fast_io::io_scatter_t{u8"IBM284", 6},
		::fast_io::io_scatter_t{u8"IBM285", 6},
		::fast_io::io_scatter_t{u8"IBM290", 6},
		::fast_io::io_scatter_t{u8"IBM297", 6},
		::fast_io::io_scatter_t{u8"IBM420", 6},
		::fast_io::io_scatter_t{u8"IBM423", 6},
		::fast_io::io_scatter_t{u8"IBM424", 6},
		::fast_io::io_scatter_t{u8"IBM500", 6},
		::fast_io::io_scatter_t{u8"IBM851", 6},
		::fast_io::io_scatter_t{u8"IBM855", 6},
		::fast_io::io_scatter_t{u8"IBM857", 6},
		::fast_io::io_scatter_t{u8"IBM860", 6},
		::fast_io::io_scatter_t{u8"IBM861", 6},
		::fast_io::io_scatter_t{u8"IBM863", 6},
		::fast_io::io_scatter_t{u8"IBM864", 6},
		::fast_io::io_scatter_t{u8"IBM865", 6},
		::fast_io::io_scatter_t{u8"IBM866", 6},
		::fast_io::io_scatter_t{u8"IBM868", 6},
		::fast_io::io_scatter_t{u8"IBM869", 6},
		::fast_io::io_scatter_t{u8"IBM870", 6},
		::fast_io::io_scatter_t{u8"IBM871", 6},
		::fast_io::io_scatter_t{u8"IBM880", 6},
		::fast_io::io_scatter_t{u8"IBM891", 6},
		::fast_io::io_scatter_t{u8"IBM903", 6},
		::fast_io::io_scatter_t{u8"IBM905", 6},
		::fast_io::io_scatter_t{u8"IBM918", 6},
		::fast_io::io_scatter_t{u8"IBMEBCDICATDE", 13},
		::fast_io::io_scatter_t{u8"IBMSymbols", 10},
		::fast_io::io_scatter_t{u8"IBMThai", 7},
		::fast_io::io_scatter_t{u8"INVARIANT", 9},
		::fast_io::io_scatter_t{u8"ISO102T617bit", 13},
		::fast_io::io_scatter_t{u8"ISO10367Box", 11},
		::fast_io::io_scatter_t{u8"ISO103T618bit", 13},
		::fast_io::io_scatter_t{u8"ISO10646UTF1", 12},
		::fast_io::io_scatter_t{u8"ISO10Swedish", 12},
		::fast_io::io_scatter_t{u8"ISO111ECMACyrillic", 18},
		::fast_io::io_scatter_t{u8"ISO115481", 9},
		::fast_io::io_scatter_t{u8"ISO11SwedishForNames", 20},
		::fast_io::io_scatter_t{u8"ISO121Canadian1", 15},
		::fast_io::io_scatter_t{u8"ISO122Canadian2", 15},
		::fast_io::io_scatter_t{u8"ISO123CSAZ24341985gr", 20},
		::fast_io::io_scatter_t{u8"ISO128T101G2", 12},
		::fast_io::io_scatter_t{u8"ISO139CSN369103", 15},
		::fast_io::io_scatter_t{u8"ISO13JISC6220jp", 15},
		::fast_io::io_scatter_t{u8"ISO141JUSIB1002", 15},
		::fast_io::io_scatter_t{u8"ISO143IECP271", 13},
		::fast_io::io_scatter_t{u8"ISO146Serbian", 13},
		::fast_io::io_scatter_t{u8"ISO147Macedonian", 16},
		::fast_io::io_scatter_t{u8"ISO14JISC6220ro", 15},
		::fast_io::io_scatter_t{u8"ISO150", 6},
		::fast_io::io_scatter_t{u8"ISO151Cuba", 10},
		::fast_io::io_scatter_t{u8"ISO153GOST1976874", 17},
		::fast_io::io_scatter_t{u8"ISO158Lap", 9},
		::fast_io::io_scatter_t{u8"ISO159JISX02121990", 18},
		::fast_io::io_scatter_t{u8"ISO15Italian", 12},
		::fast_io::io_scatter_t{u8"ISO16Portuguese", 15},
		::fast_io::io_scatter_t{u8"ISO17Spanish", 12},
		::fast_io::io_scatter_t{u8"ISO18Greek7Old", 14},
		::fast_io::io_scatter_t{u8"ISO19LatinGreek", 15},
		::fast_io::io_scatter_t{u8"ISO2022CN", 9},
		::fast_io::io_scatter_t{u8"ISO2022CNEXT", 12},
		::fast_io::io_scatter_t{u8"ISO2022JP", 9},
		::fast_io::io_scatter_t{u8"ISO2022JP2", 10},
		::fast_io::io_scatter_t{u8"ISO2022KR", 9},
		::fast_io::io_scatter_t{u8"ISO2033", 7},
		::fast_io::io_scatter_t{u8"ISO21German", 11},
		::fast_io::io_scatter_t{u8"ISO25French", 11},
		::fast_io::io_scatter_t{u8"ISO27LatinGreek1", 16},
		::fast_io::io_scatter_t{u8"ISO2IntlRefVersion", 18},
		::fast_io::io_scatter_t{u8"ISO42JISC62261978", 17},
		::fast_io::io_scatter_t{u8"ISO47BSViewdata", 15},
		::fast_io::io_scatter_t{u8"ISO49INIS", 9},
		::fast_io::io_scatter_t{u8"ISO4UnitedKingdom", 17},
		::fast_io::io_scatter_t{u8"ISO50INIS8", 10},
		::fast_io::io_scatter_t{u8"ISO51INISCyrillic", 17},
		::fast_io::io_scatter_t{u8"ISO54271981", 11},
		::fast_io::io_scatter_t{u8"ISO5427Cyrillic", 15},
		::fast_io::io_scatter_t{u8"ISO5428Greek", 12},
		::fast_io::io_scatter_t{u8"ISO57GB1988", 11},
		::fast_io::io_scatter_t{u8"ISO58GB231280", 13},
		::fast_io::io_scatter_t{u8"ISO60DanishNorwegian", 20},
		::fast_io::io_scatter_t{u8"ISO61Norwegian2", 15},
		::fast_io::io_scatter_t{u8"ISO646Danish", 12},
		::fast_io::io_scatter_t{u8"ISO646basic1983", 15},
		::fast_io::io_scatter_t{u8"ISO6937Add", 10},
		::fast_io::io_scatter_t{u8"ISO69French", 11},
		::fast_io::io_scatter_t{u8"ISO70VideotexSupp1", 18},
		::fast_io::io_scatter_t{u8"ISO84Portuguese2", 16},
		::fast_io::io_scatter_t{u8"ISO85Spanish2", 13},
		::fast_io::io_scatter_t{u8"ISO86Hungarian", 14},
		::fast_io::io_scatter_t{u8"ISO87JISX0208", 13},
		::fast_io::io_scatter_t{u8"ISO885913", 9},
		::fast_io::io_scatter_t{u8"ISO885914", 9},
		::fast_io::io_scatter_t{u8"ISO885915", 9},
		::fast_io::io_scatter_t{u8"ISO885916", 9},
		::fast_io::io_scatter_t{u8"ISO88596E", 9},
		::fast_io::io_scatter_t{u8"ISO88596I", 9},
		::fast_io::io_scatter_t{u8"ISO88598E", 9},
		::fast_io::io_scatter_t{u8"ISO88598I", 9},
		::fast_io::io_scatter_t{u8"ISO8859Supp", 11},
		::fast_io::io_scatter_t{u8"ISO88Greek7", 11},
		::fast_io::io_scatter_t{u8"ISO89ASMO449", 12},
		::fast_io::io_scatter_t{u8"ISO90", 5},
		::fast_io::io_scatter_t{u8"ISO91JISC62291984a", 18},
		::fast_io::io_scatter_t{u8"ISO92JISC62991984b", 18},
		::fast_io::io_scatter_t{u8"ISO93JIS62291984badd", 20},
		::fast_io::io_scatter_t{u8"ISO94JIS62291984hand", 20},
		::fast_io::io_scatter_t{u8"ISO95JIS62291984handadd", 23},
		::fast_io::io_scatter_t{u8"ISO96JISC62291984kana", 21},
		::fast_io::io_scatter_t{u8"ISO99NAPLPS", 11},
		::fast_io::io_scatter_t{u8"ISOLatin1", 9},
		::fast_io::io_scatter_t{u8"ISOLatin2", 9},
		::fast_io::io_scatter_t{u8"ISOLatin3", 9},
		::fast_io::io_scatter_t{u8"ISOLatin4", 9},
		::fast_io::io_scatter_t{u8"ISOLatin5", 9},
		::fast_io::io_scatter_t{u8"ISOLatin6", 9},
		::fast_io::io_scatter_t{u8"ISOLatinArabic", 14},
		::fast_io::io_scatter_t{u8"ISOLatinCyrillic", 16},
		::fast_io::io_scatter_t{u8"ISOLatinGreek", 13},
		::fast_io::io_scatter_t{u8"ISOLatinHebrew", 14},
		::fast_io::io_scatter_t{u8"ISOTextComm", 11},
		::fast_io::io_scatter_t{u8"JISEncoding", 11},
		::fast_io::io_scatter_t{u8"KOI7switched", 12},
		::fast_io::io_scatter_t{u8"KOI8R", 5},
		::fast_io::io_scatter_t{u8"KOI8U", 5},
		::fast_io::io_scatter_t{u8"KSC56011987", 11},
		::fast_io::io_scatter_t{u8"KSC5636", 7},
		::fast_io::io_scatter_t{u8"KZ1048", 6},
		::fast_io::io_scatter_t{u8"Macintosh", 9},
		::fast_io::io_scatter_t{u8"MicrosoftPublishing", 19},
		::fast_io::io_scatter_t{u8"Mnem", 4},
		::fast_io::io_scatter_t{u8"Mnemonic", 8},
		::fast_io::io_scatter_t{u8"NATSDANO", 8},
		::fast_io::io_scatter_t{u8"NATSDANOADD", 11},
		::fast_io::io_scatter_t{u8"NATSSEFI", 8},
		::fast_io::io_scatter_t{u8"NATSSEFIADD", 11},
		::fast_io::io_scatter_t{u8"OSDEBCDICDF03IRV", 16},
		::fast_io::io_scatter_t{u8"OSDEBCDICDF041", 14},
		::fast_io::io_scatter_t{u8"OSDEBCDICDF0415", 15},
		::fast_io::io_scatter_t{u8"PC775Baltic", 11},
		::fast_io::io_scatter_t{u8"PC850Multilingual", 17},
		::fast_io::io_scatter_t{u8"PC862LatinHebrew", 16},
		::fast_io::io_scatter_t{u8"PC8CodePage437", 14},
		::fast_io::io_scatter_t{u8"PC8DanishNorwegian", 18},
		::fast_io::io_scatter_t{u8"PC8Turkish", 10},
		::fast_io::io_scatter_t{u8"PCp852", 6},
		::fast_io::io_scatter_t{u8"PTCP154", 7},
		::fast_io::io_scatter_t{u8"SCSU", 4},
		::fast_io::io_scatter_t{u8"ShiftJIS", 8},
		::fast_io::io_scatter_t{u8"TIS620", 6},
		::fast_io::io_scatter_t{u8"TSCII", 5},
		::fast_io::io_scatter_t{u8"UCS4", 4},
		::fast_io::io_scatter_t{u8"USDK", 4},
		::fast_io::io_scatter_t{u8"UTF16", 5},
		::fast_io::io_scatter_t{u8"UTF16BE", 7},
		::fast_io::io_scatter_t{u8"UTF16LE", 7},
		::fast_io::io_scatter_t{u8"UTF32", 5},
		::fast_io::io_scatter_t{u8"UTF32BE", 7},
		::fast_io::io_scatter_t{u8"UTF32LE", 7},
		::fast_io::io_scatter_t{u8"UTF7", 4},
		::fast_io::io_scatter_t{u8"UTF7IMAP", 8},
		::fast_io::io_scatter_t{u8"UTF8", 4},
		::fast_io::io_scatter_t{u8"Unicode", 7},
		::fast_io::io_scatter_t{u8"Unicode11", 9},
		::fast_io::io_scatter_t{u8"Unicode11UTF7", 13},
		::fast_io::io_scatter_t{u8"UnicodeASCII", 12},
		::fast_io::io_scatter_t{u8"UnicodeIBM1261", 14},
		::fast_io::io_scatter_t{u8"UnicodeIBM1264", 14},
		::fast_io::io_scatter_t{u8"UnicodeIBM1265", 14},
		::fast_io::io_scatter_t{u8"UnicodeIBM1268", 14},
		::fast_io::io_scatter_t{u8"UnicodeIBM1276", 14},
		::fast_io::io_scatter_t{u8"UnicodeJapanese", 15},
		::fast_io::io_scatter_t{u8"UnicodeLatin1", 13},
		::fast_io::io_scatter_t{u8"Unknown8BiT", 11},
		::fast_io::io_scatter_t{u8"VIQR", 4},
		::fast_io::io_scatter_t{u8"VISCII", 6},
		::fast_io::io_scatter_t{u8"VenturaInternational", 20},
		::fast_io::io_scatter_t{u8"VenturaMath", 11},
		::fast_io::io_scatter_t{u8"VenturaUS", 9},
		::fast_io::io_scatter_t{u8"Windows30Latin1", 15},
		::fast_io::io_scatter_t{u8"Windows31J", 10},
		::fast_io::io_scatter_t{u8"Windows31Latin1", 15},
		::fast_io::io_scatter_t{u8"Windows31Latin2", 15},
		::fast_io::io_scatter_t{u8"Windows31Latin5", 15},
		::fast_io::io_scatter_t{u8"windows1250", 11},
		::fast_io::io_scatter_t{u8"windows1251", 11},
		::fast_io::io_scatter_t{u8"windows1252", 11},
		::fast_io::io_scatter_t{u8"windows1253", 11},
		::fast_io::io_scatter_t{u8"windows1254", 11},
		::fast_io::io_scatter_t{u8"windows1255", 11},
		::fast_io::io_scatter_t{u8"windows1256", 11},
		::fast_io::io_scatter_t{u8"windows1257", 11},
		::fast_io::io_scatter_t{u8"windows1258", 11},
		::fast_io::io_scatter_t{u8"windows874", 10},
	};
	::std::array mib_nums{
		MIB_enum::ASCII,
		MIB_enum::AdobeStandardEncoding,
		MIB_enum::Amiga1251,
		MIB_enum::BOCU1,
		MIB_enum::BRF,
		MIB_enum::Big5,
		MIB_enum::Big5HKSCS,
		MIB_enum::CESU8,
		MIB_enum::CP50220,
		MIB_enum::CP51932,
		MIB_enum::DECMCS,
		MIB_enum::DKUS,
		MIB_enum::EBCDICATDEA,
		MIB_enum::EBCDICCAFR,
		MIB_enum::EBCDICDKNO,
		MIB_enum::EBCDICDKNOA,
		MIB_enum::EBCDICES,
		MIB_enum::EBCDICESA,
		MIB_enum::EBCDICESS,
		MIB_enum::EBCDICFISE,
		MIB_enum::EBCDICFISEA,
		MIB_enum::EBCDICFR,
		MIB_enum::EBCDICIT,
		MIB_enum::EBCDICPT,
		MIB_enum::EBCDICUK,
		MIB_enum::EBCDICUS,
		MIB_enum::EUCFixWidJapanese,
		MIB_enum::EUCKR,
		MIB_enum::EUCPkdFmtJapanese,
		MIB_enum::GB18030,
		MIB_enum::GB2312,
		MIB_enum::GBK,
		MIB_enum::HPDesktop,
		MIB_enum::HPLegal,
		MIB_enum::HPMath8,
		MIB_enum::HPPSMath,
		MIB_enum::HPPiFont,
		MIB_enum::HPRoman8,
		MIB_enum::HZGB2312,
		MIB_enum::HalfWidthKatakana,
		MIB_enum::IBBM904,
		MIB_enum::IBM00858,
		MIB_enum::IBM00924,
		MIB_enum::IBM01140,
		MIB_enum::IBM01141,
		MIB_enum::IBM01142,
		MIB_enum::IBM01143,
		MIB_enum::IBM01144,
		MIB_enum::IBM01145,
		MIB_enum::IBM01146,
		MIB_enum::IBM01147,
		MIB_enum::IBM01148,
		MIB_enum::IBM01149,
		MIB_enum::IBM037,
		MIB_enum::IBM038,
		MIB_enum::IBM1026,
		MIB_enum::IBM1047,
		MIB_enum::IBM273,
		MIB_enum::IBM274,
		MIB_enum::IBM275,
		MIB_enum::IBM277,
		MIB_enum::IBM278,
		MIB_enum::IBM280,
		MIB_enum::IBM281,
		MIB_enum::IBM284,
		MIB_enum::IBM285,
		MIB_enum::IBM290,
		MIB_enum::IBM297,
		MIB_enum::IBM420,
		MIB_enum::IBM423,
		MIB_enum::IBM424,
		MIB_enum::IBM500,
		MIB_enum::IBM851,
		MIB_enum::IBM855,
		MIB_enum::IBM857,
		MIB_enum::IBM860,
		MIB_enum::IBM861,
		MIB_enum::IBM863,
		MIB_enum::IBM864,
		MIB_enum::IBM865,
		MIB_enum::IBM866,
		MIB_enum::IBM868,
		MIB_enum::IBM869,
		MIB_enum::IBM870,
		MIB_enum::IBM871,
		MIB_enum::IBM880,
		MIB_enum::IBM891,
		MIB_enum::IBM903,
		MIB_enum::IBM905,
		MIB_enum::IBM918,
		MIB_enum::IBMEBCDICATDE,
		MIB_enum::IBMSymbols,
		MIB_enum::IBMThai,
		MIB_enum::INVARIANT,
		MIB_enum::ISO102T617bit,
		MIB_enum::ISO10367Box,
		MIB_enum::ISO103T618bit,
		MIB_enum::ISO10646UTF1,
		MIB_enum::ISO10Swedish,
		MIB_enum::ISO111ECMACyrillic,
		MIB_enum::ISO115481,
		MIB_enum::ISO11SwedishForNames,
		MIB_enum::ISO121Canadian1,
		MIB_enum::ISO122Canadian2,
		MIB_enum::ISO123CSAZ24341985gr,
		MIB_enum::ISO128T101G2,
		MIB_enum::ISO139CSN369103,
		MIB_enum::ISO13JISC6220jp,
		MIB_enum::ISO141JUSIB1002,
		MIB_enum::ISO143IECP271,
		MIB_enum::ISO146Serbian,
		MIB_enum::ISO147Macedonian,
		MIB_enum::ISO14JISC6220ro,
		MIB_enum::ISO150,
		MIB_enum::ISO151Cuba,
		MIB_enum::ISO153GOST1976874,
		MIB_enum::ISO158Lap,
		MIB_enum::ISO159JISX02121990,
		MIB_enum::ISO15Italian,
		MIB_enum::ISO16Portuguese,
		MIB_enum::ISO17Spanish,
		MIB_enum::ISO18Greek7Old,
		MIB_enum::ISO19LatinGreek,
		MIB_enum::ISO2022CN,
		MIB_enum::ISO2022CNEXT,
		MIB_enum::ISO2022JP,
		MIB_enum::ISO2022JP2,
		MIB_enum::ISO2022KR,
		MIB_enum::ISO2033,
		MIB_enum::ISO21German,
		MIB_enum::ISO25French,
		MIB_enum::ISO27LatinGreek1,
		MIB_enum::ISO2IntlRefVersion,
		MIB_enum::ISO42JISC62261978,
		MIB_enum::ISO47BSViewdata,
		MIB_enum::ISO49INIS,
		MIB_enum::ISO4UnitedKingdom,
		MIB_enum::ISO50INIS8,
		MIB_enum::ISO51INISCyrillic,
		MIB_enum::ISO54271981,
		MIB_enum::ISO5427Cyrillic,
		MIB_enum::ISO5428Greek,
		MIB_enum::ISO57GB1988,
		MIB_enum::ISO58GB231280,
		MIB_enum::ISO60DanishNorwegian,
		MIB_enum::ISO61Norwegian2,
		MIB_enum::ISO646Danish,
		MIB_enum::ISO646basic1983,
		MIB_enum::ISO6937Add,
		MIB_enum::ISO69French,
		MIB_enum::ISO70VideotexSupp1,
		MIB_enum::ISO84Portuguese2,
		MIB_enum::ISO85Spanish2,
		MIB_enum::ISO86Hungarian,
		MIB_enum::ISO87JISX0208,
		MIB_enum::ISO885913,
		MIB_enum::ISO885914,
		MIB_enum::ISO885915,
		MIB_enum::ISO885916,
		MIB_enum::ISO88596E,
		MIB_enum::ISO88596I,
		MIB_enum::ISO88598E,
		MIB_enum::ISO88598I,
		MIB_enum::ISO8859Supp,
		MIB_enum::ISO88Greek7,
		MIB_enum::ISO89ASMO449,
		MIB_enum::ISO90,
		MIB_enum::ISO91JISC62291984a,
		MIB_enum::ISO92JISC62991984b,
		MIB_enum::ISO93JIS62291984badd,
		MIB_enum::ISO94JIS62291984hand,
		MIB_enum::ISO95JIS62291984handadd,
		MIB_enum::ISO96JISC62291984kana,
		MIB_enum::ISO99NAPLPS,
		MIB_enum::ISOLatin1,
		MIB_enum::ISOLatin2,
		MIB_enum::ISOLatin3,
		MIB_enum::ISOLatin4,
		MIB_enum::ISOLatin5,
		MIB_enum::ISOLatin6,
		MIB_enum::ISOLatinArabic,
		MIB_enum::ISOLatinCyrillic,
		MIB_enum::ISOLatinGreek,
		MIB_enum::ISOLatinHebrew,
		MIB_enum::ISOTextComm,
		MIB_enum::JISEncoding,
		MIB_enum::KOI7switched,
		MIB_enum::KOI8R,
		MIB_enum::KOI8U,
		MIB_enum::KSC56011987,
		MIB_enum::KSC5636,
		MIB_enum::KZ1048,
		MIB_enum::Macintosh,
		MIB_enum::MicrosoftPublishing,
		MIB_enum::Mnem,
		MIB_enum::Mnemonic,
		MIB_enum::NATSDANO,
		MIB_enum::NATSDANOADD,
		MIB_enum::NATSSEFI,
		MIB_enum::NATSSEFIADD,
		MIB_enum::OSDEBCDICDF03IRV,
		MIB_enum::OSDEBCDICDF041,
		MIB_enum::OSDEBCDICDF0415,
		MIB_enum::PC775Baltic,
		MIB_enum::PC850Multilingual,
		MIB_enum::PC862LatinHebrew,
		MIB_enum::PC8CodePage437,
		MIB_enum::PC8DanishNorwegian,
		MIB_enum::PC8Turkish,
		MIB_enum::PCp852,
		MIB_enum::PTCP154,
		MIB_enum::SCSU,
		MIB_enum::ShiftJIS,
		MIB_enum::TIS620,
		MIB_enum::TSCII,
		MIB_enum::UCS4,
		MIB_enum::USDK,
		MIB_enum::UTF16,
		MIB_enum::UTF16BE,
		MIB_enum::UTF16LE,
		MIB_enum::UTF32,
		MIB_enum::UTF32BE,
		MIB_enum::UTF32LE,
		MIB_enum::UTF7,
		MIB_enum::UTF7IMAP,
		MIB_enum::UTF8,
		MIB_enum::Unicode,
		MIB_enum::Unicode11,
		MIB_enum::Unicode11UTF7,
		MIB_enum::UnicodeASCII,
		MIB_enum::UnicodeIBM1261,
		MIB_enum::UnicodeIBM1264,
		MIB_enum::UnicodeIBM1265,
		MIB_enum::UnicodeIBM1268,
		MIB_enum::UnicodeIBM1276,
		MIB_enum::UnicodeJapanese,
		MIB_enum::UnicodeLatin1,
		MIB_enum::Unknown8BiT,
		MIB_enum::VIQR,
		MIB_enum::VISCII,
		MIB_enum::VenturaInternational,
		MIB_enum::VenturaMath,
		MIB_enum::VenturaUS,
		MIB_enum::Windows30Latin1,
		MIB_enum::Windows31J,
		MIB_enum::Windows31Latin1,
		MIB_enum::Windows31Latin2,
		MIB_enum::Windows31Latin5,
		MIB_enum::windows1250,
		MIB_enum::windows1251,
		MIB_enum::windows1252,
		MIB_enum::windows1253,
		MIB_enum::windows1254,
		MIB_enum::windows1255,
		MIB_enum::windows1256,
		MIB_enum::windows1257,
		MIB_enum::windows1258,
		MIB_enum::windows874,
	};
	auto range{::std::ranges::equal_range(names, ::fast_io::io_scatter_t{begin, static_cast<::std::size_t>(end - begin)}, ::fast_io::details::MIB_name_string_compare)};
	if (range.empty())
	{
		return MIB_enum::unknown;
	}
	else
	{
		return mib_nums[::std::ranges::distance(names.begin(), range.begin())];
	}
}

template <::std::integral char_type = char>
	requires (sizeof(char_type) == 1)
inline constexpr MIB_enum alias_name_to_MIB(char_type const *begin, char_type const *end) noexcept
{
	::std::array names{
		::fast_io::io_scatter_t{u8"437", 3},
		::fast_io::io_scatter_t{u8"850", 3},
		::fast_io::io_scatter_t{u8"851", 3},
		::fast_io::io_scatter_t{u8"852", 3},
		::fast_io::io_scatter_t{u8"855", 3},
		::fast_io::io_scatter_t{u8"857", 3},
		::fast_io::io_scatter_t{u8"860", 3},
		::fast_io::io_scatter_t{u8"861", 3},
		::fast_io::io_scatter_t{u8"862", 3},
		::fast_io::io_scatter_t{u8"863", 3},
		::fast_io::io_scatter_t{u8"865", 3},
		::fast_io::io_scatter_t{u8"866", 3},
		::fast_io::io_scatter_t{u8"869", 3},
		::fast_io::io_scatter_t{u8"904", 3},
		::fast_io::io_scatter_t{u8"ANSI_X3.110-1983", 16},
		::fast_io::io_scatter_t{u8"ANSI_X3.4-1968", 14},
		::fast_io::io_scatter_t{u8"ANSI_X3.4-1986", 14},
		::fast_io::io_scatter_t{u8"ASCII", 5},
		::fast_io::io_scatter_t{u8"ASMO-708", 8},
		::fast_io::io_scatter_t{u8"ASMO_449", 8},
		::fast_io::io_scatter_t{u8"Adobe-Standard-Encoding", 23},
		::fast_io::io_scatter_t{u8"Adobe-Symbol-Encoding", 21},
		::fast_io::io_scatter_t{u8"AdobeStandardEncoding", 21},
		::fast_io::io_scatter_t{u8"Ami-1251", 8},
		::fast_io::io_scatter_t{u8"Ami1251", 7},
		::fast_io::io_scatter_t{u8"Amiga-1251", 10},
		::fast_io::io_scatter_t{u8"Amiga1251", 9},
		::fast_io::io_scatter_t{u8"BOCU-1", 6},
		::fast_io::io_scatter_t{u8"BOCU1", 5},
		::fast_io::io_scatter_t{u8"BRF", 3},
		::fast_io::io_scatter_t{u8"BS_4730", 7},
		::fast_io::io_scatter_t{u8"BS_viewdata", 11},
		::fast_io::io_scatter_t{u8"Big5", 4},
		::fast_io::io_scatter_t{u8"Big5-HKSCS", 10},
		::fast_io::io_scatter_t{u8"Big5HKSCS", 9},
		::fast_io::io_scatter_t{u8"CCSID00858", 10},
		::fast_io::io_scatter_t{u8"CCSID00924", 10},
		::fast_io::io_scatter_t{u8"CCSID01140", 10},
		::fast_io::io_scatter_t{u8"CCSID01141", 10},
		::fast_io::io_scatter_t{u8"CCSID01142", 10},
		::fast_io::io_scatter_t{u8"CCSID01143", 10},
		::fast_io::io_scatter_t{u8"CCSID01144", 10},
		::fast_io::io_scatter_t{u8"CCSID01145", 10},
		::fast_io::io_scatter_t{u8"CCSID01146", 10},
		::fast_io::io_scatter_t{u8"CCSID01147", 10},
		::fast_io::io_scatter_t{u8"CCSID01148", 10},
		::fast_io::io_scatter_t{u8"CCSID01149", 10},
		::fast_io::io_scatter_t{u8"CESU-8", 6},
		::fast_io::io_scatter_t{u8"CESU8", 5},
		::fast_io::io_scatter_t{u8"CP00858", 7},
		::fast_io::io_scatter_t{u8"CP00924", 7},
		::fast_io::io_scatter_t{u8"CP01140", 7},
		::fast_io::io_scatter_t{u8"CP01141", 7},
		::fast_io::io_scatter_t{u8"CP01142", 7},
		::fast_io::io_scatter_t{u8"CP01143", 7},
		::fast_io::io_scatter_t{u8"CP01144", 7},
		::fast_io::io_scatter_t{u8"CP01145", 7},
		::fast_io::io_scatter_t{u8"CP01146", 7},
		::fast_io::io_scatter_t{u8"CP01147", 7},
		::fast_io::io_scatter_t{u8"CP01148", 7},
		::fast_io::io_scatter_t{u8"CP01149", 7},
		::fast_io::io_scatter_t{u8"CP1026", 6},
		::fast_io::io_scatter_t{u8"CP154", 5},
		::fast_io::io_scatter_t{u8"CP273", 5},
		::fast_io::io_scatter_t{u8"CP274", 5},
		::fast_io::io_scatter_t{u8"CP278", 5},
		::fast_io::io_scatter_t{u8"CP280", 5},
		::fast_io::io_scatter_t{u8"CP284", 5},
		::fast_io::io_scatter_t{u8"CP285", 5},
		::fast_io::io_scatter_t{u8"CP500", 5},
		::fast_io::io_scatter_t{u8"CP50220", 7},
		::fast_io::io_scatter_t{u8"CP51932", 7},
		::fast_io::io_scatter_t{u8"CP819", 5},
		::fast_io::io_scatter_t{u8"CP868", 5},
		::fast_io::io_scatter_t{u8"CP870", 5},
		::fast_io::io_scatter_t{u8"CP871", 5},
		::fast_io::io_scatter_t{u8"CP905", 5},
		::fast_io::io_scatter_t{u8"CP918", 5},
		::fast_io::io_scatter_t{u8"CP936", 5},
		::fast_io::io_scatter_t{u8"CSA_T500-1983", 13},
		::fast_io::io_scatter_t{u8"CSA_Z243.4-1985-1", 17},
		::fast_io::io_scatter_t{u8"CSA_Z243.4-1985-2", 17},
		::fast_io::io_scatter_t{u8"CSA_Z243.4-1985-gr", 18},
		::fast_io::io_scatter_t{u8"CSN_369103", 10},
		::fast_io::io_scatter_t{u8"Cyrillic-Asian", 14},
		::fast_io::io_scatter_t{u8"DEC-MCS", 7},
		::fast_io::io_scatter_t{u8"DECMCS", 6},
		::fast_io::io_scatter_t{u8"DIN_66003", 9},
		::fast_io::io_scatter_t{u8"DKUS", 4},
		::fast_io::io_scatter_t{u8"DS2089", 6},
		::fast_io::io_scatter_t{u8"DS_2089", 7},
		::fast_io::io_scatter_t{u8"EBCDIC-AT-DE", 12},
		::fast_io::io_scatter_t{u8"EBCDIC-AT-DE-A", 14},
		::fast_io::io_scatter_t{u8"EBCDIC-BE", 9},
		::fast_io::io_scatter_t{u8"EBCDIC-BR", 9},
		::fast_io::io_scatter_t{u8"EBCDIC-CA-FR", 12},
		::fast_io::io_scatter_t{u8"EBCDIC-CP-DK", 12},
		::fast_io::io_scatter_t{u8"EBCDIC-CP-NO", 12},
		::fast_io::io_scatter_t{u8"EBCDIC-Cyrillic", 15},
		::fast_io::io_scatter_t{u8"EBCDIC-DK-NO", 12},
		::fast_io::io_scatter_t{u8"EBCDIC-DK-NO-A", 14},
		::fast_io::io_scatter_t{u8"EBCDIC-ES", 9},
		::fast_io::io_scatter_t{u8"EBCDIC-ES-A", 11},
		::fast_io::io_scatter_t{u8"EBCDIC-ES-S", 11},
		::fast_io::io_scatter_t{u8"EBCDIC-FI-SE", 12},
		::fast_io::io_scatter_t{u8"EBCDIC-FI-SE-A", 14},
		::fast_io::io_scatter_t{u8"EBCDIC-FR", 9},
		::fast_io::io_scatter_t{u8"EBCDIC-INT", 10},
		::fast_io::io_scatter_t{u8"EBCDIC-IT", 9},
		::fast_io::io_scatter_t{u8"EBCDIC-JP-E", 11},
		::fast_io::io_scatter_t{u8"EBCDIC-JP-kana", 14},
		::fast_io::io_scatter_t{u8"EBCDIC-PT", 9},
		::fast_io::io_scatter_t{u8"EBCDIC-UK", 9},
		::fast_io::io_scatter_t{u8"EBCDIC-US", 9},
		::fast_io::io_scatter_t{u8"EBCDICATDEA", 11},
		::fast_io::io_scatter_t{u8"EBCDICCAFR", 10},
		::fast_io::io_scatter_t{u8"EBCDICDKNO", 10},
		::fast_io::io_scatter_t{u8"EBCDICDKNOA", 11},
		::fast_io::io_scatter_t{u8"EBCDICES", 8},
		::fast_io::io_scatter_t{u8"EBCDICESA", 9},
		::fast_io::io_scatter_t{u8"EBCDICESS", 9},
		::fast_io::io_scatter_t{u8"EBCDICFISE", 10},
		::fast_io::io_scatter_t{u8"EBCDICFISEA", 11},
		::fast_io::io_scatter_t{u8"EBCDICFR", 8},
		::fast_io::io_scatter_t{u8"EBCDICIT", 8},
		::fast_io::io_scatter_t{u8"EBCDICPT", 8},
		::fast_io::io_scatter_t{u8"EBCDICUK", 8},
		::fast_io::io_scatter_t{u8"EBCDICUS", 8},
		::fast_io::io_scatter_t{u8"ECMA-114", 8},
		::fast_io::io_scatter_t{u8"ECMA-118", 8},
		::fast_io::io_scatter_t{u8"ECMA-cyrillic", 13},
		::fast_io::io_scatter_t{u8"ELOT_928", 8},
		::fast_io::io_scatter_t{u8"ES", 2},
		::fast_io::io_scatter_t{u8"ES2", 3},
		::fast_io::io_scatter_t{u8"EUC-JP", 6},
		::fast_io::io_scatter_t{u8"EUC-KR", 6},
		::fast_io::io_scatter_t{u8"EUCFixWidJapanese", 17},
		::fast_io::io_scatter_t{u8"EUCKR", 5},
		::fast_io::io_scatter_t{u8"EUCPkdFmtJapanese", 17},
		::fast_io::io_scatter_t{u8"Extended_UNIX_Code_Fixed_Width_for_Japanese", 43},
		::fast_io::io_scatter_t{u8"Extended_UNIX_Code_Packed_Format_for_Japanese", 45},
		::fast_io::io_scatter_t{u8"FI", 2},
		::fast_io::io_scatter_t{u8"GB18030", 7},
		::fast_io::io_scatter_t{u8"GB2312", 6},
		::fast_io::io_scatter_t{u8"GBK", 3},
		::fast_io::io_scatter_t{u8"GB_1988-80", 10},
		::fast_io::io_scatter_t{u8"GB_2312-80", 10},
		::fast_io::io_scatter_t{u8"GOST_19768-74", 13},
		::fast_io::io_scatter_t{u8"HP-DeskTop", 10},
		::fast_io::io_scatter_t{u8"HP-Legal", 8},
		::fast_io::io_scatter_t{u8"HP-Math8", 8},
		::fast_io::io_scatter_t{u8"HP-Pi-font", 10},
		::fast_io::io_scatter_t{u8"HPDesktop", 9},
		::fast_io::io_scatter_t{u8"HPLegal", 7},
		::fast_io::io_scatter_t{u8"HPMath8", 7},
		::fast_io::io_scatter_t{u8"HPPSMath", 8},
		::fast_io::io_scatter_t{u8"HPPiFont", 8},
		::fast_io::io_scatter_t{u8"HPRoman8", 8},
		::fast_io::io_scatter_t{u8"HZ-GB-2312", 10},
		::fast_io::io_scatter_t{u8"HZGB2312", 8},
		::fast_io::io_scatter_t{u8"HalfWidthKatakana", 17},
		::fast_io::io_scatter_t{u8"IBBM904", 7},
		::fast_io::io_scatter_t{u8"IBM-1047", 8},
		::fast_io::io_scatter_t{u8"IBM-Symbols", 11},
		::fast_io::io_scatter_t{u8"IBM-Thai", 8},
		::fast_io::io_scatter_t{u8"IBM00858", 8},
		::fast_io::io_scatter_t{u8"IBM00924", 8},
		::fast_io::io_scatter_t{u8"IBM01140", 8},
		::fast_io::io_scatter_t{u8"IBM01141", 8},
		::fast_io::io_scatter_t{u8"IBM01142", 8},
		::fast_io::io_scatter_t{u8"IBM01143", 8},
		::fast_io::io_scatter_t{u8"IBM01144", 8},
		::fast_io::io_scatter_t{u8"IBM01145", 8},
		::fast_io::io_scatter_t{u8"IBM01146", 8},
		::fast_io::io_scatter_t{u8"IBM01147", 8},
		::fast_io::io_scatter_t{u8"IBM01148", 8},
		::fast_io::io_scatter_t{u8"IBM01149", 8},
		::fast_io::io_scatter_t{u8"IBM037", 6},
		::fast_io::io_scatter_t{u8"IBM038", 6},
		::fast_io::io_scatter_t{u8"IBM1026", 7},
		::fast_io::io_scatter_t{u8"IBM1047", 7},
		::fast_io::io_scatter_t{u8"IBM273", 6},
		::fast_io::io_scatter_t{u8"IBM274", 6},
		::fast_io::io_scatter_t{u8"IBM275", 6},
		::fast_io::io_scatter_t{u8"IBM277", 6},
		::fast_io::io_scatter_t{u8"IBM278", 6},
		::fast_io::io_scatter_t{u8"IBM280", 6},
		::fast_io::io_scatter_t{u8"IBM281", 6},
		::fast_io::io_scatter_t{u8"IBM284", 6},
		::fast_io::io_scatter_t{u8"IBM285", 6},
		::fast_io::io_scatter_t{u8"IBM290", 6},
		::fast_io::io_scatter_t{u8"IBM297", 6},
		::fast_io::io_scatter_t{u8"IBM367", 6},
		::fast_io::io_scatter_t{u8"IBM420", 6},
		::fast_io::io_scatter_t{u8"IBM423", 6},
		::fast_io::io_scatter_t{u8"IBM424", 6},
		::fast_io::io_scatter_t{u8"IBM437", 6},
		::fast_io::io_scatter_t{u8"IBM500", 6},
		::fast_io::io_scatter_t{u8"IBM775", 6},
		::fast_io::io_scatter_t{u8"IBM819", 6},
		::fast_io::io_scatter_t{u8"IBM850", 6},
		::fast_io::io_scatter_t{u8"IBM851", 6},
		::fast_io::io_scatter_t{u8"IBM852", 6},
		::fast_io::io_scatter_t{u8"IBM855", 6},
		::fast_io::io_scatter_t{u8"IBM857", 6},
		::fast_io::io_scatter_t{u8"IBM860", 6},
		::fast_io::io_scatter_t{u8"IBM861", 6},
		::fast_io::io_scatter_t{u8"IBM862", 6},
		::fast_io::io_scatter_t{u8"IBM863", 6},
		::fast_io::io_scatter_t{u8"IBM864", 6},
		::fast_io::io_scatter_t{u8"IBM865", 6},
		::fast_io::io_scatter_t{u8"IBM866", 6},
		::fast_io::io_scatter_t{u8"IBM868", 6},
		::fast_io::io_scatter_t{u8"IBM869", 6},
		::fast_io::io_scatter_t{u8"IBM870", 6},
		::fast_io::io_scatter_t{u8"IBM871", 6},
		::fast_io::io_scatter_t{u8"IBM880", 6},
		::fast_io::io_scatter_t{u8"IBM891", 6},
		::fast_io::io_scatter_t{u8"IBM903", 6},
		::fast_io::io_scatter_t{u8"IBM904", 6},
		::fast_io::io_scatter_t{u8"IBM905", 6},
		::fast_io::io_scatter_t{u8"IBM918", 6},
		::fast_io::io_scatter_t{u8"IBMEBCDICATDE", 13},
		::fast_io::io_scatter_t{u8"IBMSymbols", 10},
		::fast_io::io_scatter_t{u8"IBMThai", 7},
		::fast_io::io_scatter_t{u8"IEC_P27-1", 9},
		::fast_io::io_scatter_t{u8"INIS", 4},
		::fast_io::io_scatter_t{u8"INIS-8", 6},
		::fast_io::io_scatter_t{u8"INIS-cyrillic", 13},
		::fast_io::io_scatter_t{u8"INVARIANT", 9},
		::fast_io::io_scatter_t{u8"ISO-10646", 9},
		::fast_io::io_scatter_t{u8"ISO-10646-J-1", 13},
		::fast_io::io_scatter_t{u8"ISO-10646-UCS-2", 15},
		::fast_io::io_scatter_t{u8"ISO-10646-UCS-4", 15},
		::fast_io::io_scatter_t{u8"ISO-10646-UCS-Basic", 19},
		::fast_io::io_scatter_t{u8"ISO-10646-UTF-1", 15},
		::fast_io::io_scatter_t{u8"ISO-10646-Unicode-Latin1", 24},
		::fast_io::io_scatter_t{u8"ISO-11548-1", 11},
		::fast_io::io_scatter_t{u8"ISO-2022-CN", 11},
		::fast_io::io_scatter_t{u8"ISO-2022-CN-EXT", 15},
		::fast_io::io_scatter_t{u8"ISO-2022-JP", 11},
		::fast_io::io_scatter_t{u8"ISO-2022-JP-2", 13},
		::fast_io::io_scatter_t{u8"ISO-2022-KR", 11},
		::fast_io::io_scatter_t{u8"ISO-8859-1", 10},
		::fast_io::io_scatter_t{u8"ISO-8859-1-Windows-3.0-Latin-1", 30},
		::fast_io::io_scatter_t{u8"ISO-8859-1-Windows-3.1-Latin-1", 30},
		::fast_io::io_scatter_t{u8"ISO-8859-10", 11},
		::fast_io::io_scatter_t{u8"ISO-8859-11", 11},
		::fast_io::io_scatter_t{u8"ISO-8859-13", 11},
		::fast_io::io_scatter_t{u8"ISO-8859-14", 11},
		::fast_io::io_scatter_t{u8"ISO-8859-15", 11},
		::fast_io::io_scatter_t{u8"ISO-8859-16", 11},
		::fast_io::io_scatter_t{u8"ISO-8859-2", 10},
		::fast_io::io_scatter_t{u8"ISO-8859-2-Windows-Latin-2", 26},
		::fast_io::io_scatter_t{u8"ISO-8859-3", 10},
		::fast_io::io_scatter_t{u8"ISO-8859-4", 10},
		::fast_io::io_scatter_t{u8"ISO-8859-5", 10},
		::fast_io::io_scatter_t{u8"ISO-8859-6", 10},
		::fast_io::io_scatter_t{u8"ISO-8859-6-E", 12},
		::fast_io::io_scatter_t{u8"ISO-8859-6-I", 12},
		::fast_io::io_scatter_t{u8"ISO-8859-7", 10},
		::fast_io::io_scatter_t{u8"ISO-8859-8", 10},
		::fast_io::io_scatter_t{u8"ISO-8859-8-E", 12},
		::fast_io::io_scatter_t{u8"ISO-8859-8-I", 12},
		::fast_io::io_scatter_t{u8"ISO-8859-9", 10},
		::fast_io::io_scatter_t{u8"ISO-8859-9-Windows-Latin-5", 26},
		::fast_io::io_scatter_t{u8"ISO-Unicode-IBM-1261", 20},
		::fast_io::io_scatter_t{u8"ISO-Unicode-IBM-1264", 20},
		::fast_io::io_scatter_t{u8"ISO-Unicode-IBM-1265", 20},
		::fast_io::io_scatter_t{u8"ISO-Unicode-IBM-1268", 20},
		::fast_io::io_scatter_t{u8"ISO-Unicode-IBM-1276", 20},
		::fast_io::io_scatter_t{u8"ISO102T617bit", 13},
		::fast_io::io_scatter_t{u8"ISO10367Box", 11},
		::fast_io::io_scatter_t{u8"ISO103T618bit", 13},
		::fast_io::io_scatter_t{u8"ISO10646UTF1", 12},
		::fast_io::io_scatter_t{u8"ISO10Swedish", 12},
		::fast_io::io_scatter_t{u8"ISO111ECMACyrillic", 18},
		::fast_io::io_scatter_t{u8"ISO115481", 9},
		::fast_io::io_scatter_t{u8"ISO11SwedishForNames", 20},
		::fast_io::io_scatter_t{u8"ISO121Canadian1", 15},
		::fast_io::io_scatter_t{u8"ISO122Canadian2", 15},
		::fast_io::io_scatter_t{u8"ISO123CSAZ24341985gr", 20},
		::fast_io::io_scatter_t{u8"ISO128T101G2", 12},
		::fast_io::io_scatter_t{u8"ISO139CSN369103", 15},
		::fast_io::io_scatter_t{u8"ISO13JISC6220jp", 15},
		::fast_io::io_scatter_t{u8"ISO141JUSIB1002", 15},
		::fast_io::io_scatter_t{u8"ISO143IECP271", 13},
		::fast_io::io_scatter_t{u8"ISO146Serbian", 13},
		::fast_io::io_scatter_t{u8"ISO147Macedonian", 16},
		::fast_io::io_scatter_t{u8"ISO14JISC6220ro", 15},
		::fast_io::io_scatter_t{u8"ISO150", 6},
		::fast_io::io_scatter_t{u8"ISO150GreekCCITT", 16},
		::fast_io::io_scatter_t{u8"ISO151Cuba", 10},
		::fast_io::io_scatter_t{u8"ISO153GOST1976874", 17},
		::fast_io::io_scatter_t{u8"ISO158Lap", 9},
		::fast_io::io_scatter_t{u8"ISO159JISX02121990", 18},
		::fast_io::io_scatter_t{u8"ISO15Italian", 12},
		::fast_io::io_scatter_t{u8"ISO16Portuguese", 15},
		::fast_io::io_scatter_t{u8"ISO17Spanish", 12},
		::fast_io::io_scatter_t{u8"ISO18Greek7Old", 14},
		::fast_io::io_scatter_t{u8"ISO19LatinGreek", 15},
		::fast_io::io_scatter_t{u8"ISO2022CN", 9},
		::fast_io::io_scatter_t{u8"ISO2022CNEXT", 12},
		::fast_io::io_scatter_t{u8"ISO2022JP", 9},
		::fast_io::io_scatter_t{u8"ISO2022JP2", 10},
		::fast_io::io_scatter_t{u8"ISO2022KR", 9},
		::fast_io::io_scatter_t{u8"ISO2033", 7},
		::fast_io::io_scatter_t{u8"ISO21German", 11},
		::fast_io::io_scatter_t{u8"ISO25French", 11},
		::fast_io::io_scatter_t{u8"ISO27LatinGreek1", 16},
		::fast_io::io_scatter_t{u8"ISO2IntlRefVersion", 18},
		::fast_io::io_scatter_t{u8"ISO42JISC62261978", 17},
		::fast_io::io_scatter_t{u8"ISO47BSViewdata", 15},
		::fast_io::io_scatter_t{u8"ISO49INIS", 9},
		::fast_io::io_scatter_t{u8"ISO4UnitedKingdom", 17},
		::fast_io::io_scatter_t{u8"ISO50INIS8", 10},
		::fast_io::io_scatter_t{u8"ISO51INISCyrillic", 17},
		::fast_io::io_scatter_t{u8"ISO54271981", 11},
		::fast_io::io_scatter_t{u8"ISO5427Cyrillic", 15},
		::fast_io::io_scatter_t{u8"ISO5427Cyrillic1981", 19},
		::fast_io::io_scatter_t{u8"ISO5428Greek", 12},
		::fast_io::io_scatter_t{u8"ISO57GB1988", 11},
		::fast_io::io_scatter_t{u8"ISO58GB231280", 13},
		::fast_io::io_scatter_t{u8"ISO60DanishNorwegian", 20},
		::fast_io::io_scatter_t{u8"ISO60Norwegian1", 15},
		::fast_io::io_scatter_t{u8"ISO61Norwegian2", 15},
		::fast_io::io_scatter_t{u8"ISO646-CA", 9},
		::fast_io::io_scatter_t{u8"ISO646-CA2", 10},
		::fast_io::io_scatter_t{u8"ISO646-CN", 9},
		::fast_io::io_scatter_t{u8"ISO646-CU", 9},
		::fast_io::io_scatter_t{u8"ISO646-DE", 9},
		::fast_io::io_scatter_t{u8"ISO646-DK", 9},
		::fast_io::io_scatter_t{u8"ISO646-ES", 9},
		::fast_io::io_scatter_t{u8"ISO646-ES2", 10},
		::fast_io::io_scatter_t{u8"ISO646-FI", 9},
		::fast_io::io_scatter_t{u8"ISO646-FR", 9},
		::fast_io::io_scatter_t{u8"ISO646-FR1", 10},
		::fast_io::io_scatter_t{u8"ISO646-GB", 9},
		::fast_io::io_scatter_t{u8"ISO646-HU", 9},
		::fast_io::io_scatter_t{u8"ISO646-IT", 9},
		::fast_io::io_scatter_t{u8"ISO646-JP", 9},
		::fast_io::io_scatter_t{u8"ISO646-JP-OCR-B", 15},
		::fast_io::io_scatter_t{u8"ISO646-KR", 9},
		::fast_io::io_scatter_t{u8"ISO646-NO", 9},
		::fast_io::io_scatter_t{u8"ISO646-NO2", 10},
		::fast_io::io_scatter_t{u8"ISO646-PT", 9},
		::fast_io::io_scatter_t{u8"ISO646-PT2", 10},
		::fast_io::io_scatter_t{u8"ISO646-SE", 9},
		::fast_io::io_scatter_t{u8"ISO646-SE2", 10},
		::fast_io::io_scatter_t{u8"ISO646-US", 9},
		::fast_io::io_scatter_t{u8"ISO646-YU", 9},
		::fast_io::io_scatter_t{u8"ISO646Danish", 12},
		::fast_io::io_scatter_t{u8"ISO646basic1983", 15},
		::fast_io::io_scatter_t{u8"ISO6937Add", 10},
		::fast_io::io_scatter_t{u8"ISO69French", 11},
		::fast_io::io_scatter_t{u8"ISO70VideotexSupp1", 18},
		::fast_io::io_scatter_t{u8"ISO84Portuguese2", 16},
		::fast_io::io_scatter_t{u8"ISO85Spanish2", 13},
		::fast_io::io_scatter_t{u8"ISO86Hungarian", 14},
		::fast_io::io_scatter_t{u8"ISO87JISX0208", 13},
		::fast_io::io_scatter_t{u8"ISO885913", 9},
		::fast_io::io_scatter_t{u8"ISO885914", 9},
		::fast_io::io_scatter_t{u8"ISO885915", 9},
		::fast_io::io_scatter_t{u8"ISO885916", 9},
		::fast_io::io_scatter_t{u8"ISO88596E", 9},
		::fast_io::io_scatter_t{u8"ISO88596I", 9},
		::fast_io::io_scatter_t{u8"ISO88598E", 9},
		::fast_io::io_scatter_t{u8"ISO88598I", 9},
		::fast_io::io_scatter_t{u8"ISO8859Supp", 11},
		::fast_io::io_scatter_t{u8"ISO88Greek7", 11},
		::fast_io::io_scatter_t{u8"ISO89ASMO449", 12},
		::fast_io::io_scatter_t{u8"ISO90", 5},
		::fast_io::io_scatter_t{u8"ISO91JISC62291984a", 18},
		::fast_io::io_scatter_t{u8"ISO92JISC62991984b", 18},
		::fast_io::io_scatter_t{u8"ISO93JIS62291984badd", 20},
		::fast_io::io_scatter_t{u8"ISO94JIS62291984hand", 20},
		::fast_io::io_scatter_t{u8"ISO95JIS62291984handadd", 23},
		::fast_io::io_scatter_t{u8"ISO96JISC62291984kana", 21},
		::fast_io::io_scatter_t{u8"ISO99NAPLPS", 11},
		::fast_io::io_scatter_t{u8"ISOLatin1", 9},
		::fast_io::io_scatter_t{u8"ISOLatin2", 9},
		::fast_io::io_scatter_t{u8"ISOLatin3", 9},
		::fast_io::io_scatter_t{u8"ISOLatin4", 9},
		::fast_io::io_scatter_t{u8"ISOLatin5", 9},
		::fast_io::io_scatter_t{u8"ISOLatin6", 9},
		::fast_io::io_scatter_t{u8"ISOLatinArabic", 14},
		::fast_io::io_scatter_t{u8"ISOLatinCyrillic", 16},
		::fast_io::io_scatter_t{u8"ISOLatinGreek", 13},
		::fast_io::io_scatter_t{u8"ISOLatinHebrew", 14},
		::fast_io::io_scatter_t{u8"ISOTextComm", 11},
		::fast_io::io_scatter_t{u8"ISO_10367-box", 13},
		::fast_io::io_scatter_t{u8"ISO_11548-1", 11},
		::fast_io::io_scatter_t{u8"ISO_2033-1983", 13},
		::fast_io::io_scatter_t{u8"ISO_5427", 8},
		::fast_io::io_scatter_t{u8"ISO_6937-2-25", 13},
		::fast_io::io_scatter_t{u8"ISO_6937-2-add", 14},
		::fast_io::io_scatter_t{u8"ISO_8859-1", 10},
		::fast_io::io_scatter_t{u8"ISO_8859-14", 11},
		::fast_io::io_scatter_t{u8"ISO_8859-15", 11},
		::fast_io::io_scatter_t{u8"ISO_8859-16", 11},
		::fast_io::io_scatter_t{u8"ISO_8859-2", 10},
		::fast_io::io_scatter_t{u8"ISO_8859-3", 10},
		::fast_io::io_scatter_t{u8"ISO_8859-4", 10},
		::fast_io::io_scatter_t{u8"ISO_8859-5", 10},
		::fast_io::io_scatter_t{u8"ISO_8859-6", 10},
		::fast_io::io_scatter_t{u8"ISO_8859-6-E", 12},
		::fast_io::io_scatter_t{u8"ISO_8859-6-I", 12},
		::fast_io::io_scatter_t{u8"ISO_8859-7", 10},
		::fast_io::io_scatter_t{u8"ISO_8859-8", 10},
		::fast_io::io_scatter_t{u8"ISO_8859-8-E", 12},
		::fast_io::io_scatter_t{u8"ISO_8859-8-I", 12},
		::fast_io::io_scatter_t{u8"ISO_8859-9", 10},
		::fast_io::io_scatter_t{u8"ISO_8859-supp", 13},
		::fast_io::io_scatter_t{u8"ISO_9036", 8},
		::fast_io::io_scatter_t{u8"ISO_TR_11548-1", 14},
		::fast_io::io_scatter_t{u8"IT", 2},
		::fast_io::io_scatter_t{u8"JISEncoding", 11},
		::fast_io::io_scatter_t{u8"JIS_C6220-1969", 14},
		::fast_io::io_scatter_t{u8"JIS_C6220-1969-jp", 17},
		::fast_io::io_scatter_t{u8"JIS_C6220-1969-ro", 17},
		::fast_io::io_scatter_t{u8"JIS_C6226-1978", 14},
		::fast_io::io_scatter_t{u8"JIS_C6226-1983", 14},
		::fast_io::io_scatter_t{u8"JIS_C6229-1984-a", 16},
		::fast_io::io_scatter_t{u8"JIS_C6229-1984-b", 16},
		::fast_io::io_scatter_t{u8"JIS_C6229-1984-b-add", 20},
		::fast_io::io_scatter_t{u8"JIS_C6229-1984-hand", 19},
		::fast_io::io_scatter_t{u8"JIS_C6229-1984-hand-add", 23},
		::fast_io::io_scatter_t{u8"JIS_C6229-1984-kana", 19},
		::fast_io::io_scatter_t{u8"JIS_Encoding", 12},
		::fast_io::io_scatter_t{u8"JIS_X0201", 9},
		::fast_io::io_scatter_t{u8"JIS_X0208-1983", 14},
		::fast_io::io_scatter_t{u8"JIS_X0212-1990", 14},
		::fast_io::io_scatter_t{u8"JUS_I.B1.002", 12},
		::fast_io::io_scatter_t{u8"JUS_I.B1.003-mac", 16},
		::fast_io::io_scatter_t{u8"JUS_I.B1.003-serb", 17},
		::fast_io::io_scatter_t{u8"KOI7-switched", 13},
		::fast_io::io_scatter_t{u8"KOI7switched", 12},
		::fast_io::io_scatter_t{u8"KOI8-E", 6},
		::fast_io::io_scatter_t{u8"KOI8-R", 6},
		::fast_io::io_scatter_t{u8"KOI8-U", 6},
		::fast_io::io_scatter_t{u8"KOI8R", 5},
		::fast_io::io_scatter_t{u8"KOI8U", 5},
		::fast_io::io_scatter_t{u8"KSC56011987", 11},
		::fast_io::io_scatter_t{u8"KSC5636", 7},
		::fast_io::io_scatter_t{u8"KSC_5601", 8},
		::fast_io::io_scatter_t{u8"KS_C_5601-1987", 14},
		::fast_io::io_scatter_t{u8"KS_C_5601-1989", 14},
		::fast_io::io_scatter_t{u8"KZ-1048", 7},
		::fast_io::io_scatter_t{u8"KZ1048", 6},
		::fast_io::io_scatter_t{u8"Latin-9", 7},
		::fast_io::io_scatter_t{u8"Latin-greek-1", 13},
		::fast_io::io_scatter_t{u8"MNEM", 4},
		::fast_io::io_scatter_t{u8"MNEMONIC", 8},
		::fast_io::io_scatter_t{u8"MS936", 5},
		::fast_io::io_scatter_t{u8"MSZ_7795.3", 10},
		::fast_io::io_scatter_t{u8"MS_Kanji", 8},
		::fast_io::io_scatter_t{u8"Macintosh", 9},
		::fast_io::io_scatter_t{u8"Microsoft-Publishing", 20},
		::fast_io::io_scatter_t{u8"MicrosoftPublishing", 19},
		::fast_io::io_scatter_t{u8"Mnem", 4},
		::fast_io::io_scatter_t{u8"Mnemonic", 8},
		::fast_io::io_scatter_t{u8"NAPLPS", 6},
		::fast_io::io_scatter_t{u8"NATS-DANO", 9},
		::fast_io::io_scatter_t{u8"NATS-DANO-ADD", 13},
		::fast_io::io_scatter_t{u8"NATS-SEFI", 9},
		::fast_io::io_scatter_t{u8"NATS-SEFI-ADD", 13},
		::fast_io::io_scatter_t{u8"NATSDANO", 8},
		::fast_io::io_scatter_t{u8"NATSDANOADD", 11},
		::fast_io::io_scatter_t{u8"NATSSEFI", 8},
		::fast_io::io_scatter_t{u8"NATSSEFIADD", 11},
		::fast_io::io_scatter_t{u8"NF_Z_62-010", 11},
		::fast_io::io_scatter_t{u8"NF_Z_62-010_(1973)", 18},
		::fast_io::io_scatter_t{u8"NS_4551-1", 9},
		::fast_io::io_scatter_t{u8"NS_4551-2", 9},
		::fast_io::io_scatter_t{u8"OSDEBCDICDF03IRV", 16},
		::fast_io::io_scatter_t{u8"OSDEBCDICDF041", 14},
		::fast_io::io_scatter_t{u8"OSDEBCDICDF0415", 15},
		::fast_io::io_scatter_t{u8"OSD_EBCDIC_DF03_IRV", 19},
		::fast_io::io_scatter_t{u8"OSD_EBCDIC_DF04_1", 17},
		::fast_io::io_scatter_t{u8"OSD_EBCDIC_DF04_15", 18},
		::fast_io::io_scatter_t{u8"PC-Multilingual-850+euro", 24},
		::fast_io::io_scatter_t{u8"PC775Baltic", 11},
		::fast_io::io_scatter_t{u8"PC8-Danish-Norwegian", 20},
		::fast_io::io_scatter_t{u8"PC8-Turkish", 11},
		::fast_io::io_scatter_t{u8"PC850Multilingual", 17},
		::fast_io::io_scatter_t{u8"PC862LatinHebrew", 16},
		::fast_io::io_scatter_t{u8"PC8CodePage437", 14},
		::fast_io::io_scatter_t{u8"PC8DanishNorwegian", 18},
		::fast_io::io_scatter_t{u8"PC8Turkish", 10},
		::fast_io::io_scatter_t{u8"PCp852", 6},
		::fast_io::io_scatter_t{u8"PT", 2},
		::fast_io::io_scatter_t{u8"PT154", 5},
		::fast_io::io_scatter_t{u8"PT2", 3},
		::fast_io::io_scatter_t{u8"PTCP154", 7},
		::fast_io::io_scatter_t{u8"RK1048", 6},
		::fast_io::io_scatter_t{u8"SCSU", 4},
		::fast_io::io_scatter_t{u8"SEN_850200_B", 12},
		::fast_io::io_scatter_t{u8"SEN_850200_C", 12},
		::fast_io::io_scatter_t{u8"STRK1048-2002", 13},
		::fast_io::io_scatter_t{u8"ST_SEV_358-88", 13},
		::fast_io::io_scatter_t{u8"ShiftJIS", 8},
		::fast_io::io_scatter_t{u8"Shift_JIS", 9},
		::fast_io::io_scatter_t{u8"T.101-G2", 8},
		::fast_io::io_scatter_t{u8"T.61", 4},
		::fast_io::io_scatter_t{u8"T.61-7bit", 9},
		::fast_io::io_scatter_t{u8"T.61-8bit", 9},
		::fast_io::io_scatter_t{u8"TIS-620", 7},
		::fast_io::io_scatter_t{u8"TIS620", 6},
		::fast_io::io_scatter_t{u8"TSCII", 5},
		::fast_io::io_scatter_t{u8"UCS4", 4},
		::fast_io::io_scatter_t{u8"UNICODE-1-1", 11},
		::fast_io::io_scatter_t{u8"UNICODE-1-1-UTF-7", 17},
		::fast_io::io_scatter_t{u8"UNKNOWN-8BIT", 12},
		::fast_io::io_scatter_t{u8"US-ASCII", 8},
		::fast_io::io_scatter_t{u8"USDK", 4},
		::fast_io::io_scatter_t{u8"UTF-16", 6},
		::fast_io::io_scatter_t{u8"UTF-16BE", 8},
		::fast_io::io_scatter_t{u8"UTF-16LE", 8},
		::fast_io::io_scatter_t{u8"UTF-32", 6},
		::fast_io::io_scatter_t{u8"UTF-32BE", 8},
		::fast_io::io_scatter_t{u8"UTF-32LE", 8},
		::fast_io::io_scatter_t{u8"UTF-7", 5},
		::fast_io::io_scatter_t{u8"UTF-7-IMAP", 10},
		::fast_io::io_scatter_t{u8"UTF-8", 5},
		::fast_io::io_scatter_t{u8"UTF16", 5},
		::fast_io::io_scatter_t{u8"UTF16BE", 7},
		::fast_io::io_scatter_t{u8"UTF16LE", 7},
		::fast_io::io_scatter_t{u8"UTF32", 5},
		::fast_io::io_scatter_t{u8"UTF32BE", 7},
		::fast_io::io_scatter_t{u8"UTF32LE", 7},
		::fast_io::io_scatter_t{u8"UTF7", 4},
		::fast_io::io_scatter_t{u8"UTF7IMAP", 8},
		::fast_io::io_scatter_t{u8"UTF8", 4},
		::fast_io::io_scatter_t{u8"Unicode", 7},
		::fast_io::io_scatter_t{u8"Unicode11", 9},
		::fast_io::io_scatter_t{u8"Unicode11UTF7", 13},
		::fast_io::io_scatter_t{u8"UnicodeASCII", 12},
		::fast_io::io_scatter_t{u8"UnicodeIBM1261", 14},
		::fast_io::io_scatter_t{u8"UnicodeIBM1264", 14},
		::fast_io::io_scatter_t{u8"UnicodeIBM1265", 14},
		::fast_io::io_scatter_t{u8"UnicodeIBM1268", 14},
		::fast_io::io_scatter_t{u8"UnicodeIBM1276", 14},
		::fast_io::io_scatter_t{u8"UnicodeJapanese", 15},
		::fast_io::io_scatter_t{u8"UnicodeLatin1", 13},
		::fast_io::io_scatter_t{u8"Unknown8BiT", 11},
		::fast_io::io_scatter_t{u8"VIQR", 4},
		::fast_io::io_scatter_t{u8"VISCII", 6},
		::fast_io::io_scatter_t{u8"Ventura-International", 21},
		::fast_io::io_scatter_t{u8"Ventura-Math", 12},
		::fast_io::io_scatter_t{u8"Ventura-US", 10},
		::fast_io::io_scatter_t{u8"VenturaInternational", 20},
		::fast_io::io_scatter_t{u8"VenturaMath", 11},
		::fast_io::io_scatter_t{u8"VenturaUS", 9},
		::fast_io::io_scatter_t{u8"Windows-31J", 11},
		::fast_io::io_scatter_t{u8"Windows30Latin1", 15},
		::fast_io::io_scatter_t{u8"Windows31J", 10},
		::fast_io::io_scatter_t{u8"Windows31Latin1", 15},
		::fast_io::io_scatter_t{u8"Windows31Latin2", 15},
		::fast_io::io_scatter_t{u8"Windows31Latin5", 15},
		::fast_io::io_scatter_t{u8"X0201", 5},
		::fast_io::io_scatter_t{u8"arabic", 6},
		::fast_io::io_scatter_t{u8"arabic7", 7},
		::fast_io::io_scatter_t{u8"ca", 2},
		::fast_io::io_scatter_t{u8"chinese", 7},
		::fast_io::io_scatter_t{u8"cn", 2},
		::fast_io::io_scatter_t{u8"cp-ar", 5},
		::fast_io::io_scatter_t{u8"cp-gr", 5},
		::fast_io::io_scatter_t{u8"cp-is", 5},
		::fast_io::io_scatter_t{u8"cp037", 5},
		::fast_io::io_scatter_t{u8"cp038", 5},
		::fast_io::io_scatter_t{u8"cp275", 5},
		::fast_io::io_scatter_t{u8"cp281", 5},
		::fast_io::io_scatter_t{u8"cp290", 5},
		::fast_io::io_scatter_t{u8"cp297", 5},
		::fast_io::io_scatter_t{u8"cp367", 5},
		::fast_io::io_scatter_t{u8"cp420", 5},
		::fast_io::io_scatter_t{u8"cp423", 5},
		::fast_io::io_scatter_t{u8"cp424", 5},
		::fast_io::io_scatter_t{u8"cp437", 5},
		::fast_io::io_scatter_t{u8"cp775", 5},
		::fast_io::io_scatter_t{u8"cp850", 5},
		::fast_io::io_scatter_t{u8"cp851", 5},
		::fast_io::io_scatter_t{u8"cp852", 5},
		::fast_io::io_scatter_t{u8"cp855", 5},
		::fast_io::io_scatter_t{u8"cp857", 5},
		::fast_io::io_scatter_t{u8"cp860", 5},
		::fast_io::io_scatter_t{u8"cp861", 5},
		::fast_io::io_scatter_t{u8"cp862", 5},
		::fast_io::io_scatter_t{u8"cp863", 5},
		::fast_io::io_scatter_t{u8"cp864", 5},
		::fast_io::io_scatter_t{u8"cp865", 5},
		::fast_io::io_scatter_t{u8"cp866", 5},
		::fast_io::io_scatter_t{u8"cp869", 5},
		::fast_io::io_scatter_t{u8"cp880", 5},
		::fast_io::io_scatter_t{u8"cp891", 5},
		::fast_io::io_scatter_t{u8"cp903", 5},
		::fast_io::io_scatter_t{u8"cp904", 5},
		::fast_io::io_scatter_t{u8"csa7-1", 6},
		::fast_io::io_scatter_t{u8"csa7-2", 6},
		::fast_io::io_scatter_t{u8"csa71", 5},
		::fast_io::io_scatter_t{u8"csa72", 5},
		::fast_io::io_scatter_t{u8"cuba", 4},
		::fast_io::io_scatter_t{u8"cyrillic", 8},
		::fast_io::io_scatter_t{u8"de", 2},
		::fast_io::io_scatter_t{u8"dec", 3},
		::fast_io::io_scatter_t{u8"dk", 2},
		::fast_io::io_scatter_t{u8"dk-us", 5},
		::fast_io::io_scatter_t{u8"e13b", 4},
		::fast_io::io_scatter_t{u8"ebcdic-Latin9--euro", 19},
		::fast_io::io_scatter_t{u8"ebcdic-cp-ar1", 13},
		::fast_io::io_scatter_t{u8"ebcdic-cp-ar2", 13},
		::fast_io::io_scatter_t{u8"ebcdic-cp-be", 12},
		::fast_io::io_scatter_t{u8"ebcdic-cp-ca", 12},
		::fast_io::io_scatter_t{u8"ebcdic-cp-ch", 12},
		::fast_io::io_scatter_t{u8"ebcdic-cp-es", 12},
		::fast_io::io_scatter_t{u8"ebcdic-cp-fi", 12},
		::fast_io::io_scatter_t{u8"ebcdic-cp-fr", 12},
		::fast_io::io_scatter_t{u8"ebcdic-cp-gb", 12},
		::fast_io::io_scatter_t{u8"ebcdic-cp-gr", 12},
		::fast_io::io_scatter_t{u8"ebcdic-cp-he", 12},
		::fast_io::io_scatter_t{u8"ebcdic-cp-is", 12},
		::fast_io::io_scatter_t{u8"ebcdic-cp-it", 12},
		::fast_io::io_scatter_t{u8"ebcdic-cp-nl", 12},
		::fast_io::io_scatter_t{u8"ebcdic-cp-roece", 15},
		::fast_io::io_scatter_t{u8"ebcdic-cp-se", 12},
		::fast_io::io_scatter_t{u8"ebcdic-cp-tr", 12},
		::fast_io::io_scatter_t{u8"ebcdic-cp-us", 12},
		::fast_io::io_scatter_t{u8"ebcdic-cp-wt", 12},
		::fast_io::io_scatter_t{u8"ebcdic-cp-yu", 12},
		::fast_io::io_scatter_t{u8"ebcdic-de-273+euro", 18},
		::fast_io::io_scatter_t{u8"ebcdic-dk-277+euro", 18},
		::fast_io::io_scatter_t{u8"ebcdic-es-284+euro", 18},
		::fast_io::io_scatter_t{u8"ebcdic-fi-278+euro", 18},
		::fast_io::io_scatter_t{u8"ebcdic-fr-297+euro", 18},
		::fast_io::io_scatter_t{u8"ebcdic-gb-285+euro", 18},
		::fast_io::io_scatter_t{u8"ebcdic-international-500+euro", 29},
		::fast_io::io_scatter_t{u8"ebcdic-is-871+euro", 18},
		::fast_io::io_scatter_t{u8"ebcdic-it-280+euro", 18},
		::fast_io::io_scatter_t{u8"ebcdic-no-277+euro", 18},
		::fast_io::io_scatter_t{u8"ebcdic-se-278+euro", 18},
		::fast_io::io_scatter_t{u8"ebcdic-us-37+euro", 17},
		::fast_io::io_scatter_t{u8"fr", 2},
		::fast_io::io_scatter_t{u8"gb", 2},
		::fast_io::io_scatter_t{u8"greek", 5},
		::fast_io::io_scatter_t{u8"greek-ccitt", 11},
		::fast_io::io_scatter_t{u8"greek7", 6},
		::fast_io::io_scatter_t{u8"greek7-old", 10},
		::fast_io::io_scatter_t{u8"greek8", 6},
		::fast_io::io_scatter_t{u8"hebrew", 6},
		::fast_io::io_scatter_t{u8"hp-roman8", 9},
		::fast_io::io_scatter_t{u8"hu", 2},
		::fast_io::io_scatter_t{u8"irv", 3},
		::fast_io::io_scatter_t{u8"iso-celtic", 10},
		::fast_io::io_scatter_t{u8"iso-ir-10", 9},
		::fast_io::io_scatter_t{u8"iso-ir-100", 10},
		::fast_io::io_scatter_t{u8"iso-ir-101", 10},
		::fast_io::io_scatter_t{u8"iso-ir-102", 10},
		::fast_io::io_scatter_t{u8"iso-ir-103", 10},
		::fast_io::io_scatter_t{u8"iso-ir-109", 10},
		::fast_io::io_scatter_t{u8"iso-ir-11", 9},
		::fast_io::io_scatter_t{u8"iso-ir-110", 10},
		::fast_io::io_scatter_t{u8"iso-ir-111", 10},
		::fast_io::io_scatter_t{u8"iso-ir-121", 10},
		::fast_io::io_scatter_t{u8"iso-ir-122", 10},
		::fast_io::io_scatter_t{u8"iso-ir-123", 10},
		::fast_io::io_scatter_t{u8"iso-ir-126", 10},
		::fast_io::io_scatter_t{u8"iso-ir-127", 10},
		::fast_io::io_scatter_t{u8"iso-ir-128", 10},
		::fast_io::io_scatter_t{u8"iso-ir-13", 9},
		::fast_io::io_scatter_t{u8"iso-ir-138", 10},
		::fast_io::io_scatter_t{u8"iso-ir-139", 10},
		::fast_io::io_scatter_t{u8"iso-ir-14", 9},
		::fast_io::io_scatter_t{u8"iso-ir-141", 10},
		::fast_io::io_scatter_t{u8"iso-ir-142", 10},
		::fast_io::io_scatter_t{u8"iso-ir-143", 10},
		::fast_io::io_scatter_t{u8"iso-ir-144", 10},
		::fast_io::io_scatter_t{u8"iso-ir-146", 10},
		::fast_io::io_scatter_t{u8"iso-ir-147", 10},
		::fast_io::io_scatter_t{u8"iso-ir-148", 10},
		::fast_io::io_scatter_t{u8"iso-ir-149", 10},
		::fast_io::io_scatter_t{u8"iso-ir-15", 9},
		::fast_io::io_scatter_t{u8"iso-ir-150", 10},
		::fast_io::io_scatter_t{u8"iso-ir-151", 10},
		::fast_io::io_scatter_t{u8"iso-ir-152", 10},
		::fast_io::io_scatter_t{u8"iso-ir-153", 10},
		::fast_io::io_scatter_t{u8"iso-ir-154", 10},
		::fast_io::io_scatter_t{u8"iso-ir-155", 10},
		::fast_io::io_scatter_t{u8"iso-ir-157", 10},
		::fast_io::io_scatter_t{u8"iso-ir-158", 10},
		::fast_io::io_scatter_t{u8"iso-ir-159", 10},
		::fast_io::io_scatter_t{u8"iso-ir-16", 9},
		::fast_io::io_scatter_t{u8"iso-ir-17", 9},
		::fast_io::io_scatter_t{u8"iso-ir-18", 9},
		::fast_io::io_scatter_t{u8"iso-ir-19", 9},
		::fast_io::io_scatter_t{u8"iso-ir-199", 10},
		::fast_io::io_scatter_t{u8"iso-ir-2", 8},
		::fast_io::io_scatter_t{u8"iso-ir-21", 9},
		::fast_io::io_scatter_t{u8"iso-ir-226", 10},
		::fast_io::io_scatter_t{u8"iso-ir-25", 9},
		::fast_io::io_scatter_t{u8"iso-ir-27", 9},
		::fast_io::io_scatter_t{u8"iso-ir-37", 9},
		::fast_io::io_scatter_t{u8"iso-ir-4", 8},
		::fast_io::io_scatter_t{u8"iso-ir-42", 9},
		::fast_io::io_scatter_t{u8"iso-ir-47", 9},
		::fast_io::io_scatter_t{u8"iso-ir-49", 9},
		::fast_io::io_scatter_t{u8"iso-ir-50", 9},
		::fast_io::io_scatter_t{u8"iso-ir-51", 9},
		::fast_io::io_scatter_t{u8"iso-ir-54", 9},
		::fast_io::io_scatter_t{u8"iso-ir-55", 9},
		::fast_io::io_scatter_t{u8"iso-ir-57", 9},
		::fast_io::io_scatter_t{u8"iso-ir-58", 9},
		::fast_io::io_scatter_t{u8"iso-ir-6", 8},
		::fast_io::io_scatter_t{u8"iso-ir-60", 9},
		::fast_io::io_scatter_t{u8"iso-ir-61", 9},
		::fast_io::io_scatter_t{u8"iso-ir-69", 9},
		::fast_io::io_scatter_t{u8"iso-ir-70", 9},
		::fast_io::io_scatter_t{u8"iso-ir-8-1", 10},
		::fast_io::io_scatter_t{u8"iso-ir-8-2", 10},
		::fast_io::io_scatter_t{u8"iso-ir-84", 9},
		::fast_io::io_scatter_t{u8"iso-ir-85", 9},
		::fast_io::io_scatter_t{u8"iso-ir-86", 9},
		::fast_io::io_scatter_t{u8"iso-ir-87", 9},
		::fast_io::io_scatter_t{u8"iso-ir-88", 9},
		::fast_io::io_scatter_t{u8"iso-ir-89", 9},
		::fast_io::io_scatter_t{u8"iso-ir-9-1", 10},
		::fast_io::io_scatter_t{u8"iso-ir-9-2", 10},
		::fast_io::io_scatter_t{u8"iso-ir-90", 9},
		::fast_io::io_scatter_t{u8"iso-ir-91", 9},
		::fast_io::io_scatter_t{u8"iso-ir-92", 9},
		::fast_io::io_scatter_t{u8"iso-ir-93", 9},
		::fast_io::io_scatter_t{u8"iso-ir-94", 9},
		::fast_io::io_scatter_t{u8"iso-ir-95", 9},
		::fast_io::io_scatter_t{u8"iso-ir-96", 9},
		::fast_io::io_scatter_t{u8"iso-ir-98", 9},
		::fast_io::io_scatter_t{u8"iso-ir-99", 9},
		::fast_io::io_scatter_t{u8"jp", 2},
		::fast_io::io_scatter_t{u8"jp-ocr-a", 8},
		::fast_io::io_scatter_t{u8"jp-ocr-b", 8},
		::fast_io::io_scatter_t{u8"jp-ocr-b-add", 12},
		::fast_io::io_scatter_t{u8"jp-ocr-hand", 11},
		::fast_io::io_scatter_t{u8"jp-ocr-hand-add", 15},
		::fast_io::io_scatter_t{u8"js", 2},
		::fast_io::io_scatter_t{u8"katakana", 8},
		::fast_io::io_scatter_t{u8"korean", 6},
		::fast_io::io_scatter_t{u8"l1", 2},
		::fast_io::io_scatter_t{u8"l10", 3},
		::fast_io::io_scatter_t{u8"l2", 2},
		::fast_io::io_scatter_t{u8"l3", 2},
		::fast_io::io_scatter_t{u8"l4", 2},
		::fast_io::io_scatter_t{u8"l5", 2},
		::fast_io::io_scatter_t{u8"l6", 2},
		::fast_io::io_scatter_t{u8"l8", 2},
		::fast_io::io_scatter_t{u8"lap", 3},
		::fast_io::io_scatter_t{u8"latin-greek", 11},
		::fast_io::io_scatter_t{u8"latin-lap", 9},
		::fast_io::io_scatter_t{u8"latin1", 6},
		::fast_io::io_scatter_t{u8"latin1-2-5", 10},
		::fast_io::io_scatter_t{u8"latin10", 7},
		::fast_io::io_scatter_t{u8"latin2", 6},
		::fast_io::io_scatter_t{u8"latin3", 6},
		::fast_io::io_scatter_t{u8"latin4", 6},
		::fast_io::io_scatter_t{u8"latin5", 6},
		::fast_io::io_scatter_t{u8"latin6", 6},
		::fast_io::io_scatter_t{u8"latin8", 6},
		::fast_io::io_scatter_t{u8"mac", 3},
		::fast_io::io_scatter_t{u8"macedonian", 10},
		::fast_io::io_scatter_t{u8"macintosh", 9},
		::fast_io::io_scatter_t{u8"no", 2},
		::fast_io::io_scatter_t{u8"no2", 3},
		::fast_io::io_scatter_t{u8"r8", 2},
		::fast_io::io_scatter_t{u8"ref", 3},
		::fast_io::io_scatter_t{u8"roman8", 6},
		::fast_io::io_scatter_t{u8"se", 2},
		::fast_io::io_scatter_t{u8"se2", 3},
		::fast_io::io_scatter_t{u8"serbian", 7},
		::fast_io::io_scatter_t{u8"uk", 2},
		::fast_io::io_scatter_t{u8"us", 2},
		::fast_io::io_scatter_t{u8"us-dk", 5},
		::fast_io::io_scatter_t{u8"videotex-suppl", 14},
		::fast_io::io_scatter_t{u8"windows-1250", 12},
		::fast_io::io_scatter_t{u8"windows-1251", 12},
		::fast_io::io_scatter_t{u8"windows-1252", 12},
		::fast_io::io_scatter_t{u8"windows-1253", 12},
		::fast_io::io_scatter_t{u8"windows-1254", 12},
		::fast_io::io_scatter_t{u8"windows-1255", 12},
		::fast_io::io_scatter_t{u8"windows-1256", 12},
		::fast_io::io_scatter_t{u8"windows-1257", 12},
		::fast_io::io_scatter_t{u8"windows-1258", 12},
		::fast_io::io_scatter_t{u8"windows-874", 11},
		::fast_io::io_scatter_t{u8"windows-936", 11},
		::fast_io::io_scatter_t{u8"windows1250", 11},
		::fast_io::io_scatter_t{u8"windows1251", 11},
		::fast_io::io_scatter_t{u8"windows1252", 11},
		::fast_io::io_scatter_t{u8"windows1253", 11},
		::fast_io::io_scatter_t{u8"windows1254", 11},
		::fast_io::io_scatter_t{u8"windows1255", 11},
		::fast_io::io_scatter_t{u8"windows1256", 11},
		::fast_io::io_scatter_t{u8"windows1257", 11},
		::fast_io::io_scatter_t{u8"windows1258", 11},
		::fast_io::io_scatter_t{u8"windows874", 10},
		::fast_io::io_scatter_t{u8"x0201-7", 7},
		::fast_io::io_scatter_t{u8"x0208", 5},
		::fast_io::io_scatter_t{u8"x0212", 5},
		::fast_io::io_scatter_t{u8"yu", 2},
	};
	::std::array mib_nums{
		MIB_enum::PC8CodePage437,
		MIB_enum::PC850Multilingual,
		MIB_enum::IBM851,
		MIB_enum::PCp852,
		MIB_enum::IBM855,
		MIB_enum::IBM857,
		MIB_enum::IBM860,
		MIB_enum::IBM861,
		MIB_enum::PC862LatinHebrew,
		MIB_enum::IBM863,
		MIB_enum::IBM865,
		MIB_enum::IBM866,
		MIB_enum::IBM869,
		MIB_enum::IBBM904,
		MIB_enum::ISO99NAPLPS,
		MIB_enum::ASCII,
		MIB_enum::ASCII,
		MIB_enum::ASCII,
		MIB_enum::ISOLatinArabic,
		MIB_enum::ISO89ASMO449,
		MIB_enum::AdobeStandardEncoding,
		MIB_enum::HPPSMath,
		MIB_enum::AdobeStandardEncoding,
		MIB_enum::Amiga1251,
		MIB_enum::Amiga1251,
		MIB_enum::Amiga1251,
		MIB_enum::Amiga1251,
		MIB_enum::BOCU1,
		MIB_enum::BOCU1,
		MIB_enum::BRF,
		MIB_enum::ISO4UnitedKingdom,
		MIB_enum::ISO47BSViewdata,
		MIB_enum::Big5,
		MIB_enum::Big5HKSCS,
		MIB_enum::Big5HKSCS,
		MIB_enum::IBM00858,
		MIB_enum::IBM00924,
		MIB_enum::IBM01140,
		MIB_enum::IBM01141,
		MIB_enum::IBM01142,
		MIB_enum::IBM01143,
		MIB_enum::IBM01144,
		MIB_enum::IBM01145,
		MIB_enum::IBM01146,
		MIB_enum::IBM01147,
		MIB_enum::IBM01148,
		MIB_enum::IBM01149,
		MIB_enum::CESU8,
		MIB_enum::CESU8,
		MIB_enum::IBM00858,
		MIB_enum::IBM00924,
		MIB_enum::IBM01140,
		MIB_enum::IBM01141,
		MIB_enum::IBM01142,
		MIB_enum::IBM01143,
		MIB_enum::IBM01144,
		MIB_enum::IBM01145,
		MIB_enum::IBM01146,
		MIB_enum::IBM01147,
		MIB_enum::IBM01148,
		MIB_enum::IBM01149,
		MIB_enum::IBM1026,
		MIB_enum::PTCP154,
		MIB_enum::IBM273,
		MIB_enum::IBM274,
		MIB_enum::IBM278,
		MIB_enum::IBM280,
		MIB_enum::IBM284,
		MIB_enum::IBM285,
		MIB_enum::IBM500,
		MIB_enum::CP50220,
		MIB_enum::CP51932,
		MIB_enum::ISOLatin1,
		MIB_enum::IBM868,
		MIB_enum::IBM870,
		MIB_enum::IBM871,
		MIB_enum::IBM905,
		MIB_enum::IBM918,
		MIB_enum::GBK,
		MIB_enum::ISO99NAPLPS,
		MIB_enum::ISO121Canadian1,
		MIB_enum::ISO122Canadian2,
		MIB_enum::ISO123CSAZ24341985gr,
		MIB_enum::ISO139CSN369103,
		MIB_enum::PTCP154,
		MIB_enum::DECMCS,
		MIB_enum::DECMCS,
		MIB_enum::ISO21German,
		MIB_enum::DKUS,
		MIB_enum::ISO646Danish,
		MIB_enum::ISO646Danish,
		MIB_enum::IBMEBCDICATDE,
		MIB_enum::EBCDICATDEA,
		MIB_enum::IBM274,
		MIB_enum::IBM275,
		MIB_enum::EBCDICCAFR,
		MIB_enum::IBM277,
		MIB_enum::IBM277,
		MIB_enum::IBM880,
		MIB_enum::EBCDICDKNO,
		MIB_enum::EBCDICDKNOA,
		MIB_enum::EBCDICES,
		MIB_enum::EBCDICESA,
		MIB_enum::EBCDICESS,
		MIB_enum::EBCDICFISE,
		MIB_enum::EBCDICFISEA,
		MIB_enum::EBCDICFR,
		MIB_enum::IBM038,
		MIB_enum::EBCDICIT,
		MIB_enum::IBM281,
		MIB_enum::IBM290,
		MIB_enum::EBCDICPT,
		MIB_enum::EBCDICUK,
		MIB_enum::EBCDICUS,
		MIB_enum::EBCDICATDEA,
		MIB_enum::EBCDICCAFR,
		MIB_enum::EBCDICDKNO,
		MIB_enum::EBCDICDKNOA,
		MIB_enum::EBCDICES,
		MIB_enum::EBCDICESA,
		MIB_enum::EBCDICESS,
		MIB_enum::EBCDICFISE,
		MIB_enum::EBCDICFISEA,
		MIB_enum::EBCDICFR,
		MIB_enum::EBCDICIT,
		MIB_enum::EBCDICPT,
		MIB_enum::EBCDICUK,
		MIB_enum::EBCDICUS,
		MIB_enum::ISOLatinArabic,
		MIB_enum::ISOLatinGreek,
		MIB_enum::ISO111ECMACyrillic,
		MIB_enum::ISOLatinGreek,
		MIB_enum::ISO17Spanish,
		MIB_enum::ISO85Spanish2,
		MIB_enum::EUCPkdFmtJapanese,
		MIB_enum::EUCKR,
		MIB_enum::EUCFixWidJapanese,
		MIB_enum::EUCKR,
		MIB_enum::EUCPkdFmtJapanese,
		MIB_enum::EUCFixWidJapanese,
		MIB_enum::EUCPkdFmtJapanese,
		MIB_enum::ISO10Swedish,
		MIB_enum::GB18030,
		MIB_enum::GB2312,
		MIB_enum::GBK,
		MIB_enum::ISO57GB1988,
		MIB_enum::ISO58GB231280,
		MIB_enum::ISO153GOST1976874,
		MIB_enum::HPDesktop,
		MIB_enum::HPLegal,
		MIB_enum::HPMath8,
		MIB_enum::HPPiFont,
		MIB_enum::HPDesktop,
		MIB_enum::HPLegal,
		MIB_enum::HPMath8,
		MIB_enum::HPPSMath,
		MIB_enum::HPPiFont,
		MIB_enum::HPRoman8,
		MIB_enum::HZGB2312,
		MIB_enum::HZGB2312,
		MIB_enum::HalfWidthKatakana,
		MIB_enum::IBBM904,
		MIB_enum::IBM1047,
		MIB_enum::IBMSymbols,
		MIB_enum::IBMThai,
		MIB_enum::IBM00858,
		MIB_enum::IBM00924,
		MIB_enum::IBM01140,
		MIB_enum::IBM01141,
		MIB_enum::IBM01142,
		MIB_enum::IBM01143,
		MIB_enum::IBM01144,
		MIB_enum::IBM01145,
		MIB_enum::IBM01146,
		MIB_enum::IBM01147,
		MIB_enum::IBM01148,
		MIB_enum::IBM01149,
		MIB_enum::IBM037,
		MIB_enum::IBM038,
		MIB_enum::IBM1026,
		MIB_enum::IBM1047,
		MIB_enum::IBM273,
		MIB_enum::IBM274,
		MIB_enum::IBM275,
		MIB_enum::IBM277,
		MIB_enum::IBM278,
		MIB_enum::IBM280,
		MIB_enum::IBM281,
		MIB_enum::IBM284,
		MIB_enum::IBM285,
		MIB_enum::IBM290,
		MIB_enum::IBM297,
		MIB_enum::ASCII,
		MIB_enum::IBM420,
		MIB_enum::IBM423,
		MIB_enum::IBM424,
		MIB_enum::PC8CodePage437,
		MIB_enum::IBM500,
		MIB_enum::PC775Baltic,
		MIB_enum::ISOLatin1,
		MIB_enum::PC850Multilingual,
		MIB_enum::IBM851,
		MIB_enum::PCp852,
		MIB_enum::IBM855,
		MIB_enum::IBM857,
		MIB_enum::IBM860,
		MIB_enum::IBM861,
		MIB_enum::PC862LatinHebrew,
		MIB_enum::IBM863,
		MIB_enum::IBM864,
		MIB_enum::IBM865,
		MIB_enum::IBM866,
		MIB_enum::IBM868,
		MIB_enum::IBM869,
		MIB_enum::IBM870,
		MIB_enum::IBM871,
		MIB_enum::IBM880,
		MIB_enum::IBM891,
		MIB_enum::IBM903,
		MIB_enum::IBBM904,
		MIB_enum::IBM905,
		MIB_enum::IBM918,
		MIB_enum::IBMEBCDICATDE,
		MIB_enum::IBMSymbols,
		MIB_enum::IBMThai,
		MIB_enum::ISO143IECP271,
		MIB_enum::ISO49INIS,
		MIB_enum::ISO50INIS8,
		MIB_enum::ISO51INISCyrillic,
		MIB_enum::INVARIANT,
		MIB_enum::UnicodeLatin1,
		MIB_enum::UnicodeJapanese,
		MIB_enum::Unicode,
		MIB_enum::UCS4,
		MIB_enum::UnicodeASCII,
		MIB_enum::ISO10646UTF1,
		MIB_enum::UnicodeLatin1,
		MIB_enum::ISO115481,
		MIB_enum::ISO2022CN,
		MIB_enum::ISO2022CNEXT,
		MIB_enum::ISO2022JP,
		MIB_enum::ISO2022JP2,
		MIB_enum::ISO2022KR,
		MIB_enum::ISOLatin1,
		MIB_enum::Windows30Latin1,
		MIB_enum::Windows31Latin1,
		MIB_enum::ISOLatin6,
		MIB_enum::TIS620,
		MIB_enum::ISO885913,
		MIB_enum::ISO885914,
		MIB_enum::ISO885915,
		MIB_enum::ISO885916,
		MIB_enum::ISOLatin2,
		MIB_enum::Windows31Latin2,
		MIB_enum::ISOLatin3,
		MIB_enum::ISOLatin4,
		MIB_enum::ISOLatinCyrillic,
		MIB_enum::ISOLatinArabic,
		MIB_enum::ISO88596E,
		MIB_enum::ISO88596I,
		MIB_enum::ISOLatinGreek,
		MIB_enum::ISOLatinHebrew,
		MIB_enum::ISO88598E,
		MIB_enum::ISO88598I,
		MIB_enum::ISOLatin5,
		MIB_enum::Windows31Latin5,
		MIB_enum::UnicodeIBM1261,
		MIB_enum::UnicodeIBM1264,
		MIB_enum::UnicodeIBM1265,
		MIB_enum::UnicodeIBM1268,
		MIB_enum::UnicodeIBM1276,
		MIB_enum::ISO102T617bit,
		MIB_enum::ISO10367Box,
		MIB_enum::ISO103T618bit,
		MIB_enum::ISO10646UTF1,
		MIB_enum::ISO10Swedish,
		MIB_enum::ISO111ECMACyrillic,
		MIB_enum::ISO115481,
		MIB_enum::ISO11SwedishForNames,
		MIB_enum::ISO121Canadian1,
		MIB_enum::ISO122Canadian2,
		MIB_enum::ISO123CSAZ24341985gr,
		MIB_enum::ISO128T101G2,
		MIB_enum::ISO139CSN369103,
		MIB_enum::ISO13JISC6220jp,
		MIB_enum::ISO141JUSIB1002,
		MIB_enum::ISO143IECP271,
		MIB_enum::ISO146Serbian,
		MIB_enum::ISO147Macedonian,
		MIB_enum::ISO14JISC6220ro,
		MIB_enum::ISO150,
		MIB_enum::ISO150,
		MIB_enum::ISO151Cuba,
		MIB_enum::ISO153GOST1976874,
		MIB_enum::ISO158Lap,
		MIB_enum::ISO159JISX02121990,
		MIB_enum::ISO15Italian,
		MIB_enum::ISO16Portuguese,
		MIB_enum::ISO17Spanish,
		MIB_enum::ISO18Greek7Old,
		MIB_enum::ISO19LatinGreek,
		MIB_enum::ISO2022CN,
		MIB_enum::ISO2022CNEXT,
		MIB_enum::ISO2022JP,
		MIB_enum::ISO2022JP2,
		MIB_enum::ISO2022KR,
		MIB_enum::ISO2033,
		MIB_enum::ISO21German,
		MIB_enum::ISO25French,
		MIB_enum::ISO27LatinGreek1,
		MIB_enum::ISO2IntlRefVersion,
		MIB_enum::ISO42JISC62261978,
		MIB_enum::ISO47BSViewdata,
		MIB_enum::ISO49INIS,
		MIB_enum::ISO4UnitedKingdom,
		MIB_enum::ISO50INIS8,
		MIB_enum::ISO51INISCyrillic,
		MIB_enum::ISO54271981,
		MIB_enum::ISO5427Cyrillic,
		MIB_enum::ISO54271981,
		MIB_enum::ISO5428Greek,
		MIB_enum::ISO57GB1988,
		MIB_enum::ISO58GB231280,
		MIB_enum::ISO60DanishNorwegian,
		MIB_enum::ISO60DanishNorwegian,
		MIB_enum::ISO61Norwegian2,
		MIB_enum::ISO121Canadian1,
		MIB_enum::ISO122Canadian2,
		MIB_enum::ISO57GB1988,
		MIB_enum::ISO151Cuba,
		MIB_enum::ISO21German,
		MIB_enum::ISO646Danish,
		MIB_enum::ISO17Spanish,
		MIB_enum::ISO85Spanish2,
		MIB_enum::ISO10Swedish,
		MIB_enum::ISO69French,
		MIB_enum::ISO25French,
		MIB_enum::ISO4UnitedKingdom,
		MIB_enum::ISO86Hungarian,
		MIB_enum::ISO15Italian,
		MIB_enum::ISO14JISC6220ro,
		MIB_enum::ISO92JISC62991984b,
		MIB_enum::KSC5636,
		MIB_enum::ISO60DanishNorwegian,
		MIB_enum::ISO61Norwegian2,
		MIB_enum::ISO16Portuguese,
		MIB_enum::ISO84Portuguese2,
		MIB_enum::ISO10Swedish,
		MIB_enum::ISO11SwedishForNames,
		MIB_enum::ASCII,
		MIB_enum::ISO141JUSIB1002,
		MIB_enum::ISO646Danish,
		MIB_enum::ISO646basic1983,
		MIB_enum::ISO6937Add,
		MIB_enum::ISO69French,
		MIB_enum::ISO70VideotexSupp1,
		MIB_enum::ISO84Portuguese2,
		MIB_enum::ISO85Spanish2,
		MIB_enum::ISO86Hungarian,
		MIB_enum::ISO87JISX0208,
		MIB_enum::ISO885913,
		MIB_enum::ISO885914,
		MIB_enum::ISO885915,
		MIB_enum::ISO885916,
		MIB_enum::ISO88596E,
		MIB_enum::ISO88596I,
		MIB_enum::ISO88598E,
		MIB_enum::ISO88598I,
		MIB_enum::ISO8859Supp,
		MIB_enum::ISO88Greek7,
		MIB_enum::ISO89ASMO449,
		MIB_enum::ISO90,
		MIB_enum::ISO91JISC62291984a,
		MIB_enum::ISO92JISC62991984b,
		MIB_enum::ISO93JIS62291984badd,
		MIB_enum::ISO94JIS62291984hand,
		MIB_enum::ISO95JIS62291984handadd,
		MIB_enum::ISO96JISC62291984kana,
		MIB_enum::ISO99NAPLPS,
		MIB_enum::ISOLatin1,
		MIB_enum::ISOLatin2,
		MIB_enum::ISOLatin3,
		MIB_enum::ISOLatin4,
		MIB_enum::ISOLatin5,
		MIB_enum::ISOLatin6,
		MIB_enum::ISOLatinArabic,
		MIB_enum::ISOLatinCyrillic,
		MIB_enum::ISOLatinGreek,
		MIB_enum::ISOLatinHebrew,
		MIB_enum::ISOTextComm,
		MIB_enum::ISO10367Box,
		MIB_enum::ISO115481,
		MIB_enum::ISO2033,
		MIB_enum::ISO5427Cyrillic,
		MIB_enum::ISO6937Add,
		MIB_enum::ISOTextComm,
		MIB_enum::ISOLatin1,
		MIB_enum::ISO885914,
		MIB_enum::ISO885915,
		MIB_enum::ISO885916,
		MIB_enum::ISOLatin2,
		MIB_enum::ISOLatin3,
		MIB_enum::ISOLatin4,
		MIB_enum::ISOLatinCyrillic,
		MIB_enum::ISOLatinArabic,
		MIB_enum::ISO88596E,
		MIB_enum::ISO88596I,
		MIB_enum::ISOLatinGreek,
		MIB_enum::ISOLatinHebrew,
		MIB_enum::ISO88598E,
		MIB_enum::ISO88598I,
		MIB_enum::ISOLatin5,
		MIB_enum::ISO8859Supp,
		MIB_enum::ISO89ASMO449,
		MIB_enum::ISO115481,
		MIB_enum::ISO15Italian,
		MIB_enum::JISEncoding,
		MIB_enum::ISO13JISC6220jp,
		MIB_enum::ISO13JISC6220jp,
		MIB_enum::ISO14JISC6220ro,
		MIB_enum::ISO42JISC62261978,
		MIB_enum::ISO87JISX0208,
		MIB_enum::ISO91JISC62291984a,
		MIB_enum::ISO92JISC62991984b,
		MIB_enum::ISO93JIS62291984badd,
		MIB_enum::ISO94JIS62291984hand,
		MIB_enum::ISO95JIS62291984handadd,
		MIB_enum::ISO96JISC62291984kana,
		MIB_enum::JISEncoding,
		MIB_enum::HalfWidthKatakana,
		MIB_enum::ISO87JISX0208,
		MIB_enum::ISO159JISX02121990,
		MIB_enum::ISO141JUSIB1002,
		MIB_enum::ISO147Macedonian,
		MIB_enum::ISO146Serbian,
		MIB_enum::KOI7switched,
		MIB_enum::KOI7switched,
		MIB_enum::ISO111ECMACyrillic,
		MIB_enum::KOI8R,
		MIB_enum::KOI8U,
		MIB_enum::KOI8R,
		MIB_enum::KOI8U,
		MIB_enum::KSC56011987,
		MIB_enum::KSC5636,
		MIB_enum::KSC56011987,
		MIB_enum::KSC56011987,
		MIB_enum::KSC56011987,
		MIB_enum::KZ1048,
		MIB_enum::KZ1048,
		MIB_enum::ISO885915,
		MIB_enum::ISO27LatinGreek1,
		MIB_enum::Mnem,
		MIB_enum::Mnemonic,
		MIB_enum::GBK,
		MIB_enum::ISO86Hungarian,
		MIB_enum::ShiftJIS,
		MIB_enum::Macintosh,
		MIB_enum::MicrosoftPublishing,
		MIB_enum::MicrosoftPublishing,
		MIB_enum::Mnem,
		MIB_enum::Mnemonic,
		MIB_enum::ISO99NAPLPS,
		MIB_enum::NATSDANO,
		MIB_enum::NATSDANOADD,
		MIB_enum::NATSSEFI,
		MIB_enum::NATSSEFIADD,
		MIB_enum::NATSDANO,
		MIB_enum::NATSDANOADD,
		MIB_enum::NATSSEFI,
		MIB_enum::NATSSEFIADD,
		MIB_enum::ISO69French,
		MIB_enum::ISO25French,
		MIB_enum::ISO60DanishNorwegian,
		MIB_enum::ISO61Norwegian2,
		MIB_enum::OSDEBCDICDF03IRV,
		MIB_enum::OSDEBCDICDF041,
		MIB_enum::OSDEBCDICDF0415,
		MIB_enum::OSDEBCDICDF03IRV,
		MIB_enum::OSDEBCDICDF041,
		MIB_enum::OSDEBCDICDF0415,
		MIB_enum::IBM00858,
		MIB_enum::PC775Baltic,
		MIB_enum::PC8DanishNorwegian,
		MIB_enum::PC8Turkish,
		MIB_enum::PC850Multilingual,
		MIB_enum::PC862LatinHebrew,
		MIB_enum::PC8CodePage437,
		MIB_enum::PC8DanishNorwegian,
		MIB_enum::PC8Turkish,
		MIB_enum::PCp852,
		MIB_enum::ISO16Portuguese,
		MIB_enum::PTCP154,
		MIB_enum::ISO84Portuguese2,
		MIB_enum::PTCP154,
		MIB_enum::KZ1048,
		MIB_enum::SCSU,
		MIB_enum::ISO10Swedish,
		MIB_enum::ISO11SwedishForNames,
		MIB_enum::KZ1048,
		MIB_enum::ISO153GOST1976874,
		MIB_enum::ShiftJIS,
		MIB_enum::ShiftJIS,
		MIB_enum::ISO128T101G2,
		MIB_enum::ISO103T618bit,
		MIB_enum::ISO102T617bit,
		MIB_enum::ISO103T618bit,
		MIB_enum::TIS620,
		MIB_enum::TIS620,
		MIB_enum::TSCII,
		MIB_enum::UCS4,
		MIB_enum::Unicode11,
		MIB_enum::Unicode11UTF7,
		MIB_enum::Unknown8BiT,
		MIB_enum::ASCII,
		MIB_enum::USDK,
		MIB_enum::UTF16,
		MIB_enum::UTF16BE,
		MIB_enum::UTF16LE,
		MIB_enum::UTF32,
		MIB_enum::UTF32BE,
		MIB_enum::UTF32LE,
		MIB_enum::UTF7,
		MIB_enum::UTF7IMAP,
		MIB_enum::UTF8,
		MIB_enum::UTF16,
		MIB_enum::UTF16BE,
		MIB_enum::UTF16LE,
		MIB_enum::UTF32,
		MIB_enum::UTF32BE,
		MIB_enum::UTF32LE,
		MIB_enum::UTF7,
		MIB_enum::UTF7IMAP,
		MIB_enum::UTF8,
		MIB_enum::Unicode,
		MIB_enum::Unicode11,
		MIB_enum::Unicode11UTF7,
		MIB_enum::UnicodeASCII,
		MIB_enum::UnicodeIBM1261,
		MIB_enum::UnicodeIBM1264,
		MIB_enum::UnicodeIBM1265,
		MIB_enum::UnicodeIBM1268,
		MIB_enum::UnicodeIBM1276,
		MIB_enum::UnicodeJapanese,
		MIB_enum::UnicodeLatin1,
		MIB_enum::Unknown8BiT,
		MIB_enum::VIQR,
		MIB_enum::VISCII,
		MIB_enum::VenturaInternational,
		MIB_enum::VenturaMath,
		MIB_enum::VenturaUS,
		MIB_enum::VenturaInternational,
		MIB_enum::VenturaMath,
		MIB_enum::VenturaUS,
		MIB_enum::Windows31J,
		MIB_enum::Windows30Latin1,
		MIB_enum::Windows31J,
		MIB_enum::Windows31Latin1,
		MIB_enum::Windows31Latin2,
		MIB_enum::Windows31Latin5,
		MIB_enum::HalfWidthKatakana,
		MIB_enum::ISOLatinArabic,
		MIB_enum::ISO89ASMO449,
		MIB_enum::ISO121Canadian1,
		MIB_enum::ISO58GB231280,
		MIB_enum::ISO57GB1988,
		MIB_enum::IBM868,
		MIB_enum::IBM869,
		MIB_enum::IBM861,
		MIB_enum::IBM037,
		MIB_enum::IBM038,
		MIB_enum::IBM275,
		MIB_enum::IBM281,
		MIB_enum::IBM290,
		MIB_enum::IBM297,
		MIB_enum::ASCII,
		MIB_enum::IBM420,
		MIB_enum::IBM423,
		MIB_enum::IBM424,
		MIB_enum::PC8CodePage437,
		MIB_enum::PC775Baltic,
		MIB_enum::PC850Multilingual,
		MIB_enum::IBM851,
		MIB_enum::PCp852,
		MIB_enum::IBM855,
		MIB_enum::IBM857,
		MIB_enum::IBM860,
		MIB_enum::IBM861,
		MIB_enum::PC862LatinHebrew,
		MIB_enum::IBM863,
		MIB_enum::IBM864,
		MIB_enum::IBM865,
		MIB_enum::IBM866,
		MIB_enum::IBM869,
		MIB_enum::IBM880,
		MIB_enum::IBM891,
		MIB_enum::IBM903,
		MIB_enum::IBBM904,
		MIB_enum::ISO121Canadian1,
		MIB_enum::ISO122Canadian2,
		MIB_enum::ISO121Canadian1,
		MIB_enum::ISO122Canadian2,
		MIB_enum::ISO151Cuba,
		MIB_enum::ISOLatinCyrillic,
		MIB_enum::ISO21German,
		MIB_enum::DECMCS,
		MIB_enum::ISO646Danish,
		MIB_enum::DKUS,
		MIB_enum::ISO2033,
		MIB_enum::IBM00924,
		MIB_enum::IBM420,
		MIB_enum::IBM918,
		MIB_enum::IBM500,
		MIB_enum::IBM037,
		MIB_enum::IBM500,
		MIB_enum::IBM284,
		MIB_enum::IBM278,
		MIB_enum::IBM297,
		MIB_enum::IBM285,
		MIB_enum::IBM423,
		MIB_enum::IBM424,
		MIB_enum::IBM871,
		MIB_enum::IBM280,
		MIB_enum::IBM037,
		MIB_enum::IBM870,
		MIB_enum::IBM278,
		MIB_enum::IBM905,
		MIB_enum::IBM037,
		MIB_enum::IBM037,
		MIB_enum::IBM870,
		MIB_enum::IBM01141,
		MIB_enum::IBM01142,
		MIB_enum::IBM01145,
		MIB_enum::IBM01143,
		MIB_enum::IBM01147,
		MIB_enum::IBM01146,
		MIB_enum::IBM01148,
		MIB_enum::IBM01149,
		MIB_enum::IBM01144,
		MIB_enum::IBM01142,
		MIB_enum::IBM01143,
		MIB_enum::IBM01140,
		MIB_enum::ISO69French,
		MIB_enum::ISO4UnitedKingdom,
		MIB_enum::ISOLatinGreek,
		MIB_enum::ISO150,
		MIB_enum::ISO88Greek7,
		MIB_enum::ISO18Greek7Old,
		MIB_enum::ISOLatinGreek,
		MIB_enum::ISOLatinHebrew,
		MIB_enum::HPRoman8,
		MIB_enum::ISO86Hungarian,
		MIB_enum::ISO2IntlRefVersion,
		MIB_enum::ISO885914,
		MIB_enum::ISO10Swedish,
		MIB_enum::ISOLatin1,
		MIB_enum::ISOLatin2,
		MIB_enum::ISO102T617bit,
		MIB_enum::ISO103T618bit,
		MIB_enum::ISOLatin3,
		MIB_enum::ISO11SwedishForNames,
		MIB_enum::ISOLatin4,
		MIB_enum::ISO111ECMACyrillic,
		MIB_enum::ISO121Canadian1,
		MIB_enum::ISO122Canadian2,
		MIB_enum::ISO123CSAZ24341985gr,
		MIB_enum::ISOLatinGreek,
		MIB_enum::ISOLatinArabic,
		MIB_enum::ISO128T101G2,
		MIB_enum::ISO13JISC6220jp,
		MIB_enum::ISOLatinHebrew,
		MIB_enum::ISO139CSN369103,
		MIB_enum::ISO14JISC6220ro,
		MIB_enum::ISO141JUSIB1002,
		MIB_enum::ISOTextComm,
		MIB_enum::ISO143IECP271,
		MIB_enum::ISOLatinCyrillic,
		MIB_enum::ISO146Serbian,
		MIB_enum::ISO147Macedonian,
		MIB_enum::ISOLatin5,
		MIB_enum::KSC56011987,
		MIB_enum::ISO15Italian,
		MIB_enum::ISO150,
		MIB_enum::ISO151Cuba,
		MIB_enum::ISO6937Add,
		MIB_enum::ISO153GOST1976874,
		MIB_enum::ISO8859Supp,
		MIB_enum::ISO10367Box,
		MIB_enum::ISOLatin6,
		MIB_enum::ISO158Lap,
		MIB_enum::ISO159JISX02121990,
		MIB_enum::ISO16Portuguese,
		MIB_enum::ISO17Spanish,
		MIB_enum::ISO18Greek7Old,
		MIB_enum::ISO19LatinGreek,
		MIB_enum::ISO885914,
		MIB_enum::ISO2IntlRefVersion,
		MIB_enum::ISO21German,
		MIB_enum::ISO885916,
		MIB_enum::ISO25French,
		MIB_enum::ISO27LatinGreek1,
		MIB_enum::ISO5427Cyrillic,
		MIB_enum::ISO4UnitedKingdom,
		MIB_enum::ISO42JISC62261978,
		MIB_enum::ISO47BSViewdata,
		MIB_enum::ISO49INIS,
		MIB_enum::ISO50INIS8,
		MIB_enum::ISO51INISCyrillic,
		MIB_enum::ISO54271981,
		MIB_enum::ISO5428Greek,
		MIB_enum::ISO57GB1988,
		MIB_enum::ISO58GB231280,
		MIB_enum::ASCII,
		MIB_enum::ISO60DanishNorwegian,
		MIB_enum::ISO61Norwegian2,
		MIB_enum::ISO69French,
		MIB_enum::ISO70VideotexSupp1,
		MIB_enum::NATSSEFI,
		MIB_enum::NATSSEFIADD,
		MIB_enum::ISO84Portuguese2,
		MIB_enum::ISO85Spanish2,
		MIB_enum::ISO86Hungarian,
		MIB_enum::ISO87JISX0208,
		MIB_enum::ISO88Greek7,
		MIB_enum::ISO89ASMO449,
		MIB_enum::NATSDANO,
		MIB_enum::NATSDANOADD,
		MIB_enum::ISO90,
		MIB_enum::ISO91JISC62291984a,
		MIB_enum::ISO92JISC62991984b,
		MIB_enum::ISO93JIS62291984badd,
		MIB_enum::ISO94JIS62291984hand,
		MIB_enum::ISO95JIS62291984handadd,
		MIB_enum::ISO96JISC62291984kana,
		MIB_enum::ISO2033,
		MIB_enum::ISO99NAPLPS,
		MIB_enum::ISO14JISC6220ro,
		MIB_enum::ISO91JISC62291984a,
		MIB_enum::ISO92JISC62991984b,
		MIB_enum::ISO93JIS62291984badd,
		MIB_enum::ISO94JIS62291984hand,
		MIB_enum::ISO95JIS62291984handadd,
		MIB_enum::ISO141JUSIB1002,
		MIB_enum::ISO13JISC6220jp,
		MIB_enum::KSC56011987,
		MIB_enum::ISOLatin1,
		MIB_enum::ISO885916,
		MIB_enum::ISOLatin2,
		MIB_enum::ISOLatin3,
		MIB_enum::ISOLatin4,
		MIB_enum::ISOLatin5,
		MIB_enum::ISOLatin6,
		MIB_enum::ISO885914,
		MIB_enum::ISO158Lap,
		MIB_enum::ISO19LatinGreek,
		MIB_enum::ISO158Lap,
		MIB_enum::ISOLatin1,
		MIB_enum::ISO8859Supp,
		MIB_enum::ISO885916,
		MIB_enum::ISOLatin2,
		MIB_enum::ISOLatin3,
		MIB_enum::ISOLatin4,
		MIB_enum::ISOLatin5,
		MIB_enum::ISOLatin6,
		MIB_enum::ISO885914,
		MIB_enum::Macintosh,
		MIB_enum::ISO147Macedonian,
		MIB_enum::Macintosh,
		MIB_enum::ISO60DanishNorwegian,
		MIB_enum::ISO61Norwegian2,
		MIB_enum::HPRoman8,
		MIB_enum::ISO646basic1983,
		MIB_enum::HPRoman8,
		MIB_enum::ISO10Swedish,
		MIB_enum::ISO11SwedishForNames,
		MIB_enum::ISO146Serbian,
		MIB_enum::ISO4UnitedKingdom,
		MIB_enum::ASCII,
		MIB_enum::USDK,
		MIB_enum::ISO70VideotexSupp1,
		MIB_enum::windows1250,
		MIB_enum::windows1251,
		MIB_enum::windows1252,
		MIB_enum::windows1253,
		MIB_enum::windows1254,
		MIB_enum::windows1255,
		MIB_enum::windows1256,
		MIB_enum::windows1257,
		MIB_enum::windows1258,
		MIB_enum::windows874,
		MIB_enum::GBK,
		MIB_enum::windows1250,
		MIB_enum::windows1251,
		MIB_enum::windows1252,
		MIB_enum::windows1253,
		MIB_enum::windows1254,
		MIB_enum::windows1255,
		MIB_enum::windows1256,
		MIB_enum::windows1257,
		MIB_enum::windows1258,
		MIB_enum::windows874,
		MIB_enum::ISO13JISC6220jp,
		MIB_enum::ISO87JISX0208,
		MIB_enum::ISO159JISX02121990,
		MIB_enum::ISO141JUSIB1002,
	};
	auto range{::std::ranges::equal_range(names, ::fast_io::io_scatter_t{begin, static_cast<::std::size_t>(end - begin)}, ::fast_io::details::MIB_name_string_compare)};
	if (range.empty())
	{
		return MIB_enum::unknown;
	}
	else
	{
		return mib_nums[::std::ranges::distance(names.begin(), range.begin())];
	}
}

} // namespace fast_io
