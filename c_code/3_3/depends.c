/* Generated by Nimrod Compiler v0.9.5 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct trope148007 trope148007;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tnode191813 tnode191813;
typedef struct tpasscontext250003 tpasscontext250003;
typedef struct tgen525012 tgen525012;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct tsym191843 tsym191843;
typedef struct ttype191847 ttype191847;
typedef struct tlineinfo166527 tlineinfo166527;
typedef struct tident170019 tident170019;
typedef struct tnodeseq191807 tnodeseq191807;
typedef struct tidobj170013 tidobj170013;
typedef struct ttypeseq191845 ttypeseq191845;
typedef struct tscope191837 tscope191837;
typedef struct TY191943 TY191943;
typedef struct tinstantiation191833 tinstantiation191833;
typedef struct tstrtable191817 tstrtable191817;
typedef struct tsymseq191815 tsymseq191815;
typedef struct tloc191827 tloc191827;
typedef struct tlib191831 tlib191831;
typedef struct tcell42088 tcell42088;
typedef struct tcellseq42104 tcellseq42104;
typedef struct tgcheap44016 tgcheap44016;
typedef struct tcellset42100 tcellset42100;
typedef struct tpagedesc42096 tpagedesc42096;
typedef struct tmemregion24410 tmemregion24410;
typedef struct tsmallchunk23638 tsmallchunk23638;
typedef struct tllchunk24404 tllchunk24404;
typedef struct tbigchunk23640 tbigchunk23640;
typedef struct tintset23615 tintset23615;
typedef struct ttrunk23611 ttrunk23611;
typedef struct tavlnode24408 tavlnode24408;
typedef struct tgcstat44014 tgcstat44014;
typedef struct tpass250015 tpass250015;
typedef struct trodreader240024 trodreader240024;
typedef struct TY191932 TY191932;
typedef struct tlistentry119017 tlistentry119017;
typedef struct tbasechunk23636 tbasechunk23636;
typedef struct tfreecell23628 tfreecell23628;
typedef struct tindex240022 tindex240022;
typedef struct tiitable200207 tiitable200207;
typedef struct tiipairseq200205 tiipairseq200205;
typedef struct tiipair200203 tiipair200203;
typedef struct tidtable191859 tidtable191859;
typedef struct tidpairseq191857 tidpairseq191857;
typedef struct tidpair191855 tidpair191855;
typedef struct tmemfile238204 tmemfile238204;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef trope148007* TY201350[2];
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  tpasscontext250003  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct  tgen525012  {
  tpasscontext250003 Sup;
tsym191843* Module;
};
struct  tlineinfo166527  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
struct  tidobj170013  {
  TNimObject Sup;
NI Id;
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
struct  tident170019  {
  tidobj170013 Sup;
NimStringDesc* S;
tident170019* Next;
NI H;
};
struct  tcell42088  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq42104  {
NI Len;
NI Cap;
tcell42088** D;
};
struct  tcellset42100  {
NI Counter;
NI Max;
tpagedesc42096* Head;
tpagedesc42096** Data;
};
typedef tsmallchunk23638* TY24422[512];
typedef ttrunk23611* ttrunkbuckets23613[256];
struct  tintset23615  {
ttrunkbuckets23613 Data;
};
struct  tmemregion24410  {
NI Minlargeobj;
NI Maxlargeobj;
TY24422 Freesmallchunks;
tllchunk24404* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk23640* Freechunkslist;
tintset23615 Chunkstarts;
tavlnode24408* Root;
tavlnode24408* Deleted;
tavlnode24408* Last;
tavlnode24408* Freeavlnodes;
};
struct  tgcstat44014  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap44016  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq42104 Zct;
tcellseq42104 Decstack;
tcellset42100 Cycleroots;
tcellseq42104 Tempstack;
NI Recgclock;
tmemregion24410 Region;
tgcstat44014 Stat;
};
typedef N_NIMCALL_PTR(tpasscontext250003*, tpassopen250007) (tsym191843* module);
typedef N_NIMCALL_PTR(tpasscontext250003*, tpassopencached250009) (tsym191843* module, trodreader240024* rd);
typedef N_NIMCALL_PTR(tnode191813*, tpassprocess250013) (tpasscontext250003* p, tnode191813* toplevelstmt);
typedef N_NIMCALL_PTR(tnode191813*, tpassclose250011) (tpasscontext250003* p, tnode191813* n);
struct tpass250015 {
tpassopen250007 Field0;
tpassopencached250009 Field1;
tpassprocess250013 Field2;
tpassclose250011 Field3;
};
struct  trope148007  {
  TNimObject Sup;
trope148007* Left;
trope148007* Right;
NI Length;
NimStringDesc* Data;
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
struct  tlistentry119017  {
  TNimObject Sup;
tlistentry119017* Prev;
tlistentry119017* Next;
};
struct  tlib191831  {
  tlistentry119017 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope148007* Name;
tnode191813* Path;
};
typedef NI TY23618[8];
struct  tpagedesc42096  {
tpagedesc42096* Next;
NI Key;
TY23618 Bits;
};
struct  tbasechunk23636  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk23638  {
  tbasechunk23636 Sup;
tsmallchunk23638* Next;
tsmallchunk23638* Prev;
tfreecell23628* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk24404  {
NI Size;
NI Acc;
tllchunk24404* Next;
};
struct  tbigchunk23640  {
  tbasechunk23636 Sup;
tbigchunk23640* Next;
tbigchunk23640* Prev;
NI Align;
NF Data;
};
struct  ttrunk23611  {
ttrunk23611* Next;
NI Key;
TY23618 Bits;
};
typedef tavlnode24408* TY24414[2];
struct  tavlnode24408  {
TY24414 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tiipair200203  {
NI Key;
NI Val;
};
struct  tiitable200207  {
NI Counter;
tiipairseq200205* Data;
};
struct  tindex240022  {
NI Lastidxkey;
NI Lastidxval;
tiitable200207 Tab;
NimStringDesc* R;
NI Offset;
};
struct  tidpair191855  {
tidobj170013* Key;
TNimObject* Val;
};
struct  tidtable191859  {
NI Counter;
tidpairseq191857* Data;
};
struct  tmemfile238204  {
void* Mem;
NI Size;
int Handle;
};
struct  trodreader240024  {
  TNimObject Sup;
NI Pos;
NCSTRING S;
NU32 Options;
NU8 Reason;
TY191932* Moddeps;
TY191932* Files;
NI Dataidx;
NI Convertersidx;
NI Initidx;
NI Interfidx;
NI Compilerprocsidx;
NI Methodsidx;
NimStringDesc* Filename;
tindex240022 Index;
tindex240022 Imports;
NI Readerindex;
NI Line;
NI Moduleid;
tidtable191859 Syms;
tmemfile238204 Memfile;
tsymseq191815* Methods;
NimStringDesc* Origfile;
NIM_BOOL Inviewmode;
};
struct  tfreecell23628  {
tfreecell23628* Next;
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
struct TY191932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct tiipairseq200205 {
  TGenericSeq Sup;
  tiipair200203 data[SEQ_DECL_SIZE];
};
struct tidpairseq191857 {
  TGenericSeq Sup;
  tidpair191855 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, adddependencyaux_525020)(NimStringDesc* importing, NimStringDesc* imported);
N_NIMCALL(void, appf_148085)(trope148007** c, NimStringDesc* frmt, trope148007** args, NI argsLen0);
N_NIMCALL(trope148007*, torope_148058)(NimStringDesc* s);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(tnode191813*, adddotdependency_525031)(tpasscontext250003* c, tnode191813* n);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(NI, sonslen_192191)(tnode191813* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NimStringDesc*, getmodulename_259012)(tnode191813* n);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, generatedot_525007)(NimStringDesc* project);
N_NIMCALL(void, writerope_149407)(trope148007* head, NimStringDesc* filename, NIM_BOOL usewarning);
N_NIMCALL(trope148007*, ropef_148079)(NimStringDesc* frmt, trope148007** args, NI argsLen0);
N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* path);
N_NIMCALL(tpasscontext250003*, myopen_525128)(tsym191843* module);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP7610)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell42088*, usrtocell_45443)(void* usr);
static N_INLINE(void, rtladdzct_47002)(tcell42088* c);
N_NOINLINE(void, addzct_45418)(tcellseq42104* s, tcell42088* c);
STRING_LITERAL(TMP7602, "$1 -> $2;$n", 11);
static NIM_CONST TY192025 TMP7603 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP7604, "sons", 4);
STRING_LITERAL(TMP7607, "digraph $1 {$n$2}$n", 19);
STRING_LITERAL(TMP7608, "", 0);
STRING_LITERAL(TMP7609, "dot", 3);
NIM_CONST tpass250015 gendependpass_525152 = {myopen_525128,
NIM_NIL,
adddotdependency_525031,
NIM_NIL}
;
trope148007* gdotgraph_525017;
extern TFrame* frameptr_13438;
extern TNimType NTI250003; /* TPassContext */
TNimType NTI525012; /* TGen */
extern TNimType NTI191811; /* PSym */
TNimType NTI525014; /* PGen */
extern tgcheap44016 gch_44044;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13438;
	frameptr_13438 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13438 = (*frameptr_13438).prev;
}

N_NIMCALL(void, adddependencyaux_525020)(NimStringDesc* importing, NimStringDesc* imported) {
	TY201350 LOC1;
	nimfr("addDependencyAux", "depends.nim")
	nimln(25, "depends.nim");
	memset((void*)LOC1, 0, sizeof(LOC1));
	nimln(25, "depends.nim");
	LOC1[0] = torope_148058(importing);
	nimln(25, "depends.nim");
	LOC1[1] = torope_148058(imported);
	appf_148085(&gdotgraph_525017, ((NimStringDesc*) &TMP7602), LOC1, 2);
	popFrame();
}

static N_INLINE(NI, sonslen_192191)(tnode191813* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1300, "ast.nim");
	{
		nimln(1300, "ast.nim");
		if (((TMP7603[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7604));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1300, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(1301, "ast.nim");
		nimln(1301, "ast.nim");
		if (((TMP7603[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7604));
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

N_NIMCALL(tnode191813*, adddotdependency_525031)(tpasscontext250003* c, tnode191813* n) {
	tnode191813* result;
	tgen525012* g;
	nimfr("addDotDependency", "depends.nim")
	result = 0;
	nimln(29, "depends.nim");
	result = n;
	nimln(30, "depends.nim");
	if (c) chckObj((*c).Sup.m_type, (&NTI525012));
	g = ((tgen525012*) (c));
	nimln(31, "depends.nim");
	switch ((*n).Kind) {
	case ((NU8) 115):
	{
		NI i_525049;
		NI HEX3Atmp_525107;
		NI LOC2;
		NI TMP7605;
		NI res_525109;
		i_525049 = 0;
		HEX3Atmp_525107 = 0;
		nimln(33, "depends.nim");
		nimln(33, "depends.nim");
		nimln(33, "depends.nim");
		LOC2 = 0;
		LOC2 = sonslen_192191(n);
		TMP7605 = subInt(LOC2, 1);
		HEX3Atmp_525107 = (NI64)(TMP7605);
		nimln(1451, "system.nim");
		res_525109 = 0;
		nimln(1452, "system.nim");
		while (1) {
			NimStringDesc* imported;
			nimln(1452, "system.nim");
			if (!(res_525109 <= HEX3Atmp_525107)) goto LA3;
			nimln(1451, "system.nim");
			i_525049 = res_525109;
			nimln(34, "depends.nim");
			if (((TMP7603[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7604));
			if ((NU)(i_525049) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			imported = getmodulename_259012((*n).kindU.S6.Sons->data[i_525049]);
			nimln(35, "depends.nim");
			adddependencyaux_525020((*(*(*g).Module).Name).S, imported);
			nimln(1454, "system.nim");
			res_525109 = addInt(res_525109, 1);
		} LA3: ;
	}
	break;
	case ((NU8) 119):
	case ((NU8) 116):
	{
		NimStringDesc* imported;
		nimln(37, "depends.nim");
		if (((TMP7603[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7604));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		imported = getmodulename_259012((*n).kindU.S6.Sons->data[0]);
		nimln(38, "depends.nim");
		adddependencyaux_525020((*(*(*g).Module).Name).S, imported);
	}
	break;
	case ((NU8) 114):
	case ((NU8) 111):
	case ((NU8) 125):
	case ((NU8) 126):
	{
		NI i_525092;
		NI HEX3Atmp_525111;
		NI LOC6;
		NI TMP7606;
		NI res_525113;
		i_525092 = 0;
		HEX3Atmp_525111 = 0;
		nimln(40, "depends.nim");
		nimln(40, "depends.nim");
		nimln(40, "depends.nim");
		LOC6 = 0;
		LOC6 = sonslen_192191(n);
		TMP7606 = subInt(LOC6, 1);
		HEX3Atmp_525111 = (NI64)(TMP7606);
		nimln(1451, "system.nim");
		res_525113 = 0;
		nimln(1452, "system.nim");
		while (1) {
			tnode191813* LOC8;
			nimln(1452, "system.nim");
			if (!(res_525113 <= HEX3Atmp_525111)) goto LA7;
			nimln(1451, "system.nim");
			i_525092 = res_525113;
			nimln(40, "depends.nim");
			nimln(40, "depends.nim");
			if (((TMP7603[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7604));
			if ((NU)(i_525092) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			LOC8 = 0;
			LOC8 = adddotdependency_525031(c, (*n).kindU.S6.Sons->data[i_525092]);
			nimln(1454, "system.nim");
			res_525113 = addInt(res_525113, 1);
		} LA7: ;
	}
	break;
	default:
	{
	}
	break;
	}
	popFrame();
	return result;
}

N_NIMCALL(void, generatedot_525007)(NimStringDesc* project) {
	TY201350 LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	trope148007* LOC4;
	NimStringDesc* LOC5;
	nimfr("generateDot", "depends.nim")
	nimln(45, "depends.nim");
	nimln(45, "depends.nim");
	memset((void*)LOC1, 0, sizeof(LOC1));
	nimln(46, "depends.nim");
	nimln(46, "depends.nim");
	nimln(46, "depends.nim");
	LOC2 = 0;
	LOC2 = nosextractFilename(project);
	LOC3 = 0;
	LOC3 = noschangeFileExt(LOC2, ((NimStringDesc*) &TMP7608));
	LOC1[0] = torope_148058(LOC3);
	LOC1[1] = gdotgraph_525017;
	LOC4 = 0;
	LOC4 = ropef_148079(((NimStringDesc*) &TMP7607), LOC1, 2);
	nimln(47, "depends.nim");
	LOC5 = 0;
	LOC5 = noschangeFileExt(project, ((NimStringDesc*) &TMP7609));
	writerope_149407(LOC4, LOC5, NIM_FALSE);
	popFrame();
}
N_NIMCALL(void, TMP7610)(void* p, NI op) {
	tgen525012* a;
	a = (tgen525012*)p;
	nimGCvisit((void*)(*a).Module, op);
}

static N_INLINE(tcell42088*, usrtocell_45443)(void* usr) {
	tcell42088* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	result = ((tcell42088*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell42088))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_47002)(tcell42088* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_45418(&gch_44044.Zct, c);
	popFrame();
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(251, "gc.nim");
	{
		tcell42088* c;
		nimln(251, "gc.nim");
		nimln(251, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(252, "gc.nim");
		c = usrtocell_45443(src);
		nimln(169, "gc.nim");
		(*c).Refcount += 8;
	}
	LA3: ;
	nimln(254, "gc.nim");
	{
		tcell42088* c;
		nimln(254, "gc.nim");
		nimln(254, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		nimln(255, "gc.nim");
		c = usrtocell_45443((*dest));
		nimln(256, "gc.nim");
		{
			nimln(167, "gc.nim");
			(*c).Refcount -= 8;
			nimln(168, "gc.nim");
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
			nimln(257, "gc.nim");
			rtladdzct_47002(c);
		}
		LA11: ;
	}
	LA7: ;
	nimln(258, "gc.nim");
	(*dest) = src;
	popFrame();
}

N_NIMCALL(tpasscontext250003*, myopen_525128)(tsym191843* module) {
	tpasscontext250003* result;
	tgen525012* g;
	nimfr("myOpen", "depends.nim")
	result = 0;
	g = 0;
	nimln(51, "depends.nim");
	g = (tgen525012*) newObj((&NTI525014), sizeof(tgen525012));
	(*g).Sup.Sup.m_type = (&NTI525012);
	nimln(52, "depends.nim");
	asgnRefNoCycle((void**) &(*g).Module, module);
	nimln(53, "depends.nim");
	result = &g->Sup;
	popFrame();
	return result;
}
N_NOINLINE(void, dependsInit)(void) {
	nimfr("depends", "depends.nim")
	popFrame();
}

N_NOINLINE(void, dependsDatInit)(void) {
static TNimNode TMP7600[1];
NTI525012.size = sizeof(tgen525012);
NTI525012.kind = 17;
NTI525012.base = (&NTI250003);
TMP7600[0].kind = 1;
TMP7600[0].offset = offsetof(tgen525012, Module);
TMP7600[0].typ = (&NTI191811);
TMP7600[0].name = "module";
NTI525012.node = &TMP7600[0];
NTI525014.size = sizeof(tgen525012*);
NTI525014.kind = 22;
NTI525014.base = (&NTI525012);
NTI525014.marker = TMP7610;
}

