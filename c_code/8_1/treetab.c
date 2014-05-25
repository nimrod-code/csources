/* Generated by Nimrod Compiler v0.9.5 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tnode190813 tnode190813;
typedef struct ttype190847 ttype190847;
typedef struct tlineinfo165527 tlineinfo165527;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsym190843 tsym190843;
typedef struct tident169019 tident169019;
typedef struct tnodeseq190807 tnodeseq190807;
typedef struct tidobj169013 tidobj169013;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq190845 ttypeseq190845;
typedef struct tscope190837 tscope190837;
typedef struct TY190943 TY190943;
typedef struct tinstantiation190833 tinstantiation190833;
typedef struct tstrtable190817 tstrtable190817;
typedef struct tsymseq190815 tsymseq190815;
typedef struct tloc190827 tloc190827;
typedef struct trope147007 trope147007;
typedef struct tlib190831 tlib190831;
typedef struct tnodetable190871 tnodetable190871;
typedef struct tnodepairseq190869 tnodepairseq190869;
typedef struct tnodepair190867 tnodepair190867;
typedef struct tcell41890 tcell41890;
typedef struct tcellseq41906 tcellseq41906;
typedef struct tgcheap43816 tgcheap43816;
typedef struct tcellset41902 tcellset41902;
typedef struct tpagedesc41898 tpagedesc41898;
typedef struct tmemregion24210 tmemregion24210;
typedef struct tsmallchunk23438 tsmallchunk23438;
typedef struct tllchunk24204 tllchunk24204;
typedef struct tbigchunk23440 tbigchunk23440;
typedef struct tintset23415 tintset23415;
typedef struct ttrunk23411 ttrunk23411;
typedef struct tavlnode24208 tavlnode24208;
typedef struct tgcstat43814 tgcstat43814;
typedef struct TY190932 TY190932;
typedef struct tlistentry118017 tlistentry118017;
typedef struct tbasechunk23436 tbasechunk23436;
typedef struct tfreecell23428 tfreecell23428;
struct  tlineinfo165527  {
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
struct  tnode190813  {
ttype190847* Typ;
tlineinfo165527 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym190843* Sym;
} S4;
struct {tident169019* Ident;
} S5;
struct {tnodeseq190807* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
typedef NU8 TY191025[20];
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
struct  tidobj169013  {
  TNimObject Sup;
NI Id;
};
struct  tident169019  {
  tidobj169013 Sup;
NimStringDesc* S;
tident169019* Next;
NI H;
};
struct  tstrtable190817  {
NI Counter;
tsymseq190815* Data;
};
struct  tloc190827  {
NU8 K;
NU8 S;
NU8 Flags;
ttype190847* T;
trope147007* R;
trope147007* Heaproot;
NI A;
};
struct  tsym190843  {
  tidobj169013 Sup;
NU8 Kind;
union {
struct {ttypeseq190845* Typeinstcache;
tscope190837* Typscope;
} S1;
struct {TY190943* Procinstcache;
tscope190837* Scope;
} S2;
struct {TY190943* Usedgenerics;
tstrtable190817 Tab;
} S3;
} kindU;
NU16 Magic;
ttype190847* Typ;
tident169019* Name;
tlineinfo165527 Info;
tsym190843* Owner;
NU32 Flags;
tnode190813* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc190827 Loc;
tlib190831* Annex;
tnode190813* Constraint;
};
struct  tnodepair190867  {
NI H;
tnode190813* Key;
NI Val;
};
struct  tnodetable190871  {
NI Counter;
tnodepairseq190869* Data;
};
struct  tcell41890  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq41906  {
NI Len;
NI Cap;
tcell41890** D;
};
struct  tcellset41902  {
NI Counter;
NI Max;
tpagedesc41898* Head;
tpagedesc41898** Data;
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
tcellseq41906 Zct;
tcellseq41906 Decstack;
tcellset41902 Cycleroots;
tcellseq41906 Tempstack;
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
struct  ttype190847  {
  tidobj169013 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq190845* Sons;
tnode190813* N;
tsym190843* Destructor;
tsym190843* Owner;
tsym190843* Sym;
NI64 Size;
NI Align;
tloc190827 Loc;
};
struct  tscope190837  {
NI Depthlevel;
tstrtable190817 Symbols;
tnodeseq190807* Usingsyms;
tscope190837* Parent;
};
struct  tinstantiation190833  {
tsym190843* Sym;
ttypeseq190845* Concretetypes;
TY190932* Usedby;
};
struct  trope147007  {
  TNimObject Sup;
trope147007* Left;
trope147007* Right;
NI Length;
NimStringDesc* Data;
};
struct  tlistentry118017  {
  TNimObject Sup;
tlistentry118017* Prev;
tlistentry118017* Next;
};
struct  tlib190831  {
  tlistentry118017 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope147007* Name;
tnode190813* Path;
};
typedef NI TY23418[16];
struct  tpagedesc41898  {
tpagedesc41898* Next;
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
struct tnodeseq190807 {
  TGenericSeq Sup;
  tnode190813* data[SEQ_DECL_SIZE];
};
struct ttypeseq190845 {
  TGenericSeq Sup;
  ttype190847* data[SEQ_DECL_SIZE];
};
struct TY190943 {
  TGenericSeq Sup;
  tinstantiation190833* data[SEQ_DECL_SIZE];
};
struct tsymseq190815 {
  TGenericSeq Sup;
  tsym190843* data[SEQ_DECL_SIZE];
};
struct tnodepairseq190869 {
  TGenericSeq Sup;
  tnodepair190867 data[SEQ_DECL_SIZE];
};
struct TY190932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NI, hashtree_250022)(tnode190813* n);
static N_INLINE(NI, HEX21HEX26_119015)(NI h, NI val);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NIMCALL(NI64, chckRange64)(NI64 i, NI64 a, NI64 b);
N_NIMCALL(NI, hash_119827)(NimStringDesc* x);
static N_INLINE(NI, sonslen_191191)(tnode190813* n);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NIM_BOOL, treesequivalent_250223)(tnode190813* a, tnode190813* b);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NIM_BOOL, sametypeornil_231151)(ttype190847* a, ttype190847* b, NU8 flags);
N_NIMCALL(NI, nodetablerawget_250475)(tnodetable190871 t, NI k, tnode190813* key);
static N_INLINE(NI, nexttry_199192)(NI h, NI maxhash);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(NI, nodetableget_250503)(tnodetable190871 t, tnode190813* key);
N_NIMCALL(void, nodetablerawinsert_250514)(tnodepairseq190869** data, NI k, tnode190813* key, NI val);
N_NIMCALL(void, failedassertimpl_80421)(NimStringDesc* msg);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell41890*, usrtocell_45243)(void* usr);
static N_INLINE(void, rtladdzct_46802)(tcell41890* c);
N_NOINLINE(void, addzct_45218)(tcellseq41906* s, tcell41890* c);
N_NIMCALL(void, nodetableput_250622)(tnodetable190871* t, tnode190813* key, NI val);
N_NIMCALL(NIM_BOOL, mustrehash_199187)(NI length, NI counter);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NI, nodetabletestorset_250928)(tnodetable190871* t, tnode190813* key, NI val);
static NIM_CONST TY191025 TMP3196 = {
0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3197, "ident", 5);
static NIM_CONST TY191025 TMP3198 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3199, "sym", 3);
static NIM_CONST TY191025 TMP3200 = {
0xE0, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3201, "intVal", 6);
static NIM_CONST TY191025 TMP3202 = {
0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3203, "floatVal", 8);
static NIM_CONST TY191025 TMP3204 = {
0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3205, "strVal", 6);
static NIM_CONST TY191025 TMP3206 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3207, "sons", 4);
STRING_LITERAL(TMP3212, "data[h].key == nil ", 19);
STRING_LITERAL(TMP3213, "t.data[index].key != nil ", 25);
extern TFrame* frameptr_13238;
extern tgcheap43816 gch_43844;
extern TNimType NTI190869; /* TNodePairSeq */

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13238;
	frameptr_13238 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13238 = (*frameptr_13238).prev;
}

static N_INLINE(NI, HEX21HEX26_119015)(NI h, NI val) {
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

static N_INLINE(NI, sonslen_191191)(tnode190813* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1300, "ast.nim");
	{
		nimln(1300, "ast.nim");
		if (((TMP3206[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3207));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1300, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(1301, "ast.nim");
		nimln(1301, "ast.nim");
		if (((TMP3206[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3207));
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

N_NIMCALL(NI, hashtree_250022)(tnode190813* n) {
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
		if (!(((TMP3196[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3197));
		result = HEX21HEX26_119015(result, (*(*n).kindU.S5.Ident).H);
	}
	break;
	case ((NU8) 3):
	{
		nimln(24, "treetab.nim");
		if (!(((TMP3198[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3199));
		result = HEX21HEX26_119015(result, (*(*(*n).kindU.S4.Sym).Name).H);
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
			if (!(((TMP3200[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3201));
			LOC11 = ((-2147483647 -1) <= (*n).kindU.S1.Intval);
			if (!(LOC11)) goto LA12;
			nimln(26, "treetab.nim");
			if (!(((TMP3200[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3201));
			LOC11 = ((*n).kindU.S1.Intval <= 2147483647);
			LA12: ;
			if (!LOC11) goto LA13;
			nimln(27, "treetab.nim");
			if (!(((TMP3200[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3201));
			result = HEX21HEX26_119015(result, ((NI)chckRange64((*n).kindU.S1.Intval, (-2147483647 -1), 2147483647)));
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
			if (!(((TMP3202[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3203));
			LOC18 = (-1.0000000000000000e+006 <= (*n).kindU.S2.Floatval);
			if (!(LOC18)) goto LA19;
			nimln(29, "treetab.nim");
			if (!(((TMP3202[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3203));
			LOC18 = ((*n).kindU.S2.Floatval <= 1.0000000000000000e+006);
			LA19: ;
			if (!LOC18) goto LA20;
			nimln(30, "treetab.nim");
			nimln(30, "treetab.nim");
			if (!(((TMP3202[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3203));
			result = HEX21HEX26_119015(result, float64ToInt32((*n).kindU.S2.Floatval));
		}
		LA20: ;
	}
	break;
	case ((NU8) 20) ... ((NU8) 22):
	{
		NI LOC23;
		nimln(32, "treetab.nim");
		nimln(32, "treetab.nim");
		if (!(((TMP3204[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3205));
		LOC23 = 0;
		LOC23 = hash_119827((*n).kindU.S3.Strval);
		result = HEX21HEX26_119015(result, LOC23);
	}
	break;
	default:
	{
		NI i_250197;
		NI HEX3Atmp_250216;
		NI LOC25;
		NI TMP3208;
		NI res_250218;
		i_250197 = 0;
		HEX3Atmp_250216 = 0;
		nimln(34, "treetab.nim");
		nimln(34, "treetab.nim");
		nimln(34, "treetab.nim");
		LOC25 = 0;
		LOC25 = sonslen_191191(n);
		TMP3208 = subInt(LOC25, 1);
		HEX3Atmp_250216 = (NI32)(TMP3208);
		nimln(1451, "system.nim");
		res_250218 = 0;
		nimln(1452, "system.nim");
		while (1) {
			NI LOC27;
			nimln(1452, "system.nim");
			if (!(res_250218 <= HEX3Atmp_250216)) goto LA26;
			nimln(1451, "system.nim");
			i_250197 = res_250218;
			nimln(35, "treetab.nim");
			nimln(35, "treetab.nim");
			if (((TMP3206[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3207));
			if ((NU)(i_250197) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			LOC27 = 0;
			LOC27 = hashtree_250022((*n).kindU.S6.Sons->data[i_250197]);
			result = HEX21HEX26_119015(result, LOC27);
			nimln(1454, "system.nim");
			res_250218 = addInt(res_250218, 1);
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

N_NIMCALL(NIM_BOOL, treesequivalent_250223)(tnode190813* a, tnode190813* b) {
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
			if (!(((TMP3198[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3199));
			if (!(((TMP3198[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3199));
			result = ((*(*a).kindU.S4.Sym).Sup.Id == (*(*b).kindU.S4.Sym).Sup.Id);
		}
		break;
		case ((NU8) 2):
		{
			nimln(44, "treetab.nim");
			nimln(44, "treetab.nim");
			if (!(((TMP3196[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3197));
			if (!(((TMP3196[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3197));
			result = ((*(*a).kindU.S5.Ident).Sup.Id == (*(*b).kindU.S5.Ident).Sup.Id);
		}
		break;
		case ((NU8) 5) ... ((NU8) 15):
		{
			nimln(45, "treetab.nim");
			nimln(45, "treetab.nim");
			if (!(((TMP3200[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3201));
			if (!(((TMP3200[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3201));
			result = ((*a).kindU.S1.Intval == (*b).kindU.S1.Intval);
		}
		break;
		case ((NU8) 16) ... ((NU8) 18):
		{
			nimln(46, "treetab.nim");
			nimln(46, "treetab.nim");
			if (!(((TMP3202[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3203));
			if (!(((TMP3202[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3203));
			result = ((*a).kindU.S2.Floatval == (*b).kindU.S2.Floatval);
		}
		break;
		case ((NU8) 20) ... ((NU8) 22):
		{
			nimln(47, "treetab.nim");
			nimln(47, "treetab.nim");
			if (!(((TMP3204[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3205));
			if (!(((TMP3204[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3205));
			result = eqStrings((*a).kindU.S3.Strval, (*b).kindU.S3.Strval);
		}
		break;
		default:
		{
			nimln(49, "treetab.nim");
			{
				NI LOC21;
				NI LOC22;
				NI i_250439;
				NI HEX3Atmp_250468;
				NI LOC25;
				NI TMP3209;
				NI res_250470;
				nimln(49, "treetab.nim");
				nimln(49, "treetab.nim");
				LOC21 = 0;
				LOC21 = sonslen_191191(a);
				nimln(49, "treetab.nim");
				LOC22 = 0;
				LOC22 = sonslen_191191(b);
				if (!(LOC21 == LOC22)) goto LA23;
				i_250439 = 0;
				HEX3Atmp_250468 = 0;
				nimln(50, "treetab.nim");
				nimln(50, "treetab.nim");
				nimln(50, "treetab.nim");
				LOC25 = 0;
				LOC25 = sonslen_191191(a);
				TMP3209 = subInt(LOC25, 1);
				HEX3Atmp_250468 = (NI32)(TMP3209);
				nimln(1451, "system.nim");
				res_250470 = 0;
				nimln(1452, "system.nim");
				while (1) {
					nimln(1452, "system.nim");
					if (!(res_250470 <= HEX3Atmp_250468)) goto LA26;
					nimln(1451, "system.nim");
					i_250439 = res_250470;
					nimln(51, "treetab.nim");
					{
						NIM_BOOL LOC29;
						nimln(51, "treetab.nim");
						nimln(51, "treetab.nim");
						if (((TMP3206[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3207));
						if ((NU)(i_250439) >= (NU)((*a).kindU.S6.Sons->Sup.len)) raiseIndexError();
						if (((TMP3206[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3207));
						if ((NU)(i_250439) >= (NU)((*b).kindU.S6.Sons->Sup.len)) raiseIndexError();
						LOC29 = 0;
						LOC29 = treesequivalent_250223((*a).kindU.S6.Sons->data[i_250439], (*b).kindU.S6.Sons->data[i_250439]);
						if (!!(LOC29)) goto LA30;
						nimln(51, "treetab.nim");
						goto BeforeRet;
					}
					LA30: ;
					nimln(1454, "system.nim");
					res_250470 = addInt(res_250470, 1);
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
			result = sametypeornil_231151((*a).Typ, (*b).Typ, 0);
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

static N_INLINE(NI, nexttry_199192)(NI h, NI maxhash) {
	NI result;
	NI TMP3210;
	NI TMP3211;
	nimfr("nextTry", "astalgo.nim")
	result = 0;
	nimln(465, "astalgo.nim");
	nimln(465, "astalgo.nim");
	nimln(465, "astalgo.nim");
	nimln(465, "astalgo.nim");
	TMP3210 = mulInt(5, h);
	TMP3211 = addInt((NI32)(TMP3210), 1);
	result = (NI)((NI32)(TMP3211) & maxhash);
	popFrame();
	return result;
}

N_NIMCALL(NI, nodetablerawget_250475)(tnodetable190871 t, NI k, tnode190813* key) {
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
			LOC4 = treesequivalent_250223(t.Data->data[h].Key, key);
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
		h = nexttry_199192(h, (t.Data->Sup.len-1));
	} LA1: ;
	nimln(61, "treetab.nim");
	result = -1;
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NI, nodetableget_250503)(tnodetable190871 t, tnode190813* key) {
	NI result;
	NI index;
	NI LOC1;
	nimfr("nodeTableGet", "treetab.nim")
	result = 0;
	nimln(64, "treetab.nim");
	nimln(64, "treetab.nim");
	LOC1 = 0;
	LOC1 = hashtree_250022(key);
	index = nodetablerawget_250475(t, LOC1, key);
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

static N_INLINE(tcell41890*, usrtocell_45243)(void* usr) {
	tcell41890* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	result = ((tcell41890*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell41890))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_46802)(tcell41890* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_45218(&gch_43844.Zct, c);
	popFrame();
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(251, "gc.nim");
	{
		tcell41890* c;
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
		tcell41890* c;
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

N_NIMCALL(void, nodetablerawinsert_250514)(tnodepairseq190869** data, NI k, tnode190813* key, NI val) {
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
		h = nexttry_199192(h, ((*data)->Sup.len-1));
	} LA1: ;
	nimln(72, "treetab.nim");
	{
		nimln(72, "treetab.nim");
		nimln(72, "treetab.nim");
		if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
		if (!!(((*data)->data[h].Key == NIM_NIL))) goto LA4;
		nimln(72, "treetab.nim");
		failedassertimpl_80421(((NimStringDesc*) &TMP3212));
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

N_NIMCALL(void, nodetableput_250622)(tnodetable190871* t, tnode190813* key, NI val) {
	tnodepairseq190869* n;
	NI k;
	NI index;
	nimfr("nodeTablePut", "treetab.nim")
	n = 0;
	nimln(79, "treetab.nim");
	k = hashtree_250022(key);
	nimln(80, "treetab.nim");
	index = nodetablerawget_250475((*t), k, key);
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
			failedassertimpl_80421(((NimStringDesc*) &TMP3213));
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
			NI TMP3214;
			NI i_250868;
			NI HEX3Atmp_250921;
			NI res_250923;
			tnodepairseq190869* LOC20;
			nimln(85, "treetab.nim");
			nimln(85, "treetab.nim");
			LOC12 = 0;
			LOC12 = mustrehash_199187((*t).Data->Sup.len, (*t).Counter);
			if (!LOC12) goto LA13;
			nimln(86, "treetab.nim");
			nimln(86, "treetab.nim");
			nimln(86, "treetab.nim");
			TMP3214 = mulInt((*t).Data->Sup.len, 2);
			n = (tnodepairseq190869*) newSeq((&NTI190869), (NI32)(TMP3214));
			i_250868 = 0;
			HEX3Atmp_250921 = 0;
			nimln(87, "treetab.nim");
			nimln(87, "treetab.nim");
			HEX3Atmp_250921 = ((*t).Data->Sup.len-1);
			nimln(1451, "system.nim");
			res_250923 = 0;
			nimln(1452, "system.nim");
			while (1) {
				nimln(1452, "system.nim");
				if (!(res_250923 <= HEX3Atmp_250921)) goto LA15;
				nimln(1451, "system.nim");
				i_250868 = res_250923;
				nimln(88, "treetab.nim");
				{
					nimln(88, "treetab.nim");
					nimln(88, "treetab.nim");
					if ((NU)(i_250868) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					if (!!(((*t).Data->data[i_250868].Key == NIM_NIL))) goto LA18;
					nimln(89, "treetab.nim");
					if ((NU)(i_250868) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					if ((NU)(i_250868) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					if ((NU)(i_250868) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					nodetablerawinsert_250514(&n, (*t).Data->data[i_250868].H, (*t).Data->data[i_250868].Key, (*t).Data->data[i_250868].Val);
				}
				LA18: ;
				nimln(1454, "system.nim");
				res_250923 = addInt(res_250923, 1);
			} LA15: ;
			nimln(90, "treetab.nim");
			LOC20 = 0;
			LOC20 = (*t).Data;
			unsureAsgnRef((void**) &(*t).Data, n);
			n = LOC20;
		}
		LA13: ;
		nimln(91, "treetab.nim");
		nodetablerawinsert_250514(&(*t).Data, k, key, val);
		nimln(92, "treetab.nim");
		(*t).Counter = addInt((*t).Counter, 1);
	}
	LA1: ;
	popFrame();
}

N_NIMCALL(NI, nodetabletestorset_250928)(tnodetable190871* t, tnode190813* key, NI val) {
	NI result;
	tnodepairseq190869* n;
	NI k;
	NI index;
	nimfr("nodeTableTestOrSet", "treetab.nim")
	result = 0;
	n = 0;
	nimln(96, "treetab.nim");
	k = hashtree_250022(key);
	nimln(97, "treetab.nim");
	index = nodetablerawget_250475((*t), k, key);
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
			failedassertimpl_80421(((NimStringDesc*) &TMP3213));
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
			NI TMP3215;
			NI i_251068;
			NI HEX3Atmp_251121;
			NI res_251123;
			tnodepairseq190869* LOC20;
			nimln(102, "treetab.nim");
			nimln(102, "treetab.nim");
			LOC12 = 0;
			LOC12 = mustrehash_199187((*t).Data->Sup.len, (*t).Counter);
			if (!LOC12) goto LA13;
			nimln(103, "treetab.nim");
			nimln(103, "treetab.nim");
			nimln(103, "treetab.nim");
			TMP3215 = mulInt((*t).Data->Sup.len, 2);
			n = (tnodepairseq190869*) newSeq((&NTI190869), (NI32)(TMP3215));
			i_251068 = 0;
			HEX3Atmp_251121 = 0;
			nimln(104, "treetab.nim");
			nimln(104, "treetab.nim");
			HEX3Atmp_251121 = ((*t).Data->Sup.len-1);
			nimln(1451, "system.nim");
			res_251123 = 0;
			nimln(1452, "system.nim");
			while (1) {
				nimln(1452, "system.nim");
				if (!(res_251123 <= HEX3Atmp_251121)) goto LA15;
				nimln(1451, "system.nim");
				i_251068 = res_251123;
				nimln(105, "treetab.nim");
				{
					nimln(105, "treetab.nim");
					nimln(105, "treetab.nim");
					if ((NU)(i_251068) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					if (!!(((*t).Data->data[i_251068].Key == NIM_NIL))) goto LA18;
					nimln(106, "treetab.nim");
					if ((NU)(i_251068) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					if ((NU)(i_251068) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					if ((NU)(i_251068) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					nodetablerawinsert_250514(&n, (*t).Data->data[i_251068].H, (*t).Data->data[i_251068].Key, (*t).Data->data[i_251068].Val);
				}
				LA18: ;
				nimln(1454, "system.nim");
				res_251123 = addInt(res_251123, 1);
			} LA15: ;
			nimln(107, "treetab.nim");
			LOC20 = 0;
			LOC20 = (*t).Data;
			unsureAsgnRef((void**) &(*t).Data, n);
			n = LOC20;
		}
		LA13: ;
		nimln(108, "treetab.nim");
		nodetablerawinsert_250514(&(*t).Data, k, key, val);
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

