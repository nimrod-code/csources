/* Generated by Nim Compiler v0.20.0 */
/*   (c) 2019 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

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
#define nimfr_(x, y)
#define nimln_(x, y)
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_TBaseLexer_jTxk7Uc2dfr9aTDL2dZhO9ag tyObject_TBaseLexer_jTxk7Uc2dfr9aTDL2dZhO9ag;
typedef struct RootObj RootObj;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_TLLStream_a5oZYQ9aTktYME2449ayEi6g tyObject_TLLStream_a5oZYQ9aTktYME2449ayEi6g;
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
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_TBaseLexer_jTxk7Uc2dfr9aTDL2dZhO9ag {
  RootObj Sup;
NI bufpos;
NimStringDesc* buf;
tyObject_TLLStream_a5oZYQ9aTktYME2449ayEi6g* stream;
NI lineNumber;
NI sentinel;
NI lineStart;
NI offsetBase;
};
typedef NU8 tyEnum_TLLStreamKind_jVcKY16LbOamXE9bxXUD6pQ;
typedef struct {
N_NIMCALL_PTR(NI, ClP_0) (tyObject_TLLStream_a5oZYQ9aTktYME2449ayEi6g* s, void* buf, NI bufLen, void* ClE_0);
void* ClE_0;
} tyProc_vqN8F2I9cNb9agHf5QUpC2lg;
struct tyObject_TLLStream_a5oZYQ9aTktYME2449ayEi6g {
  RootObj Sup;
tyEnum_TLLStreamKind_jVcKY16LbOamXE9bxXUD6pQ kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineOffset;
tyProc_vqN8F2I9cNb9agHf5QUpC2lg repl;
};
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl_W9cjVocn1tjhW7p7xohJj6A)(NimStringDesc* msg);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NIMCALL(void, fillBuffer_X9aea9bJavePT9cGIdd7JRH7Q)(tyObject_TBaseLexer_jTxk7Uc2dfr9aTDL2dZhO9ag* L);
static N_INLINE(void, moveMem_i80o3k0SgEI5gTRCzYdyWA_2system)(void* dest, void* source, NI size);
N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
static N_INLINE(NI, addInt)(NI a, NI b);
N_LIB_PRIVATE N_NIMCALL(NI, llStreamRead_ioi0zlIEx7dNasBjD9brSbA)(tyObject_TLLStream_a5oZYQ9aTktYME2449ayEi6g* s, void* buf, NI bufLen);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_LIB_PRIVATE N_NIMCALL(void, skipUTF8BOM_X9aea9bJavePT9cGIdd7JRH7Q_2)(tyObject_TBaseLexer_jTxk7Uc2dfr9aTDL2dZhO9ag* L);
N_LIB_PRIVATE N_NIMCALL(NI, fillBaseLexer_pFv9ajpk2zhJHQ7x61CSE2A_2)(tyObject_TBaseLexer_jTxk7Uc2dfr9aTDL2dZhO9ag* L, NI pos);
N_LIB_PRIVATE N_NIMCALL(void, llStreamClose_pzACjlxXGrH2rRQU5WrSmg)(tyObject_TLLStream_a5oZYQ9aTktYME2449ayEi6g* s);
extern TNimType NTI_ytyiCJqK439aF9cIibuRVpAg_;
TNimType NTI_jTxk7Uc2dfr9aTDL2dZhO9ag_;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA_;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg_;
extern TNimType NTI_WO3j4yVQ0yN0aRCt9bFEbtg_;
STRING_LITERAL(TM_jNFaG9cOzyJSKBcIonhGRGw_3, "/Users/andreasrumpf-mac/projects/nim/compiler/nimlexbase.nim(14"
"2, 9) `bufLen > 0` ", 82);
STRING_LITERAL(TM_jNFaG9cOzyJSKBcIonhGRGw_5, "/Users/andreasrumpf-mac/projects/nim/compiler/nimlexbase.nim(78"
", 9) `L.sentinel < L.buf.len` ", 93);
STRING_LITERAL(TM_jNFaG9cOzyJSKBcIonhGRGw_8, "/Users/andreasrumpf-mac/projects/nim/compiler/nimlexbase.nim(80"
", 9) `toCopy >= 0` ", 82);
STRING_LITERAL(TM_jNFaG9cOzyJSKBcIonhGRGw_14, "/Users/andreasrumpf-mac/projects/nim/compiler/nimlexbase.nim(93"
", 13) `s < L.buf.len` ", 85);
STRING_LITERAL(TM_jNFaG9cOzyJSKBcIonhGRGw_18, "/Users/andreasrumpf-mac/projects/nim/compiler/nimlexbase.nim(10"
"4, 15) `L.buf.len - oldBufLen == oldBufLen` ", 107);
STRING_LITERAL(TM_jNFaG9cOzyJSKBcIonhGRGw_25, "/Users/andreasrumpf-mac/projects/nim/compiler/nimlexbase.nim(12"
"5, 9) `L.buf[pos] == CR` ", 88);
STRING_LITERAL(TM_jNFaG9cOzyJSKBcIonhGRGw_27, "/Users/andreasrumpf-mac/projects/nim/compiler/nimlexbase.nim(11"
"4, 9) `pos <= L.sentinel` ", 89);
STRING_LITERAL(TM_jNFaG9cOzyJSKBcIonhGRGw_31, "/Users/andreasrumpf-mac/projects/nim/compiler/nimlexbase.nim(13"
"2, 9) `L.buf[pos] == LF` ", 88);

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

static N_INLINE(void, moveMem_i80o3k0SgEI5gTRCzYdyWA_2system)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memmove(dest, source, ((size_t) (size)));
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

N_LIB_PRIVATE N_NIMCALL(void, fillBuffer_X9aea9bJavePT9cGIdd7JRH7Q)(tyObject_TBaseLexer_jTxk7Uc2dfr9aTDL2dZhO9ag* L) {
	NI charsRead;
	NI toCopy;
	NI s;
	NI oldBufLen;
	NI TM_jNFaG9cOzyJSKBcIonhGRGw_6;
	NI TM_jNFaG9cOzyJSKBcIonhGRGw_7;
	NI TM_jNFaG9cOzyJSKBcIonhGRGw_10;
	NI TM_jNFaG9cOzyJSKBcIonhGRGw_11;
	charsRead = (NI)0;
	toCopy = (NI)0;
	s = (NI)0;
	oldBufLen = (NI)0;
	{
		if (!!(((*L).sentinel < ((*L).buf ? (*L).buf->Sup.len : 0)))) goto LA3_;
		failedAssertImpl_W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM_jNFaG9cOzyJSKBcIonhGRGw_5));
	}
	LA3_: ;
	TM_jNFaG9cOzyJSKBcIonhGRGw_6 = subInt(((*L).buf ? (*L).buf->Sup.len : 0), (*L).sentinel);
	TM_jNFaG9cOzyJSKBcIonhGRGw_7 = subInt((NI)(TM_jNFaG9cOzyJSKBcIonhGRGw_6), ((NI) 1));
	toCopy = (NI)(TM_jNFaG9cOzyJSKBcIonhGRGw_7);
	{
		if (!!((((NI) 0) <= toCopy))) goto LA7_;
		failedAssertImpl_W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM_jNFaG9cOzyJSKBcIonhGRGw_8));
	}
	LA7_: ;
	{
		NI TM_jNFaG9cOzyJSKBcIonhGRGw_9;
		if (!(((NI) 0) < toCopy)) goto LA11_;
		if ((NU)(((NI) 0)) >= (NU)((*L).buf ? (*L).buf->Sup.len : 0)) raiseIndexError2(((NI) 0),((*L).buf ? (*L).buf->Sup.len : 0)-1);
		TM_jNFaG9cOzyJSKBcIonhGRGw_9 = addInt((*L).sentinel, ((NI) 1));
		if ((NU)((NI)(TM_jNFaG9cOzyJSKBcIonhGRGw_9)) >= (NU)((*L).buf ? (*L).buf->Sup.len : 0)) raiseIndexError2((NI)(TM_jNFaG9cOzyJSKBcIonhGRGw_9),((*L).buf ? (*L).buf->Sup.len : 0)-1);
		moveMem_i80o3k0SgEI5gTRCzYdyWA_2system(((void*) ((&(*L).buf->data[((NI) 0)]))), ((void*) ((&(*L).buf->data[(NI)(TM_jNFaG9cOzyJSKBcIonhGRGw_9)]))), ((NI)chckRange(toCopy, ((NI) 0), ((NI) IL64(9223372036854775807)))));
	}
	LA11_: ;
	if ((NU)(toCopy) >= (NU)((*L).buf ? (*L).buf->Sup.len : 0)) raiseIndexError2(toCopy,((*L).buf ? (*L).buf->Sup.len : 0)-1);
	TM_jNFaG9cOzyJSKBcIonhGRGw_10 = addInt((*L).sentinel, ((NI) 1));
	charsRead = llStreamRead_ioi0zlIEx7dNasBjD9brSbA((*L).stream, ((void*) ((&(*L).buf->data[toCopy]))), (NI)(TM_jNFaG9cOzyJSKBcIonhGRGw_10));
	TM_jNFaG9cOzyJSKBcIonhGRGw_11 = addInt(toCopy, charsRead);
	s = (NI)(TM_jNFaG9cOzyJSKBcIonhGRGw_11);
	{
		NI TM_jNFaG9cOzyJSKBcIonhGRGw_12;
		TM_jNFaG9cOzyJSKBcIonhGRGw_12 = addInt((*L).sentinel, ((NI) 1));
		if (!(charsRead < (NI)(TM_jNFaG9cOzyJSKBcIonhGRGw_12))) goto LA15_;
		if ((NU)(s) >= (NU)((*L).buf ? (*L).buf->Sup.len : 0)) raiseIndexError2(s,((*L).buf ? (*L).buf->Sup.len : 0)-1);
		(*L).buf->data[s] = 0;
		(*L).sentinel = s;
	}
	goto LA13_;
	LA15_: ;
	{
		NI TM_jNFaG9cOzyJSKBcIonhGRGw_13;
		TM_jNFaG9cOzyJSKBcIonhGRGw_13 = subInt(s, ((NI) 1));
		s = (NI)(TM_jNFaG9cOzyJSKBcIonhGRGw_13);
		{
			while (1) {
				{
					if (!!((s < ((*L).buf ? (*L).buf->Sup.len : 0)))) goto LA22_;
					failedAssertImpl_W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM_jNFaG9cOzyJSKBcIonhGRGw_14));
				}
				LA22_: ;
				{
					while (1) {
						NIM_BOOL T26_;
						NI TM_jNFaG9cOzyJSKBcIonhGRGw_15;
						T26_ = (NIM_BOOL)0;
						T26_ = (((NI) 0) <= s);
						if (!(T26_)) goto LA27_;
						if ((NU)(s) >= (NU)((*L).buf ? (*L).buf->Sup.len : 0)) raiseIndexError2(s,((*L).buf ? (*L).buf->Sup.len : 0)-1);
						T26_ = !((((NU8)((*L).buf->data[s])) == ((NU8)(13)) || ((NU8)((*L).buf->data[s])) == ((NU8)(10))));
						LA27_: ;
						if (!T26_) goto LA25;
						TM_jNFaG9cOzyJSKBcIonhGRGw_15 = subInt(s, ((NI) 1));
						s = (NI)(TM_jNFaG9cOzyJSKBcIonhGRGw_15);
					} LA25: ;
				}
				{
					if (!(((NI) 0) <= s)) goto LA30_;
					(*L).sentinel = s;
					goto LA18;
				}
				goto LA28_;
				LA30_: ;
				{
					NI TM_jNFaG9cOzyJSKBcIonhGRGw_16;
					NI TM_jNFaG9cOzyJSKBcIonhGRGw_21;
					oldBufLen = ((*L).buf ? (*L).buf->Sup.len : 0);
					TM_jNFaG9cOzyJSKBcIonhGRGw_16 = mulInt(((*L).buf ? (*L).buf->Sup.len : 0), ((NI) 2));
					unsureAsgnRef((void**) (&(*L).buf), setLengthStr((*L).buf, ((NI)chckRange((NI)(TM_jNFaG9cOzyJSKBcIonhGRGw_16), ((NI) 0), ((NI) IL64(9223372036854775807))))));
					{
						NI TM_jNFaG9cOzyJSKBcIonhGRGw_17;
						TM_jNFaG9cOzyJSKBcIonhGRGw_17 = subInt(((*L).buf ? (*L).buf->Sup.len : 0), oldBufLen);
						if (!!(((NI)(TM_jNFaG9cOzyJSKBcIonhGRGw_17) == oldBufLen))) goto LA35_;
						failedAssertImpl_W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM_jNFaG9cOzyJSKBcIonhGRGw_18));
					}
					LA35_: ;
					if ((NU)(oldBufLen) >= (NU)((*L).buf ? (*L).buf->Sup.len : 0)) raiseIndexError2(oldBufLen,((*L).buf ? (*L).buf->Sup.len : 0)-1);
					charsRead = llStreamRead_ioi0zlIEx7dNasBjD9brSbA((*L).stream, ((void*) ((&(*L).buf->data[oldBufLen]))), oldBufLen);
					{
						NI TM_jNFaG9cOzyJSKBcIonhGRGw_19;
						NI TM_jNFaG9cOzyJSKBcIonhGRGw_20;
						if (!(charsRead < oldBufLen)) goto LA39_;
						TM_jNFaG9cOzyJSKBcIonhGRGw_19 = addInt(oldBufLen, charsRead);
						if ((NU)((NI)(TM_jNFaG9cOzyJSKBcIonhGRGw_19)) >= (NU)((*L).buf ? (*L).buf->Sup.len : 0)) raiseIndexError2((NI)(TM_jNFaG9cOzyJSKBcIonhGRGw_19),((*L).buf ? (*L).buf->Sup.len : 0)-1);
						(*L).buf->data[(NI)(TM_jNFaG9cOzyJSKBcIonhGRGw_19)] = 0;
						TM_jNFaG9cOzyJSKBcIonhGRGw_20 = addInt(oldBufLen, charsRead);
						(*L).sentinel = (NI)(TM_jNFaG9cOzyJSKBcIonhGRGw_20);
						goto LA18;
					}
					LA39_: ;
					TM_jNFaG9cOzyJSKBcIonhGRGw_21 = subInt(((*L).buf ? (*L).buf->Sup.len : 0), ((NI) 1));
					s = (NI)(TM_jNFaG9cOzyJSKBcIonhGRGw_21);
				}
				LA28_: ;
			}
		} LA18: ;
	}
	LA13_: ;
}

N_LIB_PRIVATE N_NIMCALL(void, skipUTF8BOM_X9aea9bJavePT9cGIdd7JRH7Q_2)(tyObject_TBaseLexer_jTxk7Uc2dfr9aTDL2dZhO9ag* L) {
	{
		NIM_BOOL T3_;
		NIM_BOOL T4_;
		NI TM_jNFaG9cOzyJSKBcIonhGRGw_22;
		NI TM_jNFaG9cOzyJSKBcIonhGRGw_23;
		T3_ = (NIM_BOOL)0;
		T4_ = (NIM_BOOL)0;
		if ((NU)(((NI) 0)) >= (NU)((*L).buf ? (*L).buf->Sup.len : 0)) raiseIndexError2(((NI) 0),((*L).buf ? (*L).buf->Sup.len : 0)-1);
		T4_ = ((NU8)((*L).buf->data[((NI) 0)]) == (NU8)(239));
		if (!(T4_)) goto LA5_;
		if ((NU)(((NI) 1)) >= (NU)((*L).buf ? (*L).buf->Sup.len : 0)) raiseIndexError2(((NI) 1),((*L).buf ? (*L).buf->Sup.len : 0)-1);
		T4_ = ((NU8)((*L).buf->data[((NI) 1)]) == (NU8)(187));
		LA5_: ;
		T3_ = T4_;
		if (!(T3_)) goto LA6_;
		if ((NU)(((NI) 2)) >= (NU)((*L).buf ? (*L).buf->Sup.len : 0)) raiseIndexError2(((NI) 2),((*L).buf ? (*L).buf->Sup.len : 0)-1);
		T3_ = ((NU8)((*L).buf->data[((NI) 2)]) == (NU8)(191));
		LA6_: ;
		if (!T3_) goto LA7_;
		TM_jNFaG9cOzyJSKBcIonhGRGw_22 = addInt((*L).bufpos, ((NI) 3));
		(*L).bufpos = (NI)(TM_jNFaG9cOzyJSKBcIonhGRGw_22);
		TM_jNFaG9cOzyJSKBcIonhGRGw_23 = addInt((*L).lineStart, ((NI) 3));
		(*L).lineStart = (NI)(TM_jNFaG9cOzyJSKBcIonhGRGw_23);
	}
	LA7_: ;
}

N_LIB_PRIVATE N_NIMCALL(void, openBaseLexer_V9avLgM3wlB5dKp8bWFOIqg)(tyObject_TBaseLexer_jTxk7Uc2dfr9aTDL2dZhO9ag* L, tyObject_TLLStream_a5oZYQ9aTktYME2449ayEi6g* inputstream, NI bufLen) {
	NI TM_jNFaG9cOzyJSKBcIonhGRGw_4;
	{
		if (!!((((NI) 0) < bufLen))) goto LA3_;
		failedAssertImpl_W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM_jNFaG9cOzyJSKBcIonhGRGw_3));
	}
	LA3_: ;
	(*L).bufpos = ((NI) 0);
	(*L).offsetBase = ((NI) 0);
	unsureAsgnRef((void**) (&(*L).buf), mnewString(((NI)chckRange(bufLen, ((NI) 0), ((NI) IL64(9223372036854775807))))));
	TM_jNFaG9cOzyJSKBcIonhGRGw_4 = subInt(bufLen, ((NI) 1));
	(*L).sentinel = (NI)(TM_jNFaG9cOzyJSKBcIonhGRGw_4);
	(*L).lineStart = ((NI) 0);
	(*L).lineNumber = ((NI) 1);
	unsureAsgnRef((void**) (&(*L).stream), inputstream);
	fillBuffer_X9aea9bJavePT9cGIdd7JRH7Q(L);
	skipUTF8BOM_X9aea9bJavePT9cGIdd7JRH7Q_2(L);
}

N_LIB_PRIVATE N_NIMCALL(NI, getColNumber_D0ufm9c9azweHuDkFTPoIzqQ)(tyObject_TBaseLexer_jTxk7Uc2dfr9aTDL2dZhO9ag* L, NI pos) {
	NI result;
	NI TM_jNFaG9cOzyJSKBcIonhGRGw_24;
	result = (NI)0;
	TM_jNFaG9cOzyJSKBcIonhGRGw_24 = subInt(pos, (*L).lineStart);
	if ((NI)(TM_jNFaG9cOzyJSKBcIonhGRGw_24) == (IL64(-9223372036854775807) - IL64(1))) raiseOverflow();
	result = ((NI)(TM_jNFaG9cOzyJSKBcIonhGRGw_24) > 0? ((NI)(TM_jNFaG9cOzyJSKBcIonhGRGw_24)) : -((NI)(TM_jNFaG9cOzyJSKBcIonhGRGw_24)));
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI, fillBaseLexer_pFv9ajpk2zhJHQ7x61CSE2A_2)(tyObject_TBaseLexer_jTxk7Uc2dfr9aTDL2dZhO9ag* L, NI pos) {
	NI result;
	result = (NI)0;
	{
		if (!!((pos <= (*L).sentinel))) goto LA3_;
		failedAssertImpl_W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM_jNFaG9cOzyJSKBcIonhGRGw_27));
	}
	LA3_: ;
	{
		NI TM_jNFaG9cOzyJSKBcIonhGRGw_28;
		if (!(pos < (*L).sentinel)) goto LA7_;
		TM_jNFaG9cOzyJSKBcIonhGRGw_28 = addInt(pos, ((NI) 1));
		result = (NI)(TM_jNFaG9cOzyJSKBcIonhGRGw_28);
	}
	goto LA5_;
	LA7_: ;
	{
		NI TM_jNFaG9cOzyJSKBcIonhGRGw_29;
		NI TM_jNFaG9cOzyJSKBcIonhGRGw_30;
		fillBuffer_X9aea9bJavePT9cGIdd7JRH7Q(L);
		TM_jNFaG9cOzyJSKBcIonhGRGw_29 = addInt(pos, ((NI) 1));
		TM_jNFaG9cOzyJSKBcIonhGRGw_30 = addInt((*L).offsetBase, (NI)(TM_jNFaG9cOzyJSKBcIonhGRGw_29));
		(*L).offsetBase = (NI)(TM_jNFaG9cOzyJSKBcIonhGRGw_30);
		(*L).bufpos = ((NI) 0);
		result = ((NI) 0);
	}
	LA5_: ;
	(*L).lineStart = result;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI, handleCR_pFv9ajpk2zhJHQ7x61CSE2A)(tyObject_TBaseLexer_jTxk7Uc2dfr9aTDL2dZhO9ag* L, NI pos) {
	NI result;
	NI TM_jNFaG9cOzyJSKBcIonhGRGw_26;
	result = (NI)0;
	{
		if ((NU)(pos) >= (NU)((*L).buf ? (*L).buf->Sup.len : 0)) raiseIndexError2(pos,((*L).buf ? (*L).buf->Sup.len : 0)-1);
		if (!!(((NU8)((*L).buf->data[pos]) == (NU8)(13)))) goto LA3_;
		failedAssertImpl_W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM_jNFaG9cOzyJSKBcIonhGRGw_25));
	}
	LA3_: ;
	TM_jNFaG9cOzyJSKBcIonhGRGw_26 = addInt((*L).lineNumber, ((NI) 1));
	(*L).lineNumber = (NI)(TM_jNFaG9cOzyJSKBcIonhGRGw_26);
	result = fillBaseLexer_pFv9ajpk2zhJHQ7x61CSE2A_2(L, pos);
	{
		if ((NU)(result) >= (NU)((*L).buf ? (*L).buf->Sup.len : 0)) raiseIndexError2(result,((*L).buf ? (*L).buf->Sup.len : 0)-1);
		if (!((NU8)((*L).buf->data[result]) == (NU8)(10))) goto LA7_;
		result = fillBaseLexer_pFv9ajpk2zhJHQ7x61CSE2A_2(L, result);
	}
	LA7_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI, handleLF_pFv9ajpk2zhJHQ7x61CSE2A_3)(tyObject_TBaseLexer_jTxk7Uc2dfr9aTDL2dZhO9ag* L, NI pos) {
	NI result;
	NI TM_jNFaG9cOzyJSKBcIonhGRGw_32;
	result = (NI)0;
	{
		if ((NU)(pos) >= (NU)((*L).buf ? (*L).buf->Sup.len : 0)) raiseIndexError2(pos,((*L).buf ? (*L).buf->Sup.len : 0)-1);
		if (!!(((NU8)((*L).buf->data[pos]) == (NU8)(10)))) goto LA3_;
		failedAssertImpl_W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM_jNFaG9cOzyJSKBcIonhGRGw_31));
	}
	LA3_: ;
	TM_jNFaG9cOzyJSKBcIonhGRGw_32 = addInt((*L).lineNumber, ((NI) 1));
	(*L).lineNumber = (NI)(TM_jNFaG9cOzyJSKBcIonhGRGw_32);
	result = fillBaseLexer_pFv9ajpk2zhJHQ7x61CSE2A_2(L, pos);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, closeBaseLexer_X9aea9bJavePT9cGIdd7JRH7Q_3)(tyObject_TBaseLexer_jTxk7Uc2dfr9aTDL2dZhO9ag* L) {
	llStreamClose_pzACjlxXGrH2rRQU5WrSmg((*L).stream);
}
N_LIB_PRIVATE N_NIMCALL(void, compiler_nimlexbaseDatInit000)(void) {
static TNimNode* TM_jNFaG9cOzyJSKBcIonhGRGw_2_7[7];
static TNimNode TM_jNFaG9cOzyJSKBcIonhGRGw_0[8];
NTI_jTxk7Uc2dfr9aTDL2dZhO9ag_.size = sizeof(tyObject_TBaseLexer_jTxk7Uc2dfr9aTDL2dZhO9ag);
NTI_jTxk7Uc2dfr9aTDL2dZhO9ag_.kind = 17;
NTI_jTxk7Uc2dfr9aTDL2dZhO9ag_.base = (&NTI_ytyiCJqK439aF9cIibuRVpAg_);
TM_jNFaG9cOzyJSKBcIonhGRGw_2_7[0] = &TM_jNFaG9cOzyJSKBcIonhGRGw_0[1];
TM_jNFaG9cOzyJSKBcIonhGRGw_0[1].kind = 1;
TM_jNFaG9cOzyJSKBcIonhGRGw_0[1].offset = offsetof(tyObject_TBaseLexer_jTxk7Uc2dfr9aTDL2dZhO9ag, bufpos);
TM_jNFaG9cOzyJSKBcIonhGRGw_0[1].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_jNFaG9cOzyJSKBcIonhGRGw_0[1].name = "bufpos";
TM_jNFaG9cOzyJSKBcIonhGRGw_2_7[1] = &TM_jNFaG9cOzyJSKBcIonhGRGw_0[2];
TM_jNFaG9cOzyJSKBcIonhGRGw_0[2].kind = 1;
TM_jNFaG9cOzyJSKBcIonhGRGw_0[2].offset = offsetof(tyObject_TBaseLexer_jTxk7Uc2dfr9aTDL2dZhO9ag, buf);
TM_jNFaG9cOzyJSKBcIonhGRGw_0[2].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_jNFaG9cOzyJSKBcIonhGRGw_0[2].name = "buf";
TM_jNFaG9cOzyJSKBcIonhGRGw_2_7[2] = &TM_jNFaG9cOzyJSKBcIonhGRGw_0[3];
TM_jNFaG9cOzyJSKBcIonhGRGw_0[3].kind = 1;
TM_jNFaG9cOzyJSKBcIonhGRGw_0[3].offset = offsetof(tyObject_TBaseLexer_jTxk7Uc2dfr9aTDL2dZhO9ag, stream);
TM_jNFaG9cOzyJSKBcIonhGRGw_0[3].typ = (&NTI_WO3j4yVQ0yN0aRCt9bFEbtg_);
TM_jNFaG9cOzyJSKBcIonhGRGw_0[3].name = "stream";
TM_jNFaG9cOzyJSKBcIonhGRGw_2_7[3] = &TM_jNFaG9cOzyJSKBcIonhGRGw_0[4];
TM_jNFaG9cOzyJSKBcIonhGRGw_0[4].kind = 1;
TM_jNFaG9cOzyJSKBcIonhGRGw_0[4].offset = offsetof(tyObject_TBaseLexer_jTxk7Uc2dfr9aTDL2dZhO9ag, lineNumber);
TM_jNFaG9cOzyJSKBcIonhGRGw_0[4].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_jNFaG9cOzyJSKBcIonhGRGw_0[4].name = "lineNumber";
TM_jNFaG9cOzyJSKBcIonhGRGw_2_7[4] = &TM_jNFaG9cOzyJSKBcIonhGRGw_0[5];
TM_jNFaG9cOzyJSKBcIonhGRGw_0[5].kind = 1;
TM_jNFaG9cOzyJSKBcIonhGRGw_0[5].offset = offsetof(tyObject_TBaseLexer_jTxk7Uc2dfr9aTDL2dZhO9ag, sentinel);
TM_jNFaG9cOzyJSKBcIonhGRGw_0[5].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_jNFaG9cOzyJSKBcIonhGRGw_0[5].name = "sentinel";
TM_jNFaG9cOzyJSKBcIonhGRGw_2_7[5] = &TM_jNFaG9cOzyJSKBcIonhGRGw_0[6];
TM_jNFaG9cOzyJSKBcIonhGRGw_0[6].kind = 1;
TM_jNFaG9cOzyJSKBcIonhGRGw_0[6].offset = offsetof(tyObject_TBaseLexer_jTxk7Uc2dfr9aTDL2dZhO9ag, lineStart);
TM_jNFaG9cOzyJSKBcIonhGRGw_0[6].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_jNFaG9cOzyJSKBcIonhGRGw_0[6].name = "lineStart";
TM_jNFaG9cOzyJSKBcIonhGRGw_2_7[6] = &TM_jNFaG9cOzyJSKBcIonhGRGw_0[7];
TM_jNFaG9cOzyJSKBcIonhGRGw_0[7].kind = 1;
TM_jNFaG9cOzyJSKBcIonhGRGw_0[7].offset = offsetof(tyObject_TBaseLexer_jTxk7Uc2dfr9aTDL2dZhO9ag, offsetBase);
TM_jNFaG9cOzyJSKBcIonhGRGw_0[7].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_jNFaG9cOzyJSKBcIonhGRGw_0[7].name = "offsetBase";
TM_jNFaG9cOzyJSKBcIonhGRGw_0[0].len = 7; TM_jNFaG9cOzyJSKBcIonhGRGw_0[0].kind = 2; TM_jNFaG9cOzyJSKBcIonhGRGw_0[0].sons = &TM_jNFaG9cOzyJSKBcIonhGRGw_2_7[0];
NTI_jTxk7Uc2dfr9aTDL2dZhO9ag_.node = &TM_jNFaG9cOzyJSKBcIonhGRGw_0[0];
}

