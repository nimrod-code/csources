/* Generated by Nimrod Compiler v0.9.5 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tnode192813 tnode192813;
typedef struct ttype192847 ttype192847;
typedef struct tlineinfo167527 tlineinfo167527;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
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
typedef struct tnodetable192871 tnodetable192871;
typedef struct tnodepairseq192869 tnodepairseq192869;
typedef struct tnodepair192867 tnodepair192867;
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
struct  tlineinfo167527  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct  tnodepair192867  {
NI H;
tnode192813* Key;
NI Val;
};
struct  tnodetable192871  {
NI Counter;
tnodepairseq192869* Data;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
typedef NI TY23418[16];
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
struct tnodepairseq192869 {
  TGenericSeq Sup;
  tnodepair192867 data[SEQ_DECL_SIZE];
};
struct TY192932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NI, hashtree_252022)(tnode192813* n);
static N_INLINE(NI, HEX21HEX26_120015)(NI h, NI val);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NIMCALL(NI64, chckRange64)(NI64 i, NI64 a, NI64 b);
N_NIMCALL(NI, hash_120827)(NimStringDesc* x);
static N_INLINE(NI, sonslen_193191)(tnode192813* n);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NIM_BOOL, treesequivalent_252223)(tnode192813* a, tnode192813* b);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NIM_BOOL, sametypeornil_233151)(ttype192847* a, ttype192847* b, NU8 flags);
N_NIMCALL(NI, nodetablerawget_252475)(tnodetable192871 t, NI k, tnode192813* key);
static N_INLINE(NI, nexttry_201192)(NI h, NI maxhash);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(NI, nodetableget_252503)(tnodetable192871 t, tnode192813* key);
N_NIMCALL(void, nodetablerawinsert_252514)(tnodepairseq192869** data, NI k, tnode192813* key, NI val);
N_NIMCALL(void, failedassertimpl_80421)(NimStringDesc* msg);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell41888*, usrtocell_45243)(void* usr);
static N_INLINE(void, rtladdzct_46802)(tcell41888* c);
N_NOINLINE(void, addzct_45218)(tcellseq41904* s, tcell41888* c);
N_NIMCALL(void, nodetableput_252622)(tnodetable192871* t, tnode192813* key, NI val);
N_NIMCALL(NIM_BOOL, mustrehash_201187)(NI length, NI counter);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NI, nodetabletestorset_252928)(tnodetable192871* t, tnode192813* key, NI val);
static NIM_CONST TY193025 TMP3200 = {
0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3201, "ident", 5);
static NIM_CONST TY193025 TMP3202 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3203, "sym", 3);
static NIM_CONST TY193025 TMP3204 = {
0xE0, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3205, "intVal", 6);
static NIM_CONST TY193025 TMP3206 = {
0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3207, "floatVal", 8);
static NIM_CONST TY193025 TMP3208 = {
0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3209, "strVal", 6);
static NIM_CONST TY193025 TMP3210 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3211, "sons", 4);
STRING_LITERAL(TMP3216, "data[h].key == nil ", 19);
STRING_LITERAL(TMP3217, "t.data[index].key != nil ", 25);
extern TFrame* frameptr_13238;
extern tgcheap43816 gch_43844;
extern TNimType NTI192869; /* TNodePairSeq */

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13238;
	frameptr_13238 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13238 = (*frameptr_13238).prev;
}

static N_INLINE(NI, HEX21HEX26_120015)(NI h, NI val) {
	NI result;
	nimfr("!&", "hashes.nim")
	result = 0;
	nimln(24, "hashes.nim");
	nimln(24, "hashes.nim");
	result = (NI)((NU32)(h) + (NU32)(val));
	nimln(25, "hashes.nim");
	nimln(25, "hashes.nim");
	nimln(25, "hashes.nim");
	result = (NI)((NU32)(result) + (NU32)((NI)((NU32)(result) << (NU32)(10))));
	nimln(26, "hashes.nim");
	nimln(26, "hashes.nim");
	nimln(26, "hashes.nim");
	result = (NI)(result ^ (NI)((NU32)(result) >> (NU32)(6)));
	popFrame();
	return result;
}

static N_INLINE(NI, sonslen_193191)(tnode192813* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1300, "ast.nim");
	{
		nimln(1300, "ast.nim");
		if (((TMP3210[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3211));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1300, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(1301, "ast.nim");
		nimln(1301, "ast.nim");
		if (((TMP3210[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3211));
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	popFrame();
	return result;
}

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU32)(a) - (NU32)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ (NI)((NU32) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	BeforeRet: ;
	return result;
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

N_NIMCALL(NI, hashtree_252022)(tnode192813* n) {
	NI result;
	nimfr("hashTree", "treetab.nim")
	result = 0;
	nimln(16, "treetab.nim");
	{
		nimln(16, "treetab.nim");
		if (!(n == NIM_NIL)) goto LA3;
		nimln(16, "treetab.nim");
		goto BeforeRet;
	}
	LA3: ;
	nimln(17, "treetab.nim");
	nimln(17, "treetab.nim");
	result = ((NI) ((*n).Kind));
	nimln(18, "treetab.nim");
	switch ((*n).Kind) {
	case ((NU8) 1):
	case ((NU8) 23):
	case ((NU8) 4):
	{
	}
	break;
	case ((NU8) 2):
	{
		nimln(22, "treetab.nim");
		if (!(((TMP3200[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3201));
		result = HEX21HEX26_120015(result, (*(*n).kindU.S5.Ident).H);
	}
	break;
	case ((NU8) 3):
	{
		nimln(24, "treetab.nim");
		if (!(((TMP3202[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3203));
		result = HEX21HEX26_120015(result, (*(*(*n).kindU.S4.Sym).Name).H);
	}
	break;
	case ((NU8) 5) ... ((NU8) 15):
	{
		nimln(26, "treetab.nim");
		{
			NIM_BOOL LOC11;
			nimln(26, "treetab.nim");
			LOC11 = 0;
			nimln(26, "treetab.nim");
			if (!(((TMP3204[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3205));
			LOC11 = ((-2147483647 -1) <= (*n).kindU.S1.Intval);
			if (!(LOC11)) goto LA12;
			nimln(26, "treetab.nim");
			if (!(((TMP3204[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3205));
			LOC11 = ((*n).kindU.S1.Intval <= 2147483647);
			LA12: ;
			if (!LOC11) goto LA13;
			nimln(27, "treetab.nim");
			if (!(((TMP3204[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3205));
			result = HEX21HEX26_120015(result, ((NI)chckRange64((*n).kindU.S1.Intval, (-2147483647 -1), 2147483647)));
		}
		LA13: ;
	}
	break;
	case ((NU8) 16) ... ((NU8) 18):
	{
		nimln(29, "treetab.nim");
		{
			NIM_BOOL LOC18;
			nimln(29, "treetab.nim");
			LOC18 = 0;
			nimln(29, "treetab.nim");
			if (!(((TMP3206[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3207));
			LOC18 = (-1.0000000000000000e+006 <= (*n).kindU.S2.Floatval);
			if (!(LOC18)) goto LA19;
			nimln(29, "treetab.nim");
			if (!(((TMP3206[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3207));
			LOC18 = ((*n).kindU.S2.Floatval <= 1.0000000000000000e+006);
			LA19: ;
			if (!LOC18) goto LA20;
			nimln(30, "treetab.nim");
			nimln(30, "treetab.nim");
			if (!(((TMP3206[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3207));
			result = HEX21HEX26_120015(result, float64ToInt32((*n).kindU.S2.Floatval));
		}
		LA20: ;
	}
	break;
	case ((NU8) 20) ... ((NU8) 22):
	{
		NI LOC23;
		nimln(32, "treetab.nim");
		nimln(32, "treetab.nim");
		if (!(((TMP3208[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3209));
		LOC23 = 0;
		LOC23 = hash_120827((*n).kindU.S3.Strval);
		result = HEX21HEX26_120015(result, LOC23);
	}
	break;
	default:
	{
		NI i_252197;
		NI HEX3Atmp_252216;
		NI LOC25;
		NI TMP3212;
		NI res_252218;
		i_252197 = 0;
		HEX3Atmp_252216 = 0;
		nimln(34, "treetab.nim");
		nimln(34, "treetab.nim");
		nimln(34, "treetab.nim");
		LOC25 = 0;
		LOC25 = sonslen_193191(n);
		TMP3212 = subInt(LOC25, 1);
		HEX3Atmp_252216 = (NI32)(TMP3212);
		nimln(1451, "system.nim");
		res_252218 = 0;
		nimln(1452, "system.nim");
		while (1) {
			NI LOC27;
			nimln(1452, "system.nim");
			if (!(res_252218 <= HEX3Atmp_252216)) goto LA26;
			nimln(1451, "system.nim");
			i_252197 = res_252218;
			nimln(35, "treetab.nim");
			nimln(35, "treetab.nim");
			if (((TMP3210[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3211));
			if ((NU)(i_252197) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			LOC27 = 0;
			LOC27 = hashtree_252022((*n).kindU.S6.Sons->data[i_252197]);
			result = HEX21HEX26_120015(result, LOC27);
			nimln(1454, "system.nim");
			res_252218 = addInt(res_252218, 1);
		} LA26: ;
	}
	break;
	}
	BeforeRet: ;
	popFrame();
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
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI32)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, treesequivalent_252223)(tnode192813* a, tnode192813* b) {
	NIM_BOOL result;
	nimfr("treesEquivalent", "treetab.nim")
	result = 0;
	nimln(38, "treetab.nim");
	{
		nimln(38, "treetab.nim");
		if (!(a == b)) goto LA3;
		nimln(39, "treetab.nim");
		result = NIM_TRUE;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		NIM_BOOL LOC7;
		nimln(40, "treetab.nim");
		LOC6 = 0;
		nimln(40, "treetab.nim");
		LOC7 = 0;
		nimln(40, "treetab.nim");
		nimln(40, "treetab.nim");
		LOC7 = !((a == NIM_NIL));
		if (!(LOC7)) goto LA8;
		nimln(40, "treetab.nim");
		nimln(40, "treetab.nim");
		LOC7 = !((b == NIM_NIL));
		LA8: ;
		LOC6 = LOC7;
		if (!(LOC6)) goto LA9;
		nimln(40, "treetab.nim");
		LOC6 = ((*a).Kind == (*b).Kind);
		LA9: ;
		if (!LOC6) goto LA10;
		nimln(41, "treetab.nim");
		switch ((*a).Kind) {
		case ((NU8) 1):
		case ((NU8) 23):
		case ((NU8) 4):
		{
			nimln(42, "treetab.nim");
			result = NIM_TRUE;
		}
		break;
		case ((NU8) 3):
		{
			nimln(43, "treetab.nim");
			nimln(43, "treetab.nim");
			if (!(((TMP3202[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3203));
			if (!(((TMP3202[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3203));
			result = ((*(*a).kindU.S4.Sym).Sup.Id == (*(*b).kindU.S4.Sym).Sup.Id);
		}
		break;
		case ((NU8) 2):
		{
			nimln(44, "treetab.nim");
			nimln(44, "treetab.nim");
			if (!(((TMP3200[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3201));
			if (!(((TMP3200[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3201));
			result = ((*(*a).kindU.S5.Ident).Sup.Id == (*(*b).kindU.S5.Ident).Sup.Id);
		}
		break;
		case ((NU8) 5) ... ((NU8) 15):
		{
			nimln(45, "treetab.nim");
			nimln(45, "treetab.nim");
			if (!(((TMP3204[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3205));
			if (!(((TMP3204[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3205));
			result = ((*a).kindU.S1.Intval == (*b).kindU.S1.Intval);
		}
		break;
		case ((NU8) 16) ... ((NU8) 18):
		{
			nimln(46, "treetab.nim");
			nimln(46, "treetab.nim");
			if (!(((TMP3206[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3207));
			if (!(((TMP3206[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3207));
			result = ((*a).kindU.S2.Floatval == (*b).kindU.S2.Floatval);
		}
		break;
		case ((NU8) 20) ... ((NU8) 22):
		{
			nimln(47, "treetab.nim");
			nimln(47, "treetab.nim");
			if (!(((TMP3208[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3209));
			if (!(((TMP3208[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3209));
			result = eqStrings((*a).kindU.S3.Strval, (*b).kindU.S3.Strval);
		}
		break;
		default:
		{
			nimln(49, "treetab.nim");
			{
				NI LOC21;
				NI LOC22;
				NI i_252439;
				NI HEX3Atmp_252468;
				NI LOC25;
				NI TMP3213;
				NI res_252470;
				nimln(49, "treetab.nim");
				nimln(49, "treetab.nim");
				LOC21 = 0;
				LOC21 = sonslen_193191(a);
				nimln(49, "treetab.nim");
				LOC22 = 0;
				LOC22 = sonslen_193191(b);
				if (!(LOC21 == LOC22)) goto LA23;
				i_252439 = 0;
				HEX3Atmp_252468 = 0;
				nimln(50, "treetab.nim");
				nimln(50, "treetab.nim");
				nimln(50, "treetab.nim");
				LOC25 = 0;
				LOC25 = sonslen_193191(a);
				TMP3213 = subInt(LOC25, 1);
				HEX3Atmp_252468 = (NI32)(TMP3213);
				nimln(1451, "system.nim");
				res_252470 = 0;
				nimln(1452, "system.nim");
				while (1) {
					nimln(1452, "system.nim");
					if (!(res_252470 <= HEX3Atmp_252468)) goto LA26;
					nimln(1451, "system.nim");
					i_252439 = res_252470;
					nimln(51, "treetab.nim");
					{
						NIM_BOOL LOC29;
						nimln(51, "treetab.nim");
						nimln(51, "treetab.nim");
						if (((TMP3210[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3211));
						if ((NU)(i_252439) >= (NU)((*a).kindU.S6.Sons->Sup.len)) raiseIndexError();
						if (((TMP3210[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3211));
						if ((NU)(i_252439) >= (NU)((*b).kindU.S6.Sons->Sup.len)) raiseIndexError();
						LOC29 = 0;
						LOC29 = treesequivalent_252223((*a).kindU.S6.Sons->data[i_252439], (*b).kindU.S6.Sons->data[i_252439]);
						if (!!(LOC29)) goto LA30;
						nimln(51, "treetab.nim");
						goto BeforeRet;
					}
					LA30: ;
					nimln(1454, "system.nim");
					res_252470 = addInt(res_252470, 1);
				} LA26: ;
				nimln(52, "treetab.nim");
				result = NIM_TRUE;
			}
			LA23: ;
		}
		break;
		}
		nimln(53, "treetab.nim");
		{
			if (!result) goto LA34;
			nimln(53, "treetab.nim");
			result = sametypeornil_233151((*a).Typ, (*b).Typ, 0);
		}
		LA34: ;
	}
	goto LA1;
	LA10: ;
	LA1: ;
	BeforeRet: ;
	popFrame();
	return result;
}

static N_INLINE(NI, nexttry_201192)(NI h, NI maxhash) {
	NI result;
	NI TMP3214;
	NI TMP3215;
	nimfr("nextTry", "astalgo.nim")
	result = 0;
	nimln(465, "astalgo.nim");
	nimln(465, "astalgo.nim");
	nimln(465, "astalgo.nim");
	nimln(465, "astalgo.nim");
	TMP3214 = mulInt(5, h);
	TMP3215 = addInt((NI32)(TMP3214), 1);
	result = (NI)((NI32)(TMP3215) & maxhash);
	popFrame();
	return result;
}

N_NIMCALL(NI, nodetablerawget_252475)(tnodetable192871 t, NI k, tnode192813* key) {
	NI result;
	NI h;
	nimfr("nodeTableRawGet", "treetab.nim")
	result = 0;
	nimln(56, "treetab.nim");
	nimln(56, "treetab.nim");
	nimln(56, "treetab.nim");
	h = (NI)(k & (t.Data->Sup.len-1));
	nimln(57, "treetab.nim");
	while (1) {
		nimln(57, "treetab.nim");
		nimln(57, "treetab.nim");
		if ((NU)(h) >= (NU)(t.Data->Sup.len)) raiseIndexError();
		if (!!((t.Data->data[h].Key == NIM_NIL))) goto LA1;
		nimln(58, "treetab.nim");
		{
			NIM_BOOL LOC4;
			nimln(58, "treetab.nim");
			LOC4 = 0;
			nimln(58, "treetab.nim");
			if ((NU)(h) >= (NU)(t.Data->Sup.len)) raiseIndexError();
			LOC4 = (t.Data->data[h].H == k);
			if (!(LOC4)) goto LA5;
			nimln(58, "treetab.nim");
			if ((NU)(h) >= (NU)(t.Data->Sup.len)) raiseIndexError();
			LOC4 = treesequivalent_252223(t.Data->data[h].Key, key);
			LA5: ;
			if (!LOC4) goto LA6;
			nimln(59, "treetab.nim");
			nimln(59, "treetab.nim");
			result = h;
			goto BeforeRet;
		}
		LA6: ;
		nimln(60, "treetab.nim");
		nimln(60, "treetab.nim");
		h = nexttry_201192(h, (t.Data->Sup.len-1));
	} LA1: ;
	nimln(61, "treetab.nim");
	result = -1;
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NI, nodetableget_252503)(tnodetable192871 t, tnode192813* key) {
	NI result;
	NI index;
	NI LOC1;
	nimfr("nodeTableGet", "treetab.nim")
	result = 0;
	nimln(64, "treetab.nim");
	nimln(64, "treetab.nim");
	LOC1 = 0;
	LOC1 = hashtree_252022(key);
	index = nodetablerawget_252475(t, LOC1, key);
	nimln(65, "treetab.nim");
	{
		nimln(65, "treetab.nim");
		if (!(0 <= index)) goto LA4;
		nimln(65, "treetab.nim");
		if ((NU)(index) >= (NU)(t.Data->Sup.len)) raiseIndexError();
		result = t.Data->data[index].Val;
	}
	goto LA2;
	LA4: ;
	{
		nimln(66, "treetab.nim");
		result = (-2147483647 -1);
	}
	LA2: ;
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
	result = ((tcell41888*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell41888))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_46802)(tcell41888* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_45218(&gch_43844.Zct, c);
	popFrame();
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(251, "gc.nim");
	{
		tcell41888* c;
		nimln(251, "gc.nim");
		nimln(251, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(252, "gc.nim");
		c = usrtocell_45243(src);
		nimln(169, "gc.nim");
		(*c).Refcount += 8;
	}
	LA3: ;
	nimln(254, "gc.nim");
	{
		tcell41888* c;
		nimln(254, "gc.nim");
		nimln(254, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		nimln(255, "gc.nim");
		c = usrtocell_45243((*dest));
		nimln(256, "gc.nim");
		{
			nimln(167, "gc.nim");
			(*c).Refcount -= 8;
			nimln(168, "gc.nim");
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			nimln(257, "gc.nim");
			rtladdzct_46802(c);
		}
		LA11: ;
	}
	LA7: ;
	nimln(258, "gc.nim");
	(*dest) = src;
	popFrame();
}

N_NIMCALL(void, nodetablerawinsert_252514)(tnodepairseq192869** data, NI k, tnode192813* key, NI val) {
	NI h;
	nimfr("nodeTableRawInsert", "treetab.nim")
	nimln(70, "treetab.nim");
	nimln(70, "treetab.nim");
	nimln(70, "treetab.nim");
	h = (NI)(k & ((*data)->Sup.len-1));
	nimln(71, "treetab.nim");
	while (1) {
		nimln(71, "treetab.nim");
		nimln(71, "treetab.nim");
		if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
		if (!!(((*data)->data[h].Key == NIM_NIL))) goto LA1;
		nimln(71, "treetab.nim");
		nimln(71, "treetab.nim");
		h = nexttry_201192(h, ((*data)->Sup.len-1));
	} LA1: ;
	nimln(72, "treetab.nim");
	{
		nimln(72, "treetab.nim");
		nimln(72, "treetab.nim");
		if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
		if (!!(((*data)->data[h].Key == NIM_NIL))) goto LA4;
		nimln(72, "treetab.nim");
		failedassertimpl_80421(((NimStringDesc*) &TMP3216));
	}
	LA4: ;
	nimln(73, "treetab.nim");
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	(*data)->data[h].H = k;
	nimln(74, "treetab.nim");
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	asgnRefNoCycle((void**) &(*data)->data[h].Key, key);
	nimln(75, "treetab.nim");
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	(*data)->data[h].Val = val;
	popFrame();
}

N_NIMCALL(void, nodetableput_252622)(tnodetable192871* t, tnode192813* key, NI val) {
	tnodepairseq192869* n;
	NI k;
	NI index;
	nimfr("nodeTablePut", "treetab.nim")
	n = 0;
	nimln(79, "treetab.nim");
	k = hashtree_252022(key);
	nimln(80, "treetab.nim");
	index = nodetablerawget_252475((*t), k, key);
	nimln(81, "treetab.nim");
	{
		nimln(81, "treetab.nim");
		if (!(0 <= index)) goto LA3;
		nimln(82, "treetab.nim");
		{
			nimln(82, "treetab.nim");
			nimln(82, "treetab.nim");
			nimln(82, "treetab.nim");
			if ((NU)(index) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			if (!!(!(((*t).Data->data[index].Key == NIM_NIL)))) goto LA7;
			nimln(82, "treetab.nim");
			failedassertimpl_80421(((NimStringDesc*) &TMP3217));
		}
		LA7: ;
		nimln(83, "treetab.nim");
		if ((NU)(index) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
		(*t).Data->data[index].Val = val;
	}
	goto LA1;
	LA3: ;
	{
		nimln(85, "treetab.nim");
		{
			NIM_BOOL LOC12;
			NI TMP3218;
			NI i_252868;
			NI HEX3Atmp_252921;
			NI res_252923;
			tnodepairseq192869* LOC20;
			nimln(85, "treetab.nim");
			nimln(85, "treetab.nim");
			LOC12 = 0;
			LOC12 = mustrehash_201187((*t).Data->Sup.len, (*t).Counter);
			if (!LOC12) goto LA13;
			nimln(86, "treetab.nim");
			nimln(86, "treetab.nim");
			nimln(86, "treetab.nim");
			TMP3218 = mulInt((*t).Data->Sup.len, 2);
			n = (tnodepairseq192869*) newSeq((&NTI192869), (NI32)(TMP3218));
			i_252868 = 0;
			HEX3Atmp_252921 = 0;
			nimln(87, "treetab.nim");
			nimln(87, "treetab.nim");
			HEX3Atmp_252921 = ((*t).Data->Sup.len-1);
			nimln(1451, "system.nim");
			res_252923 = 0;
			nimln(1452, "system.nim");
			while (1) {
				nimln(1452, "system.nim");
				if (!(res_252923 <= HEX3Atmp_252921)) goto LA15;
				nimln(1451, "system.nim");
				i_252868 = res_252923;
				nimln(88, "treetab.nim");
				{
					nimln(88, "treetab.nim");
					nimln(88, "treetab.nim");
					if ((NU)(i_252868) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					if (!!(((*t).Data->data[i_252868].Key == NIM_NIL))) goto LA18;
					nimln(89, "treetab.nim");
					if ((NU)(i_252868) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					if ((NU)(i_252868) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					if ((NU)(i_252868) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					nodetablerawinsert_252514(&n, (*t).Data->data[i_252868].H, (*t).Data->data[i_252868].Key, (*t).Data->data[i_252868].Val);
				}
				LA18: ;
				nimln(1454, "system.nim");
				res_252923 = addInt(res_252923, 1);
			} LA15: ;
			nimln(90, "treetab.nim");
			LOC20 = 0;
			LOC20 = (*t).Data;
			unsureAsgnRef((void**) &(*t).Data, n);
			n = LOC20;
		}
		LA13: ;
		nimln(91, "treetab.nim");
		nodetablerawinsert_252514(&(*t).Data, k, key, val);
		nimln(92, "treetab.nim");
		(*t).Counter = addInt((*t).Counter, 1);
	}
	LA1: ;
	popFrame();
}

N_NIMCALL(NI, nodetabletestorset_252928)(tnodetable192871* t, tnode192813* key, NI val) {
	NI result;
	tnodepairseq192869* n;
	NI k;
	NI index;
	nimfr("nodeTableTestOrSet", "treetab.nim")
	result = 0;
	n = 0;
	nimln(96, "treetab.nim");
	k = hashtree_252022(key);
	nimln(97, "treetab.nim");
	index = nodetablerawget_252475((*t), k, key);
	nimln(98, "treetab.nim");
	{
		nimln(98, "treetab.nim");
		if (!(0 <= index)) goto LA3;
		nimln(99, "treetab.nim");
		{
			nimln(99, "treetab.nim");
			nimln(99, "treetab.nim");
			nimln(99, "treetab.nim");
			if ((NU)(index) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			if (!!(!(((*t).Data->data[index].Key == NIM_NIL)))) goto LA7;
			nimln(99, "treetab.nim");
			failedassertimpl_80421(((NimStringDesc*) &TMP3217));
		}
		LA7: ;
		nimln(100, "treetab.nim");
		if ((NU)(index) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
		result = (*t).Data->data[index].Val;
	}
	goto LA1;
	LA3: ;
	{
		nimln(102, "treetab.nim");
		{
			NIM_BOOL LOC12;
			NI TMP3219;
			NI i_253068;
			NI HEX3Atmp_253121;
			NI res_253123;
			tnodepairseq192869* LOC20;
			nimln(102, "treetab.nim");
			nimln(102, "treetab.nim");
			LOC12 = 0;
			LOC12 = mustrehash_201187((*t).Data->Sup.len, (*t).Counter);
			if (!LOC12) goto LA13;
			nimln(103, "treetab.nim");
			nimln(103, "treetab.nim");
			nimln(103, "treetab.nim");
			TMP3219 = mulInt((*t).Data->Sup.len, 2);
			n = (tnodepairseq192869*) newSeq((&NTI192869), (NI32)(TMP3219));
			i_253068 = 0;
			HEX3Atmp_253121 = 0;
			nimln(104, "treetab.nim");
			nimln(104, "treetab.nim");
			HEX3Atmp_253121 = ((*t).Data->Sup.len-1);
			nimln(1451, "system.nim");
			res_253123 = 0;
			nimln(1452, "system.nim");
			while (1) {
				nimln(1452, "system.nim");
				if (!(res_253123 <= HEX3Atmp_253121)) goto LA15;
				nimln(1451, "system.nim");
				i_253068 = res_253123;
				nimln(105, "treetab.nim");
				{
					nimln(105, "treetab.nim");
					nimln(105, "treetab.nim");
					if ((NU)(i_253068) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					if (!!(((*t).Data->data[i_253068].Key == NIM_NIL))) goto LA18;
					nimln(106, "treetab.nim");
					if ((NU)(i_253068) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					if ((NU)(i_253068) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					if ((NU)(i_253068) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					nodetablerawinsert_252514(&n, (*t).Data->data[i_253068].H, (*t).Data->data[i_253068].Key, (*t).Data->data[i_253068].Val);
				}
				LA18: ;
				nimln(1454, "system.nim");
				res_253123 = addInt(res_253123, 1);
			} LA15: ;
			nimln(107, "treetab.nim");
			LOC20 = 0;
			LOC20 = (*t).Data;
			unsureAsgnRef((void**) &(*t).Data, n);
			n = LOC20;
		}
		LA13: ;
		nimln(108, "treetab.nim");
		nodetablerawinsert_252514(&(*t).Data, k, key, val);
		nimln(109, "treetab.nim");
		result = val;
		nimln(110, "treetab.nim");
		(*t).Counter = addInt((*t).Counter, 1);
	}
	LA1: ;
	popFrame();
	return result;
}
N_NOINLINE(void, treetabInit)(void) {
	nimfr("treetab", "treetab.nim")
	popFrame();
}

N_NOINLINE(void, treetabDatInit)(void) {
}

