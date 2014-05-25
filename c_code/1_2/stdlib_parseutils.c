/* Generated by Nimrod Compiler v0.9.5 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct tslice80891 tslice80891;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct EOverflow EOverflow;
typedef struct earithmetic2441 earithmetic2441;
typedef struct esynch2429 esynch2429;
typedef struct E_Base E_Base;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcell41688 tcell41688;
typedef struct tcellseq41704 tcellseq41704;
typedef struct tgcheap43616 tgcheap43616;
typedef struct tcellset41700 tcellset41700;
typedef struct tpagedesc41696 tpagedesc41696;
typedef struct tmemregion24010 tmemregion24010;
typedef struct tsmallchunk23238 tsmallchunk23238;
typedef struct tllchunk24004 tllchunk24004;
typedef struct tbigchunk23240 tbigchunk23240;
typedef struct tintset23215 tintset23215;
typedef struct ttrunk23211 ttrunk23211;
typedef struct tavlnode24008 tavlnode24008;
typedef struct tgcstat43614 tgcstat43614;
typedef struct tbasechunk23236 tbasechunk23236;
typedef struct tfreecell23228 tfreecell23228;
struct  tslice80891  {
NI A;
NI B;
};
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
struct  TNimObject  {
TNimType* m_type;
};
struct  E_Base  {
  TNimObject Sup;
E_Base* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct  esynch2429  {
  E_Base Sup;
};
struct  earithmetic2441  {
  esynch2429 Sup;
};
struct  EOverflow  {
  earithmetic2441 Sup;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tcell41688  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq41704  {
NI Len;
NI Cap;
tcell41688** D;
};
struct  tcellset41700  {
NI Counter;
NI Max;
tpagedesc41696* Head;
tpagedesc41696** Data;
};
typedef tsmallchunk23238* TY24022[512];
typedef ttrunk23211* ttrunkbuckets23213[256];
struct  tintset23215  {
ttrunkbuckets23213 Data;
};
struct  tmemregion24010  {
NI Minlargeobj;
NI Maxlargeobj;
TY24022 Freesmallchunks;
tllchunk24004* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk23240* Freechunkslist;
tintset23215 Chunkstarts;
tavlnode24008* Root;
tavlnode24008* Deleted;
tavlnode24008* Last;
tavlnode24008* Freeavlnodes;
};
struct  tgcstat43614  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap43616  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq41704 Zct;
tcellseq41704 Decstack;
tcellset41700 Cycleroots;
tcellseq41704 Tempstack;
NI Recgclock;
tmemregion24010 Region;
tgcstat43614 Stat;
};
typedef NI TY23218[8];
struct  tpagedesc41696  {
tpagedesc41696* Next;
NI Key;
TY23218 Bits;
};
struct  tbasechunk23236  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk23238  {
  tbasechunk23236 Sup;
tsmallchunk23238* Next;
tsmallchunk23238* Prev;
tfreecell23228* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk24004  {
NI Size;
NI Acc;
tllchunk24004* Next;
};
struct  tbigchunk23240  {
  tbasechunk23236 Sup;
tbigchunk23240* Next;
tbigchunk23240* Prev;
NI Align;
NF Data;
};
struct  ttrunk23211  {
ttrunk23211* Next;
NI Key;
TY23218 Bits;
};
typedef tavlnode24008* TY24014[2];
struct  tavlnode24008  {
TY24014 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tfreecell23228  {
tfreecell23228* Next;
NI Zerofield;
};
static N_INLINE(void, HEX2AHEX3D_87924)(NF* x_87930, NF y_87933);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(tslice80891, HEX2EHEX2E_88422)(NI a_88426, NI b_88428);
N_NIMCALL(NI, npuParseBiggestInt)(NimStringDesc* s, NI64* number, NI start);
N_NIMCALL(NI, rawparseint_87731)(NimStringDesc* s, NI64* b, NI start);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NI64, mulInt64)(NI64 a, NI64 b);
static N_INLINE(NI, subInt)(NI a, NI b);
static N_INLINE(NI64, subInt64)(NI64 a, NI64 b);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell41688*, usrtocell_45043)(void* usr);
static N_INLINE(void, rtladdzct_46602)(tcell41688* c);
N_NOINLINE(void, addzct_45018)(tcellseq41704* s, tcell41688* c);
N_NIMCALL(void, raiseException)(E_Base* e, NCSTRING ename);
N_NIMCALL(NI, npuParseBiggestFloat)(NimStringDesc* s, NF* number, NI start);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(NF, tentothepowerof_87913)(NI b_87915);
STRING_LITERAL(TMP370, "overflow", 8);
extern TFrame* frameptr_13238;
extern TNimType NTI19201; /* ref EOverflow */
extern TNimType NTI2445; /* EOverflow */
extern tgcheap43616 gch_43644;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13238;
	frameptr_13238 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13238 = (*frameptr_13238).prev;
}

static N_INLINE(void, HEX2AHEX3D_87924)(NF* x_87930, NF y_87933) {
	nimfr("*=", "system.nim")
	nimln(2714, "system.nim");
	nimln(2714, "system.nim");
	(*x_87930) = ((NF)((*x_87930)) * (NF)(y_87933));
	popFrame();
}

static N_INLINE(tslice80891, HEX2EHEX2E_88422)(NI a_88426, NI b_88428) {
	tslice80891 result;
	nimfr("..", "system.nim")
	memset((void*)&result, 0, sizeof(result));
	nimln(179, "system.nim");
	result.A = a_88426;
	nimln(180, "system.nim");
	result.B = b_88428;
	popFrame();
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

static N_INLINE(NI64, subInt64)(NI64 a, NI64 b) {
	NI64 result;
	result = 0;
	result = (NI64)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI64)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI64)(result ^ (NI64)((NU64) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	BeforeRet: ;
	return result;
}

N_NIMCALL(NI, rawparseint_87731)(NimStringDesc* s, NI64* b, NI start) {
	NI result;
	NI64 sign;
	NI i;
	nimfr("rawParseInt", "parseutils.nim")
	result = 0;
	nimln(194, "parseutils.nim");
	sign = -1;
	nimln(195, "parseutils.nim");
	i = start;
	nimln(196, "parseutils.nim");
	{
		nimln(196, "parseutils.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		if (!((NU8)(s->data[i]) == (NU8)(43))) goto LA3;
		nimln(196, "parseutils.nim");
		i = addInt(i, 1);
	}
	goto LA1;
	LA3: ;
	{
		nimln(197, "parseutils.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		if (!((NU8)(s->data[i]) == (NU8)(45))) goto LA6;
		nimln(198, "parseutils.nim");
		i = addInt(i, 1);
		nimln(199, "parseutils.nim");
		sign = 1;
	}
	goto LA1;
	LA6: ;
	LA1: ;
	nimln(200, "parseutils.nim");
	{
		NI64 TMP368;
		NI TMP369;
		nimln(200, "parseutils.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		if (!(((NU8)(s->data[i])) >= ((NU8)(48)) && ((NU8)(s->data[i])) <= ((NU8)(57)))) goto LA10;
		nimln(201, "parseutils.nim");
		(*b) = 0;
		nimln(202, "parseutils.nim");
		while (1) {
			NI64 TMP365;
			NI TMP366;
			NI64 TMP367;
			nimln(202, "parseutils.nim");
			if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
			if (!(((NU8)(s->data[i])) >= ((NU8)(48)) && ((NU8)(s->data[i])) <= ((NU8)(57)))) goto LA12;
			nimln(203, "parseutils.nim");
			nimln(203, "parseutils.nim");
			nimln(203, "parseutils.nim");
			TMP365 = mulInt64((*b), 10);
			nimln(203, "parseutils.nim");
			nimln(203, "parseutils.nim");
			if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
			TMP366 = subInt(((NI) (((NU8)(s->data[i])))), 48);
			TMP367 = subInt64((NI64)(TMP365), ((NI64) ((NI64)(TMP366))));
			(*b) = (NI64)(TMP367);
			nimln(204, "parseutils.nim");
			i = addInt(i, 1);
			nimln(205, "parseutils.nim");
			while (1) {
				nimln(205, "parseutils.nim");
				if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
				if (!((NU8)(s->data[i]) == (NU8)(95))) goto LA13;
				nimln(205, "parseutils.nim");
				i = addInt(i, 1);
			} LA13: ;
		} LA12: ;
		nimln(206, "parseutils.nim");
		nimln(206, "parseutils.nim");
		TMP368 = mulInt64((*b), sign);
		(*b) = (NI64)(TMP368);
		nimln(207, "parseutils.nim");
		nimln(207, "parseutils.nim");
		TMP369 = subInt(i, start);
		result = (NI64)(TMP369);
	}
	LA10: ;
	popFrame();
	return result;
}

N_NIMCALL(NI, npuParseBiggestInt)(NimStringDesc* s, NI64* number, NI start) {
	NI result;
	NI64 res;
	nimfr("parseBiggestInt", "parseutils.nim")
	result = 0;
	res = 0;
	nimln(218, "parseutils.nim");
	result = rawparseint_87731(s, &res, start);
	nimln(219, "parseutils.nim");
	(*number) = res;
	popFrame();
	return result;
}

static N_INLINE(tcell41688*, usrtocell_45043)(void* usr) {
	tcell41688* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	result = ((tcell41688*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell41688))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_46602)(tcell41688* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_45018(&gch_43644.Zct, c);
	popFrame();
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell41688* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(233, "gc.nim");
	c = usrtocell_45043(p);
	nimln(235, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).Refcount -= 8;
		nimln(168, "gc.nim");
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		nimln(236, "gc.nim");
		rtladdzct_46602(c);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(NI, npuParseInt)(NimStringDesc* s, NI* number, NI start) {
	NI result;
	NI64 res;
	nimfr("parseInt", "parseutils.nim")
	result = 0;
	res = 0;
	nimln(227, "parseutils.nim");
	result = npuParseBiggestInt(s, &res, start);
	nimln(228, "parseutils.nim");
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC5;
		EOverflow* e_87886;
		NimStringDesc* LOC9;
		nimln(228, "parseutils.nim");
		LOC3 = 0;
		LOC3 = NIM_FALSE;
		if (!(LOC3)) goto LA4;
		nimln(229, "parseutils.nim");
		LOC5 = 0;
		nimln(229, "parseutils.nim");
		LOC5 = (res < (IL64(-9223372036854775807) - IL64(1)));
		if (LOC5) goto LA6;
		nimln(229, "parseutils.nim");
		LOC5 = (IL64(9223372036854775807) < res);
		LA6: ;
		LOC3 = LOC5;
		LA4: ;
		if (!LOC3) goto LA7;
		e_87886 = 0;
		nimln(1992, "system.nim");
		e_87886 = (EOverflow*) newObj((&NTI19201), sizeof(EOverflow));
		(*e_87886).Sup.Sup.Sup.Sup.m_type = (&NTI2445);
		nimln(1993, "system.nim");
		LOC9 = 0;
		LOC9 = (*e_87886).Sup.Sup.Sup.message; (*e_87886).Sup.Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TMP370));
		if (LOC9) nimGCunrefNoCycle(LOC9);
		nimln(230, "parseutils.nim");
		raiseException((E_Base*)e_87886, "EOverflow");
	}
	goto LA1;
	LA7: ;
	{
		nimln(232, "parseutils.nim");
		(*number) = ((NI) (res));
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(NF, tentothepowerof_87913)(NI b_87915) {
	NF result;
	NI b;
	NF a;
	nimfr("tenToThePowerOf", "parseutils.nim")
	result = 0;
	nimln(235, "parseutils.nim");
	b = b_87915;
	nimln(236, "parseutils.nim");
	a = 1.0000000000000000e+001;
	nimln(237, "parseutils.nim");
	result = 1.0000000000000000e+000;
	nimln(238, "parseutils.nim");
	while (1) {
		nimln(239, "parseutils.nim");
		{
			nimln(239, "parseutils.nim");
			nimln(239, "parseutils.nim");
			if (!(((NI) ((NI)(b & 1))) == 1)) goto LA4;
			nimln(240, "parseutils.nim");
			HEX2AHEX3D_87924(&result, a);
		}
		LA4: ;
		nimln(241, "parseutils.nim");
		nimln(241, "parseutils.nim");
		b = (NI)((NU64)(b) >> (NU64)(1));
		nimln(242, "parseutils.nim");
		{
			nimln(242, "parseutils.nim");
			if (!(b == 0)) goto LA8;
			nimln(242, "parseutils.nim");
			goto LA1;
		}
		LA8: ;
		nimln(243, "parseutils.nim");
		HEX2AHEX3D_87924(&a, a);
	} LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(NI, npuParseBiggestFloat)(NimStringDesc* s, NF* number, NI start) {
	NI result;
	NF esign;
	NF sign;
	NI i;
	NI exponent;
	NI flags;
	NF hd;
	NI TMP1858;
	nimfr("parseBiggestFloat", "parseutils.nim")
	result = 0;
	nimln(251, "parseutils.nim");
	esign = 1.0000000000000000e+000;
	nimln(252, "parseutils.nim");
	sign = 1.0000000000000000e+000;
	nimln(253, "parseutils.nim");
	i = start;
	exponent = 0;
	flags = 0;
	nimln(256, "parseutils.nim");
	(*number) = 0.0;
	nimln(257, "parseutils.nim");
	{
		nimln(257, "parseutils.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		if (!((NU8)(s->data[i]) == (NU8)(43))) goto LA3;
		nimln(257, "parseutils.nim");
		i = addInt(i, 1);
	}
	goto LA1;
	LA3: ;
	{
		nimln(258, "parseutils.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		if (!((NU8)(s->data[i]) == (NU8)(45))) goto LA6;
		nimln(259, "parseutils.nim");
		sign = -1.0000000000000000e+000;
		nimln(260, "parseutils.nim");
		i = addInt(i, 1);
	}
	goto LA1;
	LA6: ;
	LA1: ;
	nimln(261, "parseutils.nim");
	{
		NIM_BOOL LOC10;
		nimln(261, "parseutils.nim");
		LOC10 = 0;
		nimln(261, "parseutils.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		LOC10 = ((NU8)(s->data[i]) == (NU8)(78));
		if (LOC10) goto LA11;
		nimln(261, "parseutils.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		LOC10 = ((NU8)(s->data[i]) == (NU8)(110));
		LA11: ;
		if (!LOC10) goto LA12;
		nimln(262, "parseutils.nim");
		{
			NIM_BOOL LOC16;
			NI TMP1839;
			NI TMP1840;
			nimln(262, "parseutils.nim");
			LOC16 = 0;
			nimln(262, "parseutils.nim");
			nimln(262, "parseutils.nim");
			TMP1839 = addInt(i, 1);
			if ((NU)((NI64)(TMP1839)) > (NU)(s->Sup.len)) raiseIndexError();
			LOC16 = ((NU8)(s->data[(NI64)(TMP1839)]) == (NU8)(65));
			if (LOC16) goto LA17;
			nimln(262, "parseutils.nim");
			nimln(262, "parseutils.nim");
			TMP1840 = addInt(i, 1);
			if ((NU)((NI64)(TMP1840)) > (NU)(s->Sup.len)) raiseIndexError();
			LOC16 = ((NU8)(s->data[(NI64)(TMP1840)]) == (NU8)(97));
			LA17: ;
			if (!LOC16) goto LA18;
			nimln(263, "parseutils.nim");
			{
				NIM_BOOL LOC22;
				NI TMP1841;
				NI TMP1842;
				nimln(263, "parseutils.nim");
				LOC22 = 0;
				nimln(263, "parseutils.nim");
				nimln(263, "parseutils.nim");
				TMP1841 = addInt(i, 2);
				if ((NU)((NI64)(TMP1841)) > (NU)(s->Sup.len)) raiseIndexError();
				LOC22 = ((NU8)(s->data[(NI64)(TMP1841)]) == (NU8)(78));
				if (LOC22) goto LA23;
				nimln(263, "parseutils.nim");
				nimln(263, "parseutils.nim");
				TMP1842 = addInt(i, 2);
				if ((NU)((NI64)(TMP1842)) > (NU)(s->Sup.len)) raiseIndexError();
				LOC22 = ((NU8)(s->data[(NI64)(TMP1842)]) == (NU8)(110));
				LA23: ;
				if (!LOC22) goto LA24;
				nimln(264, "parseutils.nim");
				{
					NI TMP1843;
					NI TMP1844;
					NI TMP1845;
					nimln(264, "parseutils.nim");
					nimln(264, "parseutils.nim");
					nimln(264, "parseutils.nim");
					TMP1843 = addInt(i, 3);
					if ((NU)((NI64)(TMP1843)) > (NU)(s->Sup.len)) raiseIndexError();
					if (!!((((NU8)(s->data[(NI64)(TMP1843)])) >= ((NU8)(97)) && ((NU8)(s->data[(NI64)(TMP1843)])) <= ((NU8)(122)) || ((NU8)(s->data[(NI64)(TMP1843)])) >= ((NU8)(65)) && ((NU8)(s->data[(NI64)(TMP1843)])) <= ((NU8)(90)) || ((NU8)(s->data[(NI64)(TMP1843)])) >= ((NU8)(48)) && ((NU8)(s->data[(NI64)(TMP1843)])) <= ((NU8)(57)) || ((NU8)(s->data[(NI64)(TMP1843)])) == ((NU8)(95))))) goto LA28;
					nimln(265, "parseutils.nim");
					(*number) = NAN;
					nimln(266, "parseutils.nim");
					nimln(266, "parseutils.nim");
					nimln(266, "parseutils.nim");
					nimln(266, "parseutils.nim");
					TMP1844 = addInt(i, 3);
					TMP1845 = subInt((NI64)(TMP1844), start);
					result = (NI64)(TMP1845);
					goto BeforeRet;
				}
				LA28: ;
			}
			LA24: ;
		}
		LA18: ;
		nimln(267, "parseutils.nim");
		nimln(267, "parseutils.nim");
		result = 0;
		goto BeforeRet;
	}
	LA12: ;
	nimln(268, "parseutils.nim");
	{
		NIM_BOOL LOC32;
		nimln(268, "parseutils.nim");
		LOC32 = 0;
		nimln(268, "parseutils.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		LOC32 = ((NU8)(s->data[i]) == (NU8)(73));
		if (LOC32) goto LA33;
		nimln(268, "parseutils.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		LOC32 = ((NU8)(s->data[i]) == (NU8)(105));
		LA33: ;
		if (!LOC32) goto LA34;
		nimln(269, "parseutils.nim");
		{
			NIM_BOOL LOC38;
			NI TMP1846;
			NI TMP1847;
			nimln(269, "parseutils.nim");
			LOC38 = 0;
			nimln(269, "parseutils.nim");
			nimln(269, "parseutils.nim");
			TMP1846 = addInt(i, 1);
			if ((NU)((NI64)(TMP1846)) > (NU)(s->Sup.len)) raiseIndexError();
			LOC38 = ((NU8)(s->data[(NI64)(TMP1846)]) == (NU8)(78));
			if (LOC38) goto LA39;
			nimln(269, "parseutils.nim");
			nimln(269, "parseutils.nim");
			TMP1847 = addInt(i, 1);
			if ((NU)((NI64)(TMP1847)) > (NU)(s->Sup.len)) raiseIndexError();
			LOC38 = ((NU8)(s->data[(NI64)(TMP1847)]) == (NU8)(110));
			LA39: ;
			if (!LOC38) goto LA40;
			nimln(270, "parseutils.nim");
			{
				NIM_BOOL LOC44;
				NI TMP1848;
				NI TMP1849;
				nimln(270, "parseutils.nim");
				LOC44 = 0;
				nimln(270, "parseutils.nim");
				nimln(270, "parseutils.nim");
				TMP1848 = addInt(i, 2);
				if ((NU)((NI64)(TMP1848)) > (NU)(s->Sup.len)) raiseIndexError();
				LOC44 = ((NU8)(s->data[(NI64)(TMP1848)]) == (NU8)(70));
				if (LOC44) goto LA45;
				nimln(270, "parseutils.nim");
				nimln(270, "parseutils.nim");
				TMP1849 = addInt(i, 2);
				if ((NU)((NI64)(TMP1849)) > (NU)(s->Sup.len)) raiseIndexError();
				LOC44 = ((NU8)(s->data[(NI64)(TMP1849)]) == (NU8)(102));
				LA45: ;
				if (!LOC44) goto LA46;
				nimln(271, "parseutils.nim");
				{
					NI TMP1850;
					NI TMP1851;
					NI TMP1852;
					nimln(271, "parseutils.nim");
					nimln(271, "parseutils.nim");
					nimln(271, "parseutils.nim");
					TMP1850 = addInt(i, 3);
					if ((NU)((NI64)(TMP1850)) > (NU)(s->Sup.len)) raiseIndexError();
					if (!!((((NU8)(s->data[(NI64)(TMP1850)])) >= ((NU8)(97)) && ((NU8)(s->data[(NI64)(TMP1850)])) <= ((NU8)(122)) || ((NU8)(s->data[(NI64)(TMP1850)])) >= ((NU8)(65)) && ((NU8)(s->data[(NI64)(TMP1850)])) <= ((NU8)(90)) || ((NU8)(s->data[(NI64)(TMP1850)])) >= ((NU8)(48)) && ((NU8)(s->data[(NI64)(TMP1850)])) <= ((NU8)(57)) || ((NU8)(s->data[(NI64)(TMP1850)])) == ((NU8)(95))))) goto LA50;
					nimln(272, "parseutils.nim");
					nimln(272, "parseutils.nim");
					(*number) = ((NF)(INF) * (NF)(sign));
					nimln(273, "parseutils.nim");
					nimln(273, "parseutils.nim");
					nimln(273, "parseutils.nim");
					nimln(273, "parseutils.nim");
					TMP1851 = addInt(i, 3);
					TMP1852 = subInt((NI64)(TMP1851), start);
					result = (NI64)(TMP1852);
					goto BeforeRet;
				}
				LA50: ;
			}
			LA46: ;
		}
		LA40: ;
		nimln(274, "parseutils.nim");
		nimln(274, "parseutils.nim");
		result = 0;
		goto BeforeRet;
	}
	LA34: ;
	nimln(275, "parseutils.nim");
	while (1) {
		NI TMP1853;
		nimln(275, "parseutils.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		if (!(((NU8)(s->data[i])) >= ((NU8)(48)) && ((NU8)(s->data[i])) <= ((NU8)(57)))) goto LA52;
		nimln(277, "parseutils.nim");
		nimln(277, "parseutils.nim");
		flags = (NI)(flags | 1);
		nimln(278, "parseutils.nim");
		nimln(278, "parseutils.nim");
		nimln(278, "parseutils.nim");
		nimln(278, "parseutils.nim");
		nimln(278, "parseutils.nim");
		nimln(278, "parseutils.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		TMP1853 = subInt(((NI) (((NU8)(s->data[i])))), 48);
		(*number) = ((NF)(((NF)((*number)) * (NF)(1.0000000000000000e+001))) + (NF)(((double) (((NI) ((NI64)(TMP1853)))))));
		nimln(279, "parseutils.nim");
		i = addInt(i, 1);
		nimln(280, "parseutils.nim");
		while (1) {
			nimln(280, "parseutils.nim");
			if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
			if (!((NU8)(s->data[i]) == (NU8)(95))) goto LA53;
			nimln(280, "parseutils.nim");
			i = addInt(i, 1);
		} LA53: ;
	} LA52: ;
	nimln(282, "parseutils.nim");
	{
		NF hd;
		nimln(282, "parseutils.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		if (!((NU8)(s->data[i]) == (NU8)(46))) goto LA56;
		nimln(283, "parseutils.nim");
		hd = 1.0000000000000000e+000;
		nimln(284, "parseutils.nim");
		i = addInt(i, 1);
		nimln(285, "parseutils.nim");
		while (1) {
			NI TMP1854;
			nimln(285, "parseutils.nim");
			if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
			if (!(((NU8)(s->data[i])) >= ((NU8)(48)) && ((NU8)(s->data[i])) <= ((NU8)(57)))) goto LA58;
			nimln(287, "parseutils.nim");
			nimln(287, "parseutils.nim");
			flags = (NI)(flags | 2);
			nimln(288, "parseutils.nim");
			nimln(288, "parseutils.nim");
			nimln(288, "parseutils.nim");
			nimln(288, "parseutils.nim");
			nimln(288, "parseutils.nim");
			nimln(288, "parseutils.nim");
			if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
			TMP1854 = subInt(((NI) (((NU8)(s->data[i])))), 48);
			(*number) = ((NF)(((NF)((*number)) * (NF)(1.0000000000000000e+001))) + (NF)(((double) (((NI) ((NI64)(TMP1854)))))));
			nimln(289, "parseutils.nim");
			nimln(289, "parseutils.nim");
			hd = ((NF)(hd) * (NF)(1.0000000000000000e+001));
			nimln(290, "parseutils.nim");
			i = addInt(i, 1);
			nimln(291, "parseutils.nim");
			while (1) {
				nimln(291, "parseutils.nim");
				if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
				if (!((NU8)(s->data[i]) == (NU8)(95))) goto LA59;
				nimln(291, "parseutils.nim");
				i = addInt(i, 1);
			} LA59: ;
		} LA58: ;
		nimln(292, "parseutils.nim");
		nimln(292, "parseutils.nim");
		(*number) = ((NF)((*number)) / (NF)(hd));
	}
	LA56: ;
	nimln(294, "parseutils.nim");
	{
		nimln(294, "parseutils.nim");
		if (!(flags == 0)) goto LA62;
		nimln(294, "parseutils.nim");
		nimln(294, "parseutils.nim");
		result = 0;
		goto BeforeRet;
	}
	LA62: ;
	nimln(296, "parseutils.nim");
	{
		nimln(296, "parseutils.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		if (!(((NU8)(s->data[i])) == ((NU8)(101)) || ((NU8)(s->data[i])) == ((NU8)(69)))) goto LA66;
		nimln(297, "parseutils.nim");
		i = addInt(i, 1);
		nimln(298, "parseutils.nim");
		{
			nimln(298, "parseutils.nim");
			if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
			if (!((NU8)(s->data[i]) == (NU8)(43))) goto LA70;
			nimln(299, "parseutils.nim");
			i = addInt(i, 1);
		}
		goto LA68;
		LA70: ;
		{
			nimln(300, "parseutils.nim");
			if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
			if (!((NU8)(s->data[i]) == (NU8)(45))) goto LA73;
			nimln(301, "parseutils.nim");
			esign = -1.0000000000000000e+000;
			nimln(302, "parseutils.nim");
			i = addInt(i, 1);
		}
		goto LA68;
		LA73: ;
		LA68: ;
		nimln(303, "parseutils.nim");
		{
			nimln(303, "parseutils.nim");
			nimln(303, "parseutils.nim");
			if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
			if (!!((((NU8)(s->data[i])) >= ((NU8)(48)) && ((NU8)(s->data[i])) <= ((NU8)(57))))) goto LA77;
			nimln(304, "parseutils.nim");
			nimln(304, "parseutils.nim");
			result = 0;
			goto BeforeRet;
		}
		LA77: ;
		nimln(305, "parseutils.nim");
		while (1) {
			NI TMP1855;
			NI TMP1856;
			NI TMP1857;
			nimln(305, "parseutils.nim");
			if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
			if (!(((NU8)(s->data[i])) >= ((NU8)(48)) && ((NU8)(s->data[i])) <= ((NU8)(57)))) goto LA79;
			nimln(306, "parseutils.nim");
			nimln(306, "parseutils.nim");
			nimln(306, "parseutils.nim");
			nimln(306, "parseutils.nim");
			TMP1855 = mulInt(exponent, 10);
			nimln(306, "parseutils.nim");
			if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
			TMP1856 = addInt((NI64)(TMP1855), ((NI) (((NU8)(s->data[i])))));
			TMP1857 = subInt((NI64)(TMP1856), 48);
			exponent = (NI64)(TMP1857);
			nimln(307, "parseutils.nim");
			i = addInt(i, 1);
			nimln(308, "parseutils.nim");
			while (1) {
				nimln(308, "parseutils.nim");
				if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
				if (!((NU8)(s->data[i]) == (NU8)(95))) goto LA80;
				nimln(308, "parseutils.nim");
				i = addInt(i, 1);
			} LA80: ;
		} LA79: ;
	}
	LA66: ;
	nimln(310, "parseutils.nim");
	hd = tentothepowerof_87913(exponent);
	nimln(311, "parseutils.nim");
	{
		nimln(311, "parseutils.nim");
		if (!(0.0 < esign)) goto LA83;
		nimln(311, "parseutils.nim");
		nimln(311, "parseutils.nim");
		(*number) = ((NF)((*number)) * (NF)(hd));
	}
	goto LA81;
	LA83: ;
	{
		nimln(312, "parseutils.nim");
		nimln(312, "parseutils.nim");
		(*number) = ((NF)((*number)) / (NF)(hd));
	}
	LA81: ;
	nimln(314, "parseutils.nim");
	nimln(314, "parseutils.nim");
	(*number) = ((NF)((*number)) * (NF)(sign));
	nimln(315, "parseutils.nim");
	nimln(315, "parseutils.nim");
	TMP1858 = subInt(i, start);
	result = (NI64)(TMP1858);
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NI, npuParseFloat)(NimStringDesc* s, NF* number, NI start) {
	NI result;
	NF bf;
	nimfr("parseFloat", "parseutils.nim")
	result = 0;
	bf = 0;
	nimln(323, "parseutils.nim");
	result = npuParseBiggestFloat(s, &bf, start);
	nimln(324, "parseutils.nim");
	(*number) = bf;
	popFrame();
	return result;
}
N_NOINLINE(void, stdlibparseutilsInit)(void) {
	nimfr("parseutils", "parseutils.nim")
	popFrame();
}

N_NOINLINE(void, stdlibparseutilsDatInit)(void) {
}

