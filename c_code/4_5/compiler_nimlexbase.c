/* Generated by Nim Compiler v0.19.9 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
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
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_TBaseLexer_jTxk7Uc2dfr9aTDL2dZhO9ag tyObject_TBaseLexer_jTxk7Uc2dfr9aTDL2dZhO9ag;
typedef struct RootObj RootObj;
typedef struct tyObject_TLLStream_a5oZYQ9aTktYME2449ayEi6g tyObject_TLLStream_a5oZYQ9aTktYME2449ayEi6g;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
#  define nimfr_(proc, file) \
    TFrame FR_; \
    FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = 0; nimFrame(&FR_);

#  define nimfrs_(proc, file, slots, length) \
    struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename; NI len; VarSlot s[slots];} FR_; \
    FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = length; nimFrame((TFrame*)&FR_);

#  define nimln_(n, file) \
    FR_.line = n; FR_.filename = file;
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
struct RootObj {
TNimType* m_type;
};
struct tyObject_TBaseLexer_jTxk7Uc2dfr9aTDL2dZhO9ag {
  RootObj Sup;
NI bufpos;
NCSTRING buf;
NI bufLen;
tyObject_TLLStream_a5oZYQ9aTktYME2449ayEi6g* stream;
NI lineNumber;
NI sentinel;
NI lineStart;
NI offsetBase;
};
typedef NU8 tyEnum_TLLStreamKind_jVcKY16LbOamXE9bxXUD6pQ;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_TLLStream_a5oZYQ9aTktYME2449ayEi6g {
  RootObj Sup;
tyEnum_TLLStreamKind_jVcKY16LbOamXE9bxXUD6pQ kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineOffset;
};
N_LIB_PRIVATE N_NOCONV(void*, alloc_4cubgSerkjpuLcj5MXjiLw_2)(NI size);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_LIB_PRIVATE N_NIMCALL(void, fillBuffer_RZcso2r4MAr3lCTkQ4n75Q)(tyObject_TBaseLexer_jTxk7Uc2dfr9aTDL2dZhO9ag* L);
static N_INLINE(void, moveMem_fPlwH3r9agN9aEHB6yCPMh0wnimlexbase)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NI, llStreamRead_9b2W12a20VPbeWzHJ0eXhVg)(tyObject_TLLStream_a5oZYQ9aTktYME2449ayEi6g* s, void* buf, NI bufLen);
N_LIB_PRIVATE N_NOCONV(void*, realloc_epWYXy7oruYtiNJhUF25Zg)(void* p, NI newSize);
N_LIB_PRIVATE N_NIMCALL(void, skipUTF8BOM_iBsWl36opJ18VPcmNhyqkw)(tyObject_TBaseLexer_jTxk7Uc2dfr9aTDL2dZhO9ag* L);
N_LIB_PRIVATE N_NIMCALL(NI, fillBaseLexer_MgVyABgIk9bfITlYYenxwIw_2)(tyObject_TBaseLexer_jTxk7Uc2dfr9aTDL2dZhO9ag* L, NI pos);
N_LIB_PRIVATE N_NOCONV(void, dealloc_RCjNtRnHdRYntrcE7YtwWw)(void* p);
N_LIB_PRIVATE N_NIMCALL(void, llStreamClose_OvGAfUZQ8pvVGcrtn64p2g)(tyObject_TLLStream_a5oZYQ9aTktYME2449ayEi6g* s);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached_II46IjNZztN9bmbxUD8dt8g_2)(void);
extern TNimType NTI_ytyiCJqK439aF9cIibuRVpAg_;
TNimType NTI_jTxk7Uc2dfr9aTDL2dZhO9ag_;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA_;
extern TNimType NTI_S9agCYBinaYZnGWcjTdxclg_;
extern TNimType NTI_WO3j4yVQ0yN0aRCt9bFEbtg_;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;

static N_INLINE(void, moveMem_fPlwH3r9agN9aEHB6yCPMh0wnimlexbase)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memmove(dest, source, ((size_t) (size)));
	(void)(T1_);
}

N_LIB_PRIVATE N_NIMCALL(void, fillBuffer_RZcso2r4MAr3lCTkQ4n75Q)(tyObject_TBaseLexer_jTxk7Uc2dfr9aTDL2dZhO9ag* L) {
	NI charsRead;
	NI toCopy;
	NI s;
	NI oldBufLen;
	NI T5_;
	charsRead = (NI)0;
	toCopy = (NI)0;
	s = (NI)0;
	oldBufLen = (NI)0;
	toCopy = (NI)((NI)((*L).bufLen - (*L).sentinel) - ((NI) 1));
	{
		if (!(((NI) 0) < toCopy)) goto LA3_;
		moveMem_fPlwH3r9agN9aEHB6yCPMh0wnimlexbase(((void*) ((*L).buf)), ((void*) ((&(*L).buf[(NI)((*L).sentinel + ((NI) 1))]))), ((NI) ((NI)(toCopy * ((NI) 1)))));
	}
	LA3_: ;
	T5_ = (NI)0;
	T5_ = llStreamRead_9b2W12a20VPbeWzHJ0eXhVg((*L).stream, ((void*) ((&(*L).buf[toCopy]))), (NI)((NI)((*L).sentinel + ((NI) 1)) * ((NI) 1)));
	charsRead = (NI)(T5_ / ((NI) 1));
	s = (NI)(toCopy + charsRead);
	{
		if (!(charsRead < (NI)((*L).sentinel + ((NI) 1)))) goto LA8_;
		(*L).buf[s] = 0;
		(*L).sentinel = s;
	}
	goto LA6_;
	LA8_: ;
	{
		s -= ((NI) 1);
		{
			while (1) {
				{
					while (1) {
						NIM_BOOL T15_;
						T15_ = (NIM_BOOL)0;
						T15_ = (((NI) 0) <= s);
						if (!(T15_)) goto LA16_;
						T15_ = !((((NU8)((*L).buf[s])) == ((NU8)(13)) || ((NU8)((*L).buf[s])) == ((NU8)(10))));
						LA16_: ;
						if (!T15_) goto LA14;
						s -= ((NI) 1);
					} LA14: ;
				}
				{
					if (!(((NI) 0) <= s)) goto LA19_;
					(*L).sentinel = s;
					goto LA11;
				}
				goto LA17_;
				LA19_: ;
				{
					void* T22_;
					NI T23_;
					oldBufLen = (*L).bufLen;
					(*L).bufLen = (NI)((*L).bufLen * ((NI) 2));
					T22_ = (void*)0;
					T22_ = realloc_epWYXy7oruYtiNJhUF25Zg(((void*) ((*L).buf)), ((NI) ((NI)((*L).bufLen * ((NI) 1)))));
					(*L).buf = ((NCSTRING) (T22_));
					T23_ = (NI)0;
					T23_ = llStreamRead_9b2W12a20VPbeWzHJ0eXhVg((*L).stream, ((void*) ((&(*L).buf[oldBufLen]))), (NI)(oldBufLen * ((NI) 1)));
					charsRead = (NI)(T23_ / ((NI) 1));
					{
						if (!(charsRead < oldBufLen)) goto LA26_;
						(*L).buf[(NI)(oldBufLen + charsRead)] = 0;
						(*L).sentinel = (NI)(oldBufLen + charsRead);
						goto LA11;
					}
					LA26_: ;
					s = (NI)((*L).bufLen - ((NI) 1));
				}
				LA17_: ;
			}
		} LA11: ;
	}
	LA6_: ;
}

N_LIB_PRIVATE N_NIMCALL(void, skipUTF8BOM_iBsWl36opJ18VPcmNhyqkw)(tyObject_TBaseLexer_jTxk7Uc2dfr9aTDL2dZhO9ag* L) {
	{
		NIM_BOOL T3_;
		NIM_BOOL T4_;
		T3_ = (NIM_BOOL)0;
		T4_ = (NIM_BOOL)0;
		T4_ = ((NU8)((*L).buf[((NI) 0)]) == (NU8)(239));
		if (!(T4_)) goto LA5_;
		T4_ = ((NU8)((*L).buf[((NI) 1)]) == (NU8)(187));
		LA5_: ;
		T3_ = T4_;
		if (!(T3_)) goto LA6_;
		T3_ = ((NU8)((*L).buf[((NI) 2)]) == (NU8)(191));
		LA6_: ;
		if (!T3_) goto LA7_;
		(*L).bufpos += ((NI) 3);
		(*L).lineStart += ((NI) 3);
	}
	LA7_: ;
}

N_LIB_PRIVATE N_NIMCALL(void, openBaseLexer_cAsXlGfoG4L2VBz7HzfTiw)(tyObject_TBaseLexer_jTxk7Uc2dfr9aTDL2dZhO9ag* L, tyObject_TLLStream_a5oZYQ9aTktYME2449ayEi6g* inputstream, NI bufLen) {
	void* T1_;
	(*L).bufpos = ((NI) 0);
	(*L).offsetBase = ((NI) 0);
	(*L).bufLen = bufLen;
	T1_ = (void*)0;
	T1_ = alloc_4cubgSerkjpuLcj5MXjiLw_2(((NI) ((NI)(bufLen * ((NI) 1)))));
	(*L).buf = ((NCSTRING) (T1_));
	(*L).sentinel = (NI)(bufLen - ((NI) 1));
	(*L).lineStart = ((NI) 0);
	(*L).lineNumber = ((NI) 1);
	unsureAsgnRef((void**) (&(*L).stream), inputstream);
	fillBuffer_RZcso2r4MAr3lCTkQ4n75Q(L);
	skipUTF8BOM_iBsWl36opJ18VPcmNhyqkw(L);
}

N_LIB_PRIVATE N_NIMCALL(NI, getColNumber_1E9cK35431ou0c1YV6vVHKw)(tyObject_TBaseLexer_jTxk7Uc2dfr9aTDL2dZhO9ag* L, NI pos) {
	NI result;
	result = (NI)0;
	result = ((NI)(pos - (*L).lineStart) > 0? ((NI)(pos - (*L).lineStart)) : -((NI)(pos - (*L).lineStart)));
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI, fillBaseLexer_MgVyABgIk9bfITlYYenxwIw_2)(tyObject_TBaseLexer_jTxk7Uc2dfr9aTDL2dZhO9ag* L, NI pos) {
	NI result;
	result = (NI)0;
	{
		if (!(pos < (*L).sentinel)) goto LA3_;
		result = (NI)(pos + ((NI) 1));
	}
	goto LA1_;
	LA3_: ;
	{
		fillBuffer_RZcso2r4MAr3lCTkQ4n75Q(L);
		(*L).offsetBase += (NI)(pos + ((NI) 1));
		(*L).bufpos = ((NI) 0);
		result = ((NI) 0);
	}
	LA1_: ;
	(*L).lineStart = result;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI, handleCR_MgVyABgIk9bfITlYYenxwIw)(tyObject_TBaseLexer_jTxk7Uc2dfr9aTDL2dZhO9ag* L, NI pos) {
	NI result;
	result = (NI)0;
	(*L).lineNumber += ((NI) 1);
	result = fillBaseLexer_MgVyABgIk9bfITlYYenxwIw_2(L, pos);
	{
		if (!((NU8)((*L).buf[result]) == (NU8)(10))) goto LA3_;
		result = fillBaseLexer_MgVyABgIk9bfITlYYenxwIw_2(L, result);
	}
	LA3_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI, handleLF_MgVyABgIk9bfITlYYenxwIw_3)(tyObject_TBaseLexer_jTxk7Uc2dfr9aTDL2dZhO9ag* L, NI pos) {
	NI result;
	result = (NI)0;
	(*L).lineNumber += ((NI) 1);
	result = fillBaseLexer_MgVyABgIk9bfITlYYenxwIw_2(L, pos);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, closeBaseLexer_RZcso2r4MAr3lCTkQ4n75Q_2)(tyObject_TBaseLexer_jTxk7Uc2dfr9aTDL2dZhO9ag* L) {
	dealloc_RCjNtRnHdRYntrcE7YtwWw(((void*) ((*L).buf)));
	llStreamClose_OvGAfUZQ8pvVGcrtn64p2g((*L).stream);
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
N_LIB_PRIVATE N_NIMCALL(void, compiler_nimlexbaseDatInit000)(void) {
static TNimNode* TM_jNFaG9cOzyJSKBcIonhGRGw_2[8];
static TNimNode TM_jNFaG9cOzyJSKBcIonhGRGw_0[9];
NTI_jTxk7Uc2dfr9aTDL2dZhO9ag_.size = sizeof(tyObject_TBaseLexer_jTxk7Uc2dfr9aTDL2dZhO9ag);
NTI_jTxk7Uc2dfr9aTDL2dZhO9ag_.kind = 17;
NTI_jTxk7Uc2dfr9aTDL2dZhO9ag_.base = (&NTI_ytyiCJqK439aF9cIibuRVpAg_);
TM_jNFaG9cOzyJSKBcIonhGRGw_2[0] = &TM_jNFaG9cOzyJSKBcIonhGRGw_0[1];
TM_jNFaG9cOzyJSKBcIonhGRGw_0[1].kind = 1;
TM_jNFaG9cOzyJSKBcIonhGRGw_0[1].offset = offsetof(tyObject_TBaseLexer_jTxk7Uc2dfr9aTDL2dZhO9ag, bufpos);
TM_jNFaG9cOzyJSKBcIonhGRGw_0[1].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_jNFaG9cOzyJSKBcIonhGRGw_0[1].name = "bufpos";
TM_jNFaG9cOzyJSKBcIonhGRGw_2[1] = &TM_jNFaG9cOzyJSKBcIonhGRGw_0[2];
TM_jNFaG9cOzyJSKBcIonhGRGw_0[2].kind = 1;
TM_jNFaG9cOzyJSKBcIonhGRGw_0[2].offset = offsetof(tyObject_TBaseLexer_jTxk7Uc2dfr9aTDL2dZhO9ag, buf);
TM_jNFaG9cOzyJSKBcIonhGRGw_0[2].typ = (&NTI_S9agCYBinaYZnGWcjTdxclg_);
TM_jNFaG9cOzyJSKBcIonhGRGw_0[2].name = "buf";
TM_jNFaG9cOzyJSKBcIonhGRGw_2[2] = &TM_jNFaG9cOzyJSKBcIonhGRGw_0[3];
TM_jNFaG9cOzyJSKBcIonhGRGw_0[3].kind = 1;
TM_jNFaG9cOzyJSKBcIonhGRGw_0[3].offset = offsetof(tyObject_TBaseLexer_jTxk7Uc2dfr9aTDL2dZhO9ag, bufLen);
TM_jNFaG9cOzyJSKBcIonhGRGw_0[3].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_jNFaG9cOzyJSKBcIonhGRGw_0[3].name = "bufLen";
TM_jNFaG9cOzyJSKBcIonhGRGw_2[3] = &TM_jNFaG9cOzyJSKBcIonhGRGw_0[4];
TM_jNFaG9cOzyJSKBcIonhGRGw_0[4].kind = 1;
TM_jNFaG9cOzyJSKBcIonhGRGw_0[4].offset = offsetof(tyObject_TBaseLexer_jTxk7Uc2dfr9aTDL2dZhO9ag, stream);
TM_jNFaG9cOzyJSKBcIonhGRGw_0[4].typ = (&NTI_WO3j4yVQ0yN0aRCt9bFEbtg_);
TM_jNFaG9cOzyJSKBcIonhGRGw_0[4].name = "stream";
TM_jNFaG9cOzyJSKBcIonhGRGw_2[4] = &TM_jNFaG9cOzyJSKBcIonhGRGw_0[5];
TM_jNFaG9cOzyJSKBcIonhGRGw_0[5].kind = 1;
TM_jNFaG9cOzyJSKBcIonhGRGw_0[5].offset = offsetof(tyObject_TBaseLexer_jTxk7Uc2dfr9aTDL2dZhO9ag, lineNumber);
TM_jNFaG9cOzyJSKBcIonhGRGw_0[5].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_jNFaG9cOzyJSKBcIonhGRGw_0[5].name = "lineNumber";
TM_jNFaG9cOzyJSKBcIonhGRGw_2[5] = &TM_jNFaG9cOzyJSKBcIonhGRGw_0[6];
TM_jNFaG9cOzyJSKBcIonhGRGw_0[6].kind = 1;
TM_jNFaG9cOzyJSKBcIonhGRGw_0[6].offset = offsetof(tyObject_TBaseLexer_jTxk7Uc2dfr9aTDL2dZhO9ag, sentinel);
TM_jNFaG9cOzyJSKBcIonhGRGw_0[6].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_jNFaG9cOzyJSKBcIonhGRGw_0[6].name = "sentinel";
TM_jNFaG9cOzyJSKBcIonhGRGw_2[6] = &TM_jNFaG9cOzyJSKBcIonhGRGw_0[7];
TM_jNFaG9cOzyJSKBcIonhGRGw_0[7].kind = 1;
TM_jNFaG9cOzyJSKBcIonhGRGw_0[7].offset = offsetof(tyObject_TBaseLexer_jTxk7Uc2dfr9aTDL2dZhO9ag, lineStart);
TM_jNFaG9cOzyJSKBcIonhGRGw_0[7].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_jNFaG9cOzyJSKBcIonhGRGw_0[7].name = "lineStart";
TM_jNFaG9cOzyJSKBcIonhGRGw_2[7] = &TM_jNFaG9cOzyJSKBcIonhGRGw_0[8];
TM_jNFaG9cOzyJSKBcIonhGRGw_0[8].kind = 1;
TM_jNFaG9cOzyJSKBcIonhGRGw_0[8].offset = offsetof(tyObject_TBaseLexer_jTxk7Uc2dfr9aTDL2dZhO9ag, offsetBase);
TM_jNFaG9cOzyJSKBcIonhGRGw_0[8].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_jNFaG9cOzyJSKBcIonhGRGw_0[8].name = "offsetBase";
TM_jNFaG9cOzyJSKBcIonhGRGw_0[0].len = 8; TM_jNFaG9cOzyJSKBcIonhGRGw_0[0].kind = 2; TM_jNFaG9cOzyJSKBcIonhGRGw_0[0].sons = &TM_jNFaG9cOzyJSKBcIonhGRGw_2[0];
NTI_jTxk7Uc2dfr9aTDL2dZhO9ag_.node = &TM_jNFaG9cOzyJSKBcIonhGRGw_0[0];
}

