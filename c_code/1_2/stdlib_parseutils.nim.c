/* Generated by Nim Compiler v0.20.0 */
/*   (c) 2019 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_ValueError_yoNlBGx0D2tRizIdhQuENw tyObject_ValueError_yoNlBGx0D2tRizIdhQuENw;
typedef struct tyObject_CatchableError_qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError_qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence_uB9b75OUPRENsBAu4AnoePA tySequence_uB9b75OUPRENsBAu4AnoePA;
typedef struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack_7fytPA5bBsob6See21YMRA tyObject_GcStack_7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyTuple_ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg;
typedef struct tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct RootObj {
TNimType* m_type;
};
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
tySequence_uB9b75OUPRENsBAu4AnoePA* trace;
NU raiseId;
Exception* up;
};
struct tyObject_CatchableError_qrLSDoe2oBoAqNtJ9badtnA {
  Exception Sup;
};
struct tyObject_ValueError_yoNlBGx0D2tRizIdhQuENw {
  tyObject_CatchableError_qrLSDoe2oBoAqNtJ9badtnA Sup;
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
struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
struct tyObject_GcStack_7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* tyArray_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef NU32 tyArray_BHbOSqU1t9b3Gt7K2c6fQig[24];
typedef tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* tyArray_N1u1nqOgmuJN9cSZrnMHgOQ[32];
typedef tyArray_N1u1nqOgmuJN9cSZrnMHgOQ tyArray_B6durA4ZCi1xjJvRtyYxMg[24];
typedef tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* tyArray_lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA {
tyArray_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* tyArray_0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw {
tyArray_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyArray_LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray_LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
NU32 flBitmap;
tyArray_BHbOSqU1t9b3Gt7K2c6fQig slBitmap;
tyArray_B6durA4ZCi1xjJvRtyYxMg matrix;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI occ;
NI lastSize;
tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
NI zctThreshold;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
NI gcThreadId;
};
struct tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};
struct tySequence_uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NIM_CHAR, toLower_eK9b2e49aPf4wAIdUwhbmZsQparseutils)(NIM_CHAR c);
static N_INLINE(NI, subInt)(NI a, NI b);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
N_LIB_PRIVATE N_NIMCALL(NI, npuParseBiggestInt)(NimStringDesc* s, NI64* number, NI start);
N_LIB_PRIVATE N_NIMCALL(NI, rawParseInt_oz568vhg7PZ19ak9aiwQxGYw)(NimStringDesc* s, NI64* b, NI start);
static N_INLINE(NI64, addInt64)(NI64 a, NI64 b);
static N_INLINE(NI64, divInt64)(NI64 a, NI64 b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NIMCALL(NI64, mulInt64)(NI64 a, NI64 b);
static N_INLINE(NI64, subInt64)(NI64 a, NI64 b);
N_LIB_PRIVATE N_NOINLINE(void, integerOutOfRangeError_urgsblG9a8f3sSX4FE53fig)(void);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(void, decRef_AT1eRuflKWyTTBdLjEDZbgsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, rtlAddZCT_AT1eRuflKWyTTBdLjEDZbg_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_Y66tOYFjgwJ0k4aLz4bc0Q)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_QFQqcLB3lgOdwipkv9a60xwsystem)(void* usr);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef_AT1eRuflKWyTTBdLjEDZbg_3system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
N_NIMCALL(NI, nimParseBiggestFloat)(NimStringDesc* s, NF* number, NI start);
N_LIB_PRIVATE N_NIMCALL(NI, rawParseUInt_aIj9c6LpxzonIV8kjAVwtEg)(NimStringDesc* s, NU64* b, NI start);
extern TNimType NTI_Ie1m0dv1ZHg72IgPRr1cDw_;
extern TNimType NTI_yoNlBGx0D2tRizIdhQuENw_;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
STRING_LITERAL(TM_vI9aZNKIcImom6dDyKXW1ZA_26, "Parsed integer outside of valid range", 37);

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

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
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

static N_INLINE(NIM_CHAR, toLower_eK9b2e49aPf4wAIdUwhbmZsQparseutils)(NIM_CHAR c) {
	NIM_CHAR result;
	result = (NIM_CHAR)0;
	{
		NI TM_vI9aZNKIcImom6dDyKXW1ZA_3;
		NI TM_vI9aZNKIcImom6dDyKXW1ZA_4;
		if (!(((NU8)(c)) >= ((NU8)(65)) && ((NU8)(c)) <= ((NU8)(90)))) goto LA3_;
		TM_vI9aZNKIcImom6dDyKXW1ZA_3 = subInt(((NU8)(c)), ((NI) 65));
		TM_vI9aZNKIcImom6dDyKXW1ZA_4 = addInt((NI)(TM_vI9aZNKIcImom6dDyKXW1ZA_3), ((NI) 97));
		result = ((NIM_CHAR) (((NI)chckRange((NI)(TM_vI9aZNKIcImom6dDyKXW1ZA_4), ((NI) 0), ((NI) 255)))));
	}
	goto LA1_;
	LA3_: ;
	{
		result = c;
	}
	LA1_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI, skipIgnoreCase_Z630VYBL4pZDWlOyn05K5w)(NimStringDesc* s, NimStringDesc* token, NI start) {
	NI result;
	result = (NI)0;
	{
		while (1) {
			NIM_BOOL T3_;
			NIM_BOOL T4_;
			NI TM_vI9aZNKIcImom6dDyKXW1ZA_2;
			NI TM_vI9aZNKIcImom6dDyKXW1ZA_5;
			NIM_CHAR T7_;
			NIM_CHAR T8_;
			NI TM_vI9aZNKIcImom6dDyKXW1ZA_6;
			T3_ = (NIM_BOOL)0;
			T4_ = (NIM_BOOL)0;
			TM_vI9aZNKIcImom6dDyKXW1ZA_2 = addInt(start, result);
			T4_ = ((NI)(TM_vI9aZNKIcImom6dDyKXW1ZA_2) < (s ? s->Sup.len : 0));
			if (!(T4_)) goto LA5_;
			T4_ = (result < (token ? token->Sup.len : 0));
			LA5_: ;
			T3_ = T4_;
			if (!(T3_)) goto LA6_;
			TM_vI9aZNKIcImom6dDyKXW1ZA_5 = addInt(result, start);
			if ((NU)((NI)(TM_vI9aZNKIcImom6dDyKXW1ZA_5)) >= (NU)(s ? s->Sup.len : 0)) raiseIndexError2((NI)(TM_vI9aZNKIcImom6dDyKXW1ZA_5),(s ? s->Sup.len : 0)-1);
			T7_ = (NIM_CHAR)0;
			T7_ = toLower_eK9b2e49aPf4wAIdUwhbmZsQparseutils(s->data[(NI)(TM_vI9aZNKIcImom6dDyKXW1ZA_5)]);
			if ((NU)(result) >= (NU)(token ? token->Sup.len : 0)) raiseIndexError2(result,(token ? token->Sup.len : 0)-1);
			T8_ = (NIM_CHAR)0;
			T8_ = toLower_eK9b2e49aPf4wAIdUwhbmZsQparseutils(token->data[result]);
			T3_ = ((NU8)(T7_) == (NU8)(T8_));
			LA6_: ;
			if (!T3_) goto LA2;
			TM_vI9aZNKIcImom6dDyKXW1ZA_6 = addInt(result, ((NI) 1));
			result = (NI)(TM_vI9aZNKIcImom6dDyKXW1ZA_6);
		} LA2: ;
	}
	{
		if (!!((result == (token ? token->Sup.len : 0)))) goto LA11_;
		result = ((NI) 0);
	}
	LA11_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI, parseHex_5URmSDed0NZg9au720T3U9aA)(NimStringDesc* s, NI* number, NI start, NI maxLen) {
	NI result;
	NI i;
	NI output;
	NIM_BOOL foundDigit;
	NI last;
	NI T1_;
	result = (NI)0;
	i = start;
	output = ((NI) 0);
	foundDigit = NIM_FALSE;
	T1_ = (NI)0;
	{
		if (!(maxLen == ((NI) 0))) goto LA4_;
		T1_ = (s ? s->Sup.len : 0);
	}
	goto LA2_;
	LA4_: ;
	{
		NI TM_vI9aZNKIcImom6dDyKXW1ZA_7;
		TM_vI9aZNKIcImom6dDyKXW1ZA_7 = addInt(i, maxLen);
		T1_ = (NI)(TM_vI9aZNKIcImom6dDyKXW1ZA_7);
	}
	LA2_: ;
	last = (((s ? s->Sup.len : 0) <= T1_) ? (s ? s->Sup.len : 0) : T1_);
	{
		NIM_BOOL T9_;
		NIM_BOOL T10_;
		NI TM_vI9aZNKIcImom6dDyKXW1ZA_8;
		NI TM_vI9aZNKIcImom6dDyKXW1ZA_9;
		NI TM_vI9aZNKIcImom6dDyKXW1ZA_10;
		T9_ = (NIM_BOOL)0;
		T10_ = (NIM_BOOL)0;
		TM_vI9aZNKIcImom6dDyKXW1ZA_8 = addInt(i, ((NI) 1));
		T10_ = ((NI)(TM_vI9aZNKIcImom6dDyKXW1ZA_8) < last);
		if (!(T10_)) goto LA11_;
		if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)) raiseIndexError2(i,(s ? s->Sup.len : 0)-1);
		T10_ = ((NU8)(s->data[i]) == (NU8)(48));
		LA11_: ;
		T9_ = T10_;
		if (!(T9_)) goto LA12_;
		TM_vI9aZNKIcImom6dDyKXW1ZA_9 = addInt(i, ((NI) 1));
		if ((NU)((NI)(TM_vI9aZNKIcImom6dDyKXW1ZA_9)) >= (NU)(s ? s->Sup.len : 0)) raiseIndexError2((NI)(TM_vI9aZNKIcImom6dDyKXW1ZA_9),(s ? s->Sup.len : 0)-1);
		T9_ = (((NU8)(s->data[(NI)(TM_vI9aZNKIcImom6dDyKXW1ZA_9)])) == ((NU8)(120)) || ((NU8)(s->data[(NI)(TM_vI9aZNKIcImom6dDyKXW1ZA_9)])) == ((NU8)(88)));
		LA12_: ;
		if (!T9_) goto LA13_;
		TM_vI9aZNKIcImom6dDyKXW1ZA_10 = addInt(i, ((NI) 2));
		i = (NI)(TM_vI9aZNKIcImom6dDyKXW1ZA_10);
	}
	goto LA7_;
	LA13_: ;
	{
		NIM_BOOL T16_;
		NI TM_vI9aZNKIcImom6dDyKXW1ZA_11;
		T16_ = (NIM_BOOL)0;
		T16_ = (i < last);
		if (!(T16_)) goto LA17_;
		if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)) raiseIndexError2(i,(s ? s->Sup.len : 0)-1);
		T16_ = ((NU8)(s->data[i]) == (NU8)(35));
		LA17_: ;
		if (!T16_) goto LA18_;
		TM_vI9aZNKIcImom6dDyKXW1ZA_11 = addInt(i, ((NI) 1));
		i = (NI)(TM_vI9aZNKIcImom6dDyKXW1ZA_11);
	}
	goto LA7_;
	LA18_: ;
	LA7_: ;
	{
		while (1) {
			NI TM_vI9aZNKIcImom6dDyKXW1ZA_17;
			if (!(i < last)) goto LA21;
			if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)) raiseIndexError2(i,(s ? s->Sup.len : 0)-1);
			switch (((NU8)(s->data[i]))) {
			case 95:
			{
			}
			break;
			case 48 ... 57:
			{
				NI TM_vI9aZNKIcImom6dDyKXW1ZA_12;
				if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)) raiseIndexError2(i,(s ? s->Sup.len : 0)-1);
				TM_vI9aZNKIcImom6dDyKXW1ZA_12 = subInt(((NU8)(s->data[i])), ((NI) 48));
				output = (NI)((NI)((NU64)(output) << (NU64)(((NI) 4))) | (NI)(TM_vI9aZNKIcImom6dDyKXW1ZA_12));
				foundDigit = NIM_TRUE;
			}
			break;
			case 97 ... 102:
			{
				NI TM_vI9aZNKIcImom6dDyKXW1ZA_13;
				NI TM_vI9aZNKIcImom6dDyKXW1ZA_14;
				if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)) raiseIndexError2(i,(s ? s->Sup.len : 0)-1);
				TM_vI9aZNKIcImom6dDyKXW1ZA_13 = subInt(((NU8)(s->data[i])), ((NI) 97));
				TM_vI9aZNKIcImom6dDyKXW1ZA_14 = addInt((NI)(TM_vI9aZNKIcImom6dDyKXW1ZA_13), ((NI) 10));
				output = (NI)((NI)((NU64)(output) << (NU64)(((NI) 4))) | (NI)(TM_vI9aZNKIcImom6dDyKXW1ZA_14));
				foundDigit = NIM_TRUE;
			}
			break;
			case 65 ... 70:
			{
				NI TM_vI9aZNKIcImom6dDyKXW1ZA_15;
				NI TM_vI9aZNKIcImom6dDyKXW1ZA_16;
				if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)) raiseIndexError2(i,(s ? s->Sup.len : 0)-1);
				TM_vI9aZNKIcImom6dDyKXW1ZA_15 = subInt(((NU8)(s->data[i])), ((NI) 65));
				TM_vI9aZNKIcImom6dDyKXW1ZA_16 = addInt((NI)(TM_vI9aZNKIcImom6dDyKXW1ZA_15), ((NI) 10));
				output = (NI)((NI)((NU64)(output) << (NU64)(((NI) 4))) | (NI)(TM_vI9aZNKIcImom6dDyKXW1ZA_16));
				foundDigit = NIM_TRUE;
			}
			break;
			default:
			{
				goto LA20;
			}
			break;
			}
			TM_vI9aZNKIcImom6dDyKXW1ZA_17 = addInt(i, ((NI) 1));
			i = (NI)(TM_vI9aZNKIcImom6dDyKXW1ZA_17);
		} LA21: ;
	} LA20: ;
	{
		NI TM_vI9aZNKIcImom6dDyKXW1ZA_18;
		if (!foundDigit) goto LA29_;
		(*number) = output;
		TM_vI9aZNKIcImom6dDyKXW1ZA_18 = subInt(i, start);
		result = (NI)(TM_vI9aZNKIcImom6dDyKXW1ZA_18);
	}
	LA29_: ;
	return result;
}

static N_INLINE(NI64, addInt64)(NI64 a, NI64 b) {
	NI64 result;
{	result = (NI64)0;
	result = (NI64)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (IL64(0) <= (NI64)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (IL64(0) <= (NI64)(result ^ b));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI64, divInt64)(NI64 a, NI64 b) {
	NI64 result;
{	result = (NI64)0;
	{
		if (!(b == IL64(0))) goto LA3_;
		raiseDivByZero();
	}
	LA3_: ;
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = (a == (IL64(-9223372036854775807) - IL64(1)));
		if (!(T7_)) goto LA8_;
		T7_ = (b == IL64(-1));
		LA8_: ;
		if (!T7_) goto LA9_;
		raiseOverflow();
	}
	LA9_: ;
	result = (NI64)(a / b);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI64, subInt64)(NI64 a, NI64 b) {
	NI64 result;
{	result = (NI64)0;
	result = (NI64)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (IL64(0) <= (NI64)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (IL64(0) <= (NI64)(result ^ (NI64)((NU64) ~(b))));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(void, rtlAddZCT_AT1eRuflKWyTTBdLjEDZbg_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	addZCT_Y66tOYFjgwJ0k4aLz4bc0Q((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
}

static N_INLINE(void, decRef_AT1eRuflKWyTTBdLjEDZbgsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = (NI)((NU64)((*c).refcount) - (NU64)(((NI) 8)));
	{
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		rtlAddZCT_AT1eRuflKWyTTBdLjEDZbg_2system(c);
	}
	LA3_: ;
}

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_QFQqcLB3lgOdwipkv9a60xwsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (ptrdiff_t) (usr))) - (NU64)(((NI) 16)))));
	return result;
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T1_;
	T1_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	T1_ = usrToCell_QFQqcLB3lgOdwipkv9a60xwsystem(p);
	decRef_AT1eRuflKWyTTBdLjEDZbgsystem(T1_);
}

static N_INLINE(void, incRef_AT1eRuflKWyTTBdLjEDZbg_3system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell_QFQqcLB3lgOdwipkv9a60xwsystem(src);
		incRef_AT1eRuflKWyTTBdLjEDZbg_3system(T5_);
	}
	LA3_: ;
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell_QFQqcLB3lgOdwipkv9a60xwsystem((*dest));
		decRef_AT1eRuflKWyTTBdLjEDZbgsystem(T10_);
	}
	LA8_: ;
	(*dest) = src;
}

N_LIB_PRIVATE N_NOINLINE(void, integerOutOfRangeError_urgsblG9a8f3sSX4FE53fig)(void) {
	tyObject_ValueError_yoNlBGx0D2tRizIdhQuENw* e;
	NimStringDesc* T1_;
	e = (tyObject_ValueError_yoNlBGx0D2tRizIdhQuENw*)0;
	e = (tyObject_ValueError_yoNlBGx0D2tRizIdhQuENw*) newObj((&NTI_Ie1m0dv1ZHg72IgPRr1cDw_), sizeof(tyObject_ValueError_yoNlBGx0D2tRizIdhQuENw));
	(*e).Sup.Sup.Sup.m_type = (&NTI_yoNlBGx0D2tRizIdhQuENw_);
	(*e).Sup.Sup.name = "ValueError";
	T1_ = (NimStringDesc*)0;
	T1_ = (*e).Sup.Sup.message; (*e).Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TM_vI9aZNKIcImom6dDyKXW1ZA_26));
	if (T1_) nimGCunrefNoCycle(T1_);
	asgnRef((void**) (&(*e).Sup.Sup.parent), NIM_NIL);
	raiseExceptionEx((Exception*)e, "ValueError", "integerOutOfRangeError", "/Users/andreasrumpf-mac/projects/nim/lib/pure/parseutils.nim", 401);
}

N_LIB_PRIVATE N_NIMCALL(NI, rawParseInt_oz568vhg7PZ19ak9aiwQxGYw)(NimStringDesc* s, NI64* b, NI start) {
	NI result;
	NI64 sign;
	NI i;
	result = (NI)0;
	sign = IL64(-1);
	i = start;
	{
		if (!(i < (s ? s->Sup.len : 0))) goto LA3_;
		{
			NI TM_vI9aZNKIcImom6dDyKXW1ZA_19;
			if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)) raiseIndexError2(i,(s ? s->Sup.len : 0)-1);
			if (!((NU8)(s->data[i]) == (NU8)(43))) goto LA7_;
			TM_vI9aZNKIcImom6dDyKXW1ZA_19 = addInt(i, ((NI) 1));
			i = (NI)(TM_vI9aZNKIcImom6dDyKXW1ZA_19);
		}
		goto LA5_;
		LA7_: ;
		{
			NI TM_vI9aZNKIcImom6dDyKXW1ZA_20;
			if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)) raiseIndexError2(i,(s ? s->Sup.len : 0)-1);
			if (!((NU8)(s->data[i]) == (NU8)(45))) goto LA10_;
			TM_vI9aZNKIcImom6dDyKXW1ZA_20 = addInt(i, ((NI) 1));
			i = (NI)(TM_vI9aZNKIcImom6dDyKXW1ZA_20);
			sign = IL64(1);
		}
		goto LA5_;
		LA10_: ;
		LA5_: ;
	}
	LA3_: ;
	{
		NIM_BOOL T14_;
		T14_ = (NIM_BOOL)0;
		T14_ = (i < (s ? s->Sup.len : 0));
		if (!(T14_)) goto LA15_;
		if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)) raiseIndexError2(i,(s ? s->Sup.len : 0)-1);
		T14_ = (((NU8)(s->data[i])) >= ((NU8)(48)) && ((NU8)(s->data[i])) <= ((NU8)(57)));
		LA15_: ;
		if (!T14_) goto LA16_;
		(*b) = IL64(0);
		{
			while (1) {
				NIM_BOOL T20_;
				NI c;
				NI TM_vI9aZNKIcImom6dDyKXW1ZA_21;
				NI TM_vI9aZNKIcImom6dDyKXW1ZA_27;
				T20_ = (NIM_BOOL)0;
				T20_ = (i < (s ? s->Sup.len : 0));
				if (!(T20_)) goto LA21_;
				if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)) raiseIndexError2(i,(s ? s->Sup.len : 0)-1);
				T20_ = (((NU8)(s->data[i])) >= ((NU8)(48)) && ((NU8)(s->data[i])) <= ((NU8)(57)));
				LA21_: ;
				if (!T20_) goto LA19;
				if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)) raiseIndexError2(i,(s ? s->Sup.len : 0)-1);
				TM_vI9aZNKIcImom6dDyKXW1ZA_21 = subInt(((NU8)(s->data[i])), ((NI) 48));
				c = (NI)(TM_vI9aZNKIcImom6dDyKXW1ZA_21);
				{
					NI64 TM_vI9aZNKIcImom6dDyKXW1ZA_22;
					NI64 TM_vI9aZNKIcImom6dDyKXW1ZA_23;
					NI64 TM_vI9aZNKIcImom6dDyKXW1ZA_24;
					NI64 TM_vI9aZNKIcImom6dDyKXW1ZA_25;
					TM_vI9aZNKIcImom6dDyKXW1ZA_22 = addInt64((IL64(-9223372036854775807) - IL64(1)), ((NI64) (c)));
					TM_vI9aZNKIcImom6dDyKXW1ZA_23 = divInt64((NI64)(TM_vI9aZNKIcImom6dDyKXW1ZA_22), IL64(10));
					if (!((NI64)(TM_vI9aZNKIcImom6dDyKXW1ZA_23) <= (*b))) goto LA24_;
					TM_vI9aZNKIcImom6dDyKXW1ZA_24 = mulInt64((*b), IL64(10));
					TM_vI9aZNKIcImom6dDyKXW1ZA_25 = subInt64((NI64)(TM_vI9aZNKIcImom6dDyKXW1ZA_24), ((NI64) (c)));
					(*b) = (NI64)(TM_vI9aZNKIcImom6dDyKXW1ZA_25);
				}
				goto LA22_;
				LA24_: ;
				{
					integerOutOfRangeError_urgsblG9a8f3sSX4FE53fig();
				}
				LA22_: ;
				TM_vI9aZNKIcImom6dDyKXW1ZA_27 = addInt(i, ((NI) 1));
				i = (NI)(TM_vI9aZNKIcImom6dDyKXW1ZA_27);
				{
					while (1) {
						NIM_BOOL T29_;
						NI TM_vI9aZNKIcImom6dDyKXW1ZA_28;
						T29_ = (NIM_BOOL)0;
						T29_ = (i < (s ? s->Sup.len : 0));
						if (!(T29_)) goto LA30_;
						if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)) raiseIndexError2(i,(s ? s->Sup.len : 0)-1);
						T29_ = ((NU8)(s->data[i]) == (NU8)(95));
						LA30_: ;
						if (!T29_) goto LA28;
						TM_vI9aZNKIcImom6dDyKXW1ZA_28 = addInt(i, ((NI) 1));
						i = (NI)(TM_vI9aZNKIcImom6dDyKXW1ZA_28);
					} LA28: ;
				}
			} LA19: ;
		}
		{
			NIM_BOOL T33_;
			T33_ = (NIM_BOOL)0;
			T33_ = (sign == IL64(-1));
			if (!(T33_)) goto LA34_;
			T33_ = ((*b) == (IL64(-9223372036854775807) - IL64(1)));
			LA34_: ;
			if (!T33_) goto LA35_;
			integerOutOfRangeError_urgsblG9a8f3sSX4FE53fig();
		}
		goto LA31_;
		LA35_: ;
		{
			NI64 TM_vI9aZNKIcImom6dDyKXW1ZA_29;
			NI TM_vI9aZNKIcImom6dDyKXW1ZA_30;
			TM_vI9aZNKIcImom6dDyKXW1ZA_29 = mulInt64((*b), sign);
			(*b) = (NI64)(TM_vI9aZNKIcImom6dDyKXW1ZA_29);
			TM_vI9aZNKIcImom6dDyKXW1ZA_30 = subInt(i, start);
			result = (NI)(TM_vI9aZNKIcImom6dDyKXW1ZA_30);
		}
		LA31_: ;
	}
	LA16_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI, npuParseBiggestInt)(NimStringDesc* s, NI64* number, NI start) {
	NI result;
	NI64 res;
	result = (NI)0;
	res = (NI64)0;
	result = rawParseInt_oz568vhg7PZ19ak9aiwQxGYw(s, (&res), start);
	{
		if (!!((result == ((NI) 0)))) goto LA3_;
		(*number) = res;
	}
	LA3_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI, npuParseInt)(NimStringDesc* s, NI* number, NI start) {
	NI result;
	NI64 res;
	result = (NI)0;
	res = (NI64)0;
	result = npuParseBiggestInt(s, (&res), start);
	{
		if (!!((result == ((NI) 0)))) goto LA3_;
		(*number) = ((NI) (res));
	}
	LA3_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI, npuParseFloat)(NimStringDesc* s, NF* number, NI start) {
	NI result;
	NF bf;
	result = (NI)0;
	bf = (NF)0;
	result = nimParseBiggestFloat(s, (&bf), start);
	{
		if (!!((result == ((NI) 0)))) goto LA3_;
		(*number) = bf;
	}
	LA3_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI, rawParseUInt_aIj9c6LpxzonIV8kjAVwtEg)(NimStringDesc* s, NU64* b, NI start) {
	NI result;
	NU64 res;
	NU64 prev;
	NI i;
	result = (NI)0;
	res = 0ULL;
	prev = 0ULL;
	i = start;
	{
		NIM_BOOL T3_;
		NIM_BOOL T4_;
		NI TM_vI9aZNKIcImom6dDyKXW1ZA_31;
		NI TM_vI9aZNKIcImom6dDyKXW1ZA_32;
		T3_ = (NIM_BOOL)0;
		T4_ = (NIM_BOOL)0;
		TM_vI9aZNKIcImom6dDyKXW1ZA_31 = subInt((s ? s->Sup.len : 0), ((NI) 1));
		T4_ = (i < (NI)(TM_vI9aZNKIcImom6dDyKXW1ZA_31));
		if (!(T4_)) goto LA5_;
		if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)) raiseIndexError2(i,(s ? s->Sup.len : 0)-1);
		T4_ = ((NU8)(s->data[i]) == (NU8)(45));
		LA5_: ;
		T3_ = T4_;
		if (!(T3_)) goto LA6_;
		TM_vI9aZNKIcImom6dDyKXW1ZA_32 = addInt(i, ((NI) 1));
		if ((NU)((NI)(TM_vI9aZNKIcImom6dDyKXW1ZA_32)) >= (NU)(s ? s->Sup.len : 0)) raiseIndexError2((NI)(TM_vI9aZNKIcImom6dDyKXW1ZA_32),(s ? s->Sup.len : 0)-1);
		T3_ = (((NU8)(s->data[(NI)(TM_vI9aZNKIcImom6dDyKXW1ZA_32)])) >= ((NU8)(48)) && ((NU8)(s->data[(NI)(TM_vI9aZNKIcImom6dDyKXW1ZA_32)])) <= ((NU8)(57)));
		LA6_: ;
		if (!T3_) goto LA7_;
		integerOutOfRangeError_urgsblG9a8f3sSX4FE53fig();
	}
	LA7_: ;
	{
		NIM_BOOL T11_;
		NI TM_vI9aZNKIcImom6dDyKXW1ZA_33;
		T11_ = (NIM_BOOL)0;
		T11_ = (i < (s ? s->Sup.len : 0));
		if (!(T11_)) goto LA12_;
		if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)) raiseIndexError2(i,(s ? s->Sup.len : 0)-1);
		T11_ = ((NU8)(s->data[i]) == (NU8)(43));
		LA12_: ;
		if (!T11_) goto LA13_;
		TM_vI9aZNKIcImom6dDyKXW1ZA_33 = addInt(i, ((NI) 1));
		i = (NI)(TM_vI9aZNKIcImom6dDyKXW1ZA_33);
	}
	LA13_: ;
	{
		NIM_BOOL T17_;
		NI TM_vI9aZNKIcImom6dDyKXW1ZA_37;
		T17_ = (NIM_BOOL)0;
		T17_ = (i < (s ? s->Sup.len : 0));
		if (!(T17_)) goto LA18_;
		if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)) raiseIndexError2(i,(s ? s->Sup.len : 0)-1);
		T17_ = (((NU8)(s->data[i])) >= ((NU8)(48)) && ((NU8)(s->data[i])) <= ((NU8)(57)));
		LA18_: ;
		if (!T17_) goto LA19_;
		(*b) = 0ULL;
		{
			while (1) {
				NIM_BOOL T23_;
				NI TM_vI9aZNKIcImom6dDyKXW1ZA_34;
				NI TM_vI9aZNKIcImom6dDyKXW1ZA_35;
				T23_ = (NIM_BOOL)0;
				T23_ = (i < (s ? s->Sup.len : 0));
				if (!(T23_)) goto LA24_;
				if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)) raiseIndexError2(i,(s ? s->Sup.len : 0)-1);
				T23_ = (((NU8)(s->data[i])) >= ((NU8)(48)) && ((NU8)(s->data[i])) <= ((NU8)(57)));
				LA24_: ;
				if (!T23_) goto LA22;
				prev = res;
				if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)) raiseIndexError2(i,(s ? s->Sup.len : 0)-1);
				TM_vI9aZNKIcImom6dDyKXW1ZA_34 = subInt(((NU8)(s->data[i])), ((NI) 48));
				res = (NU64)((NU64)((NU64)((NU64)(res) * (NU64)(((NI) 10)))) + (NU64)(((NU64) ((NI)(TM_vI9aZNKIcImom6dDyKXW1ZA_34)))));
				{
					if (!((NU64)(res) < (NU64)(prev))) goto LA27_;
					integerOutOfRangeError_urgsblG9a8f3sSX4FE53fig();
				}
				LA27_: ;
				TM_vI9aZNKIcImom6dDyKXW1ZA_35 = addInt(i, ((NI) 1));
				i = (NI)(TM_vI9aZNKIcImom6dDyKXW1ZA_35);
				{
					while (1) {
						NIM_BOOL T31_;
						NI TM_vI9aZNKIcImom6dDyKXW1ZA_36;
						T31_ = (NIM_BOOL)0;
						T31_ = (i < (s ? s->Sup.len : 0));
						if (!(T31_)) goto LA32_;
						if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)) raiseIndexError2(i,(s ? s->Sup.len : 0)-1);
						T31_ = ((NU8)(s->data[i]) == (NU8)(95));
						LA32_: ;
						if (!T31_) goto LA30;
						TM_vI9aZNKIcImom6dDyKXW1ZA_36 = addInt(i, ((NI) 1));
						i = (NI)(TM_vI9aZNKIcImom6dDyKXW1ZA_36);
					} LA30: ;
				}
			} LA22: ;
		}
		(*b) = res;
		TM_vI9aZNKIcImom6dDyKXW1ZA_37 = subInt(i, start);
		result = (NI)(TM_vI9aZNKIcImom6dDyKXW1ZA_37);
	}
	LA19_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI, npuParseBiggestUInt)(NimStringDesc* s, NU64* number, NI start) {
	NI result;
	NU64 res;
	result = (NI)0;
	res = (NU64)0;
	result = rawParseUInt_aIj9c6LpxzonIV8kjAVwtEg(s, (&res), start);
	{
		if (!!((result == ((NI) 0)))) goto LA3_;
		(*number) = res;
	}
	LA3_: ;
	return result;
}
