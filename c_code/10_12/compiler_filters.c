/* Generated by Nim Compiler v0.19.9 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
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
typedef struct tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw;
typedef struct tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ;
typedef struct tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q;
typedef struct tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w;
typedef struct tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA;
typedef struct tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ;
typedef struct tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_TLLStream_a5oZYQ9aTktYME2449ayEi6g tyObject_TLLStream_a5oZYQ9aTktYME2449ayEi6g;
#  define nimfr_(proc, file) \
    TFrame FR_; \
    FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = 0; nimFrame(&FR_);

#  define nimfrs_(proc, file, slots, length) \
    struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename; NI len; VarSlot s[slots];} FR_; \
    FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = length; nimFrame((TFrame*)&FR_);

#  define nimln_(n, file) \
    FR_.line = n; FR_.filename = file;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q {
NU16 line;
NI16 col;
NI32 fileIndex;
};
typedef NU32 tySet_tyEnum_TNodeFlag_jyh9acXHkhZANSSvPIY7ZLg;
typedef NU8 tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw;
struct tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw {
tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* typ;
tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q info;
tySet_tyEnum_TNodeFlag_jyh9acXHkhZANSSvPIY7ZLg flags;
tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw kind;
union{
struct {NI64 intVal;
};
struct {NF floatVal;
};
struct {NimStringDesc* strVal;
};
struct {tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* sym;
};
struct {tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA* ident;
};
struct {tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ* sons;
};
};
NimStringDesc* comment;
};
typedef NU8 tySet_tyEnum_TRenderFlag_wrPgUo1ExBlHvFnXN2nSHw;
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
struct tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA {
  RootObj Sup;
NI id;
};
struct tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA {
  tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA Sup;
NimStringDesc* s;
tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA* next;
NI h;
};
typedef NU8 tyEnum_TLLStreamKind_jVcKY16LbOamXE9bxXUD6pQ;
struct tyObject_TLLStream_a5oZYQ9aTktYME2449ayEi6g {
  RootObj Sup;
tyEnum_TLLStreamKind_jVcKY16LbOamXE9bxXUD6pQ kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineOffset;
};
typedef NU8 tySet_tyChar_nmiMWKVIe46vacnhAFrQvw[32];
struct tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ {
  TGenericSeq Sup;
  tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, getArg_q4P8y9cHp7QR5wPvA73JYwA)(tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, NimStringDesc* name, NI pos);
N_LIB_PRIVATE N_NIMCALL(NI, sonsLen_qPWPHw7WgJeEVYUdcaRIig)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_LIB_PRIVATE N_NIMCALL(void, invalidPragma_7guYTXWSLE75ZHe525aXGQ)(tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_LIB_PRIVATE N_NIMCALL(void, localError_w3nlav3QVHhYSX6HNr5zYg)(tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q info, NimStringDesc* arg);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuFormatSingleElem)(NimStringDesc* formatstr, NimStringDesc* a);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, renderTree_ppjdh9aQ5L0SGPF8yz1gZ9cA)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, tySet_tyEnum_TRenderFlag_wrPgUo1ExBlHvFnXN2nSHw renderFlags);
N_LIB_PRIVATE N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, strArg_Nf4wML3oKvfTVSpIoKYpNg)(tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, NimStringDesc* name, NI pos, NimStringDesc* default_0);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, boolArg_331Hlkc2NTLYIVZ4CKDuFw)(tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, NimStringDesc* name, NI pos, NIM_BOOL default_0);
N_LIB_PRIVATE N_NIMCALL(tyObject_TLLStream_a5oZYQ9aTktYME2449ayEi6g*, llStreamOpen_jPVNKrpc70V5PGNIB9aNmnA)(NimStringDesc* data);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, llStreamReadLine_g59cKaA4Pl4uvYXTpyWRvVQ)(tyObject_TLLStream_a5oZYQ9aTktYME2449ayEi6g* s, NimStringDesc** line);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* s, NIM_BOOL leading, NIM_BOOL trailing, tySet_tyChar_nmiMWKVIe46vacnhAFrQvw chars);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* s, NimStringDesc* prefix);
N_LIB_PRIVATE N_NIMCALL(void, llStreamWriteln_eqdrk1lEwhxG7j05OLH9cNw_2)(tyObject_TLLStream_a5oZYQ9aTktYME2449ayEi6g* s, NimStringDesc* data);
N_LIB_PRIVATE N_NIMCALL(void, llStreamClose_OvGAfUZQ8pvVGcrtn64p2g)(tyObject_TLLStream_a5oZYQ9aTktYME2449ayEi6g* s);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuReplaceStr)(NimStringDesc* s, NimStringDesc* sub, NimStringDesc* by);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached_II46IjNZztN9bmbxUD8dt8g_2)(void);
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
STRING_LITERAL(TM_TpC7tIfhGAaosc7HIsUuXA_2, "\'$1\' not allowed here", 21);
STRING_LITERAL(TM_TpC7tIfhGAaosc7HIsUuXA_3, "startswith", 10);
STRING_LITERAL(TM_TpC7tIfhGAaosc7HIsUuXA_4, "true", 4);
STRING_LITERAL(TM_TpC7tIfhGAaosc7HIsUuXA_5, "false", 5);
STRING_LITERAL(TM_TpC7tIfhGAaosc7HIsUuXA_6, "leading", 7);
STRING_LITERAL(TM_TpC7tIfhGAaosc7HIsUuXA_7, "trailing", 8);
static NIM_CONST tySet_tyChar_nmiMWKVIe46vacnhAFrQvw TM_TpC7tIfhGAaosc7HIsUuXA_8 = {
0x00, 0x3E, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TM_TpC7tIfhGAaosc7HIsUuXA_9, "sub", 3);
STRING_LITERAL(TM_TpC7tIfhGAaosc7HIsUuXA_10, "by", 2);

N_LIB_PRIVATE N_NIMCALL(void, invalidPragma_7guYTXWSLE75ZHe525aXGQ)(tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n) {
	NimStringDesc* T1_;
	NimStringDesc* T2_;
	T1_ = (NimStringDesc*)0;
	T1_ = renderTree_ppjdh9aQ5L0SGPF8yz1gZ9cA(n, 4);
	T2_ = (NimStringDesc*)0;
	T2_ = nsuFormatSingleElem(((NimStringDesc*) &TM_TpC7tIfhGAaosc7HIsUuXA_2), T1_);
	localError_w3nlav3QVHhYSX6HNr5zYg(conf, (*n).info, T2_);
}

N_LIB_PRIVATE N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, getArg_q4P8y9cHp7QR5wPvA73JYwA)(tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, NimStringDesc* name, NI pos) {
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* result;
{	result = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	result = NIM_NIL;
	{
		if (!((*n).kind >= ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 1) && (*n).kind <= ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 23))) goto LA3_;
		goto BeforeRet_;
	}
	LA3_: ;
	{
		NI i;
		NI colontmp_;
		NI T6_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		T6_ = (NI)0;
		T6_ = sonsLen_qPWPHw7WgJeEVYUdcaRIig(n);
		colontmp_ = (NI)(T6_ - ((NI) 1));
		res = ((NI) 1);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA8;
				i = res;
				{
					if (!((*(*n).sons->data[i]).kind == ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 33))) goto LA11_;
					{
						if (!!(((*(*(*n).sons->data[i]).sons->data[((NI) 0)]).kind == ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 2)))) goto LA15_;
						invalidPragma_7guYTXWSLE75ZHe525aXGQ(conf, n);
					}
					LA15_: ;
					{
						NI T19_;
						T19_ = (NI)0;
						T19_ = nsuCmpIgnoreStyle((*(*(*(*n).sons->data[i]).sons->data[((NI) 0)]).ident).s, name);
						if (!(T19_ == ((NI) 0))) goto LA20_;
						result = (*(*n).sons->data[i]).sons->data[((NI) 1)];
						goto BeforeRet_;
					}
					LA20_: ;
				}
				goto LA9_;
				LA11_: ;
				{
					if (!(i == pos)) goto LA23_;
					result = (*n).sons->data[i];
					goto BeforeRet_;
				}
				goto LA9_;
				LA23_: ;
				LA9_: ;
				res += ((NI) 1);
			} LA8: ;
		}
	}
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_CHAR, charArg_zwtWXyb9bxwLC8jk2KVKyAQ)(tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, NimStringDesc* name, NI pos, NIM_CHAR default_0) {
	NIM_CHAR result;
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* x;
	result = (NIM_CHAR)0;
	x = getArg_q4P8y9cHp7QR5wPvA73JYwA(conf, n, name, pos);
	{
		if (!(x == NIM_NIL)) goto LA3_;
		result = default_0;
	}
	goto LA1_;
	LA3_: ;
	{
		if (!((*x).kind == ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 5))) goto LA6_;
		result = ((NIM_CHAR) (((NI) (((NI) ((*x).intVal))))));
	}
	goto LA1_;
	LA6_: ;
	{
		invalidPragma_7guYTXWSLE75ZHe525aXGQ(conf, n);
	}
	LA1_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, strArg_Nf4wML3oKvfTVSpIoKYpNg)(tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, NimStringDesc* name, NI pos, NimStringDesc* default_0) {
	NimStringDesc* result;
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* x;
	result = (NimStringDesc*)0;
	x = getArg_q4P8y9cHp7QR5wPvA73JYwA(conf, n, name, pos);
	{
		if (!(x == NIM_NIL)) goto LA3_;
		result = copyString(default_0);
	}
	goto LA1_;
	LA3_: ;
	{
		if (!((*x).kind >= ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 20) && (*x).kind <= ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 22))) goto LA6_;
		result = copyString((*x).strVal);
	}
	goto LA1_;
	LA6_: ;
	{
		invalidPragma_7guYTXWSLE75ZHe525aXGQ(conf, n);
	}
	LA1_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, boolArg_331Hlkc2NTLYIVZ4CKDuFw)(tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, NimStringDesc* name, NI pos, NIM_BOOL default_0) {
	NIM_BOOL result;
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* x;
	result = (NIM_BOOL)0;
	x = getArg_q4P8y9cHp7QR5wPvA73JYwA(conf, n, name, pos);
	{
		if (!(x == NIM_NIL)) goto LA3_;
		result = default_0;
	}
	goto LA1_;
	LA3_: ;
	{
		NIM_BOOL T6_;
		NI T8_;
		T6_ = (NIM_BOOL)0;
		T6_ = ((*x).kind == ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 2));
		if (!(T6_)) goto LA7_;
		T8_ = (NI)0;
		T8_ = nsuCmpIgnoreStyle((*(*x).ident).s, ((NimStringDesc*) &TM_TpC7tIfhGAaosc7HIsUuXA_4));
		T6_ = (T8_ == ((NI) 0));
		LA7_: ;
		if (!T6_) goto LA9_;
		result = NIM_TRUE;
	}
	goto LA1_;
	LA9_: ;
	{
		NIM_BOOL T12_;
		NI T14_;
		T12_ = (NIM_BOOL)0;
		T12_ = ((*x).kind == ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 2));
		if (!(T12_)) goto LA13_;
		T14_ = (NI)0;
		T14_ = nsuCmpIgnoreStyle((*(*x).ident).s, ((NimStringDesc*) &TM_TpC7tIfhGAaosc7HIsUuXA_5));
		T12_ = (T14_ == ((NI) 0));
		LA13_: ;
		if (!T12_) goto LA15_;
		result = NIM_FALSE;
	}
	goto LA1_;
	LA15_: ;
	{
		invalidPragma_7guYTXWSLE75ZHe525aXGQ(conf, n);
	}
	LA1_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_TLLStream_a5oZYQ9aTktYME2449ayEi6g*, filterStrip_q3sbyZuBFflBnh9a6RUnDbQ)(tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TLLStream_a5oZYQ9aTktYME2449ayEi6g* stdin_0, NimStringDesc* filename, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* call) {
	tyObject_TLLStream_a5oZYQ9aTktYME2449ayEi6g* result;
	NimStringDesc* pattern;
	NIM_BOOL leading;
	NIM_BOOL trailing;
	NimStringDesc* line;
	result = (tyObject_TLLStream_a5oZYQ9aTktYME2449ayEi6g*)0;
	pattern = strArg_Nf4wML3oKvfTVSpIoKYpNg(conf, call, ((NimStringDesc*) &TM_TpC7tIfhGAaosc7HIsUuXA_3), ((NI) 1), ((NimStringDesc*) NIM_NIL));
	leading = boolArg_331Hlkc2NTLYIVZ4CKDuFw(conf, call, ((NimStringDesc*) &TM_TpC7tIfhGAaosc7HIsUuXA_6), ((NI) 2), NIM_TRUE);
	trailing = boolArg_331Hlkc2NTLYIVZ4CKDuFw(conf, call, ((NimStringDesc*) &TM_TpC7tIfhGAaosc7HIsUuXA_7), ((NI) 3), NIM_TRUE);
	result = llStreamOpen_jPVNKrpc70V5PGNIB9aNmnA(((NimStringDesc*) NIM_NIL));
	line = rawNewString(((NI) 80));
	{
		while (1) {
			NIM_BOOL T3_;
			NimStringDesc* stripped;
			T3_ = (NIM_BOOL)0;
			T3_ = llStreamReadLine_g59cKaA4Pl4uvYXTpyWRvVQ(stdin_0, (&line));
			if (!T3_) goto LA2;
			stripped = nsuStrip(line, leading, trailing, TM_TpC7tIfhGAaosc7HIsUuXA_8);
			{
				NIM_BOOL T6_;
				T6_ = (NIM_BOOL)0;
				T6_ = ((pattern ? pattern->Sup.len : 0) == ((NI) 0));
				if (T6_) goto LA7_;
				T6_ = nsuStartsWith(stripped, pattern);
				LA7_: ;
				if (!T6_) goto LA8_;
				llStreamWriteln_eqdrk1lEwhxG7j05OLH9cNw_2(result, stripped);
			}
			goto LA4_;
			LA8_: ;
			{
				llStreamWriteln_eqdrk1lEwhxG7j05OLH9cNw_2(result, line);
			}
			LA4_: ;
		} LA2: ;
	}
	llStreamClose_OvGAfUZQ8pvVGcrtn64p2g(stdin_0);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_TLLStream_a5oZYQ9aTktYME2449ayEi6g*, filterReplace_q3sbyZuBFflBnh9a6RUnDbQ_2)(tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TLLStream_a5oZYQ9aTktYME2449ayEi6g* stdin_0, NimStringDesc* filename, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* call) {
	tyObject_TLLStream_a5oZYQ9aTktYME2449ayEi6g* result;
	NimStringDesc* sub;
	NimStringDesc* by;
	NimStringDesc* line;
	result = (tyObject_TLLStream_a5oZYQ9aTktYME2449ayEi6g*)0;
	sub = strArg_Nf4wML3oKvfTVSpIoKYpNg(conf, call, ((NimStringDesc*) &TM_TpC7tIfhGAaosc7HIsUuXA_9), ((NI) 1), ((NimStringDesc*) NIM_NIL));
	{
		if (!((sub ? sub->Sup.len : 0) == ((NI) 0))) goto LA3_;
		invalidPragma_7guYTXWSLE75ZHe525aXGQ(conf, call);
	}
	LA3_: ;
	by = strArg_Nf4wML3oKvfTVSpIoKYpNg(conf, call, ((NimStringDesc*) &TM_TpC7tIfhGAaosc7HIsUuXA_10), ((NI) 2), ((NimStringDesc*) NIM_NIL));
	result = llStreamOpen_jPVNKrpc70V5PGNIB9aNmnA(((NimStringDesc*) NIM_NIL));
	line = rawNewString(((NI) 80));
	{
		while (1) {
			NIM_BOOL T7_;
			NimStringDesc* T8_;
			T7_ = (NIM_BOOL)0;
			T7_ = llStreamReadLine_g59cKaA4Pl4uvYXTpyWRvVQ(stdin_0, (&line));
			if (!T7_) goto LA6;
			T8_ = (NimStringDesc*)0;
			T8_ = nsuReplaceStr(line, sub, by);
			llStreamWriteln_eqdrk1lEwhxG7j05OLH9cNw_2(result, T8_);
		} LA6: ;
	}
	llStreamClose_OvGAfUZQ8pvVGcrtn64p2g(stdin_0);
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
