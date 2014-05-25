/* Generated by Nimrod Compiler v0.9.5 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct tbitset246012 tbitset246012;
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
struct tbitset246012 {
  TGenericSeq Sup;
  NI8 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, bitsetin_246059)(tbitset246012* x, NI64 e);
static N_INLINE(NI64, divInt64)(NI64 a, NI64 b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI64, modInt64)(NI64 a, NI64 b);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, bitsetincl_246047)(tbitset246012** x, NI64 elem);
N_NIMCALL(void, failedassertimpl_80421)(NimStringDesc* msg);
N_NIMCALL(void, bitsetexcl_246053)(tbitset246012** x, NI64 elem);
N_NIMCALL(void, bitsetinit_246017)(tbitset246012** b, NI length);
N_NIMCALL(void, TMP3157)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(void, bitsetunion_246023)(tbitset246012** x, tbitset246012* y);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, bitsetdiff_246029)(tbitset246012** x, tbitset246012* y);
N_NIMCALL(void, bitsetsymdiff_246035)(tbitset246012** x, tbitset246012* y);
N_NIMCALL(void, bitsetintersect_246041)(tbitset246012** x, tbitset246012* y);
N_NIMCALL(NIM_BOOL, bitsetequals_246064)(tbitset246012* x, tbitset246012* y);
N_NIMCALL(NIM_BOOL, bitsetcontains_246069)(tbitset246012* x, tbitset246012* y);
STRING_LITERAL(TMP3150, "elem >= 0 ", 10);
extern TFrame* frameptr_13238;
extern TNimType NTI108; /* int8 */
TNimType NTI246012; /* TBitSet */

static N_INLINE(NI64, divInt64)(NI64 a, NI64 b) {
	NI64 result;
	result = 0;
	{
		if (!(b == 0)) goto LA3;
		raiseDivByZero();
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == (IL64(-9223372036854775807) - IL64(1)));
		if (!(LOC7)) goto LA8;
		LOC7 = (b == -1);
		LA8: ;
		if (!LOC7) goto LA9;
		raiseOverflow();
	}
	LA9: ;
	result = (NI64)(a / b);
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

static N_INLINE(NI64, modInt64)(NI64 a, NI64 b) {
	NI64 result;
	result = 0;
	{
		if (!(b == 0)) goto LA3;
		raiseDivByZero();
	}
	LA3: ;
	result = (NI64)(a % b);
	goto BeforeRet;
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

N_NIMCALL(NIM_BOOL, bitsetin_246059)(tbitset246012* x, NI64 e) {
	NIM_BOOL result;
	NI64 TMP3148;
	NI64 TMP3149;
	nimfr("bitSetIn", "bitsets.nim")
	result = 0;
	nimln(34, "bitsets.nim");
	nimln(34, "bitsets.nim");
	nimln(34, "bitsets.nim");
	nimln(34, "bitsets.nim");
	nimln(34, "bitsets.nim");
	TMP3148 = divInt64(e, 8);
	if ((NU)((NI64)(TMP3148)) >= (NU)(x->Sup.len)) raiseIndexError();
	nimln(34, "bitsets.nim");
	nimln(34, "bitsets.nim");
	nimln(34, "bitsets.nim");
	TMP3149 = modInt64(e, 8);
	result = !(((NI8)(x->data[(NI64)(TMP3148)] & ((NI8)(NU8)(NU)((NI)((NU32)(1) << (NU32)(((NI) ((NI64)(TMP3149)))))))) == ((NI8) 0)));
	popFrame();
	return result;
}

N_NIMCALL(void, bitsetincl_246047)(tbitset246012** x, NI64 elem) {
	NI64 TMP3151;
	NI64 TMP3152;
	NI64 TMP3153;
	nimfr("bitSetIncl", "bitsets.nim")
	nimln(38, "bitsets.nim");
	{
		nimln(38, "bitsets.nim");
		nimln(38, "bitsets.nim");
		if (!!((0 <= elem))) goto LA3;
		nimln(38, "bitsets.nim");
		failedassertimpl_80421(((NimStringDesc*) &TMP3150));
	}
	LA3: ;
	nimln(39, "bitsets.nim");
	nimln(39, "bitsets.nim");
	TMP3151 = divInt64(elem, 8);
	if ((NU)((NI64)(TMP3151)) >= (NU)((*x)->Sup.len)) raiseIndexError();
	nimln(39, "bitsets.nim");
	nimln(39, "bitsets.nim");
	TMP3152 = divInt64(elem, 8);
	if ((NU)((NI64)(TMP3152)) >= (NU)((*x)->Sup.len)) raiseIndexError();
	nimln(40, "bitsets.nim");
	nimln(40, "bitsets.nim");
	nimln(40, "bitsets.nim");
	TMP3153 = modInt64(elem, 8);
	(*x)->data[(NI64)(TMP3151)] = (NI8)((*x)->data[(NI64)(TMP3152)] | ((NI8)(NU8)(NU)((NI)((NU32)(1) << (NU32)(((NI) ((NI64)(TMP3153))))))));
	popFrame();
}

N_NIMCALL(void, bitsetexcl_246053)(tbitset246012** x, NI64 elem) {
	NI64 TMP3154;
	NI64 TMP3155;
	NI64 TMP3156;
	nimfr("bitSetExcl", "bitsets.nim")
	nimln(43, "bitsets.nim");
	nimln(43, "bitsets.nim");
	TMP3154 = divInt64(elem, 8);
	if ((NU)((NI64)(TMP3154)) >= (NU)((*x)->Sup.len)) raiseIndexError();
	nimln(43, "bitsets.nim");
	nimln(43, "bitsets.nim");
	TMP3155 = divInt64(elem, 8);
	if ((NU)((NI64)(TMP3155)) >= (NU)((*x)->Sup.len)) raiseIndexError();
	nimln(44, "bitsets.nim");
	nimln(44, "bitsets.nim");
	nimln(44, "bitsets.nim");
	nimln(44, "bitsets.nim");
	TMP3156 = modInt64(elem, 8);
	(*x)->data[(NI64)(TMP3154)] = (NI8)((*x)->data[(NI64)(TMP3155)] & (NI8)((NU8) ~(((NI8)(NU8)(NU)((NI)((NU32)(1) << (NU32)(((NI) ((NI64)(TMP3156))))))))));
	popFrame();
}
N_NIMCALL(void, TMP3157)(void* p, NI op) {
	tbitset246012* a;
	NI LOC1;
	a = (tbitset246012*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}

N_NIMCALL(void, bitsetinit_246017)(tbitset246012** b, NI length) {
	nimfr("bitSetInit", "bitsets.nim")
	nimln(47, "bitsets.nim");
	unsureAsgnRef((void**) &(*b), (tbitset246012*) newSeq((&NTI246012), length));
	popFrame();
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

N_NIMCALL(void, bitsetunion_246023)(tbitset246012** x, tbitset246012* y) {
	NI i_246254;
	NI HEX3Atmp_246255;
	NI res_246257;
	nimfr("bitSetUnion", "bitsets.nim")
	i_246254 = 0;
	HEX3Atmp_246255 = 0;
	nimln(50, "bitsets.nim");
	nimln(50, "bitsets.nim");
	HEX3Atmp_246255 = ((*x)->Sup.len-1);
	nimln(1451, "system.nim");
	res_246257 = 0;
	nimln(1452, "system.nim");
	while (1) {
		nimln(1452, "system.nim");
		if (!(res_246257 <= HEX3Atmp_246255)) goto LA1;
		nimln(1451, "system.nim");
		i_246254 = res_246257;
		nimln(50, "bitsets.nim");
		if ((NU)(i_246254) >= (NU)((*x)->Sup.len)) raiseIndexError();
		nimln(50, "bitsets.nim");
		if ((NU)(i_246254) >= (NU)((*x)->Sup.len)) raiseIndexError();
		if ((NU)(i_246254) >= (NU)(y->Sup.len)) raiseIndexError();
		(*x)->data[i_246254] = (NI8)((*x)->data[i_246254] | y->data[i_246254]);
		nimln(1454, "system.nim");
		res_246257 = addInt(res_246257, 1);
	} LA1: ;
	popFrame();
}

N_NIMCALL(void, bitsetdiff_246029)(tbitset246012** x, tbitset246012* y) {
	NI i_246279;
	NI HEX3Atmp_246280;
	NI res_246282;
	nimfr("bitSetDiff", "bitsets.nim")
	i_246279 = 0;
	HEX3Atmp_246280 = 0;
	nimln(53, "bitsets.nim");
	nimln(53, "bitsets.nim");
	HEX3Atmp_246280 = ((*x)->Sup.len-1);
	nimln(1451, "system.nim");
	res_246282 = 0;
	nimln(1452, "system.nim");
	while (1) {
		nimln(1452, "system.nim");
		if (!(res_246282 <= HEX3Atmp_246280)) goto LA1;
		nimln(1451, "system.nim");
		i_246279 = res_246282;
		nimln(53, "bitsets.nim");
		if ((NU)(i_246279) >= (NU)((*x)->Sup.len)) raiseIndexError();
		nimln(53, "bitsets.nim");
		if ((NU)(i_246279) >= (NU)((*x)->Sup.len)) raiseIndexError();
		nimln(53, "bitsets.nim");
		if ((NU)(i_246279) >= (NU)(y->Sup.len)) raiseIndexError();
		(*x)->data[i_246279] = (NI8)((*x)->data[i_246279] & (NI8)((NU8) ~(y->data[i_246279])));
		nimln(1454, "system.nim");
		res_246282 = addInt(res_246282, 1);
	} LA1: ;
	popFrame();
}

N_NIMCALL(void, bitsetsymdiff_246035)(tbitset246012** x, tbitset246012* y) {
	NI i_246304;
	NI HEX3Atmp_246305;
	NI res_246307;
	nimfr("bitSetSymDiff", "bitsets.nim")
	i_246304 = 0;
	HEX3Atmp_246305 = 0;
	nimln(56, "bitsets.nim");
	nimln(56, "bitsets.nim");
	HEX3Atmp_246305 = ((*x)->Sup.len-1);
	nimln(1451, "system.nim");
	res_246307 = 0;
	nimln(1452, "system.nim");
	while (1) {
		nimln(1452, "system.nim");
		if (!(res_246307 <= HEX3Atmp_246305)) goto LA1;
		nimln(1451, "system.nim");
		i_246304 = res_246307;
		nimln(56, "bitsets.nim");
		if ((NU)(i_246304) >= (NU)((*x)->Sup.len)) raiseIndexError();
		nimln(56, "bitsets.nim");
		if ((NU)(i_246304) >= (NU)((*x)->Sup.len)) raiseIndexError();
		if ((NU)(i_246304) >= (NU)(y->Sup.len)) raiseIndexError();
		(*x)->data[i_246304] = (NI8)((*x)->data[i_246304] ^ y->data[i_246304]);
		nimln(1454, "system.nim");
		res_246307 = addInt(res_246307, 1);
	} LA1: ;
	popFrame();
}

N_NIMCALL(void, bitsetintersect_246041)(tbitset246012** x, tbitset246012* y) {
	NI i_246329;
	NI HEX3Atmp_246330;
	NI res_246332;
	nimfr("bitSetIntersect", "bitsets.nim")
	i_246329 = 0;
	HEX3Atmp_246330 = 0;
	nimln(59, "bitsets.nim");
	nimln(59, "bitsets.nim");
	HEX3Atmp_246330 = ((*x)->Sup.len-1);
	nimln(1451, "system.nim");
	res_246332 = 0;
	nimln(1452, "system.nim");
	while (1) {
		nimln(1452, "system.nim");
		if (!(res_246332 <= HEX3Atmp_246330)) goto LA1;
		nimln(1451, "system.nim");
		i_246329 = res_246332;
		nimln(59, "bitsets.nim");
		if ((NU)(i_246329) >= (NU)((*x)->Sup.len)) raiseIndexError();
		nimln(59, "bitsets.nim");
		if ((NU)(i_246329) >= (NU)((*x)->Sup.len)) raiseIndexError();
		if ((NU)(i_246329) >= (NU)(y->Sup.len)) raiseIndexError();
		(*x)->data[i_246329] = (NI8)((*x)->data[i_246329] & y->data[i_246329]);
		nimln(1454, "system.nim");
		res_246332 = addInt(res_246332, 1);
	} LA1: ;
	popFrame();
}

N_NIMCALL(NIM_BOOL, bitsetequals_246064)(tbitset246012* x, tbitset246012* y) {
	NIM_BOOL result;
	NI i_246354;
	NI HEX3Atmp_246355;
	NI res_246357;
	nimfr("bitSetEquals", "bitsets.nim")
	result = 0;
	i_246354 = 0;
	HEX3Atmp_246355 = 0;
	nimln(62, "bitsets.nim");
	nimln(62, "bitsets.nim");
	HEX3Atmp_246355 = (x->Sup.len-1);
	nimln(1451, "system.nim");
	res_246357 = 0;
	nimln(1452, "system.nim");
	while (1) {
		nimln(1452, "system.nim");
		if (!(res_246357 <= HEX3Atmp_246355)) goto LA1;
		nimln(1451, "system.nim");
		i_246354 = res_246357;
		nimln(63, "bitsets.nim");
		{
			nimln(63, "bitsets.nim");
			nimln(63, "bitsets.nim");
			if ((NU)(i_246354) >= (NU)(x->Sup.len)) raiseIndexError();
			if ((NU)(i_246354) >= (NU)(y->Sup.len)) raiseIndexError();
			if (!!((x->data[i_246354] == y->data[i_246354]))) goto LA4;
			nimln(64, "bitsets.nim");
			nimln(64, "bitsets.nim");
			result = NIM_FALSE;
			goto BeforeRet;
		}
		LA4: ;
		nimln(1454, "system.nim");
		res_246357 = addInt(res_246357, 1);
	} LA1: ;
	nimln(65, "bitsets.nim");
	result = NIM_TRUE;
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, bitsetcontains_246069)(tbitset246012* x, tbitset246012* y) {
	NIM_BOOL result;
	NI i_246379;
	NI HEX3Atmp_246380;
	NI res_246382;
	nimfr("bitSetContains", "bitsets.nim")
	result = 0;
	i_246379 = 0;
	HEX3Atmp_246380 = 0;
	nimln(68, "bitsets.nim");
	nimln(68, "bitsets.nim");
	HEX3Atmp_246380 = (x->Sup.len-1);
	nimln(1451, "system.nim");
	res_246382 = 0;
	nimln(1452, "system.nim");
	while (1) {
		nimln(1452, "system.nim");
		if (!(res_246382 <= HEX3Atmp_246380)) goto LA1;
		nimln(1451, "system.nim");
		i_246379 = res_246382;
		nimln(69, "bitsets.nim");
		{
			nimln(69, "bitsets.nim");
			nimln(69, "bitsets.nim");
			nimln(69, "bitsets.nim");
			if ((NU)(i_246379) >= (NU)(x->Sup.len)) raiseIndexError();
			nimln(69, "bitsets.nim");
			if ((NU)(i_246379) >= (NU)(y->Sup.len)) raiseIndexError();
			if (!!(((NI8)(x->data[i_246379] & (NI8)((NU8) ~(y->data[i_246379]))) == ((NI8) 0)))) goto LA4;
			nimln(70, "bitsets.nim");
			nimln(70, "bitsets.nim");
			result = NIM_FALSE;
			goto BeforeRet;
		}
		LA4: ;
		nimln(1454, "system.nim");
		res_246382 = addInt(res_246382, 1);
	} LA1: ;
	nimln(71, "bitsets.nim");
	result = NIM_TRUE;
	BeforeRet: ;
	popFrame();
	return result;
}
N_NOINLINE(void, bitsetsInit)(void) {
	nimfr("bitsets", "bitsets.nim")
	popFrame();
}

N_NOINLINE(void, bitsetsDatInit)(void) {
NTI246012.size = sizeof(tbitset246012*);
NTI246012.kind = 24;
NTI246012.base = (&NTI108);
NTI246012.flags = 2;
NTI246012.marker = TMP3157;
}

