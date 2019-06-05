/* Generated by Nim Compiler v0.20.0 */
/*   (c) 2019 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix
#define nimfr_(x, y)
#define nimln_(x, y)
typedef struct tyObject_PTerminalcolonObjectType__EcU8GhMNGo9bGDXbfqZ82og tyObject_PTerminalcolonObjectType__EcU8GhMNGo9bGDXbfqZ82og;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct tyObject_PTerminalcolonObjectType__EcU8GhMNGo9bGDXbfqZ82og {
NIM_BOOL trueColorIsSupported;
NIM_BOOL trueColorIsEnabled;
NIM_BOOL fgSetColor;
};
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_NIMCALL_PTR(void, tyProc_T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
typedef NU16 tySet_tyEnum_Style_NXKayqTLMsAibFwNceBlpA;
typedef NU8 tyEnum_Style_NXKayqTLMsAibFwNceBlpA;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_ForegroundColor_ez9ah4IgQc0AbdW68acioDg;
static N_NIMCALL(void, Marker_tyRef_flNJLrANZti6Wiy5LTlGGA)(void* p, NI op);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, TM_CN3raB9atujkEiPpxYAdlgQ_3)(void);
N_NIMCALL(void, nimRegisterThreadLocalMarker)(tyProc_T4eqaYlFJYZUv9aG9b1TV0bQ markerProc);
N_LIB_PRIVATE N_NIMCALL(int, getFileHandle_hOwLbM7eXaZgEJrHWLeiNg)(FILE* f);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_LIB_PRIVATE N_NIMCALL(void, write_PArlm09bKklm2BLsCg6YtaA)(FILE* f, NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, ansiStyleCode_9cVIfUEE6Zf6B3dSUGw8cLQ)(NI style);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_LIB_PRIVATE N_NIMCALL(void, formatValue_3zjq9csYPBcIN7AqvyU5ZLA)(NimStringDesc** result, NimStringDesc* value, NimStringDesc* specifier);
N_LIB_PRIVATE N_NIMCALL(void, formatValue_ACNJL1q6Oxfvi53i9bkeK6Q)(NimStringDesc** result, NI value, NimStringDesc* specifier);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
tyObject_PTerminalcolonObjectType__EcU8GhMNGo9bGDXbfqZ82og* gTerm_wkpx9csKte2r1l45yvskIcA;
TNimType NTI_EcU8GhMNGo9bGDXbfqZ82og_;
extern TNimType NTI_VaVACK0bpYmqIQ0mKcHfQQ_;
TNimType NTI_flNJLrANZti6Wiy5LTlGGA_;
NI gFG_g7w4T3anr20OMlWloNx2tQ;
NI gBG_dgmeknpHWrtwqMJGQAp9atA;
STRING_LITERAL(TM_CN3raB9atujkEiPpxYAdlgQ_4, "\033[", 2);
STRING_LITERAL(TM_CN3raB9atujkEiPpxYAdlgQ_5, "m", 1);
STRING_LITERAL(TM_CN3raB9atujkEiPpxYAdlgQ_7, "\033[0m", 4);
static N_NIMCALL(void, Marker_tyRef_flNJLrANZti6Wiy5LTlGGA)(void* p, NI op) {
	tyObject_PTerminalcolonObjectType__EcU8GhMNGo9bGDXbfqZ82og* a;
	a = (tyObject_PTerminalcolonObjectType__EcU8GhMNGo9bGDXbfqZ82og*)p;
}
static N_NIMCALL(void, TM_CN3raB9atujkEiPpxYAdlgQ_3)(void) {
	nimGCvisit((void*)gTerm_wkpx9csKte2r1l45yvskIcA, 0);
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isatty_N9cWRL9bvOiaeIezt6AEzXqw)(FILE* f) {
	NIM_BOOL result;
	int T1_;
	int T2_;
	result = (NIM_BOOL)0;
	T1_ = (int)0;
	T1_ = getFileHandle_hOwLbM7eXaZgEJrHWLeiNg(f);
	T2_ = (int)0;
	T2_ = isatty(T1_);
	result = !((T2_ == ((NI32) 0)));
	return result;
}

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
{	result = (NI)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (a <= i);
		if (!(T3_)) goto LA4_;
		T3_ = (i <= b);
		LA4_: ;
		if (!T3_) goto LA5_;
		result = i;
		goto BeforeRet_;
	}
	goto LA1_;
	LA5_: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}

static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, copyMem_i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	{
		if (!!((src == NIM_NIL))) goto LA3_;
		copyMem_i80o3k0SgEI5gTRCzYdyWAsystem(((void*) ((&(*dest).data[(*dest).Sup.len]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, ansiStyleCode_9cVIfUEE6Zf6B3dSUGw8cLQ)(NI style) {
	NimStringDesc* result;
	NimStringDesc* fmtRes;
	result = (NimStringDesc*)0;
	fmtRes = rawNewString(((NI) 41));
	formatValue_3zjq9csYPBcIN7AqvyU5ZLA((&fmtRes), ((NimStringDesc*) &TM_CN3raB9atujkEiPpxYAdlgQ_4), ((NimStringDesc*) NIM_NIL));
	formatValue_ACNJL1q6Oxfvi53i9bkeK6Q((&fmtRes), style, ((NimStringDesc*) NIM_NIL));
	fmtRes = resizeString(fmtRes, 1);
appendString(fmtRes, ((NimStringDesc*) &TM_CN3raB9atujkEiPpxYAdlgQ_5));
	result = copyString(fmtRes);
	return result;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ b));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, setStyle_y8lW2LrW2n5ZHaxH9bAf4WA)(FILE* f, tySet_tyEnum_Style_NXKayqTLMsAibFwNceBlpA style) {
	{
		tyEnum_Style_NXKayqTLMsAibFwNceBlpA s;
		NI i;
		s = (tyEnum_Style_NXKayqTLMsAibFwNceBlpA)0;
		i = ((NI) 1);
		{
			while (1) {
				NI TM_CN3raB9atujkEiPpxYAdlgQ_6;
				if (!(i <= ((NI) 9))) goto LA3;
				{
					NimStringDesc* T8_;
					if (!((style &(1U<<((NU)((((tyEnum_Style_NXKayqTLMsAibFwNceBlpA)chckRange(i, ((tyEnum_Style_NXKayqTLMsAibFwNceBlpA) 1), ((tyEnum_Style_NXKayqTLMsAibFwNceBlpA) 9)))- 1))&15U)))!=0)) goto LA6_;
					s = ((tyEnum_Style_NXKayqTLMsAibFwNceBlpA)chckRange(i, ((tyEnum_Style_NXKayqTLMsAibFwNceBlpA) 1), ((tyEnum_Style_NXKayqTLMsAibFwNceBlpA) 9)));
					T8_ = (NimStringDesc*)0;
					T8_ = ansiStyleCode_9cVIfUEE6Zf6B3dSUGw8cLQ(((NI) (s)));
					write_PArlm09bKklm2BLsCg6YtaA(f, T8_);
				}
				LA6_: ;
				TM_CN3raB9atujkEiPpxYAdlgQ_6 = addInt(i, ((NI) 1));
				i = (NI)(TM_CN3raB9atujkEiPpxYAdlgQ_6);
			} LA3: ;
		}
	}
}

N_LIB_PRIVATE N_NIMCALL(void, resetAttributes_6J8xlU57R8cS9bLzTS89aM5g)(FILE* f) {
	write_PArlm09bKklm2BLsCg6YtaA(f, ((NimStringDesc*) &TM_CN3raB9atujkEiPpxYAdlgQ_7));
}

N_LIB_PRIVATE N_NIMCALL(void, setForegroundColor_vJutklhcnQq9akCXxcuSHAg)(FILE* f, tyEnum_ForegroundColor_ez9ah4IgQc0AbdW68acioDg fg, NIM_BOOL bright) {
	NimStringDesc* T5_;
	gFG_g7w4T3anr20OMlWloNx2tQ = fg;
	{
		NI TM_CN3raB9atujkEiPpxYAdlgQ_8;
		if (!bright) goto LA3_;
		TM_CN3raB9atujkEiPpxYAdlgQ_8 = addInt(gFG_g7w4T3anr20OMlWloNx2tQ, ((NI) 60));
		gFG_g7w4T3anr20OMlWloNx2tQ = (NI)(TM_CN3raB9atujkEiPpxYAdlgQ_8);
	}
	LA3_: ;
	T5_ = (NimStringDesc*)0;
	T5_ = ansiStyleCode_9cVIfUEE6Zf6B3dSUGw8cLQ(gFG_g7w4T3anr20OMlWloNx2tQ);
	write_PArlm09bKklm2BLsCg6YtaA(f, T5_);
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_terminalInit000)(void) {
{

	nimRegisterThreadLocalMarker(TM_CN3raB9atujkEiPpxYAdlgQ_3);

}
}

N_LIB_PRIVATE N_NIMCALL(void, stdlib_terminalDatInit000)(void) {
static TNimNode* TM_CN3raB9atujkEiPpxYAdlgQ_2_3[3];
static TNimNode TM_CN3raB9atujkEiPpxYAdlgQ_0[4];
NTI_EcU8GhMNGo9bGDXbfqZ82og_.size = sizeof(tyObject_PTerminalcolonObjectType__EcU8GhMNGo9bGDXbfqZ82og);
NTI_EcU8GhMNGo9bGDXbfqZ82og_.kind = 18;
NTI_EcU8GhMNGo9bGDXbfqZ82og_.base = 0;
NTI_EcU8GhMNGo9bGDXbfqZ82og_.flags = 3;
TM_CN3raB9atujkEiPpxYAdlgQ_2_3[0] = &TM_CN3raB9atujkEiPpxYAdlgQ_0[1];
TM_CN3raB9atujkEiPpxYAdlgQ_0[1].kind = 1;
TM_CN3raB9atujkEiPpxYAdlgQ_0[1].offset = offsetof(tyObject_PTerminalcolonObjectType__EcU8GhMNGo9bGDXbfqZ82og, trueColorIsSupported);
TM_CN3raB9atujkEiPpxYAdlgQ_0[1].typ = (&NTI_VaVACK0bpYmqIQ0mKcHfQQ_);
TM_CN3raB9atujkEiPpxYAdlgQ_0[1].name = "trueColorIsSupported";
TM_CN3raB9atujkEiPpxYAdlgQ_2_3[1] = &TM_CN3raB9atujkEiPpxYAdlgQ_0[2];
TM_CN3raB9atujkEiPpxYAdlgQ_0[2].kind = 1;
TM_CN3raB9atujkEiPpxYAdlgQ_0[2].offset = offsetof(tyObject_PTerminalcolonObjectType__EcU8GhMNGo9bGDXbfqZ82og, trueColorIsEnabled);
TM_CN3raB9atujkEiPpxYAdlgQ_0[2].typ = (&NTI_VaVACK0bpYmqIQ0mKcHfQQ_);
TM_CN3raB9atujkEiPpxYAdlgQ_0[2].name = "trueColorIsEnabled";
TM_CN3raB9atujkEiPpxYAdlgQ_2_3[2] = &TM_CN3raB9atujkEiPpxYAdlgQ_0[3];
TM_CN3raB9atujkEiPpxYAdlgQ_0[3].kind = 1;
TM_CN3raB9atujkEiPpxYAdlgQ_0[3].offset = offsetof(tyObject_PTerminalcolonObjectType__EcU8GhMNGo9bGDXbfqZ82og, fgSetColor);
TM_CN3raB9atujkEiPpxYAdlgQ_0[3].typ = (&NTI_VaVACK0bpYmqIQ0mKcHfQQ_);
TM_CN3raB9atujkEiPpxYAdlgQ_0[3].name = "fgSetColor";
TM_CN3raB9atujkEiPpxYAdlgQ_0[0].len = 3; TM_CN3raB9atujkEiPpxYAdlgQ_0[0].kind = 2; TM_CN3raB9atujkEiPpxYAdlgQ_0[0].sons = &TM_CN3raB9atujkEiPpxYAdlgQ_2_3[0];
NTI_EcU8GhMNGo9bGDXbfqZ82og_.node = &TM_CN3raB9atujkEiPpxYAdlgQ_0[0];
NTI_flNJLrANZti6Wiy5LTlGGA_.size = sizeof(tyObject_PTerminalcolonObjectType__EcU8GhMNGo9bGDXbfqZ82og*);
NTI_flNJLrANZti6Wiy5LTlGGA_.kind = 22;
NTI_flNJLrANZti6Wiy5LTlGGA_.base = (&NTI_EcU8GhMNGo9bGDXbfqZ82og_);
NTI_flNJLrANZti6Wiy5LTlGGA_.flags = 2;
NTI_flNJLrANZti6Wiy5LTlGGA_.marker = Marker_tyRef_flNJLrANZti6Wiy5LTlGGA;
}

