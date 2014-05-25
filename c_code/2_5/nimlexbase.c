/* Generated by Nimrod Compiler v0.9.5 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct tbaselexer182018 tbaselexer182018;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tllstream180204 tllstream180204;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef NU8 TY123387[32];
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
struct  TNimObject  {
TNimType* m_type;
};
struct  tbaselexer182018  {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
tllstream180204* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tllstream180204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
N_NIMCALL(void, closebaselexer_182035)(tbaselexer182018* l);
N_NOCONV(void, dealloc_4645)(void* p);
N_NIMCALL(void, llstreamclose_180238)(tllstream180204* s);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, fillbuffer_182072)(tbaselexer182018* l);
N_NIMCALL(void, failedassertimpl_80621)(NimStringDesc* msg);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(NI, llstreamread_180242)(tllstream180204* s, void* buf, NI buflen);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NOCONV(void*, realloc_4631)(void* p, NI newsize);
N_NIMCALL(NI, fillbaselexer_182812)(tbaselexer182018* l, NI pos);
N_NIMCALL(NI, handlecr_182050)(tbaselexer182018* l, NI pos);
N_NIMCALL(NI, handlelf_182056)(tbaselexer182018* l, NI pos);
N_NIMCALL(void, skiputf8bom_183419)(tbaselexer182018* l);
N_NIMCALL(void, openbaselexer_182027)(tbaselexer182018* l, tllstream180204* inputstream, NI buflen);
N_NOCONV(void*, alloc_4601)(NI size);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NI, getcolnumber_182045)(tbaselexer182018* l, NI pos);
N_NIMCALL(NimStringDesc*, getcurrentline_182040)(tbaselexer182018* l, NIM_BOOL marker);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NI count, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
NIM_CONST TY123387 newlines_182014 = {
0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP1656, "L.sentinel < L.bufLen ", 22);
STRING_LITERAL(TMP1659, "toCopy >= 0 ", 12);
STRING_LITERAL(TMP1667, "s < L.bufLen ", 13);
STRING_LITERAL(TMP1671, "L.bufLen - oldBufLen == oldBufLen ", 34);
STRING_LITERAL(TMP1677, "pos <= L.sentinel ", 18);
STRING_LITERAL(TMP1679, "L.buf[pos] == CR ", 17);
STRING_LITERAL(TMP1680, "L.buf[pos] == LF ", 17);
STRING_LITERAL(TMP1681, "bufLen > 0 ", 11);
STRING_LITERAL(TMP1685, "", 0);
STRING_LITERAL(TMP1686, "\012", 1);
STRING_LITERAL(TMP1687, "^\012", 2);
extern TFrame* frameptr_13238;
extern TNimType NTI2409; /* TObject */
TNimType NTI182018; /* TBaseLexer */
extern TNimType NTI106; /* int */
extern TNimType NTI145; /* cstring */
extern TNimType NTI180206; /* PLLStream */

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13238;
	frameptr_13238 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13238 = (*frameptr_13238).prev;
}

N_NIMCALL(void, closebaselexer_182035)(tbaselexer182018* l) {
	nimfr("closeBaseLexer", "nimlexbase.nim")
	nimln(71, "nimlexbase.nim");
	dealloc_4645(((void*) ((*l).Buf)));
	nimln(72, "nimlexbase.nim");
	llstreamclose_180238((*l).Stream);
	popFrame();
}

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU32)(a) - (NU32)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ (NI)((NU32) ~(b))));
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
	result = (NI)((NU32)(a) + (NU32)(b));
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

static N_INLINE(NI, divInt)(NI a, NI b) {
	NI result;
	result = 0;
	{
		if (!(b == 0)) goto LA3;
		raiseDivByZero();
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == (-2147483647 -1));
		if (!(LOC7)) goto LA8;
		LOC7 = (b == -1);
		LA8: ;
		if (!LOC7) goto LA9;
		raiseOverflow();
	}
	LA9: ;
	result = (NI32)(a / b);
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, fillbuffer_182072)(tbaselexer182018* l) {
	NI charsread;
	NI tocopy;
	NI s;
	NI oldbuflen;
	NI TMP1657;
	NI TMP1658;
	NI TMP1662;
	NI TMP1663;
	NI LOC13;
	NI TMP1664;
	NI TMP1665;
	nimfr("fillBuffer", "nimlexbase.nim")
	charsread = 0;
	tocopy = 0;
	s = 0;
	oldbuflen = 0;
	nimln(82, "nimlexbase.nim");
	{
		nimln(82, "nimlexbase.nim");
		nimln(82, "nimlexbase.nim");
		if (!!(((*l).Sentinel < (*l).Buflen))) goto LA3;
		nimln(82, "nimlexbase.nim");
		failedassertimpl_80621(((NimStringDesc*) &TMP1656));
	}
	LA3: ;
	nimln(83, "nimlexbase.nim");
	nimln(83, "nimlexbase.nim");
	nimln(83, "nimlexbase.nim");
	TMP1657 = subInt((*l).Buflen, (*l).Sentinel);
	TMP1658 = subInt((NI32)(TMP1657), 1);
	tocopy = (NI32)(TMP1658);
	nimln(84, "nimlexbase.nim");
	{
		nimln(84, "nimlexbase.nim");
		nimln(84, "nimlexbase.nim");
		if (!!((0 <= tocopy))) goto LA7;
		nimln(84, "nimlexbase.nim");
		failedassertimpl_80621(((NimStringDesc*) &TMP1659));
	}
	LA7: ;
	nimln(85, "nimlexbase.nim");
	{
		NI TMP1660;
		NI TMP1661;
		nimln(85, "nimlexbase.nim");
		if (!(0 < tocopy)) goto LA11;
		nimln(86, "nimlexbase.nim");
		nimln(86, "nimlexbase.nim");
		TMP1660 = addInt((*l).Sentinel, 1);
		nimln(86, "nimlexbase.nim");
		TMP1661 = mulInt(tocopy, 1);
		memmove(((void*) ((*l).Buf)), ((void*) (&(*l).Buf[(NI32)(TMP1660)])), (NI32)(TMP1661));
	}
	LA11: ;
	nimln(88, "nimlexbase.nim");
	nimln(89, "nimlexbase.nim");
	nimln(88, "nimlexbase.nim");
	nimln(89, "nimlexbase.nim");
	nimln(89, "nimlexbase.nim");
	TMP1662 = addInt((*l).Sentinel, 1);
	TMP1663 = mulInt((NI32)(TMP1662), 1);
	LOC13 = 0;
	LOC13 = llstreamread_180242((*l).Stream, ((void*) (&(*l).Buf[tocopy])), (NI32)(TMP1663));
	TMP1664 = divInt(LOC13, 1);
	charsread = (NI32)(TMP1664);
	nimln(90, "nimlexbase.nim");
	nimln(90, "nimlexbase.nim");
	TMP1665 = addInt(tocopy, charsread);
	s = (NI32)(TMP1665);
	nimln(91, "nimlexbase.nim");
	{
		NI TMP1666;
		nimln(91, "nimlexbase.nim");
		nimln(91, "nimlexbase.nim");
		TMP1666 = addInt((*l).Sentinel, 1);
		if (!(charsread < (NI32)(TMP1666))) goto LA16;
		nimln(92, "nimlexbase.nim");
		(*l).Buf[s] = 0;
		nimln(93, "nimlexbase.nim");
		(*l).Sentinel = s;
	}
	goto LA14;
	LA16: ;
	{
		nimln(96, "nimlexbase.nim");
		s = subInt(s, 1);
		nimln(97, "nimlexbase.nim");
		while (1) {
			nimln(98, "nimlexbase.nim");
			{
				nimln(98, "nimlexbase.nim");
				nimln(98, "nimlexbase.nim");
				if (!!((s < (*l).Buflen))) goto LA22;
				nimln(98, "nimlexbase.nim");
				failedassertimpl_80621(((NimStringDesc*) &TMP1667));
			}
			LA22: ;
			nimln(99, "nimlexbase.nim");
			while (1) {
				NIM_BOOL LOC25;
				nimln(99, "nimlexbase.nim");
				LOC25 = 0;
				nimln(99, "nimlexbase.nim");
				LOC25 = (0 <= s);
				if (!(LOC25)) goto LA26;
				nimln(99, "nimlexbase.nim");
				nimln(99, "nimlexbase.nim");
				LOC25 = !((((NU8)((*l).Buf[s])) == ((NU8)(13)) || ((NU8)((*l).Buf[s])) == ((NU8)(10))));
				LA26: ;
				if (!LOC25) goto LA24;
				nimln(99, "nimlexbase.nim");
				s = subInt(s, 1);
			} LA24: ;
			nimln(100, "nimlexbase.nim");
			{
				nimln(100, "nimlexbase.nim");
				if (!(0 <= s)) goto LA29;
				nimln(102, "nimlexbase.nim");
				(*l).Sentinel = s;
				nimln(103, "nimlexbase.nim");
				goto LA19;
			}
			goto LA27;
			LA29: ;
			{
				NI TMP1668;
				NI TMP1669;
				void* LOC32;
				NI TMP1672;
				NI LOC37;
				NI TMP1673;
				NI TMP1676;
				nimln(107, "nimlexbase.nim");
				oldbuflen = (*l).Buflen;
				nimln(108, "nimlexbase.nim");
				nimln(108, "nimlexbase.nim");
				TMP1668 = mulInt((*l).Buflen, 2);
				(*l).Buflen = (NI32)(TMP1668);
				nimln(109, "nimlexbase.nim");
				nimln(109, "nimlexbase.nim");
				nimln(109, "nimlexbase.nim");
				TMP1669 = mulInt((*l).Buflen, 1);
				LOC32 = 0;
				LOC32 = realloc_4631(((void*) ((*l).Buf)), (NI32)(TMP1669));
				(*l).Buf = ((NCSTRING) (LOC32));
				nimln(110, "nimlexbase.nim");
				{
					NI TMP1670;
					nimln(110, "nimlexbase.nim");
					nimln(110, "nimlexbase.nim");
					nimln(110, "nimlexbase.nim");
					TMP1670 = subInt((*l).Buflen, oldbuflen);
					if (!!(((NI32)(TMP1670) == oldbuflen))) goto LA35;
					nimln(110, "nimlexbase.nim");
					failedassertimpl_80621(((NimStringDesc*) &TMP1671));
				}
				LA35: ;
				nimln(111, "nimlexbase.nim");
				nimln(112, "nimlexbase.nim");
				nimln(111, "nimlexbase.nim");
				nimln(112, "nimlexbase.nim");
				TMP1672 = mulInt(oldbuflen, 1);
				LOC37 = 0;
				LOC37 = llstreamread_180242((*l).Stream, ((void*) (&(*l).Buf[oldbuflen])), (NI32)(TMP1672));
				TMP1673 = divInt(LOC37, 1);
				charsread = (NI32)(TMP1673);
				nimln(113, "nimlexbase.nim");
				{
					NI TMP1674;
					NI TMP1675;
					nimln(113, "nimlexbase.nim");
					if (!(charsread < oldbuflen)) goto LA40;
					nimln(114, "nimlexbase.nim");
					nimln(114, "nimlexbase.nim");
					TMP1674 = addInt(oldbuflen, charsread);
					(*l).Buf[(NI32)(TMP1674)] = 0;
					nimln(115, "nimlexbase.nim");
					nimln(115, "nimlexbase.nim");
					TMP1675 = addInt(oldbuflen, charsread);
					(*l).Sentinel = (NI32)(TMP1675);
					nimln(116, "nimlexbase.nim");
					goto LA19;
				}
				LA40: ;
				nimln(117, "nimlexbase.nim");
				nimln(117, "nimlexbase.nim");
				TMP1676 = subInt((*l).Buflen, 1);
				s = (NI32)(TMP1676);
			}
			LA27: ;
		} LA19: ;
	}
	LA14: ;
	popFrame();
}

N_NIMCALL(NI, fillbaselexer_182812)(tbaselexer182018* l, NI pos) {
	NI result;
	nimfr("fillBaseLexer", "nimlexbase.nim")
	result = 0;
	nimln(120, "nimlexbase.nim");
	{
		nimln(120, "nimlexbase.nim");
		nimln(120, "nimlexbase.nim");
		if (!!((pos <= (*l).Sentinel))) goto LA3;
		nimln(120, "nimlexbase.nim");
		failedassertimpl_80621(((NimStringDesc*) &TMP1677));
	}
	LA3: ;
	nimln(121, "nimlexbase.nim");
	{
		NI TMP1678;
		nimln(121, "nimlexbase.nim");
		if (!(pos < (*l).Sentinel)) goto LA7;
		nimln(122, "nimlexbase.nim");
		nimln(122, "nimlexbase.nim");
		TMP1678 = addInt(pos, 1);
		result = (NI32)(TMP1678);
	}
	goto LA5;
	LA7: ;
	{
		nimln(124, "nimlexbase.nim");
		fillbuffer_182072(l);
		nimln(125, "nimlexbase.nim");
		(*l).Bufpos = 0;
		nimln(126, "nimlexbase.nim");
		result = 0;
	}
	LA5: ;
	nimln(127, "nimlexbase.nim");
	(*l).Linestart = result;
	popFrame();
	return result;
}

N_NIMCALL(NI, handlecr_182050)(tbaselexer182018* l, NI pos) {
	NI result;
	nimfr("handleCR", "nimlexbase.nim")
	result = 0;
	nimln(130, "nimlexbase.nim");
	{
		nimln(130, "nimlexbase.nim");
		nimln(130, "nimlexbase.nim");
		if (!!(((NU8)((*l).Buf[pos]) == (NU8)(13)))) goto LA3;
		nimln(130, "nimlexbase.nim");
		failedassertimpl_80621(((NimStringDesc*) &TMP1679));
	}
	LA3: ;
	nimln(131, "nimlexbase.nim");
	(*l).Linenumber = addInt((*l).Linenumber, 1);
	nimln(132, "nimlexbase.nim");
	result = fillbaselexer_182812(l, pos);
	nimln(133, "nimlexbase.nim");
	{
		nimln(133, "nimlexbase.nim");
		if (!((NU8)((*l).Buf[result]) == (NU8)(10))) goto LA7;
		nimln(134, "nimlexbase.nim");
		result = fillbaselexer_182812(l, result);
	}
	LA7: ;
	popFrame();
	return result;
}

N_NIMCALL(NI, handlelf_182056)(tbaselexer182018* l, NI pos) {
	NI result;
	nimfr("handleLF", "nimlexbase.nim")
	result = 0;
	nimln(137, "nimlexbase.nim");
	{
		nimln(137, "nimlexbase.nim");
		nimln(137, "nimlexbase.nim");
		if (!!(((NU8)((*l).Buf[pos]) == (NU8)(10)))) goto LA3;
		nimln(137, "nimlexbase.nim");
		failedassertimpl_80621(((NimStringDesc*) &TMP1680));
	}
	LA3: ;
	nimln(138, "nimlexbase.nim");
	(*l).Linenumber = addInt((*l).Linenumber, 1);
	nimln(139, "nimlexbase.nim");
	result = fillbaselexer_182812(l, pos);
	popFrame();
	return result;
}

N_NIMCALL(void, skiputf8bom_183419)(tbaselexer182018* l) {
	nimfr("skipUTF8BOM", "nimlexbase.nim")
	nimln(142, "nimlexbase.nim");
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		nimln(142, "nimlexbase.nim");
		LOC3 = 0;
		nimln(142, "nimlexbase.nim");
		LOC4 = 0;
		nimln(142, "nimlexbase.nim");
		LOC4 = ((NU8)((*l).Buf[0]) == (NU8)(239));
		if (!(LOC4)) goto LA5;
		nimln(142, "nimlexbase.nim");
		LOC4 = ((NU8)((*l).Buf[1]) == (NU8)(187));
		LA5: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA6;
		nimln(142, "nimlexbase.nim");
		LOC3 = ((NU8)((*l).Buf[2]) == (NU8)(191));
		LA6: ;
		if (!LOC3) goto LA7;
		nimln(143, "nimlexbase.nim");
		(*l).Bufpos = addInt((*l).Bufpos, 3);
		nimln(144, "nimlexbase.nim");
		(*l).Linestart = addInt((*l).Linestart, 3);
	}
	LA7: ;
	popFrame();
}

N_NIMCALL(void, openbaselexer_182027)(tbaselexer182018* l, tllstream180204* inputstream, NI buflen) {
	NI TMP1682;
	void* LOC5;
	NI TMP1683;
	nimfr("openBaseLexer", "nimlexbase.nim")
	nimln(147, "nimlexbase.nim");
	{
		nimln(147, "nimlexbase.nim");
		nimln(147, "nimlexbase.nim");
		if (!!((0 < buflen))) goto LA3;
		nimln(147, "nimlexbase.nim");
		failedassertimpl_80621(((NimStringDesc*) &TMP1681));
	}
	LA3: ;
	nimln(148, "nimlexbase.nim");
	(*l).Bufpos = 0;
	nimln(149, "nimlexbase.nim");
	(*l).Buflen = buflen;
	nimln(150, "nimlexbase.nim");
	nimln(150, "nimlexbase.nim");
	nimln(150, "nimlexbase.nim");
	TMP1682 = mulInt(buflen, 1);
	LOC5 = 0;
	LOC5 = alloc_4601((NI32)(TMP1682));
	(*l).Buf = ((NCSTRING) (LOC5));
	nimln(151, "nimlexbase.nim");
	nimln(151, "nimlexbase.nim");
	TMP1683 = subInt(buflen, 1);
	(*l).Sentinel = (NI32)(TMP1683);
	nimln(152, "nimlexbase.nim");
	(*l).Linestart = 0;
	nimln(153, "nimlexbase.nim");
	(*l).Linenumber = 1;
	nimln(154, "nimlexbase.nim");
	unsureAsgnRef((void**) &(*l).Stream, inputstream);
	nimln(155, "nimlexbase.nim");
	fillbuffer_182072(l);
	nimln(156, "nimlexbase.nim");
	skiputf8bom_183419(l);
	popFrame();
}

N_NIMCALL(NI, getcolnumber_182045)(tbaselexer182018* l, NI pos) {
	NI result;
	NI TMP1684;
	nimfr("getColNumber", "nimlexbase.nim")
	result = 0;
	nimln(159, "nimlexbase.nim");
	nimln(159, "nimlexbase.nim");
	nimln(159, "nimlexbase.nim");
	TMP1684 = subInt(pos, (*l).Linestart);
	if ((NI32)(TMP1684) == (-2147483647 -1)) raiseOverflow();
	result = (NI32)abs((NI32)(TMP1684));
	popFrame();
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, getcurrentline_182040)(tbaselexer182018* l, NIM_BOOL marker) {
	NimStringDesc* result;
	NI i;
	nimfr("getCurrentLine", "nimlexbase.nim")
	result = 0;
	nimln(162, "nimlexbase.nim");
	result = copyString(((NimStringDesc*) &TMP1685));
	nimln(163, "nimlexbase.nim");
	i = (*l).Linestart;
	nimln(164, "nimlexbase.nim");
	while (1) {
		nimln(164, "nimlexbase.nim");
		nimln(164, "nimlexbase.nim");
		if (!!((((NU8)((*l).Buf[i])) == ((NU8)(13)) || ((NU8)((*l).Buf[i])) == ((NU8)(10)) || ((NU8)((*l).Buf[i])) == ((NU8)(0))))) goto LA1;
		nimln(165, "nimlexbase.nim");
		result = addChar(result, (*l).Buf[i]);
		nimln(166, "nimlexbase.nim");
		i = addInt(i, 1);
	} LA1: ;
	nimln(167, "nimlexbase.nim");
	result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TMP1686));
	nimln(168, "nimlexbase.nim");
	{
		NimStringDesc* LOC6;
		NI LOC7;
		NimStringDesc* LOC8;
		if (!marker) goto LA4;
		nimln(169, "nimlexbase.nim");
		nimln(169, "nimlexbase.nim");
		LOC6 = 0;
		nimln(169, "nimlexbase.nim");
		nimln(169, "nimlexbase.nim");
		LOC7 = 0;
		LOC7 = getcolnumber_182045(l, (*l).Bufpos);
		LOC8 = 0;
		LOC8 = nsuRepeatChar(LOC7, 32);
		LOC6 = rawNewString(LOC8->Sup.len + 2);
appendString(LOC6, LOC8);
appendString(LOC6, ((NimStringDesc*) &TMP1687));
		result = resizeString(result, LOC6->Sup.len + 0);
appendString(result, LOC6);
	}
	LA4: ;
	popFrame();
	return result;
}
N_NOINLINE(void, nimlexbaseInit)(void) {
	nimfr("nimlexbase", "nimlexbase.nim")
	popFrame();
}

N_NOINLINE(void, nimlexbaseDatInit)(void) {
static TNimNode* TMP1925[7];
static TNimNode TMP1631[8];
NTI182018.size = sizeof(tbaselexer182018);
NTI182018.kind = 17;
NTI182018.base = (&NTI2409);
TMP1925[0] = &TMP1631[1];
TMP1631[1].kind = 1;
TMP1631[1].offset = offsetof(tbaselexer182018, Bufpos);
TMP1631[1].typ = (&NTI106);
TMP1631[1].name = "bufpos";
TMP1925[1] = &TMP1631[2];
TMP1631[2].kind = 1;
TMP1631[2].offset = offsetof(tbaselexer182018, Buf);
TMP1631[2].typ = (&NTI145);
TMP1631[2].name = "buf";
TMP1925[2] = &TMP1631[3];
TMP1631[3].kind = 1;
TMP1631[3].offset = offsetof(tbaselexer182018, Buflen);
TMP1631[3].typ = (&NTI106);
TMP1631[3].name = "bufLen";
TMP1925[3] = &TMP1631[4];
TMP1631[4].kind = 1;
TMP1631[4].offset = offsetof(tbaselexer182018, Stream);
TMP1631[4].typ = (&NTI180206);
TMP1631[4].name = "stream";
TMP1925[4] = &TMP1631[5];
TMP1631[5].kind = 1;
TMP1631[5].offset = offsetof(tbaselexer182018, Linenumber);
TMP1631[5].typ = (&NTI106);
TMP1631[5].name = "lineNumber";
TMP1925[5] = &TMP1631[6];
TMP1631[6].kind = 1;
TMP1631[6].offset = offsetof(tbaselexer182018, Sentinel);
TMP1631[6].typ = (&NTI106);
TMP1631[6].name = "sentinel";
TMP1925[6] = &TMP1631[7];
TMP1631[7].kind = 1;
TMP1631[7].offset = offsetof(tbaselexer182018, Linestart);
TMP1631[7].typ = (&NTI106);
TMP1631[7].name = "lineStart";
TMP1631[0].len = 7; TMP1631[0].kind = 2; TMP1631[0].sons = &TMP1925[0];
NTI182018.node = &TMP1631[0];
}

