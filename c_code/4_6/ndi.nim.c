/* Generated by Nim Compiler v0.20.0 */
/*   (c) 2019 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <stdio.h>
#include <string.h>
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
typedef struct tyObject_NdiFile_9cEuXfAnHp9bnWFK409cMtsEw tyObject_NdiFile_9cEuXfAnHp9bnWFK409cMtsEw;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw;
typedef struct tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w;
typedef struct tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA;
typedef struct RootObj RootObj;
typedef struct tySequence_Ef05srmQTDulnBdXR4Ja6Q tySequence_Ef05srmQTDulnBdXR4Ja6Q;
typedef struct tySequence_DXS6mEo7PVUFJkirsQ9bNQA tySequence_DXS6mEo7PVUFJkirsQ9bNQA;
typedef struct tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw;
typedef struct tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA;
typedef struct tySequence_DfgJFJEYoj4YBAHLZPl5lQ tySequence_DfgJFJEYoj4YBAHLZPl5lQ;
typedef struct tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ;
typedef struct tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA;
typedef struct tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q;
typedef struct tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA;
typedef struct tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA;
typedef struct tyObject_TLib_NBMxlJ6g3utqUlplqTTHkA tyObject_TLib_NBMxlJ6g3utqUlplqTTHkA;
typedef struct tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_NdiFile_9cEuXfAnHp9bnWFK409cMtsEw {
NIM_BOOL enabled;
FILE* f;
NimStringDesc* buf;
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
typedef NU8 tyEnum_FileMode_ZJfK20XeZ9bv2j1pZjw9aswg;
struct RootObj {
TNimType* m_type;
};
struct tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA {
  RootObj Sup;
NI id;
};
typedef NU8 tyEnum_TSymKind_cNCW9acsSznmEccl1fgQwkw;
struct tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA {
NI counter;
tySequence_DfgJFJEYoj4YBAHLZPl5lQ* data;
};
typedef NU16 tyEnum_TMagic_shZhZOdbVC5nnFvcXQAImg;
struct tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q {
NU16 line;
NI16 col;
NI32 fileIndex;
};
typedef NU64 tySet_tyEnum_TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw;
typedef NU32 tySet_tyEnum_TOption_WspMeQySXNP2XoTWR5MTgg;
typedef NU8 tyEnum_TLocKind_O7PRFZKuiBBWbku09cayVBg;
typedef NU8 tyEnum_TStorageLoc_JK9cKMX3XnqHaUky9b6gkGEw;
typedef NU16 tySet_tyEnum_TLocFlag_o2bqJgR4ceIupnUSpxiudA;
struct tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA {
tyEnum_TLocKind_O7PRFZKuiBBWbku09cayVBg k;
tyEnum_TStorageLoc_JK9cKMX3XnqHaUky9b6gkGEw storage;
tySet_tyEnum_TLocFlag_o2bqJgR4ceIupnUSpxiudA flags;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* lode;
tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* r;
};
struct tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w {
  tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA Sup;
tyEnum_TSymKind_cNCW9acsSznmEccl1fgQwkw kind;
union{
struct {tySequence_Ef05srmQTDulnBdXR4Ja6Q* typeInstCache;
};
struct {tySequence_DXS6mEo7PVUFJkirsQ9bNQA* procInstCache;
tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* gcUnsafetyReason;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* transformedBody;
};
struct {tySequence_DXS6mEo7PVUFJkirsQ9bNQA* usedGenerics;
tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA tab;
};
struct {tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* guard;
NI bitsize;
};
};
tyEnum_TMagic_shZhZOdbVC5nnFvcXQAImg magic;
tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* typ;
tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA* name;
tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q info;
tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* owner;
tySet_tyEnum_TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw flags;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* ast;
tySet_tyEnum_TOption_WspMeQySXNP2XoTWR5MTgg options;
NI position;
NI offset;
tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA loc;
tyObject_TLib_NBMxlJ6g3utqUlplqTTHkA* annex;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* constraint;
};
typedef NimStringDesc* tyArray_Re75IspeoxXy2oCZHwcRrA[2];
struct tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA {
  tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA Sup;
NimStringDesc* s;
tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA* next;
NI h;
};
typedef NimStringDesc* tyArray_sMpvt1sOxOJ3LFGulnbeMQ[4];
struct tySequence_Ef05srmQTDulnBdXR4Ja6Q {
  TGenericSeq Sup;
  tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* data[SEQ_DECL_SIZE];
};
struct tySequence_DXS6mEo7PVUFJkirsQ9bNQA {
  TGenericSeq Sup;
  tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA* data[SEQ_DECL_SIZE];
};
struct tySequence_DfgJFJEYoj4YBAHLZPl5lQ {
  TGenericSeq Sup;
  tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* data[SEQ_DECL_SIZE];
};
static N_INLINE(NIM_BOOL, isEmpty_kPpSxL0H5sJ9a6ujvdQ0QVQpathutils)(NimStringDesc* x);
N_LIB_PRIVATE N_NIMCALL(FILE*, open_cb1k9citqyT9a9brBSJAz8pkg)(NimStringDesc* filename, tyEnum_FileMode_ZJfK20XeZ9bv2j1pZjw9aswg mode, NI bufSize);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_LIB_PRIVATE N_NIMCALL(void, addInt_mftMOxbyu0h4yByfs3sqjA)(NimStringDesc** result, NI64 x);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_M04YC71iJg1N7gBF3HZTngsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_LIB_PRIVATE N_NIMCALL(void, write_y2dplmr7ar8o7Yykk7MOlA)(FILE* f, NimStringDesc** a, NI aLen_0);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem_JE6t4x7Z3v2iVz27Nx0MRAmemory)(void* a, int v, NI size);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(void, writeRope_FwuzOBq6SLlanVUstm8q9cA)(FILE* f, tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* r);
static N_INLINE(void, writeLine_45Em82MGXqv9biomV0DEbSgio)(FILE* f, NimStringDesc** x, NI xLen_0);
N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
N_LIB_PRIVATE N_NIMCALL(void, write_PArlm09bKklm2BLsCg6YtaA)(FILE* f, NimStringDesc* s);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, toFullPath_VW1RaR1l9c9bPnJxr1KuvIrg)(tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* conf, NI32 fileIdx);
N_LIB_PRIVATE N_NIMCALL(void, close_fU6ZlJAtQ9bre04EDZLdGsA_3)(FILE* f);
TNimType NTI_9cEuXfAnHp9bnWFK409cMtsEw_;
extern TNimType NTI_VaVACK0bpYmqIQ0mKcHfQQ_;
extern TNimType NTI_XBeRj4rw9bUuE7CB3DS1rgg_;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg_;
STRING_LITERAL(TM_QVKrxgdkvZgAHGFrhgVOcA_3, "\011", 1);
STRING_LITERAL(TM_QVKrxgdkvZgAHGFrhgVOcA_5, "\012", 1);

static N_INLINE(NIM_BOOL, isEmpty_kPpSxL0H5sJ9a6ujvdQ0QVQpathutils)(NimStringDesc* x) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = ((x ? x->Sup.len : 0) == ((NI) 0));
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, open_jmWVcl5Qp9atJWCEkvq1SfA)(tyObject_NdiFile_9cEuXfAnHp9bnWFK409cMtsEw* f, NimStringDesc* filename, tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* conf) {
	NIM_BOOL T1_;
	T1_ = (NIM_BOOL)0;
	T1_ = isEmpty_kPpSxL0H5sJ9a6ujvdQ0QVQpathutils(filename);
	(*f).enabled = !(T1_);
	{
		if (!(*f).enabled) goto LA4_;
		(*f).f = open_cb1k9citqyT9a9brBSJAz8pkg(filename, ((tyEnum_FileMode_ZJfK20XeZ9bv2j1pZjw9aswg) 1), ((NI) 8000));
		unsureAsgnRef((void**) (&(*f).buf), rawNewString(((NI) 20)));
	}
	LA4_: ;
}

static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, copyMem_M04YC71iJg1N7gBF3HZTngsystem)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	{
		if (!!((src == NIM_NIL))) goto LA3_;
		copyMem_M04YC71iJg1N7gBF3HZTngsystem(((void*) ((&(*dest).data[(*dest).Sup.len]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
}

static N_INLINE(void, nimSetMem_JE6t4x7Z3v2iVz27Nx0MRAmemory)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}

static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem_JE6t4x7Z3v2iVz27Nx0MRAmemory(p, ((int) 0), size);
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU32)(a) + (NU32)(b));
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

static N_INLINE(void, writeLine_45Em82MGXqv9biomV0DEbSgio)(FILE* f, NimStringDesc** x, NI xLen_0) {
	{
		NimStringDesc* i;
		NI i_2;
		i = (NimStringDesc*)0;
		i_2 = ((NI) 0);
		{
			while (1) {
				NI TM_QVKrxgdkvZgAHGFrhgVOcA_4;
				if (!(i_2 < xLen_0)) goto LA3;
				if ((NU)(i_2) >= (NU)(xLen_0)) raiseIndexError2(i_2,xLen_0-1);
				i = x[i_2];
				write_PArlm09bKklm2BLsCg6YtaA(f, i);
				TM_QVKrxgdkvZgAHGFrhgVOcA_4 = addInt(i_2, ((NI) 1));
				i_2 = (NI)(TM_QVKrxgdkvZgAHGFrhgVOcA_4);
			} LA3: ;
		}
	}
	write_PArlm09bKklm2BLsCg6YtaA(f, ((NimStringDesc*) &TM_QVKrxgdkvZgAHGFrhgVOcA_5));
}

N_LIB_PRIVATE N_NIMCALL(void, doWrite_1nU29cZKUVlth4bckzRe6Tw)(tyObject_NdiFile_9cEuXfAnHp9bnWFK409cMtsEw* f, tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* s, tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* conf) {
	tyArray_Re75IspeoxXy2oCZHwcRrA T1_;
	tyArray_sMpvt1sOxOJ3LFGulnbeMQ T2_;
	unsureAsgnRef((void**) (&(*f).buf), setLengthStr((*f).buf, ((NI) 0)));
	addInt_mftMOxbyu0h4yByfs3sqjA((&(*f).buf), ((NI64) (((NI) ((*s).info.line)))));
	unsureAsgnRef((void**) (&(*f).buf), resizeString((*f).buf, 1));
appendString((*f).buf, ((NimStringDesc*) &TM_QVKrxgdkvZgAHGFrhgVOcA_3));
	addInt_mftMOxbyu0h4yByfs3sqjA((&(*f).buf), ((NI64) (((NI) ((*s).info.col)))));
	nimZeroMem((void*)T1_, sizeof(tyArray_Re75IspeoxXy2oCZHwcRrA));
	T1_[0] = copyString((*(*s).name).s);
	T1_[1] = copyString(((NimStringDesc*) &TM_QVKrxgdkvZgAHGFrhgVOcA_3));
	write_y2dplmr7ar8o7Yykk7MOlA((*f).f, T1_, 2);
	writeRope_FwuzOBq6SLlanVUstm8q9cA((*f).f, (*s).loc.r);
	nimZeroMem((void*)T2_, sizeof(tyArray_sMpvt1sOxOJ3LFGulnbeMQ));
	T2_[0] = copyString(((NimStringDesc*) &TM_QVKrxgdkvZgAHGFrhgVOcA_3));
	T2_[1] = toFullPath_VW1RaR1l9c9bPnJxr1KuvIrg(conf, (*s).info.fileIndex);
	T2_[2] = copyString(((NimStringDesc*) &TM_QVKrxgdkvZgAHGFrhgVOcA_3));
	T2_[3] = copyString((*f).buf);
	writeLine_45Em82MGXqv9biomV0DEbSgio((*f).f, T2_, 4);
}

N_LIB_PRIVATE N_NIMCALL(void, close_GvEyiCVhfPFZLA80aIn5Nw)(tyObject_NdiFile_9cEuXfAnHp9bnWFK409cMtsEw* f) {
	{
		if (!(*f).enabled) goto LA3_;
		close_fU6ZlJAtQ9bre04EDZLdGsA_3((*f).f);
	}
	LA3_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, compiler_ndiDatInit000)(void) {
static TNimNode* TM_QVKrxgdkvZgAHGFrhgVOcA_2_3[3];
static TNimNode TM_QVKrxgdkvZgAHGFrhgVOcA_0[4];
NTI_9cEuXfAnHp9bnWFK409cMtsEw_.size = sizeof(tyObject_NdiFile_9cEuXfAnHp9bnWFK409cMtsEw);
NTI_9cEuXfAnHp9bnWFK409cMtsEw_.kind = 18;
NTI_9cEuXfAnHp9bnWFK409cMtsEw_.base = 0;
NTI_9cEuXfAnHp9bnWFK409cMtsEw_.flags = 2;
TM_QVKrxgdkvZgAHGFrhgVOcA_2_3[0] = &TM_QVKrxgdkvZgAHGFrhgVOcA_0[1];
TM_QVKrxgdkvZgAHGFrhgVOcA_0[1].kind = 1;
TM_QVKrxgdkvZgAHGFrhgVOcA_0[1].offset = offsetof(tyObject_NdiFile_9cEuXfAnHp9bnWFK409cMtsEw, enabled);
TM_QVKrxgdkvZgAHGFrhgVOcA_0[1].typ = (&NTI_VaVACK0bpYmqIQ0mKcHfQQ_);
TM_QVKrxgdkvZgAHGFrhgVOcA_0[1].name = "enabled";
TM_QVKrxgdkvZgAHGFrhgVOcA_2_3[1] = &TM_QVKrxgdkvZgAHGFrhgVOcA_0[2];
TM_QVKrxgdkvZgAHGFrhgVOcA_0[2].kind = 1;
TM_QVKrxgdkvZgAHGFrhgVOcA_0[2].offset = offsetof(tyObject_NdiFile_9cEuXfAnHp9bnWFK409cMtsEw, f);
TM_QVKrxgdkvZgAHGFrhgVOcA_0[2].typ = (&NTI_XBeRj4rw9bUuE7CB3DS1rgg_);
TM_QVKrxgdkvZgAHGFrhgVOcA_0[2].name = "f";
TM_QVKrxgdkvZgAHGFrhgVOcA_2_3[2] = &TM_QVKrxgdkvZgAHGFrhgVOcA_0[3];
TM_QVKrxgdkvZgAHGFrhgVOcA_0[3].kind = 1;
TM_QVKrxgdkvZgAHGFrhgVOcA_0[3].offset = offsetof(tyObject_NdiFile_9cEuXfAnHp9bnWFK409cMtsEw, buf);
TM_QVKrxgdkvZgAHGFrhgVOcA_0[3].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_QVKrxgdkvZgAHGFrhgVOcA_0[3].name = "buf";
TM_QVKrxgdkvZgAHGFrhgVOcA_0[0].len = 3; TM_QVKrxgdkvZgAHGFrhgVOcA_0[0].kind = 2; TM_QVKrxgdkvZgAHGFrhgVOcA_0[0].sons = &TM_QVKrxgdkvZgAHGFrhgVOcA_2_3[0];
NTI_9cEuXfAnHp9bnWFK409cMtsEw_.node = &TM_QVKrxgdkvZgAHGFrhgVOcA_0[0];
}

