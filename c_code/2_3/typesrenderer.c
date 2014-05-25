/* Generated by Nimrod Compiler v0.9.5 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tnode192813 tnode192813;
typedef struct ttype192847 ttype192847;
typedef struct tlineinfo167527 tlineinfo167527;
typedef struct tsym192843 tsym192843;
typedef struct tident171019 tident171019;
typedef struct tnodeseq192807 tnodeseq192807;
typedef struct tidobj171013 tidobj171013;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq192845 ttypeseq192845;
typedef struct tscope192837 tscope192837;
typedef struct TY192943 TY192943;
typedef struct tinstantiation192833 tinstantiation192833;
typedef struct tstrtable192817 tstrtable192817;
typedef struct tsymseq192815 tsymseq192815;
typedef struct tloc192827 tloc192827;
typedef struct trope149007 trope149007;
typedef struct tlib192831 tlib192831;
typedef struct TY10865 TY10865;
typedef struct tcell41888 tcell41888;
typedef struct tcellseq41904 tcellseq41904;
typedef struct tgcheap43816 tgcheap43816;
typedef struct tcellset41900 tcellset41900;
typedef struct tpagedesc41896 tpagedesc41896;
typedef struct tmemregion24210 tmemregion24210;
typedef struct tsmallchunk23438 tsmallchunk23438;
typedef struct tllchunk24204 tllchunk24204;
typedef struct tbigchunk23440 tbigchunk23440;
typedef struct tintset23415 tintset23415;
typedef struct ttrunk23411 ttrunk23411;
typedef struct tavlnode24208 tavlnode24208;
typedef struct tgcstat43814 tgcstat43814;
typedef struct TY192932 TY192932;
typedef struct tlistentry119017 tlistentry119017;
typedef struct tbasechunk23436 tbasechunk23436;
typedef struct tfreecell23428 tfreecell23428;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tlineinfo167527  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  tnode192813  {
ttype192847* Typ;
tlineinfo167527 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym192843* Sym;
} S4;
struct {tident171019* Ident;
} S5;
struct {tnodeseq192807* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
typedef NU8 TY193025[20];
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
struct  tidobj171013  {
  TNimObject Sup;
NI Id;
};
struct  tident171019  {
  tidobj171013 Sup;
NimStringDesc* S;
tident171019* Next;
NI H;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tstrtable192817  {
NI Counter;
tsymseq192815* Data;
};
struct  tloc192827  {
NU8 K;
NU8 S;
NU8 Flags;
ttype192847* T;
trope149007* R;
trope149007* Heaproot;
NI A;
};
struct  tsym192843  {
  tidobj171013 Sup;
NU8 Kind;
union {
struct {ttypeseq192845* Typeinstcache;
tscope192837* Typscope;
} S1;
struct {TY192943* Procinstcache;
tscope192837* Scope;
} S2;
struct {TY192943* Usedgenerics;
tstrtable192817 Tab;
} S3;
} kindU;
NU16 Magic;
ttype192847* Typ;
tident171019* Name;
tlineinfo167527 Info;
tsym192843* Owner;
NU32 Flags;
tnode192813* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc192827 Loc;
tlib192831* Annex;
tnode192813* Constraint;
};
struct  tcell41888  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq41904  {
NI Len;
NI Cap;
tcell41888** D;
};
struct  tcellset41900  {
NI Counter;
NI Max;
tpagedesc41896* Head;
tpagedesc41896** Data;
};
typedef tsmallchunk23438* TY24222[512];
typedef ttrunk23411* ttrunkbuckets23413[256];
struct  tintset23415  {
ttrunkbuckets23413 Data;
};
struct  tmemregion24210  {
NI Minlargeobj;
NI Maxlargeobj;
TY24222 Freesmallchunks;
tllchunk24204* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk23440* Freechunkslist;
tintset23415 Chunkstarts;
tavlnode24208* Root;
tavlnode24208* Deleted;
tavlnode24208* Last;
tavlnode24208* Freeavlnodes;
};
struct  tgcstat43814  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap43816  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq41904 Zct;
tcellseq41904 Decstack;
tcellset41900 Cycleroots;
tcellseq41904 Tempstack;
NI Recgclock;
tmemregion24210 Region;
tgcstat43814 Stat;
};
struct  ttype192847  {
  tidobj171013 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq192845* Sons;
tnode192813* N;
tsym192843* Destructor;
tsym192843* Owner;
tsym192843* Sym;
NI64 Size;
NI Align;
tloc192827 Loc;
};
struct  tscope192837  {
NI Depthlevel;
tstrtable192817 Symbols;
tnodeseq192807* Usingsyms;
tscope192837* Parent;
};
struct  tinstantiation192833  {
tsym192843* Sym;
ttypeseq192845* Concretetypes;
TY192932* Usedby;
};
struct  trope149007  {
  TNimObject Sup;
trope149007* Left;
trope149007* Right;
NI Length;
NimStringDesc* Data;
};
struct  tlistentry119017  {
  TNimObject Sup;
tlistentry119017* Prev;
tlistentry119017* Next;
};
struct  tlib192831  {
  tlistentry119017 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope149007* Name;
tnode192813* Path;
};
typedef NI TY23418[8];
struct  tpagedesc41896  {
tpagedesc41896* Next;
NI Key;
TY23418 Bits;
};
struct  tbasechunk23436  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk23438  {
  tbasechunk23436 Sup;
tsmallchunk23438* Next;
tsmallchunk23438* Prev;
tfreecell23428* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk24204  {
NI Size;
NI Acc;
tllchunk24204* Next;
};
struct  tbigchunk23440  {
  tbasechunk23436 Sup;
tbigchunk23440* Next;
tbigchunk23440* Prev;
NI Align;
NF Data;
};
struct  ttrunk23411  {
ttrunk23411* Next;
NI Key;
TY23418 Bits;
};
typedef tavlnode24208* TY24214[2];
struct  tavlnode24208  {
TY24214 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tfreecell23428  {
tfreecell23428* Next;
NI Zerofield;
};
struct tnodeseq192807 {
  TGenericSeq Sup;
  tnode192813* data[SEQ_DECL_SIZE];
};
struct ttypeseq192845 {
  TGenericSeq Sup;
  ttype192847* data[SEQ_DECL_SIZE];
};
struct TY192943 {
  TGenericSeq Sup;
  tinstantiation192833* data[SEQ_DECL_SIZE];
};
struct tsymseq192815 {
  TGenericSeq Sup;
  tsym192843* data[SEQ_DECL_SIZE];
};
struct TY10865 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY192932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, renderplainsymbolname_343007)(tnode192813* n);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(NI, len_193274)(tnode192813* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(tnode192813*, HEX5BHEX5D_193711)(tnode192813* n, NI i);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, renderdefinitionname_216118)(tsym192843* s, NIM_BOOL noquotes);
N_NIMCALL(void, internalerror_169591)(tlineinfo167527 info, NimStringDesc* errmsg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e_76680, TNimType* typ);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, failedassertimpl_80421)(NimStringDesc* msg);
N_NIMCALL(NimStringDesc*, rendertype_343208)(tnode192813* n);
N_NIMCALL(NimStringDesc*, typetostring_228020)(ttype192847* typ, NU8 prefer);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(void, renderparamtypes_345423)(TY10865** found, tnode192813* n);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell41888*, usrtocell_45243)(void* usr);
static N_INLINE(void, rtladdzct_46802)(tcell41888* c);
N_NOINLINE(void, addzct_45218)(tcellseq41904* s, tcell41888* c);
N_NIMCALL(NimStringDesc*, renderparamtypes_345847)(tnode192813* n, NimStringDesc* sep);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(NimStringDesc*, nsuJoinSep)(NimStringDesc** a, NI aLen0, NimStringDesc* sep);
STRING_LITERAL(TMP4773, "", 0);
static NIM_CONST TY193025 TMP4774 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4775, "sons", 4);
static NIM_CONST TY193025 TMP4776 = {
0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4777, "ident", 5);
STRING_LITERAL(TMP4778, "*", 1);
static NIM_CONST TY193025 TMP4779 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4780, "sym", 3);
STRING_LITERAL(TMP4781, "renderPlainSymbolName() with ", 29);
STRING_LITERAL(TMP4782, "not result.isNil ", 17);
STRING_LITERAL(TMP4783, "len(n) == 1 ", 12);
STRING_LITERAL(TMP4784, "ref.", 4);
STRING_LITERAL(TMP4785, "ptr.", 4);
STRING_LITERAL(TMP4786, "len(n) > 1 ", 11);
STRING_LITERAL(TMP4787, "params.kind == nkFormalParams ", 30);
STRING_LITERAL(TMP4788, "len(params) > 0 ", 16);
STRING_LITERAL(TMP4789, "proc(", 5);
STRING_LITERAL(TMP4790, "len(n) >= 3 ", 12);
STRING_LITERAL(TMP4792, "n[i].kind == nkIdent ", 21);
STRING_LITERAL(TMP4793, "len(n) > 0 ", 11);
STRING_LITERAL(TMP4794, "tuple[", 6);
STRING_LITERAL(TMP4795, "len(n) >= 2 ", 12);
STRING_LITERAL(TMP4797, "typePos > 0 ", 12);
STRING_LITERAL(TMP4800, "renderParamTypes(found,n) with ", 31);
extern TFrame* frameptr_13238;
extern TNimType NTI192023; /* TNodeKind */
extern tgcheap43816 gch_43844;
extern TNimType NTI10865; /* seq[string] */

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13238;
	frameptr_13238 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13238 = (*frameptr_13238).prev;
}

static N_INLINE(NI, len_193274)(tnode192813* n) {
	NI result;
	nimfr("len", "ast.nim")
	result = 0;
	nimln(957, "ast.nim");
	{
		nimln(957, "ast.nim");
		if (((TMP4774[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4775));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(957, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(958, "ast.nim");
		nimln(958, "ast.nim");
		if (((TMP4774[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4775));
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	popFrame();
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

static N_INLINE(tnode192813*, HEX5BHEX5D_193711)(tnode192813* n, NI i) {
	tnode192813* result;
	nimfr("[]", "ast.nim")
	result = 0;
	nimln(971, "ast.nim");
	if (((TMP4774[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4775));
	if ((NU)(i) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
	result = (*n).kindU.S6.Sons->data[i];
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

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = 0;
	LOC11 = ((*a).Sup.len == (*b).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = 0;
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI64)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, renderplainsymbolname_343007)(tnode192813* n) {
	NimStringDesc* result;
	nimfr("renderPlainSymbolName", "typesrenderer.nim")
	result = 0;
	nimln(11, "typesrenderer.nim");
	result = copyString(((NimStringDesc*) &TMP4773));
	nimln(12, "typesrenderer.nim");
	switch ((*n).Kind) {
	case ((NU8) 31):
	{
		NI i_343032;
		NI HEX3Atmp_343201;
		NI LOC2;
		NI res_343203;
		i_343032 = 0;
		HEX3Atmp_343201 = 0;
		nimln(14, "typesrenderer.nim");
		nimln(14, "typesrenderer.nim");
		nimln(14, "typesrenderer.nim");
		LOC2 = 0;
		LOC2 = len_193274(n);
		HEX3Atmp_343201 = subInt(LOC2, 1);
		nimln(1458, "system.nim");
		res_343203 = 0;
		nimln(1459, "system.nim");
		while (1) {
			NI LOC4;
			tnode192813* LOC5;
			nimln(1459, "system.nim");
			if (!(res_343203 <= HEX3Atmp_343201)) goto LA3;
			nimln(1458, "system.nim");
			i_343032 = res_343203;
			nimln(15, "typesrenderer.nim");
			nimln(15, "typesrenderer.nim");
			nimln(15, "typesrenderer.nim");
			nimln(15, "typesrenderer.nim");
			LOC4 = 0;
			LOC4 = len_193274(n);
			LOC5 = 0;
			LOC5 = HEX5BHEX5D_193711(n, subInt(LOC4, 1));
			result = renderplainsymbolname_343007(LOC5);
			nimln(16, "typesrenderer.nim");
			{
				nimln(16, "typesrenderer.nim");
				nimln(16, "typesrenderer.nim");
				if (!(0 < result->Sup.len)) goto LA8;
				nimln(17, "typesrenderer.nim");
				goto BeforeRet;
			}
			LA8: ;
			nimln(1461, "system.nim");
			res_343203 = addInt(res_343203, 1);
		} LA3: ;
	}
	break;
	case ((NU8) 2):
	{
		nimln(19, "typesrenderer.nim");
		{
			nimln(19, "typesrenderer.nim");
			nimln(19, "typesrenderer.nim");
			if (!(((TMP4776[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4777));
			if (!!(eqStrings((*(*n).kindU.S5.Ident).S, ((NimStringDesc*) &TMP4778)))) goto LA13;
			nimln(20, "typesrenderer.nim");
			if (!(((TMP4776[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4777));
			result = copyString((*(*n).kindU.S5.Ident).S);
		}
		LA13: ;
	}
	break;
	case ((NU8) 3):
	{
		nimln(22, "typesrenderer.nim");
		if (!(((TMP4779[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4780));
		result = renderdefinitionname_216118((*n).kindU.S4.Sym, NIM_TRUE);
	}
	break;
	case ((NU8) 43):
	{
		tnode192813* LOC17;
		nimln(24, "typesrenderer.nim");
		nimln(24, "typesrenderer.nim");
		LOC17 = 0;
		LOC17 = HEX5BHEX5D_193711(n, 0);
		result = renderplainsymbolname_343007(LOC17);
	}
	break;
	case ((NU8) 53):
	{
		NI LOC19;
		tnode192813* LOC20;
		nimln(26, "typesrenderer.nim");
		nimln(26, "typesrenderer.nim");
		nimln(26, "typesrenderer.nim");
		nimln(26, "typesrenderer.nim");
		LOC19 = 0;
		LOC19 = len_193274(n);
		LOC20 = 0;
		LOC20 = HEX5BHEX5D_193711(n, subInt(LOC19, 1));
		result = renderplainsymbolname_343007(LOC20);
	}
	break;
	default:
	{
		NimStringDesc* LOC22;
		nimln(28, "typesrenderer.nim");
		nimln(28, "typesrenderer.nim");
		LOC22 = 0;
		nimln(28, "typesrenderer.nim");
		LOC22 = rawNewString(reprEnum((*n).Kind, (&NTI192023))->Sup.len + 29);
appendString(LOC22, ((NimStringDesc*) &TMP4781));
appendString(LOC22, reprEnum((*n).Kind, (&NTI192023)));
		internalerror_169591((*n).Info, LOC22);
	}
	break;
	}
	nimln(29, "typesrenderer.nim");
	{
		nimln(29, "typesrenderer.nim");
		nimln(29, "typesrenderer.nim");
		nimln(29, "typesrenderer.nim");
		if (!!(!(result == 0))) goto LA25;
		nimln(29, "typesrenderer.nim");
		failedassertimpl_80421(((NimStringDesc*) &TMP4782));
	}
	LA25: ;
	BeforeRet: ;
	popFrame();
	return result;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI64)((*dest).Sup.len + 1))- 0] = 0;
	(*dest).Sup.len += 1;
}

N_NIMCALL(NimStringDesc*, rendertype_343208)(tnode192813* n) {
	NimStringDesc* result;
	nimfr("renderType", "typesrenderer.nim")
	result = 0;
	nimln(33, "typesrenderer.nim");
	switch ((*n).Kind) {
	case ((NU8) 2):
	{
		nimln(34, "typesrenderer.nim");
		if (!(((TMP4776[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4777));
		result = copyString((*(*n).kindU.S5.Ident).S);
	}
	break;
	case ((NU8) 3):
	{
		nimln(35, "typesrenderer.nim");
		if (!(((TMP4779[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4780));
		result = typetostring_228020((*(*n).kindU.S4.Sym).Typ, ((NU8) 0));
	}
	break;
	case ((NU8) 141):
	{
		tnode192813* LOC9;
		nimln(37, "typesrenderer.nim");
		{
			NI LOC6;
			nimln(37, "typesrenderer.nim");
			nimln(37, "typesrenderer.nim");
			nimln(37, "typesrenderer.nim");
			LOC6 = 0;
			LOC6 = len_193274(n);
			if (!!((LOC6 == 1))) goto LA7;
			nimln(37, "typesrenderer.nim");
			failedassertimpl_80421(((NimStringDesc*) &TMP4783));
		}
		LA7: ;
		nimln(38, "typesrenderer.nim");
		nimln(38, "typesrenderer.nim");
		LOC9 = 0;
		LOC9 = HEX5BHEX5D_193711(n, 0);
		result = rendertype_343208(LOC9);
	}
	break;
	case ((NU8) 139):
	{
		NimStringDesc* LOC16;
		tnode192813* LOC17;
		NimStringDesc* LOC18;
		nimln(40, "typesrenderer.nim");
		{
			NI LOC13;
			nimln(40, "typesrenderer.nim");
			nimln(40, "typesrenderer.nim");
			nimln(40, "typesrenderer.nim");
			LOC13 = 0;
			LOC13 = len_193274(n);
			if (!!((LOC13 == 1))) goto LA14;
			nimln(40, "typesrenderer.nim");
			failedassertimpl_80421(((NimStringDesc*) &TMP4783));
		}
		LA14: ;
		nimln(41, "typesrenderer.nim");
		nimln(41, "typesrenderer.nim");
		LOC16 = 0;
		nimln(41, "typesrenderer.nim");
		nimln(41, "typesrenderer.nim");
		LOC17 = 0;
		LOC17 = HEX5BHEX5D_193711(n, 0);
		LOC18 = 0;
		LOC18 = rendertype_343208(LOC17);
		LOC16 = rawNewString(LOC18->Sup.len + 4);
appendString(LOC16, ((NimStringDesc*) &TMP4784));
appendString(LOC16, LOC18);
		result = LOC16;
	}
	break;
	case ((NU8) 140):
	{
		NimStringDesc* LOC25;
		tnode192813* LOC26;
		NimStringDesc* LOC27;
		nimln(43, "typesrenderer.nim");
		{
			NI LOC22;
			nimln(43, "typesrenderer.nim");
			nimln(43, "typesrenderer.nim");
			nimln(43, "typesrenderer.nim");
			LOC22 = 0;
			LOC22 = len_193274(n);
			if (!!((LOC22 == 1))) goto LA23;
			nimln(43, "typesrenderer.nim");
			failedassertimpl_80421(((NimStringDesc*) &TMP4783));
		}
		LA23: ;
		nimln(44, "typesrenderer.nim");
		nimln(44, "typesrenderer.nim");
		LOC25 = 0;
		nimln(44, "typesrenderer.nim");
		nimln(44, "typesrenderer.nim");
		LOC26 = 0;
		LOC26 = HEX5BHEX5D_193711(n, 0);
		LOC27 = 0;
		LOC27 = rendertype_343208(LOC26);
		LOC25 = rawNewString(LOC27->Sup.len + 4);
appendString(LOC25, ((NimStringDesc*) &TMP4785));
appendString(LOC25, LOC27);
		result = LOC25;
	}
	break;
	case ((NU8) 145):
	{
		tnode192813* params;
		NI i_344423;
		NI HEX3Atmp_345401;
		NI LOC43;
		NI res_345403;
		nimln(46, "typesrenderer.nim");
		{
			NI LOC31;
			nimln(46, "typesrenderer.nim");
			nimln(46, "typesrenderer.nim");
			nimln(46, "typesrenderer.nim");
			LOC31 = 0;
			LOC31 = len_193274(n);
			if (!!((1 < LOC31))) goto LA32;
			nimln(46, "typesrenderer.nim");
			failedassertimpl_80421(((NimStringDesc*) &TMP4786));
		}
		LA32: ;
		nimln(47, "typesrenderer.nim");
		params = HEX5BHEX5D_193711(n, 0);
		nimln(48, "typesrenderer.nim");
		{
			nimln(48, "typesrenderer.nim");
			nimln(48, "typesrenderer.nim");
			if (!!(((*params).Kind == ((NU8) 76)))) goto LA36;
			nimln(48, "typesrenderer.nim");
			failedassertimpl_80421(((NimStringDesc*) &TMP4787));
		}
		LA36: ;
		nimln(49, "typesrenderer.nim");
		{
			NI LOC40;
			nimln(49, "typesrenderer.nim");
			nimln(49, "typesrenderer.nim");
			nimln(49, "typesrenderer.nim");
			LOC40 = 0;
			LOC40 = len_193274(params);
			if (!!((0 < LOC40))) goto LA41;
			nimln(49, "typesrenderer.nim");
			failedassertimpl_80421(((NimStringDesc*) &TMP4788));
		}
		LA41: ;
		nimln(50, "typesrenderer.nim");
		result = copyString(((NimStringDesc*) &TMP4789));
		i_344423 = 0;
		HEX3Atmp_345401 = 0;
		nimln(51, "typesrenderer.nim");
		nimln(51, "typesrenderer.nim");
		nimln(51, "typesrenderer.nim");
		LOC43 = 0;
		LOC43 = len_193274(params);
		HEX3Atmp_345401 = subInt(LOC43, 1);
		nimln(1458, "system.nim");
		res_345403 = 1;
		nimln(1459, "system.nim");
		while (1) {
			NimStringDesc* LOC45;
			tnode192813* LOC46;
			NimStringDesc* LOC47;
			nimln(1459, "system.nim");
			if (!(res_345403 <= HEX3Atmp_345401)) goto LA44;
			nimln(1458, "system.nim");
			i_344423 = res_345403;
			nimln(51, "typesrenderer.nim");
			nimln(51, "typesrenderer.nim");
			LOC45 = 0;
			nimln(51, "typesrenderer.nim");
			nimln(51, "typesrenderer.nim");
			LOC46 = 0;
			LOC46 = HEX5BHEX5D_193711(params, i_344423);
			LOC47 = 0;
			LOC47 = rendertype_343208(LOC46);
			LOC45 = rawNewString(LOC47->Sup.len + 1);
appendString(LOC45, LOC47);
appendChar(LOC45, 44);
			result = resizeString(result, LOC45->Sup.len + 0);
appendString(result, LOC45);
			nimln(1461, "system.nim");
			res_345403 = addInt(res_345403, 1);
		} LA44: ;
		nimln(52, "typesrenderer.nim");
		nimln(52, "typesrenderer.nim");
		nimln(52, "typesrenderer.nim");
		if ((NU)(subInt(result->Sup.len, 1)) > (NU)(result->Sup.len)) raiseIndexError();
		result->data[subInt(result->Sup.len, 1)] = 41;
	}
	break;
	case ((NU8) 35):
	{
		NI typepos;
		NI LOC54;
		NI TMP4791;
		NimStringDesc* typestr;
		tnode192813* LOC55;
		NI i_344624;
		NI HEX3Atmp_345405;
		NI res_345407;
		nimln(54, "typesrenderer.nim");
		{
			NI LOC51;
			nimln(54, "typesrenderer.nim");
			nimln(54, "typesrenderer.nim");
			nimln(54, "typesrenderer.nim");
			LOC51 = 0;
			LOC51 = len_193274(n);
			if (!!((3 <= LOC51))) goto LA52;
			nimln(54, "typesrenderer.nim");
			failedassertimpl_80421(((NimStringDesc*) &TMP4790));
		}
		LA52: ;
		nimln(55, "typesrenderer.nim");
		nimln(55, "typesrenderer.nim");
		nimln(55, "typesrenderer.nim");
		LOC54 = 0;
		LOC54 = len_193274(n);
		TMP4791 = subInt(LOC54, 2);
		typepos = (NI64)(TMP4791);
		nimln(56, "typesrenderer.nim");
		nimln(56, "typesrenderer.nim");
		LOC55 = 0;
		LOC55 = HEX5BHEX5D_193711(n, typepos);
		typestr = rendertype_343208(LOC55);
		nimln(57, "typesrenderer.nim");
		result = copyString(typestr);
		i_344624 = 0;
		HEX3Atmp_345405 = 0;
		nimln(58, "typesrenderer.nim");
		nimln(58, "typesrenderer.nim");
		HEX3Atmp_345405 = subInt(typepos, 1);
		nimln(1458, "system.nim");
		res_345407 = 1;
		nimln(1459, "system.nim");
		while (1) {
			NimStringDesc* LOC62;
			nimln(1459, "system.nim");
			if (!(res_345407 <= HEX3Atmp_345405)) goto LA56;
			nimln(1458, "system.nim");
			i_344624 = res_345407;
			nimln(59, "typesrenderer.nim");
			{
				tnode192813* LOC59;
				nimln(59, "typesrenderer.nim");
				nimln(59, "typesrenderer.nim");
				nimln(59, "typesrenderer.nim");
				LOC59 = 0;
				LOC59 = HEX5BHEX5D_193711(n, i_344624);
				if (!!(((*LOC59).Kind == ((NU8) 2)))) goto LA60;
				nimln(59, "typesrenderer.nim");
				failedassertimpl_80421(((NimStringDesc*) &TMP4792));
			}
			LA60: ;
			nimln(60, "typesrenderer.nim");
			nimln(60, "typesrenderer.nim");
			LOC62 = 0;
			LOC62 = rawNewString(typestr->Sup.len + 1);
appendChar(LOC62, 44);
appendString(LOC62, typestr);
			result = resizeString(result, LOC62->Sup.len + 0);
appendString(result, LOC62);
			nimln(1461, "system.nim");
			res_345407 = addInt(res_345407, 1);
		} LA56: ;
	}
	break;
	case ((NU8) 133):
	{
		NI i_345023;
		NI HEX3Atmp_345409;
		NI LOC69;
		NI res_345411;
		nimln(62, "typesrenderer.nim");
		{
			NI LOC66;
			nimln(62, "typesrenderer.nim");
			nimln(62, "typesrenderer.nim");
			nimln(62, "typesrenderer.nim");
			LOC66 = 0;
			LOC66 = len_193274(n);
			if (!!((0 < LOC66))) goto LA67;
			nimln(62, "typesrenderer.nim");
			failedassertimpl_80421(((NimStringDesc*) &TMP4793));
		}
		LA67: ;
		nimln(63, "typesrenderer.nim");
		result = copyString(((NimStringDesc*) &TMP4794));
		i_345023 = 0;
		HEX3Atmp_345409 = 0;
		nimln(64, "typesrenderer.nim");
		nimln(64, "typesrenderer.nim");
		nimln(64, "typesrenderer.nim");
		LOC69 = 0;
		LOC69 = len_193274(n);
		HEX3Atmp_345409 = subInt(LOC69, 1);
		nimln(1458, "system.nim");
		res_345411 = 0;
		nimln(1459, "system.nim");
		while (1) {
			NimStringDesc* LOC71;
			tnode192813* LOC72;
			NimStringDesc* LOC73;
			nimln(1459, "system.nim");
			if (!(res_345411 <= HEX3Atmp_345409)) goto LA70;
			nimln(1458, "system.nim");
			i_345023 = res_345411;
			nimln(64, "typesrenderer.nim");
			nimln(64, "typesrenderer.nim");
			LOC71 = 0;
			nimln(64, "typesrenderer.nim");
			nimln(64, "typesrenderer.nim");
			LOC72 = 0;
			LOC72 = HEX5BHEX5D_193711(n, i_345023);
			LOC73 = 0;
			LOC73 = rendertype_343208(LOC72);
			LOC71 = rawNewString(LOC73->Sup.len + 1);
appendString(LOC71, LOC73);
appendChar(LOC71, 44);
			result = resizeString(result, LOC71->Sup.len + 0);
appendString(result, LOC71);
			nimln(1461, "system.nim");
			res_345411 = addInt(res_345411, 1);
		} LA70: ;
		nimln(65, "typesrenderer.nim");
		nimln(65, "typesrenderer.nim");
		nimln(65, "typesrenderer.nim");
		if ((NU)(subInt(result->Sup.len, 1)) > (NU)(result->Sup.len)) raiseIndexError();
		result->data[subInt(result->Sup.len, 1)] = 93;
	}
	break;
	case ((NU8) 42):
	{
		NimStringDesc* LOC80;
		tnode192813* LOC81;
		NimStringDesc* LOC82;
		NI i_345222;
		NI HEX3Atmp_345413;
		NI LOC83;
		NI res_345415;
		nimln(67, "typesrenderer.nim");
		{
			NI LOC77;
			nimln(67, "typesrenderer.nim");
			nimln(67, "typesrenderer.nim");
			nimln(67, "typesrenderer.nim");
			LOC77 = 0;
			LOC77 = len_193274(n);
			if (!!((2 <= LOC77))) goto LA78;
			nimln(67, "typesrenderer.nim");
			failedassertimpl_80421(((NimStringDesc*) &TMP4795));
		}
		LA78: ;
		nimln(68, "typesrenderer.nim");
		nimln(68, "typesrenderer.nim");
		LOC80 = 0;
		nimln(68, "typesrenderer.nim");
		nimln(68, "typesrenderer.nim");
		LOC81 = 0;
		LOC81 = HEX5BHEX5D_193711(n, 0);
		LOC82 = 0;
		LOC82 = rendertype_343208(LOC81);
		LOC80 = rawNewString(LOC82->Sup.len + 1);
appendString(LOC80, LOC82);
appendChar(LOC80, 91);
		result = LOC80;
		i_345222 = 0;
		HEX3Atmp_345413 = 0;
		nimln(69, "typesrenderer.nim");
		nimln(69, "typesrenderer.nim");
		nimln(69, "typesrenderer.nim");
		LOC83 = 0;
		LOC83 = len_193274(n);
		HEX3Atmp_345413 = subInt(LOC83, 1);
		nimln(1458, "system.nim");
		res_345415 = 1;
		nimln(1459, "system.nim");
		while (1) {
			NimStringDesc* LOC85;
			tnode192813* LOC86;
			NimStringDesc* LOC87;
			nimln(1459, "system.nim");
			if (!(res_345415 <= HEX3Atmp_345413)) goto LA84;
			nimln(1458, "system.nim");
			i_345222 = res_345415;
			nimln(69, "typesrenderer.nim");
			nimln(69, "typesrenderer.nim");
			LOC85 = 0;
			nimln(69, "typesrenderer.nim");
			nimln(69, "typesrenderer.nim");
			LOC86 = 0;
			LOC86 = HEX5BHEX5D_193711(n, i_345222);
			LOC87 = 0;
			LOC87 = rendertype_343208(LOC86);
			LOC85 = rawNewString(LOC87->Sup.len + 1);
appendString(LOC85, LOC87);
appendChar(LOC85, 44);
			result = resizeString(result, LOC85->Sup.len + 0);
appendString(result, LOC85);
			nimln(1461, "system.nim");
			res_345415 = addInt(res_345415, 1);
		} LA84: ;
		nimln(70, "typesrenderer.nim");
		nimln(70, "typesrenderer.nim");
		nimln(70, "typesrenderer.nim");
		if ((NU)(subInt(result->Sup.len, 1)) > (NU)(result->Sup.len)) raiseIndexError();
		result->data[subInt(result->Sup.len, 1)] = 93;
	}
	break;
	default:
	{
		nimln(71, "typesrenderer.nim");
		result = copyString(((NimStringDesc*) &TMP4773));
	}
	break;
	}
	nimln(72, "typesrenderer.nim");
	{
		nimln(72, "typesrenderer.nim");
		nimln(72, "typesrenderer.nim");
		nimln(72, "typesrenderer.nim");
		if (!!(!(result == 0))) goto LA91;
		nimln(72, "typesrenderer.nim");
		failedassertimpl_80421(((NimStringDesc*) &TMP4782));
	}
	LA91: ;
	popFrame();
	return result;
}

static N_INLINE(tcell41888*, usrtocell_45243)(void* usr) {
	tcell41888* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	result = ((tcell41888*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell41888))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_46802)(tcell41888* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_45218(&gch_43844.Zct, c);
	popFrame();
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell41888* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(233, "gc.nim");
	c = usrtocell_45243(p);
	nimln(235, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).Refcount -= 8;
		nimln(168, "gc.nim");
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		nimln(236, "gc.nim");
		rtladdzct_46802(c);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(void, renderparamtypes_345423)(TY10865** found, tnode192813* n) {
	nimfr("renderParamTypes", "typesrenderer.nim")
	nimln(81, "typesrenderer.nim");
	switch ((*n).Kind) {
	case ((NU8) 76):
	{
		NI i_345450;
		NI HEX3Atmp_345835;
		NI LOC2;
		NI res_345837;
		i_345450 = 0;
		HEX3Atmp_345835 = 0;
		nimln(83, "typesrenderer.nim");
		nimln(83, "typesrenderer.nim");
		nimln(83, "typesrenderer.nim");
		LOC2 = 0;
		LOC2 = len_193274(n);
		HEX3Atmp_345835 = subInt(LOC2, 1);
		nimln(1458, "system.nim");
		res_345837 = 1;
		nimln(1459, "system.nim");
		while (1) {
			tnode192813* LOC4;
			nimln(1459, "system.nim");
			if (!(res_345837 <= HEX3Atmp_345835)) goto LA3;
			nimln(1458, "system.nim");
			i_345450 = res_345837;
			nimln(83, "typesrenderer.nim");
			nimln(83, "typesrenderer.nim");
			LOC4 = 0;
			LOC4 = HEX5BHEX5D_193711(n, i_345450);
			renderparamtypes_345423(found, LOC4);
			nimln(1461, "system.nim");
			res_345837 = addInt(res_345837, 1);
		} LA3: ;
	}
	break;
	case ((NU8) 35):
	{
		NI typepos;
		NI LOC6;
		NI TMP4796;
		NimStringDesc* typestr;
		tnode192813* LOC11;
		NI i_345647;
		NI HEX3Atmp_345839;
		NI res_345841;
		nimln(86, "typesrenderer.nim");
		nimln(86, "typesrenderer.nim");
		nimln(86, "typesrenderer.nim");
		LOC6 = 0;
		LOC6 = len_193274(n);
		TMP4796 = subInt(LOC6, 2);
		typepos = (NI64)(TMP4796);
		nimln(87, "typesrenderer.nim");
		{
			nimln(87, "typesrenderer.nim");
			nimln(87, "typesrenderer.nim");
			if (!!((0 < typepos))) goto LA9;
			nimln(87, "typesrenderer.nim");
			failedassertimpl_80421(((NimStringDesc*) &TMP4797));
		}
		LA9: ;
		nimln(88, "typesrenderer.nim");
		nimln(88, "typesrenderer.nim");
		LOC11 = 0;
		LOC11 = HEX5BHEX5D_193711(n, typepos);
		typestr = rendertype_343208(LOC11);
		nimln(89, "typesrenderer.nim");
		{
			NIM_BOOL LOC14;
			NI TMP4798;
			tnode192813* LOC16;
			ttype192847* typ;
			NI TMP4799;
			tnode192813* LOC19;
			nimln(89, "typesrenderer.nim");
			LOC14 = 0;
			nimln(89, "typesrenderer.nim");
			nimln(89, "typesrenderer.nim");
			LOC14 = (typestr->Sup.len < 1);
			if (!(LOC14)) goto LA15;
			nimln(89, "typesrenderer.nim");
			nimln(89, "typesrenderer.nim");
			nimln(89, "typesrenderer.nim");
			nimln(89, "typesrenderer.nim");
			TMP4798 = addInt(typepos, 1);
			LOC16 = 0;
			LOC16 = HEX5BHEX5D_193711(n, (NI64)(TMP4798));
			LOC14 = !(((*LOC16).Kind == ((NU8) 1)));
			LA15: ;
			if (!LOC14) goto LA17;
			nimln(91, "typesrenderer.nim");
			nimln(91, "typesrenderer.nim");
			nimln(91, "typesrenderer.nim");
			TMP4799 = addInt(typepos, 1);
			LOC19 = 0;
			LOC19 = HEX5BHEX5D_193711(n, (NI64)(TMP4799));
			typ = (*LOC19).Typ;
			nimln(92, "typesrenderer.nim");
			{
				nimln(92, "typesrenderer.nim");
				nimln(92, "typesrenderer.nim");
				if (!!(typ == 0)) goto LA22;
				nimln(92, "typesrenderer.nim");
				typestr = typetostring_228020(typ, ((NU8) 2));
			}
			LA22: ;
			nimln(93, "typesrenderer.nim");
			{
				nimln(93, "typesrenderer.nim");
				nimln(93, "typesrenderer.nim");
				if (!(typestr->Sup.len < 1)) goto LA26;
				nimln(93, "typesrenderer.nim");
				goto BeforeRet;
			}
			LA26: ;
		}
		LA17: ;
		i_345647 = 0;
		HEX3Atmp_345839 = 0;
		nimln(94, "typesrenderer.nim");
		nimln(94, "typesrenderer.nim");
		HEX3Atmp_345839 = subInt(typepos, 1);
		nimln(1458, "system.nim");
		res_345841 = 0;
		nimln(1459, "system.nim");
		while (1) {
			NimStringDesc* LOC34;
			nimln(1459, "system.nim");
			if (!(res_345841 <= HEX3Atmp_345839)) goto LA28;
			nimln(1458, "system.nim");
			i_345647 = res_345841;
			nimln(95, "typesrenderer.nim");
			{
				tnode192813* LOC31;
				nimln(95, "typesrenderer.nim");
				nimln(95, "typesrenderer.nim");
				nimln(95, "typesrenderer.nim");
				LOC31 = 0;
				LOC31 = HEX5BHEX5D_193711(n, i_345647);
				if (!!(((*LOC31).Kind == ((NU8) 2)))) goto LA32;
				nimln(95, "typesrenderer.nim");
				failedassertimpl_80421(((NimStringDesc*) &TMP4792));
			}
			LA32: ;
			nimln(96, "typesrenderer.nim");
			(*found) = (TY10865*) incrSeq(&((*found))->Sup, sizeof(NimStringDesc*));
			LOC34 = 0;
			LOC34 = (*found)->data[(*found)->Sup.len-1]; (*found)->data[(*found)->Sup.len-1] = copyStringRC1(typestr);
			if (LOC34) nimGCunrefNoCycle(LOC34);
			nimln(1461, "system.nim");
			res_345841 = addInt(res_345841, 1);
		} LA28: ;
	}
	break;
	default:
	{
		NimStringDesc* LOC36;
		nimln(98, "typesrenderer.nim");
		nimln(98, "typesrenderer.nim");
		LOC36 = 0;
		nimln(98, "typesrenderer.nim");
		LOC36 = rawNewString(reprEnum((*n).Kind, (&NTI192023))->Sup.len + 31);
appendString(LOC36, ((NimStringDesc*) &TMP4800));
appendString(LOC36, reprEnum((*n).Kind, (&NTI192023)));
		internalerror_169591((*n).Info, LOC36);
	}
	break;
	}
	BeforeRet: ;
	popFrame();
}

N_NIMCALL(NimStringDesc*, renderparamtypes_345847)(tnode192813* n, NimStringDesc* sep) {
	NimStringDesc* result;
	TY10865* found;
	nimfr("renderParamTypes", "typesrenderer.nim")
	result = 0;
	nimln(107, "typesrenderer.nim");
	result = copyString(((NimStringDesc*) &TMP4773));
	nimln(108, "typesrenderer.nim");
	found = (TY10865*) newSeq((&NTI10865), 0);
	nimln(109, "typesrenderer.nim");
	renderparamtypes_345423(&found, n);
	nimln(110, "typesrenderer.nim");
	{
		nimln(110, "typesrenderer.nim");
		nimln(110, "typesrenderer.nim");
		if (!(0 < found->Sup.len)) goto LA3;
		nimln(111, "typesrenderer.nim");
		result = nsuJoinSep(found->data, found->Sup.len, sep);
	}
	LA3: ;
	popFrame();
	return result;
}
N_NOINLINE(void, typesrendererInit)(void) {
	nimfr("typesrenderer", "typesrenderer.nim")
	popFrame();
}

N_NOINLINE(void, typesrendererDatInit)(void) {
}

