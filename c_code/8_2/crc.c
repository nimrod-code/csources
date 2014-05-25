/* Generated by Nimrod Compiler v0.9.5 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <stdio.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef NI TY146046[256];
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_NIMCALL_PTR(void, TY2289) (void* p, NI op);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY2289 marker;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
static N_INLINE(NI32, updatecrc32_146012)(NI8 val, NI32 crc);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI32, updatecrc32_146017)(NIM_CHAR val, NI32 crc);
N_NIMCALL(NI32, strcrc32_146027)(NimStringDesc* s);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NI32, HEX3EHEX3C_146487)(NI32 c, NimStringDesc* s);
N_NIMCALL(NI32, crcfrombuf_146022)(void* buf, NI length);
N_NIMCALL(NI32, crcfromfile_146031)(NimStringDesc* filename);
N_NIMCALL(NIM_BOOL, open_10403)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NOCONV(void*, alloc_4601)(NI size);
N_NIMCALL(NI, readbuffer_10827)(FILE* f, void* buffer, NI len);
N_NOCONV(void, dealloc_4645)(void* p);
N_NIMCALL(NI32, updateadler32_146035)(NI32 adler, void* buf, NI length);
NIM_CONST TY146046 crc32table_146045 = {0,
1996959894,
-301047508,
-1727442502,
124634137,
1886057615,
-379345611,
-1637575261,
249268274,
2044508324,
-522852066,
-1747789432,
162941995,
2125561021,
-407360249,
-1866523247,
498536548,
1789927666,
-205950648,
-2067906082,
450548861,
1843258603,
-187386543,
-2083289657,
325883990,
1684777152,
-43845254,
-1973040660,
335633487,
1661365465,
-99664541,
-1928851979,
997073096,
1281953886,
-715111964,
-1570279054,
1006888145,
1258607687,
-770865667,
-1526024853,
901097722,
1119000684,
-608450090,
-1396901568,
853044451,
1172266101,
-589951537,
-1412350631,
651767980,
1373503546,
-925412992,
-1076862698,
565507253,
1454621731,
-809855591,
-1195530993,
671266974,
1594198024,
-972236366,
-1324619484,
795835527,
1483230225,
-1050600021,
-1234817731,
1994146192,
31158534,
-1731059524,
-271249366,
1907459465,
112637215,
-1614814043,
-390540237,
2013776290,
251722036,
-1777751922,
-519137256,
2137656763,
141376813,
-1855689577,
-429695999,
1802195444,
476864866,
-2056965928,
-228458418,
1812370925,
453092731,
-2113342271,
-183516073,
1706088902,
314042704,
-1950435094,
-54949764,
1658658271,
366619977,
-1932296973,
-69972891,
1303535960,
984961486,
-1547960204,
-725929758,
1256170817,
1037604311,
-1529756563,
-740887301,
1131014506,
879679996,
-1385723834,
-631195440,
1141124467,
855842277,
-1442165665,
-586318647,
1342533948,
654459306,
-1106571248,
-921952122,
1466479909,
544179635,
-1184443383,
-832445281,
1591671054,
702138776,
-1328506846,
-942167884,
1504918807,
783551873,
-1212326853,
-1061524307,
-306674912,
-1698712650,
62317068,
1957810842,
-355121351,
-1647151185,
81470997,
1943803523,
-480048366,
-1805370492,
225274430,
2053790376,
-468791541,
-1828061283,
167816743,
2097651377,
-267414716,
-2029476910,
503444072,
1762050814,
-144550051,
-2140837941,
426522225,
1852507879,
-19653770,
-1982649376,
282753626,
1742555852,
-105259153,
-1900089351,
397917763,
1622183637,
-690576408,
-1580100738,
953729732,
1340076626,
-776247311,
-1497606297,
1068828381,
1219638859,
-670225446,
-1358292148,
906185462,
1090812512,
-547295293,
-1469587627,
829329135,
1181335161,
-882789492,
-1134132454,
628085408,
1382605366,
-871598187,
-1156888829,
570562233,
1426400815,
-977650754,
-1296233688,
733239954,
1555261956,
-1026031705,
-1244606671,
752459403,
1541320221,
-1687895376,
-328994266,
1969922972,
40735498,
-1677130071,
-351390145,
1913087877,
83908371,
-1782625662,
-491226604,
2075208622,
213261112,
-1831694693,
-438977011,
2094854071,
198958881,
-2032938284,
-237706686,
1759359992,
534414190,
-2118248755,
-155638181,
1873836001,
414664567,
-2012718362,
-15766928,
1711684554,
285281116,
-1889165569,
-127750551,
1634467795,
376229701,
-1609899400,
-686959890,
1308918612,
956543938,
-1486412191,
-799009033,
1231636301,
1047427035,
-1362007478,
-640263460,
1088359270,
936918000,
-1447252397,
-558129467,
1202900863,
817233897,
-1111625188,
-893730166,
1404277552,
615818150,
-1160759803,
-841546093,
1423857449,
601450431,
-1285129682,
-1000256840,
1567103746,
711928724,
-1274298825,
-1022587231,
1510334235,
755167117}
;
extern TFrame* frameptr_13238;
TNimType NTI146007; /* TCrc32 */

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (a <= i);
		if (!(LOC3)) goto LA4;
		LOC3 = (i <= b);
		LA4: ;
		if (!LOC3) goto LA5;
		result = i;
		goto BeforeRet;
	}
	goto LA1;
	LA5: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1: ;
	BeforeRet: ;
	return result;
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13238;
	frameptr_13238 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13238 = (*frameptr_13238).prev;
}

static N_INLINE(NI32, updatecrc32_146012)(NI8 val, NI32 crc) {
	NI32 result;
	nimfr("updateCrc32", "crc.nim")
	result = 0;
	nimln(78, "crc.nim");
	nimln(79, "crc.nim");
	nimln(78, "crc.nim");
	nimln(78, "crc.nim");
	nimln(78, "crc.nim");
	nimln(79, "crc.nim");
	result = (NI32)(((NI32)chckRange(crc32table_146045[((NI)((NI)(((NI) (crc)) ^ ((NI) ((NI)(((NI) (val)) & 255)))) & 255))- 0], ((NI32) (-2147483647 -1)), ((NI32) 2147483647))) ^ (NI32)((NU32)(crc) >> (NU32)(((NI32) 8))));
	popFrame();
	return result;
}

static N_INLINE(NI32, updatecrc32_146017)(NIM_CHAR val, NI32 crc) {
	NI32 result;
	nimfr("updateCrc32", "crc.nim")
	result = 0;
	nimln(82, "crc.nim");
	nimln(82, "crc.nim");
	nimln(82, "crc.nim");
	result = updatecrc32_146012(((NI8)(NU8)(NU)(((NI) (((NU8)(val)))))), crc);
	popFrame();
	return result;
}

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	BeforeRet: ;
	return result;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ b));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	BeforeRet: ;
	return result;
}

N_NIMCALL(NI32, strcrc32_146027)(NimStringDesc* s) {
	NI32 result;
	NI i_146479;
	NI HEX3Atmp_146480;
	NI TMP537;
	NI res_146482;
	nimfr("strCrc32", "crc.nim")
	result = 0;
	nimln(85, "crc.nim");
	result = ((NI32) -1);
	i_146479 = 0;
	HEX3Atmp_146480 = 0;
	nimln(86, "crc.nim");
	nimln(86, "crc.nim");
	nimln(86, "crc.nim");
	TMP537 = subInt(s->Sup.len, 1);
	HEX3Atmp_146480 = (NI64)(TMP537);
	nimln(1451, "system.nim");
	res_146482 = 0;
	nimln(1452, "system.nim");
	while (1) {
		nimln(1452, "system.nim");
		if (!(res_146482 <= HEX3Atmp_146480)) goto LA1;
		nimln(1451, "system.nim");
		i_146479 = res_146482;
		nimln(86, "crc.nim");
		if ((NU)(i_146479) > (NU)(s->Sup.len)) raiseIndexError();
		result = updatecrc32_146017(s->data[i_146479], result);
		nimln(1454, "system.nim");
		res_146482 = addInt(res_146482, 1);
	} LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(NI32, HEX3EHEX3C_146487)(NI32 c, NimStringDesc* s) {
	NI32 result;
	NI i_146502;
	NI HEX3Atmp_146503;
	NI TMP538;
	NI res_146505;
	nimfr("><", "crc.nim")
	result = 0;
	nimln(89, "crc.nim");
	result = c;
	i_146502 = 0;
	HEX3Atmp_146503 = 0;
	nimln(90, "crc.nim");
	nimln(90, "crc.nim");
	nimln(90, "crc.nim");
	TMP538 = subInt(s->Sup.len, 1);
	HEX3Atmp_146503 = (NI64)(TMP538);
	nimln(1458, "system.nim");
	res_146505 = 0;
	nimln(1459, "system.nim");
	while (1) {
		nimln(1459, "system.nim");
		if (!(res_146505 <= HEX3Atmp_146503)) goto LA1;
		nimln(1458, "system.nim");
		i_146502 = res_146505;
		nimln(90, "crc.nim");
		if ((NU)(i_146502) > (NU)(s->Sup.len)) raiseIndexError();
		result = updatecrc32_146017(s->data[i_146502], result);
		nimln(1461, "system.nim");
		res_146505 = addInt(res_146505, 1);
	} LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(NI32, crcfrombuf_146022)(void* buf, NI length) {
	NI32 result;
	NI8* p;
	NI i_146535;
	NI HEX3Atmp_146537;
	NI TMP539;
	NI res_146539;
	nimfr("crcFromBuf", "crc.nim")
	result = 0;
	nimln(97, "crc.nim");
	p = ((NI8*) (buf));
	nimln(98, "crc.nim");
	result = ((NI32) -1);
	i_146535 = 0;
	HEX3Atmp_146537 = 0;
	nimln(99, "crc.nim");
	nimln(99, "crc.nim");
	TMP539 = subInt(length, 1);
	HEX3Atmp_146537 = (NI64)(TMP539);
	nimln(1451, "system.nim");
	res_146539 = 0;
	nimln(1452, "system.nim");
	while (1) {
		nimln(1452, "system.nim");
		if (!(res_146539 <= HEX3Atmp_146537)) goto LA1;
		nimln(1451, "system.nim");
		i_146535 = res_146539;
		nimln(99, "crc.nim");
		if ((NU)(i_146535) > (NU)(10000000)) raiseIndexError();
		result = updatecrc32_146012(p[(i_146535)- 0], result);
		nimln(1454, "system.nim");
		res_146539 = addInt(res_146539, 1);
	} LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(NI32, crcfromfile_146031)(NimStringDesc* filename) {
	NI32 result;
	FILE* bin;
	void* buf;
	NI8* p;
	nimfr("crcFromFile", "crc.nim")
	result = 0;
	bin = 0;
	nimln(106, "crc.nim");
	result = ((NI32) -1);
	nimln(107, "crc.nim");
	{
		NIM_BOOL LOC3;
		nimln(107, "crc.nim");
		nimln(107, "crc.nim");
		LOC3 = 0;
		LOC3 = open_10403(&bin, filename, ((NU8) 0), -1);
		if (!!(LOC3)) goto LA4;
		nimln(108, "crc.nim");
		goto BeforeRet;
	}
	LA4: ;
	nimln(109, "crc.nim");
	buf = alloc_4601(8000);
	nimln(110, "crc.nim");
	p = ((NI8*) (buf));
	nimln(111, "crc.nim");
	while (1) {
		NI readbytes;
		NI i_146567;
		NI HEX3Atmp_146570;
		NI TMP540;
		NI res_146572;
		nimln(112, "crc.nim");
		readbytes = readbuffer_10827(bin, buf, 8000);
		i_146567 = 0;
		HEX3Atmp_146570 = 0;
		nimln(113, "crc.nim");
		nimln(113, "crc.nim");
		TMP540 = subInt(readbytes, 1);
		HEX3Atmp_146570 = (NI64)(TMP540);
		nimln(1451, "system.nim");
		res_146572 = 0;
		nimln(1452, "system.nim");
		while (1) {
			nimln(1452, "system.nim");
			if (!(res_146572 <= HEX3Atmp_146570)) goto LA7;
			nimln(1451, "system.nim");
			i_146567 = res_146572;
			nimln(113, "crc.nim");
			if ((NU)(i_146567) > (NU)(10000000)) raiseIndexError();
			result = updatecrc32_146012(p[(i_146567)- 0], result);
			nimln(1454, "system.nim");
			res_146572 = addInt(res_146572, 1);
		} LA7: ;
		nimln(114, "crc.nim");
		{
			nimln(114, "crc.nim");
			nimln(114, "crc.nim");
			if (!!((readbytes == 8000))) goto LA10;
			nimln(114, "crc.nim");
			goto LA6;
		}
		LA10: ;
	} LA6: ;
	nimln(115, "crc.nim");
	dealloc_4645(buf);
	nimln(116, "crc.nim");
	fclose(bin);
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NI32, updateadler32_146035)(NI32 adler, void* buf, NI length) {
	NI32 result;
	NI32 s1;
	NI32 s2;
	NI l;
	NI k;
	NI b;
	nimfr("updateAdler32", "crc.nim")
	result = 0;
	s1 = 0;
	s2 = 0;
	l = 0;
	k = 0;
	b = 0;
	nimln(132, "crc.nim");
	nimln(132, "crc.nim");
	s1 = ((NI32) ((NI32)(adler & ((NI32) 65535))));
	nimln(133, "crc.nim");
	nimln(133, "crc.nim");
	nimln(133, "crc.nim");
	s2 = ((NI32) ((NI32)((NI32)((NU32)(adler) >> (NU32)(((NI32) 16))) & ((NI32) 65535))));
	nimln(134, "crc.nim");
	l = length;
	nimln(135, "crc.nim");
	b = 0;
	nimln(136, "crc.nim");
	while (1) {
		nimln(136, "crc.nim");
		if (!(0 < l)) goto LA1;
		nimln(137, "crc.nim");
		{
			nimln(137, "crc.nim");
			if (!(l < 3854)) goto LA4;
			nimln(137, "crc.nim");
			k = l;
		}
		goto LA2;
		LA4: ;
		{
			nimln(138, "crc.nim");
			k = 3854;
		}
		LA2: ;
		nimln(139, "crc.nim");
		l = subInt(l, k);
		nimln(140, "crc.nim");
		while (1) {
			nimln(140, "crc.nim");
			if (!(0 < k)) goto LA7;
			nimln(141, "crc.nim");
			nimln(141, "crc.nim");
			s1 = (NI32)((NU32)(s1) + (NU32)(((NI32) (((NU8)(((NCSTRING) (buf))[b]))))));
			nimln(142, "crc.nim");
			nimln(142, "crc.nim");
			s2 = (NI32)((NU32)(s2) + (NU32)(s1));
			nimln(143, "crc.nim");
			b = addInt(b, 1);
			nimln(144, "crc.nim");
			k = subInt(k, 1);
		} LA7: ;
		nimln(145, "crc.nim");
		nimln(145, "crc.nim");
		s1 = ((NI32) ((NI32)((NU32)(s1) % (NU32)(((NI32) 65521)))));
		nimln(146, "crc.nim");
		nimln(146, "crc.nim");
		s2 = ((NI32) ((NI32)((NU32)(s2) % (NU32)(((NI32) 65521)))));
	} LA1: ;
	nimln(147, "crc.nim");
	nimln(147, "crc.nim");
	nimln(147, "crc.nim");
	result = (NI32)((NI32)((NU32)(s2) << (NU32)(((NI32) 16))) | s1);
	popFrame();
	return result;
}
N_NOINLINE(void, crcInit)(void) {
	nimfr("crc", "crc.nim")
	popFrame();
}

N_NOINLINE(void, crcDatInit)(void) {
NTI146007.size = sizeof(NI32);
NTI146007.kind = 34;
NTI146007.base = 0;
NTI146007.flags = 3;
}

