/* Generated by Nim Compiler v0.19.9 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
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
typedef struct tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg;
typedef struct tySequence_4eRCaZmrYLLw2k30GPTiMw tySequence_4eRCaZmrYLLw2k30GPTiMw;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyTuple_QeWl6B6ffS4pU6WWrtcrDw tyTuple_QeWl6B6ffS4pU6WWrtcrDw;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
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
#  define nimfr_(proc, file) \
    TFrame FR_; \
    FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = 0; nimFrame(&FR_);

#  define nimfrs_(proc, file, slots, length) \
    struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename; NI len; VarSlot s[slots];} FR_; \
    FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = length; nimFrame((TFrame*)&FR_);

#  define nimln_(n, file) \
    FR_.line = n; FR_.filename = file;
struct tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg {
tySequence_4eRCaZmrYLLw2k30GPTiMw* data;
NI counter;
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
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyTuple_QeWl6B6ffS4pU6WWrtcrDw {
NI Field0;
NimStringDesc* Field1;
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
struct tySequence_4eRCaZmrYLLw2k30GPTiMw {
  TGenericSeq Sup;
  tyTuple_QeWl6B6ffS4pU6WWrtcrDw data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tySequence_4eRCaZmrYLLw2k30GPTiMw)(void* p, NI op);
N_NIMCALL(void, genericReset)(void* dest, TNimType* mt);
N_LIB_PRIVATE N_NIMCALL(void, init_UVv1vP4Rs5r318Yb4sG89cg)(tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg* s, NI initialSize);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(NI, rawGet_m836DeNlaUrjg8O9bbd1KEAsets)(tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg s, NimStringDesc* key, NI* hc);
N_LIB_PRIVATE N_NIMCALL(NI, hash_uBstFm5SYVQeOL3j9c9bc58A)(NimStringDesc* x);
static N_INLINE(NIM_BOOL, isFilled_UshbaKGVTNLaJdFZ6zcwswsets)(NI hcode);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, equalMem_fmeFeLBvgmAHG9bC8ETS9bYQropes)(void* a, void* b, NI size);
static N_INLINE(int, nimCmpMem)(void* a, void* b, NI size);
static N_INLINE(NI, nextTry_iM1OyigHU0QXXBzsM5QjYAsets)(NI h, NI maxHash);
static N_INLINE(NIM_BOOL, mustRehash_flzFqVXoQqeNJHN4qDyOhwsets)(NI length, NI counter);
N_LIB_PRIVATE N_NIMCALL(void, enlarge_7fod5mi769ccNxcrcTlPGRA)(tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg* s);
static N_INLINE(NI, rawGetKnownHC_cz4TnMUYq4hf3k8HCVjZ4Qsets)(tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg s, NimStringDesc* key, NI hc);
N_LIB_PRIVATE N_NIMCALL(void, rawInsert_R4jWFwYEplKlo3sOTt20wA)(tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg* s, tySequence_4eRCaZmrYLLw2k30GPTiMw** data, NimStringDesc* key, NI hc, NI h);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached_II46IjNZztN9bmbxUD8dt8g_2)(void);
TNimType NTI_CD8Dpv0WGmASelVaNSo6zg_;
TNimType NTI_QeWl6B6ffS4pU6WWrtcrDw_;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA_;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg_;
TNimType NTI_4eRCaZmrYLLw2k30GPTiMw_;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
static N_NIMCALL(void, Marker_tySequence_4eRCaZmrYLLw2k30GPTiMw)(void* p, NI op) {
	tySequence_4eRCaZmrYLLw2k30GPTiMw* a;
	NI T1_;
	a = (tySequence_4eRCaZmrYLLw2k30GPTiMw*)p;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < (a ? a->Sup.len : 0); T1_++) {
	nimGCvisit((void*)a->data[T1_].Field1, op);
	}
}

N_LIB_PRIVATE N_NIMCALL(void, init_UVv1vP4Rs5r318Yb4sG89cg)(tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg* s, NI initialSize) {
	(*s).counter = ((NI) 0);
	unsureAsgnRef((void**) (&(*s).data), (tySequence_4eRCaZmrYLLw2k30GPTiMw*) newSeq((&NTI_4eRCaZmrYLLw2k30GPTiMw_), ((NI) (initialSize))));
}

N_LIB_PRIVATE N_NIMCALL(void, initSet_ahdFNo5R7t2w9bzcreVgvTA)(NI initialSize, tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg* Result) {
	genericReset((void*)Result, (&NTI_CD8Dpv0WGmASelVaNSo6zg_));
	init_UVv1vP4Rs5r318Yb4sG89cg(Result, initialSize);
}

static N_INLINE(NIM_BOOL, isFilled_UshbaKGVTNLaJdFZ6zcwswsets)(NI hcode) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = !((hcode == ((NI) 0)));
	return result;
}

static N_INLINE(int, nimCmpMem)(void* a, void* b, NI size) {
	int result;
	result = (int)0;
	result = memcmp(a, b, ((size_t) (size)));
	return result;
}

static N_INLINE(NIM_BOOL, equalMem_fmeFeLBvgmAHG9bC8ETS9bYQropes)(void* a, void* b, NI size) {
	NIM_BOOL result;
	int T1_;
	result = (NIM_BOOL)0;
	T1_ = (int)0;
	T1_ = nimCmpMem(a, b, size);
	result = (T1_ == ((NI32) 0));
	return result;
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NI alen;
	NI blen;
{	result = (NIM_BOOL)0;
	alen = (a ? a->Sup.len : 0);
	blen = (b ? b->Sup.len : 0);
	{
		if (!(alen == blen)) goto LA3_;
		{
			if (!(alen == ((NI) 0))) goto LA7_;
			result = NIM_TRUE;
			goto BeforeRet_;
		}
		LA7_: ;
		result = equalMem_fmeFeLBvgmAHG9bC8ETS9bYQropes(((void*) ((&a->data[((NI) 0)]))), ((void*) ((&b->data[((NI) 0)]))), ((NI) (alen)));
		goto BeforeRet_;
	}
	LA3_: ;
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, nextTry_iM1OyigHU0QXXBzsM5QjYAsets)(NI h, NI maxHash) {
	NI result;
	result = (NI)0;
	result = (NI)((NI)(h + ((NI) 1)) & maxHash);
	return result;
}

static N_INLINE(NI, rawGet_m836DeNlaUrjg8O9bbd1KEAsets)(tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg s, NimStringDesc* key, NI* hc) {
	NI result;
	NI hc_2;
	NI h;
	NI T5_;
{	result = (NI)0;
	hc_2 = hash_uBstFm5SYVQeOL3j9c9bc58A(key);
	{
		if (!(hc_2 == ((NI) 0))) goto LA3_;
		hc_2 = ((NI) 314159265);
	}
	LA3_: ;
	(*hc) = hc_2;
	T5_ = ((s.data ? s.data->Sup.len : 0)-1);
	h = (NI)((*hc) & T5_);
	{
		while (1) {
			NIM_BOOL T8_;
			NI T15_;
			T8_ = (NIM_BOOL)0;
			T8_ = isFilled_UshbaKGVTNLaJdFZ6zcwswsets(s.data->data[h].Field0);
			if (!T8_) goto LA7;
			{
				NIM_BOOL T11_;
				T11_ = (NIM_BOOL)0;
				T11_ = (s.data->data[h].Field0 == (*hc));
				if (!(T11_)) goto LA12_;
				T11_ = eqStrings(s.data->data[h].Field1, key);
				LA12_: ;
				if (!T11_) goto LA13_;
				result = h;
				goto BeforeRet_;
			}
			LA13_: ;
			T15_ = ((s.data ? s.data->Sup.len : 0)-1);
			h = nextTry_iM1OyigHU0QXXBzsM5QjYAsets(h, T15_);
		} LA7: ;
	}
	result = (NI)(((NI) -1) - h);
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NIM_BOOL, mustRehash_flzFqVXoQqeNJHN4qDyOhwsets)(NI length, NI counter) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = ((NI)(length * ((NI) 2)) < (NI)(counter * ((NI) 3)));
	if (T1_) goto LA2_;
	T1_ = ((NI)(length - counter) < ((NI) 4));
	LA2_: ;
	result = T1_;
	return result;
}

static N_INLINE(NI, rawGetKnownHC_cz4TnMUYq4hf3k8HCVjZ4Qsets)(tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg s, NimStringDesc* key, NI hc) {
	NI result;
	NI h;
	NI T1_;
{	result = (NI)0;
	T1_ = ((s.data ? s.data->Sup.len : 0)-1);
	h = (NI)(hc & T1_);
	{
		while (1) {
			NIM_BOOL T4_;
			NI T11_;
			T4_ = (NIM_BOOL)0;
			T4_ = isFilled_UshbaKGVTNLaJdFZ6zcwswsets(s.data->data[h].Field0);
			if (!T4_) goto LA3;
			{
				NIM_BOOL T7_;
				T7_ = (NIM_BOOL)0;
				T7_ = (s.data->data[h].Field0 == hc);
				if (!(T7_)) goto LA8_;
				T7_ = eqStrings(s.data->data[h].Field1, key);
				LA8_: ;
				if (!T7_) goto LA9_;
				result = h;
				goto BeforeRet_;
			}
			LA9_: ;
			T11_ = ((s.data ? s.data->Sup.len : 0)-1);
			h = nextTry_iM1OyigHU0QXXBzsM5QjYAsets(h, T11_);
		} LA3: ;
	}
	result = (NI)(((NI) -1) - h);
	}BeforeRet_: ;
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
}

static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = (NI)((NU64)((*c).refcount) - (NU64)(((NI) 8)));
	{
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
}

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (ptrdiff_t) (usr))) - (NU64)(((NI) 16)))));
	return result;
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T1_;
	T1_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	T1_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(p);
	decRef_MV4BBk6J1qu70IbBxwEn4wsystem(T1_);
}

N_LIB_PRIVATE N_NIMCALL(void, rawInsert_R4jWFwYEplKlo3sOTt20wA)(tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg* s, tySequence_4eRCaZmrYLLw2k30GPTiMw** data, NimStringDesc* key, NI hc, NI h) {
	NimStringDesc* T1_;
	T1_ = (NimStringDesc*)0;
	T1_ = (*data)->data[h].Field1; (*data)->data[h].Field1 = copyStringRC1(key);
	if (T1_) nimGCunrefNoCycle(T1_);
	(*data)->data[h].Field0 = hc;
}

N_LIB_PRIVATE N_NIMCALL(void, enlarge_7fod5mi769ccNxcrcTlPGRA)(tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg* s) {
	tySequence_4eRCaZmrYLLw2k30GPTiMw* n;
	NI T1_;
	tySequence_4eRCaZmrYLLw2k30GPTiMw* T2_;
	n = (tySequence_4eRCaZmrYLLw2k30GPTiMw*)0;
	T1_ = ((*s).data ? (*s).data->Sup.len : 0);
	n = (tySequence_4eRCaZmrYLLw2k30GPTiMw*) newSeq((&NTI_4eRCaZmrYLLw2k30GPTiMw_), ((NI) ((NI)(T1_ * ((NI) 2)))));
	T2_ = (tySequence_4eRCaZmrYLLw2k30GPTiMw*)0;
	T2_ = (*s).data;
	unsureAsgnRef((void**) (&(*s).data), n);
	n = T2_;
	{
		NI i;
		NI colontmp_;
		NI T4_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		T4_ = ((n ? n->Sup.len : 0)-1);
		colontmp_ = T4_;
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA6;
				i = res;
				{
					NIM_BOOL T9_;
					NI j;
					NI T12_;
					T9_ = (NIM_BOOL)0;
					T9_ = isFilled_UshbaKGVTNLaJdFZ6zcwswsets(n->data[i].Field0);
					if (!T9_) goto LA10_;
					T12_ = (NI)0;
					T12_ = rawGetKnownHC_cz4TnMUYq4hf3k8HCVjZ4Qsets((*s), n->data[i].Field1, n->data[i].Field0);
					j = (NI)(((NI) -1) - T12_);
					rawInsert_R4jWFwYEplKlo3sOTt20wA(s, (&(*s).data), n->data[i].Field1, n->data[i].Field0, j);
				}
				LA10_: ;
				res += ((NI) 1);
			} LA6: ;
		}
	}
}

N_LIB_PRIVATE N_NIMCALL(void, incl_Fs4Dioxbcg40uW9aOJJCYBQ)(tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg* s, NimStringDesc* key) {
	NI hc;
	NI index;
	hc = (NI)0;
	index = rawGet_m836DeNlaUrjg8O9bbd1KEAsets((*s), key, (&hc));
	{
		if (!(index < ((NI) 0))) goto LA3_;
		{
			NI T7_;
			NIM_BOOL T8_;
			T7_ = ((*s).data ? (*s).data->Sup.len : 0);
			T8_ = (NIM_BOOL)0;
			T8_ = mustRehash_flzFqVXoQqeNJHN4qDyOhwsets(T7_, (*s).counter);
			if (!T8_) goto LA9_;
			enlarge_7fod5mi769ccNxcrcTlPGRA(s);
			index = rawGetKnownHC_cz4TnMUYq4hf3k8HCVjZ4Qsets((*s), key, hc);
		}
		LA9_: ;
		rawInsert_R4jWFwYEplKlo3sOTt20wA(s, (&(*s).data), key, hc, (NI)(((NI) -1) - index));
		(*s).counter += ((NI) 1);
	}
	LA3_: ;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, contains_qPuW69bRJcGQk5Myyhjt9czg)(tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg s, NimStringDesc* key) {
	NIM_BOOL result;
	NI hc;
	NI index;
	result = (NIM_BOOL)0;
	hc = (NI)0;
	index = rawGet_m836DeNlaUrjg8O9bbd1KEAsets(s, key, (&hc));
	result = (((NI) 0) <= index);
	return result;
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
	T1_ = (NI)0;
	{
		if (!(framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;
		T1_ = ((NI) 0);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) ((NI16)((*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2_: ;
	(*s).calldepth = ((NI16) (T1_));
	(*s).prev = framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) (((NI) 2000))))) goto LA9_;
		callDepthLimitReached_II46IjNZztN9bmbxUD8dt8g_2();
	}
	LA9_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_setsDatInit000)(void) {
static TNimNode* TM_0JXiWyhP5OCO8jWMA6sb1w_2[2];
static TNimNode* TM_0JXiWyhP5OCO8jWMA6sb1w_3[2];
static TNimNode TM_0JXiWyhP5OCO8jWMA6sb1w_0[6];
NTI_CD8Dpv0WGmASelVaNSo6zg_.size = sizeof(tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg);
NTI_CD8Dpv0WGmASelVaNSo6zg_.kind = 18;
NTI_CD8Dpv0WGmASelVaNSo6zg_.base = 0;
NTI_CD8Dpv0WGmASelVaNSo6zg_.flags = 2;
TM_0JXiWyhP5OCO8jWMA6sb1w_2[0] = &TM_0JXiWyhP5OCO8jWMA6sb1w_0[1];
NTI_QeWl6B6ffS4pU6WWrtcrDw_.size = sizeof(tyTuple_QeWl6B6ffS4pU6WWrtcrDw);
NTI_QeWl6B6ffS4pU6WWrtcrDw_.kind = 18;
NTI_QeWl6B6ffS4pU6WWrtcrDw_.base = 0;
NTI_QeWl6B6ffS4pU6WWrtcrDw_.flags = 2;
TM_0JXiWyhP5OCO8jWMA6sb1w_3[0] = &TM_0JXiWyhP5OCO8jWMA6sb1w_0[3];
TM_0JXiWyhP5OCO8jWMA6sb1w_0[3].kind = 1;
TM_0JXiWyhP5OCO8jWMA6sb1w_0[3].offset = offsetof(tyTuple_QeWl6B6ffS4pU6WWrtcrDw, Field0);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[3].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[3].name = "Field0";
TM_0JXiWyhP5OCO8jWMA6sb1w_3[1] = &TM_0JXiWyhP5OCO8jWMA6sb1w_0[4];
TM_0JXiWyhP5OCO8jWMA6sb1w_0[4].kind = 1;
TM_0JXiWyhP5OCO8jWMA6sb1w_0[4].offset = offsetof(tyTuple_QeWl6B6ffS4pU6WWrtcrDw, Field1);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[4].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[4].name = "Field1";
TM_0JXiWyhP5OCO8jWMA6sb1w_0[2].len = 2; TM_0JXiWyhP5OCO8jWMA6sb1w_0[2].kind = 2; TM_0JXiWyhP5OCO8jWMA6sb1w_0[2].sons = &TM_0JXiWyhP5OCO8jWMA6sb1w_3[0];
NTI_QeWl6B6ffS4pU6WWrtcrDw_.node = &TM_0JXiWyhP5OCO8jWMA6sb1w_0[2];
NTI_4eRCaZmrYLLw2k30GPTiMw_.size = sizeof(tySequence_4eRCaZmrYLLw2k30GPTiMw*);
NTI_4eRCaZmrYLLw2k30GPTiMw_.kind = 24;
NTI_4eRCaZmrYLLw2k30GPTiMw_.base = (&NTI_QeWl6B6ffS4pU6WWrtcrDw_);
NTI_4eRCaZmrYLLw2k30GPTiMw_.flags = 2;
NTI_4eRCaZmrYLLw2k30GPTiMw_.marker = Marker_tySequence_4eRCaZmrYLLw2k30GPTiMw;
TM_0JXiWyhP5OCO8jWMA6sb1w_0[1].kind = 1;
TM_0JXiWyhP5OCO8jWMA6sb1w_0[1].offset = offsetof(tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg, data);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[1].typ = (&NTI_4eRCaZmrYLLw2k30GPTiMw_);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[1].name = "data";
TM_0JXiWyhP5OCO8jWMA6sb1w_2[1] = &TM_0JXiWyhP5OCO8jWMA6sb1w_0[5];
TM_0JXiWyhP5OCO8jWMA6sb1w_0[5].kind = 1;
TM_0JXiWyhP5OCO8jWMA6sb1w_0[5].offset = offsetof(tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg, counter);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[5].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[5].name = "counter";
TM_0JXiWyhP5OCO8jWMA6sb1w_0[0].len = 2; TM_0JXiWyhP5OCO8jWMA6sb1w_0[0].kind = 2; TM_0JXiWyhP5OCO8jWMA6sb1w_0[0].sons = &TM_0JXiWyhP5OCO8jWMA6sb1w_2[0];
NTI_CD8Dpv0WGmASelVaNSo6zg_.node = &TM_0JXiWyhP5OCO8jWMA6sb1w_0[0];
}

