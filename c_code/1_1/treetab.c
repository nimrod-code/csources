/* Generated by Nimrod Compiler v0.9.5 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tnode191813 tnode191813;
typedef struct ttype191847 ttype191847;
typedef struct tlineinfo166527 tlineinfo166527;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsym191843 tsym191843;
typedef struct tident170019 tident170019;
typedef struct tnodeseq191807 tnodeseq191807;
typedef struct tidobj170013 tidobj170013;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq191845 ttypeseq191845;
typedef struct tscope191837 tscope191837;
typedef struct TY191943 TY191943;
typedef struct tinstantiation191833 tinstantiation191833;
typedef struct tstrtable191817 tstrtable191817;
typedef struct tsymseq191815 tsymseq191815;
typedef struct tloc191827 tloc191827;
typedef struct trope148007 trope148007;
typedef struct tlib191831 tlib191831;
typedef struct tnodetable191871 tnodetable191871;
typedef struct tnodepairseq191869 tnodepairseq191869;
typedef struct tnodepair191867 tnodepair191867;
typedef struct tcell41688 tcell41688;
typedef struct tcellseq41704 tcellseq41704;
typedef struct tgcheap43616 tgcheap43616;
typedef struct tcellset41700 tcellset41700;
typedef struct tpagedesc41696 tpagedesc41696;
typedef struct tmemregion24010 tmemregion24010;
typedef struct tsmallchunk23238 tsmallchunk23238;
typedef struct tllchunk24004 tllchunk24004;
typedef struct tbigchunk23240 tbigchunk23240;
typedef struct tintset23215 tintset23215;
typedef struct ttrunk23211 ttrunk23211;
typedef struct tavlnode24008 tavlnode24008;
typedef struct tgcstat43614 tgcstat43614;
typedef struct TY191932 TY191932;
typedef struct tlistentry120017 tlistentry120017;
typedef struct tbasechunk23236 tbasechunk23236;
typedef struct tfreecell23228 tfreecell23228;
struct  tlineinfo166527  {
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
struct  tnode191813  {
ttype191847* Typ;
tlineinfo166527 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym191843* Sym;
} S4;
struct {tident170019* Ident;
} S5;
struct {tnodeseq191807* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
typedef NU8 TY192025[20];
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
struct  tidobj170013  {
  TNimObject Sup;
NI Id;
};
struct  tident170019  {
  tidobj170013 Sup;
NimStringDesc* S;
tident170019* Next;
NI H;
};
struct  tstrtable191817  {
NI Counter;
tsymseq191815* Data;
};
struct  tloc191827  {
NU8 K;
NU8 S;
NU8 Flags;
ttype191847* T;
trope148007* R;
trope148007* Heaproot;
NI A;
};
struct  tsym191843  {
  tidobj170013 Sup;
NU8 Kind;
union {
struct {ttypeseq191845* Typeinstcache;
tscope191837* Typscope;
} S1;
struct {TY191943* Procinstcache;
tscope191837* Scope;
} S2;
struct {TY191943* Usedgenerics;
tstrtable191817 Tab;
} S3;
} kindU;
NU16 Magic;
ttype191847* Typ;
tident170019* Name;
tlineinfo166527 Info;
tsym191843* Owner;
NU32 Flags;
tnode191813* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc191827 Loc;
tlib191831* Annex;
tnode191813* Constraint;
};
struct  tnodepair191867  {
NI H;
tnode191813* Key;
NI Val;
};
struct  tnodetable191871  {
NI Counter;
tnodepairseq191869* Data;
};
struct  tcell41688  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq41704  {
NI Len;
NI Cap;
tcell41688** D;
};
struct  tcellset41700  {
NI Counter;
NI Max;
tpagedesc41696* Head;
tpagedesc41696** Data;
};
typedef tsmallchunk23238* TY24022[512];
typedef ttrunk23211* ttrunkbuckets23213[256];
struct  tintset23215  {
ttrunkbuckets23213 Data;
};
struct  tmemregion24010  {
NI Minlargeobj;
NI Maxlargeobj;
TY24022 Freesmallchunks;
tllchunk24004* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk23240* Freechunkslist;
tintset23215 Chunkstarts;
tavlnode24008* Root;
tavlnode24008* Deleted;
tavlnode24008* Last;
tavlnode24008* Freeavlnodes;
};
struct  tgcstat43614  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap43616  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq41704 Zct;
tcellseq41704 Decstack;
tcellset41700 Cycleroots;
tcellseq41704 Tempstack;
NI Recgclock;
tmemregion24010 Region;
tgcstat43614 Stat;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  ttype191847  {
  tidobj170013 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq191845* Sons;
tnode191813* N;
tsym191843* Destructor;
tsym191843* Owner;
tsym191843* Sym;
NI64 Size;
NI Align;
tloc191827 Loc;
};
struct  tscope191837  {
NI Depthlevel;
tstrtable191817 Symbols;
tnodeseq191807* Usingsyms;
tscope191837* Parent;
};
struct  tinstantiation191833  {
tsym191843* Sym;
ttypeseq191845* Concretetypes;
TY191932* Usedby;
};
struct  trope148007  {
  TNimObject Sup;
trope148007* Left;
trope148007* Right;
NI Length;
NimStringDesc* Data;
};
struct  tlistentry120017  {
  TNimObject Sup;
tlistentry120017* Prev;
tlistentry120017* Next;
};
struct  tlib191831  {
  tlistentry120017 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope148007* Name;
tnode191813* Path;
};
typedef NI TY23218[16];
struct  tpagedesc41696  {
tpagedesc41696* Next;
NI Key;
TY23218 Bits;
};
struct  tbasechunk23236  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk23238  {
  tbasechunk23236 Sup;
tsmallchunk23238* Next;
tsmallchunk23238* Prev;
tfreecell23228* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk24004  {
NI Size;
NI Acc;
tllchunk24004* Next;
};
struct  tbigchunk23240  {
  tbasechunk23236 Sup;
tbigchunk23240* Next;
tbigchunk23240* Prev;
NI Align;
NF Data;
};
struct  ttrunk23211  {
ttrunk23211* Next;
NI Key;
TY23218 Bits;
};
typedef tavlnode24008* TY24014[2];
struct  tavlnode24008  {
TY24014 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tfreecell23228  {
tfreecell23228* Next;
NI Zerofield;
};
struct tnodeseq191807 {
  TGenericSeq Sup;
  tnode191813* data[SEQ_DECL_SIZE];
};
struct ttypeseq191845 {
  TGenericSeq Sup;
  ttype191847* data[SEQ_DECL_SIZE];
};
struct TY191943 {
  TGenericSeq Sup;
  tinstantiation191833* data[SEQ_DECL_SIZE];
};
struct tsymseq191815 {
  TGenericSeq Sup;
  tsym191843* data[SEQ_DECL_SIZE];
};
struct tnodepairseq191869 {
  TGenericSeq Sup;
  tnodepair191867 data[SEQ_DECL_SIZE];
};
struct TY191932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NI, hashtree_251022)(tnode191813* n);
static N_INLINE(NI, HEX21HEX26_121015)(NI h, NI val);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NIMCALL(NI64, chckRange64)(NI64 i, NI64 a, NI64 b);
N_NIMCALL(NI, hash_121827)(NimStringDesc* x);
static N_INLINE(NI, sonslen_192191)(tnode191813* n);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NIM_BOOL, treesequivalent_251223)(tnode191813* a, tnode191813* b);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NIM_BOOL, sametypeornil_232151)(ttype191847* a, ttype191847* b, NU8 flags);
N_NIMCALL(NI, nodetablerawget_251475)(tnodetable191871 t, NI k, tnode191813* key);
static N_INLINE(NI, nexttry_200192)(NI h, NI maxhash);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(NI, nodetableget_251503)(tnodetable191871 t, tnode191813* key);
N_NIMCALL(void, nodetablerawinsert_251514)(tnodepairseq191869** data, NI k, tnode191813* key, NI val);
N_NIMCALL(void, failedassertimpl_81621)(NimStringDesc* msg);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell41688*, usrtocell_45043)(void* usr);
static N_INLINE(void, rtladdzct_46602)(tcell41688* c);
N_NOINLINE(void, addzct_45018)(tcellseq41704* s, tcell41688* c);
N_NIMCALL(void, nodetableput_251622)(tnodetable191871* t, tnode191813* key, NI val);
N_NIMCALL(NIM_BOOL, mustrehash_200187)(NI length, NI counter);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NI, nodetabletestorset_251928)(tnodetable191871* t, tnode191813* key, NI val);
static NIM_CONST TY192025 TMP3188 = {
0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3189, "ident", 5);
static NIM_CONST TY192025 TMP3190 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3191, "sym", 3);
static NIM_CONST TY192025 TMP3192 = {
0xE0, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3193, "intVal", 6);
static NIM_CONST TY192025 TMP3194 = {
0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3195, "floatVal", 8);
static NIM_CONST TY192025 TMP3196 = {
0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3197, "strVal", 6);
static NIM_CONST TY192025 TMP3198 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3199, "sons", 4);
STRING_LITERAL(TMP3204, "data[h].key == nil ", 19);
STRING_LITERAL(TMP3205, "t.data[index].key != nil ", 25);
extern TFrame* frameptr_13238;
extern tgcheap43616 gch_43644;
extern TNimType NTI191869; /* TNodePairSeq */

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13238;
	frameptr_13238 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13238 = (*frameptr_13238).prev;
}

static N_INLINE(NI, HEX21HEX26_121015)(NI h, NI val) {
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

static N_INLINE(NI, sonslen_192191)(tnode191813* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1300, "ast.nim");
	{
		nimln(1300, "ast.nim");
		if (((TMP3198[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3199));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1300, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(1301, "ast.nim");
		nimln(1301, "ast.nim");
		if (((TMP3198[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3199));
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

N_NIMCALL(NI, hashtree_251022)(tnode191813* n) {
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
		if (!(((TMP3188[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3189));
		result = HEX21HEX26_121015(result, (*(*n).kindU.S5.Ident).H);
	}
	break;
	case ((NU8) 3):
	{
		nimln(24, "treetab.nim");
		if (!(((TMP3190[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3191));
		result = HEX21HEX26_121015(result, (*(*(*n).kindU.S4.Sym).Name).H);
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
			if (!(((TMP3192[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3193));
			LOC11 = ((-2147483647 -1) <= (*n).kindU.S1.Intval);
			if (!(LOC11)) goto LA12;
			nimln(26, "treetab.nim");
			if (!(((TMP3192[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3193));
			LOC11 = ((*n).kindU.S1.Intval <= 2147483647);
			LA12: ;
			if (!LOC11) goto LA13;
			nimln(27, "treetab.nim");
			if (!(((TMP3192[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3193));
			result = HEX21HEX26_121015(result, ((NI)chckRange64((*n).kindU.S1.Intval, (-2147483647 -1), 2147483647)));
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
			if (!(((TMP3194[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3195));
			LOC18 = (-1.0000000000000000e+006 <= (*n).kindU.S2.Floatval);
			if (!(LOC18)) goto LA19;
			nimln(29, "treetab.nim");
			if (!(((TMP3194[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3195));
			LOC18 = ((*n).kindU.S2.Floatval <= 1.0000000000000000e+006);
			LA19: ;
			if (!LOC18) goto LA20;
			nimln(30, "treetab.nim");
			nimln(30, "treetab.nim");
			if (!(((TMP3194[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3195));
			result = HEX21HEX26_121015(result, float64ToInt32((*n).kindU.S2.Floatval));
		}
		LA20: ;
	}
	break;
	case ((NU8) 20) ... ((NU8) 22):
	{
		NI LOC23;
		nimln(32, "treetab.nim");
		nimln(32, "treetab.nim");
		if (!(((TMP3196[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3197));
		LOC23 = 0;
		LOC23 = hash_121827((*n).kindU.S3.Strval);
		result = HEX21HEX26_121015(result, LOC23);
	}
	break;
	default:
	{
		NI i_251197;
		NI HEX3Atmp_251216;
		NI LOC25;
		NI TMP3200;
		NI res_251218;
		i_251197 = 0;
		HEX3Atmp_251216 = 0;
		nimln(34, "treetab.nim");
		nimln(34, "treetab.nim");
		nimln(34, "treetab.nim");
		LOC25 = 0;
		LOC25 = sonslen_192191(n);
		TMP3200 = subInt(LOC25, 1);
		HEX3Atmp_251216 = (NI32)(TMP3200);
		nimln(1451, "system.nim");
		res_251218 = 0;
		nimln(1452, "system.nim");
		while (1) {
			NI LOC27;
			nimln(1452, "system.nim");
			if (!(res_251218 <= HEX3Atmp_251216)) goto LA26;
			nimln(1451, "system.nim");
			i_251197 = res_251218;
			nimln(35, "treetab.nim");
			nimln(35, "treetab.nim");
			if (((TMP3198[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3199));
			if ((NU)(i_251197) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			LOC27 = 0;
			LOC27 = hashtree_251022((*n).kindU.S6.Sons->data[i_251197]);
			result = HEX21HEX26_121015(result, LOC27);
			nimln(1454, "system.nim");
			res_251218 = addInt(res_251218, 1);
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

N_NIMCALL(NIM_BOOL, treesequivalent_251223)(tnode191813* a, tnode191813* b) {
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
			if (!(((TMP3190[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3191));
			if (!(((TMP3190[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3191));
			result = ((*(*a).kindU.S4.Sym).Sup.Id == (*(*b).kindU.S4.Sym).Sup.Id);
		}
		break;
		case ((NU8) 2):
		{
			nimln(44, "treetab.nim");
			nimln(44, "treetab.nim");
			if (!(((TMP3188[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3189));
			if (!(((TMP3188[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3189));
			result = ((*(*a).kindU.S5.Ident).Sup.Id == (*(*b).kindU.S5.Ident).Sup.Id);
		}
		break;
		case ((NU8) 5) ... ((NU8) 15):
		{
			nimln(45, "treetab.nim");
			nimln(45, "treetab.nim");
			if (!(((TMP3192[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3193));
			if (!(((TMP3192[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3193));
			result = ((*a).kindU.S1.Intval == (*b).kindU.S1.Intval);
		}
		break;
		case ((NU8) 16) ... ((NU8) 18):
		{
			nimln(46, "treetab.nim");
			nimln(46, "treetab.nim");
			if (!(((TMP3194[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3195));
			if (!(((TMP3194[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3195));
			result = ((*a).kindU.S2.Floatval == (*b).kindU.S2.Floatval);
		}
		break;
		case ((NU8) 20) ... ((NU8) 22):
		{
			nimln(47, "treetab.nim");
			nimln(47, "treetab.nim");
			if (!(((TMP3196[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3197));
			if (!(((TMP3196[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3197));
			result = eqStrings((*a).kindU.S3.Strval, (*b).kindU.S3.Strval);
		}
		break;
		default:
		{
			nimln(49, "treetab.nim");
			{
				NI LOC21;
				NI LOC22;
				NI i_251439;
				NI HEX3Atmp_251468;
				NI LOC25;
				NI TMP3201;
				NI res_251470;
				nimln(49, "treetab.nim");
				nimln(49, "treetab.nim");
				LOC21 = 0;
				LOC21 = sonslen_192191(a);
				nimln(49, "treetab.nim");
				LOC22 = 0;
				LOC22 = sonslen_192191(b);
				if (!(LOC21 == LOC22)) goto LA23;
				i_251439 = 0;
				HEX3Atmp_251468 = 0;
				nimln(50, "treetab.nim");
				nimln(50, "treetab.nim");
				nimln(50, "treetab.nim");
				LOC25 = 0;
				LOC25 = sonslen_192191(a);
				TMP3201 = subInt(LOC25, 1);
				HEX3Atmp_251468 = (NI32)(TMP3201);
				nimln(1451, "system.nim");
				res_251470 = 0;
				nimln(1452, "system.nim");
				while (1) {
					nimln(1452, "system.nim");
					if (!(res_251470 <= HEX3Atmp_251468)) goto LA26;
					nimln(1451, "system.nim");
					i_251439 = res_251470;
					nimln(51, "treetab.nim");
					{
						NIM_BOOL LOC29;
						nimln(51, "treetab.nim");
						nimln(51, "treetab.nim");
						if (((TMP3198[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3199));
						if ((NU)(i_251439) >= (NU)((*a).kindU.S6.Sons->Sup.len)) raiseIndexError();
						if (((TMP3198[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3199));
						if ((NU)(i_251439) >= (NU)((*b).kindU.S6.Sons->Sup.len)) raiseIndexError();
						LOC29 = 0;
						LOC29 = treesequivalent_251223((*a).kindU.S6.Sons->data[i_251439], (*b).kindU.S6.Sons->data[i_251439]);
						if (!!(LOC29)) goto LA30;
						nimln(51, "treetab.nim");
						goto BeforeRet;
					}
					LA30: ;
					nimln(1454, "system.nim");
					res_251470 = addInt(res_251470, 1);
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
			result = sametypeornil_232151((*a).Typ, (*b).Typ, 0);
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

static N_INLINE(NI, nexttry_200192)(NI h, NI maxhash) {
	NI result;
	NI TMP3202;
	NI TMP3203;
	nimfr("nextTry", "astalgo.nim")
	result = 0;
	nimln(465, "astalgo.nim");
	nimln(465, "astalgo.nim");
	nimln(465, "astalgo.nim");
	nimln(465, "astalgo.nim");
	TMP3202 = mulInt(5, h);
	TMP3203 = addInt((NI32)(TMP3202), 1);
	result = (NI)((NI32)(TMP3203) & maxhash);
	popFrame();
	return result;
}

N_NIMCALL(NI, nodetablerawget_251475)(tnodetable191871 t, NI k, tnode191813* key) {
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
			LOC4 = treesequivalent_251223(t.Data->data[h].Key, key);
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
		h = nexttry_200192(h, (t.Data->Sup.len-1));
	} LA1: ;
	nimln(61, "treetab.nim");
	result = -1;
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NI, nodetableget_251503)(tnodetable191871 t, tnode191813* key) {
	NI result;
	NI index;
	NI LOC1;
	nimfr("nodeTableGet", "treetab.nim")
	result = 0;
	nimln(64, "treetab.nim");
	nimln(64, "treetab.nim");
	LOC1 = 0;
	LOC1 = hashtree_251022(key);
	index = nodetablerawget_251475(t, LOC1, key);
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

static N_INLINE(tcell41688*, usrtocell_45043)(void* usr) {
	tcell41688* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	result = ((tcell41688*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell41688))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_46602)(tcell41688* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_45018(&gch_43644.Zct, c);
	popFrame();
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(251, "gc.nim");
	{
		tcell41688* c;
		nimln(251, "gc.nim");
		nimln(251, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(252, "gc.nim");
		c = usrtocell_45043(src);
		nimln(169, "gc.nim");
		(*c).Refcount += 8;
	}
	LA3: ;
	nimln(254, "gc.nim");
	{
		tcell41688* c;
		nimln(254, "gc.nim");
		nimln(254, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		nimln(255, "gc.nim");
		c = usrtocell_45043((*dest));
		nimln(256, "gc.nim");
		{
			nimln(167, "gc.nim");
			(*c).Refcount -= 8;
			nimln(168, "gc.nim");
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			nimln(257, "gc.nim");
			rtladdzct_46602(c);
		}
		LA11: ;
	}
	LA7: ;
	nimln(258, "gc.nim");
	(*dest) = src;
	popFrame();
}

N_NIMCALL(void, nodetablerawinsert_251514)(tnodepairseq191869** data, NI k, tnode191813* key, NI val) {
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
		h = nexttry_200192(h, ((*data)->Sup.len-1));
	} LA1: ;
	nimln(72, "treetab.nim");
	{
		nimln(72, "treetab.nim");
		nimln(72, "treetab.nim");
		if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
		if (!!(((*data)->data[h].Key == NIM_NIL))) goto LA4;
		nimln(72, "treetab.nim");
		failedassertimpl_81621(((NimStringDesc*) &TMP3204));
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

N_NIMCALL(void, nodetableput_251622)(tnodetable191871* t, tnode191813* key, NI val) {
	tnodepairseq191869* n;
	NI k;
	NI index;
	nimfr("nodeTablePut", "treetab.nim")
	n = 0;
	nimln(79, "treetab.nim");
	k = hashtree_251022(key);
	nimln(80, "treetab.nim");
	index = nodetablerawget_251475((*t), k, key);
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
			failedassertimpl_81621(((NimStringDesc*) &TMP3205));
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
			NI TMP3206;
			NI i_251868;
			NI HEX3Atmp_251921;
			NI res_251923;
			tnodepairseq191869* LOC20;
			nimln(85, "treetab.nim");
			nimln(85, "treetab.nim");
			LOC12 = 0;
			LOC12 = mustrehash_200187((*t).Data->Sup.len, (*t).Counter);
			if (!LOC12) goto LA13;
			nimln(86, "treetab.nim");
			nimln(86, "treetab.nim");
			nimln(86, "treetab.nim");
			TMP3206 = mulInt((*t).Data->Sup.len, 2);
			n = (tnodepairseq191869*) newSeq((&NTI191869), (NI32)(TMP3206));
			i_251868 = 0;
			HEX3Atmp_251921 = 0;
			nimln(87, "treetab.nim");
			nimln(87, "treetab.nim");
			HEX3Atmp_251921 = ((*t).Data->Sup.len-1);
			nimln(1451, "system.nim");
			res_251923 = 0;
			nimln(1452, "system.nim");
			while (1) {
				nimln(1452, "system.nim");
				if (!(res_251923 <= HEX3Atmp_251921)) goto LA15;
				nimln(1451, "system.nim");
				i_251868 = res_251923;
				nimln(88, "treetab.nim");
				{
					nimln(88, "treetab.nim");
					nimln(88, "treetab.nim");
					if ((NU)(i_251868) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					if (!!(((*t).Data->data[i_251868].Key == NIM_NIL))) goto LA18;
					nimln(89, "treetab.nim");
					if ((NU)(i_251868) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					if ((NU)(i_251868) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					if ((NU)(i_251868) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					nodetablerawinsert_251514(&n, (*t).Data->data[i_251868].H, (*t).Data->data[i_251868].Key, (*t).Data->data[i_251868].Val);
				}
				LA18: ;
				nimln(1454, "system.nim");
				res_251923 = addInt(res_251923, 1);
			} LA15: ;
			nimln(90, "treetab.nim");
			LOC20 = 0;
			LOC20 = (*t).Data;
			unsureAsgnRef((void**) &(*t).Data, n);
			n = LOC20;
		}
		LA13: ;
		nimln(91, "treetab.nim");
		nodetablerawinsert_251514(&(*t).Data, k, key, val);
		nimln(92, "treetab.nim");
		(*t).Counter = addInt((*t).Counter, 1);
	}
	LA1: ;
	popFrame();
}

N_NIMCALL(NI, nodetabletestorset_251928)(tnodetable191871* t, tnode191813* key, NI val) {
	NI result;
	tnodepairseq191869* n;
	NI k;
	NI index;
	nimfr("nodeTableTestOrSet", "treetab.nim")
	result = 0;
	n = 0;
	nimln(96, "treetab.nim");
	k = hashtree_251022(key);
	nimln(97, "treetab.nim");
	index = nodetablerawget_251475((*t), k, key);
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
			failedassertimpl_81621(((NimStringDesc*) &TMP3205));
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
			NI TMP3207;
			NI i_252068;
			NI HEX3Atmp_252121;
			NI res_252123;
			tnodepairseq191869* LOC20;
			nimln(102, "treetab.nim");
			nimln(102, "treetab.nim");
			LOC12 = 0;
			LOC12 = mustrehash_200187((*t).Data->Sup.len, (*t).Counter);
			if (!LOC12) goto LA13;
			nimln(103, "treetab.nim");
			nimln(103, "treetab.nim");
			nimln(103, "treetab.nim");
			TMP3207 = mulInt((*t).Data->Sup.len, 2);
			n = (tnodepairseq191869*) newSeq((&NTI191869), (NI32)(TMP3207));
			i_252068 = 0;
			HEX3Atmp_252121 = 0;
			nimln(104, "treetab.nim");
			nimln(104, "treetab.nim");
			HEX3Atmp_252121 = ((*t).Data->Sup.len-1);
			nimln(1451, "system.nim");
			res_252123 = 0;
			nimln(1452, "system.nim");
			while (1) {
				nimln(1452, "system.nim");
				if (!(res_252123 <= HEX3Atmp_252121)) goto LA15;
				nimln(1451, "system.nim");
				i_252068 = res_252123;
				nimln(105, "treetab.nim");
				{
					nimln(105, "treetab.nim");
					nimln(105, "treetab.nim");
					if ((NU)(i_252068) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					if (!!(((*t).Data->data[i_252068].Key == NIM_NIL))) goto LA18;
					nimln(106, "treetab.nim");
					if ((NU)(i_252068) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					if ((NU)(i_252068) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					if ((NU)(i_252068) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					nodetablerawinsert_251514(&n, (*t).Data->data[i_252068].H, (*t).Data->data[i_252068].Key, (*t).Data->data[i_252068].Val);
				}
				LA18: ;
				nimln(1454, "system.nim");
				res_252123 = addInt(res_252123, 1);
			} LA15: ;
			nimln(107, "treetab.nim");
			LOC20 = 0;
			LOC20 = (*t).Data;
			unsureAsgnRef((void**) &(*t).Data, n);
			n = LOC20;
		}
		LA13: ;
		nimln(108, "treetab.nim");
		nodetablerawinsert_251514(&(*t).Data, k, key, val);
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

