/* Generated by Nimrod Compiler v0.9.5 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <setjmp.h>
typedef struct tnode191813 tnode191813;
typedef struct tpasscontext250003 tpasscontext250003;
typedef struct tgen526008 tgen526008;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct tdocumentor345005 tdocumentor345005;
typedef struct tsym191843 tsym191843;
typedef struct tidobj170013 tidobj170013;
typedef struct ttypeseq191845 ttypeseq191845;
typedef struct ttype191847 ttype191847;
typedef struct TGenericSeq TGenericSeq;
typedef struct tscope191837 tscope191837;
typedef struct TY191943 TY191943;
typedef struct tinstantiation191833 tinstantiation191833;
typedef struct tstrtable191817 tstrtable191817;
typedef struct tsymseq191815 tsymseq191815;
typedef struct tident170019 tident170019;
typedef struct tlineinfo166527 tlineinfo166527;
typedef struct tloc191827 tloc191827;
typedef struct trope148007 trope148007;
typedef struct tlib191831 tlib191831;
typedef struct NimStringDesc NimStringDesc;
typedef struct E_Base E_Base;
typedef struct TSafePoint TSafePoint;
typedef struct tcell41890 tcell41890;
typedef struct tcellset41902 tcellset41902;
typedef struct tgcheap43816 tgcheap43816;
typedef struct tcellseq41906 tcellseq41906;
typedef struct tpagedesc41898 tpagedesc41898;
typedef struct tmemregion24210 tmemregion24210;
typedef struct tsmallchunk23438 tsmallchunk23438;
typedef struct tllchunk24204 tllchunk24204;
typedef struct tbigchunk23440 tbigchunk23440;
typedef struct tintset23415 tintset23415;
typedef struct ttrunk23411 ttrunk23411;
typedef struct tavlnode24208 tavlnode24208;
typedef struct tgcstat43814 tgcstat43814;
typedef struct tstringtable122810 tstringtable122810;
typedef struct trstgenerator313012 trstgenerator313012;
typedef struct TY313028 TY313028;
typedef struct ttocentry313008 ttocentry313008;
typedef struct trstnode301009 trstnode301009;
typedef struct tpass250015 tpass250015;
typedef struct trodreader240024 trodreader240024;
typedef struct tnodeseq191807 tnodeseq191807;
typedef struct TY191932 TY191932;
typedef struct tlistentry119017 tlistentry119017;
typedef struct tbasechunk23436 tbasechunk23436;
typedef struct tfreecell23428 tfreecell23428;
typedef struct tkeyvaluepairseq122808 tkeyvaluepairseq122808;
typedef struct TY95106 TY95106;
typedef struct TY301084 TY301084;
typedef struct tindex240022 tindex240022;
typedef struct tiitable200207 tiitable200207;
typedef struct tiipairseq200205 tiipairseq200205;
typedef struct tiipair200203 tiipair200203;
typedef struct tidtable191859 tidtable191859;
typedef struct tidpairseq191857 tidpairseq191857;
typedef struct tidpair191855 tidpair191855;
typedef struct tmemfile238204 tmemfile238204;
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
struct  tgen526008  {
  tpasscontext250003 Sup;
tdocumentor345005* Doc;
tsym191843* Module;
};
struct  tidobj170013  {
  TNimObject Sup;
NI Id;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  tstrtable191817  {
NI Counter;
tsymseq191815* Data;
};
struct  tlineinfo166527  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  E_Base  {
  TNimObject Sup;
E_Base* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (E_Base* e, void* ClEnv);
void* ClEnv;
} TY11826;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY11826 raiseAction;
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
struct  ttocentry313008  {
trstnode301009* N;
NimStringDesc* Refname;
NimStringDesc* Header;
};
typedef N_NIMCALL_PTR(NimStringDesc*, tfindfilehandler302018) (NimStringDesc* filename);
typedef N_NIMCALL_PTR(void, tmsghandler302016) (NimStringDesc* filename, NI line, NI col, NU8 msgkind, NimStringDesc* arg);
typedef NimStringDesc* TY313036[5];
struct  trstgenerator313012  {
  TNimObject Sup;
NU8 Target;
tstringtable122810* Config;
NI Splitafter;
TY313028* Tocpart;
NIM_BOOL Hastoc;
NimStringDesc* Theindex;
NU8 Options;
tfindfilehandler302018 Findfile;
tmsghandler302016 Msghandler;
NimStringDesc* Filename;
TY313036 Meta;
NimStringDesc* Currentsection;
};
typedef trope148007* tsections345003[25];
struct  tdocumentor345005  {
  trstgenerator313012 Sup;
trope148007* Moddesc;
NI Id;
tsections345003 Toc;
tsections345003 Section;
NimStringDesc* Indexvalfilename;
tstringtable122810* Seensymbols;
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
struct  tident170019  {
  tidobj170013 Sup;
NimStringDesc* S;
tident170019* Next;
NI H;
};
struct  trope148007  {
  TNimObject Sup;
trope148007* Left;
trope148007* Right;
NI Length;
NimStringDesc* Data;
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
typedef NI TY23418[8];
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
struct TY95106 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  tstringtable122810  {
  TNimObject Sup;
NI Counter;
tkeyvaluepairseq122808* Data;
NU8 Mode;
};
struct  trstnode301009  {
NU8 Kind;
NimStringDesc* Text;
NI Level;
TY301084* Sons;
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
struct  tfreecell23428  {
tfreecell23428* Next;
NI Zerofield;
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
struct TY313028 {
  TGenericSeq Sup;
  ttocentry313008 data[SEQ_DECL_SIZE];
};
struct tnodeseq191807 {
  TGenericSeq Sup;
  tnode191813* data[SEQ_DECL_SIZE];
};
struct TY191932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct tkeyvaluepairseq122808 {
  TGenericSeq Sup;
  TY95106 data[SEQ_DECL_SIZE];
};
struct TY301084 {
  TGenericSeq Sup;
  trstnode301009* data[SEQ_DECL_SIZE];
};
struct tiipairseq200205 {
  TGenericSeq Sup;
  tiipair200203 data[SEQ_DECL_SIZE];
};
struct tidpairseq191857 {
  TGenericSeq Sup;
  tidpair191855 data[SEQ_DECL_SIZE];
};
N_NIMCALL(tnode191813*, close_526014)(tpasscontext250003* p, tnode191813* n);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
N_NIMCALL(void, writeoutput_348719)(tdocumentor345005* d, NimStringDesc* filename, NimStringDesc* outext, NIM_BOOL usewarning);
N_NIMCALL(NimStringDesc*, tofilename_167780)(NI32 fileidx);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(void, generateindex_348700)(tdocumentor345005* d);
static N_INLINE(void, popSafePoint)(void);
static N_INLINE(void, setFrame)(TFrame* s);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(E_Base*, getCurrentException)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_47627)(tcell41890* c);
static N_INLINE(NIM_BOOL, canbecycleroot_45262)(tcell41890* c);
static N_INLINE(void, rtladdcycleroot_46035)(tcell41890* c);
N_NOINLINE(void, incl_42655)(tcellset41902* s, tcell41890* cell);
static N_INLINE(tcell41890*, usrtocell_45243)(void* usr);
static N_INLINE(void, decref_47202)(tcell41890* c);
static N_INLINE(void, rtladdzct_46802)(tcell41890* c);
N_NOINLINE(void, addzct_45218)(tcellseq41906* s, tcell41890* c);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(tnode191813*, processnode_526049)(tpasscontext250003* c, tnode191813* n);
N_NIMCALL(void, generatedoc_346458)(tdocumentor345005* d, tnode191813* n);
N_NIMCALL(tpasscontext250003*, myopen_526057)(tsym191843* module);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP7625)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(tdocumentor345005*, newdocumentor_345048)(NimStringDesc* filename, tstringtable122810* config);
N_NIMCALL(void, finishdoc2pass_526085)(NimStringDesc* project);
STRING_LITERAL(TMP7623, "html", 4);
NIM_CONST tpass250015 docgen2pass_526082 = {myopen_526057,
NIM_NIL,
processnode_526049,
close_526014}
;
extern TNimType NTI250003; /* TPassContext */
TNimType NTI526008; /* TGen */
extern TNimType NTI345007; /* PDoc */
extern TNimType NTI191811; /* PSym */
extern NIM_BOOL gwholeproject_138122;
extern TSafePoint* exchandler_13239;
extern TFrame* frameptr_13238;
extern TNimType NTI2433; /* EIO */
extern E_Base* currexception_13241;
extern tgcheap43816 gch_43844;
TNimType NTI526010; /* PGen */
extern tstringtable122810* gconfigvars_138203;

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (a <= i);
		if (!(LOC3)) goto LA4;
		LOC3 = (i <= b);
		LA4: ;
		if (!LOC3) goto LA5;
		result = i;
		goto BeforeRet;
	}
	goto LA1;
	LA5: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1: ;
	BeforeRet: ;
	return result;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_13239;
	exchandler_13239 = s;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_13239 = (*exchandler_13239).prev;
}

static N_INLINE(void, setFrame)(TFrame* s) {
	frameptr_13238 = s;
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13238;
	frameptr_13238 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13238 = (*frameptr_13238).prev;
}

static N_INLINE(E_Base*, getCurrentException)(void) {
	E_Base* result;
	nimfr("getCurrentException", "system.nim")
	result = 0;
	nimln(2443, "system.nim");
	result = currexception_13241;
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, canbecycleroot_45262)(tcell41890* c) {
	NIM_BOOL result;
	nimfr("canbeCycleRoot", "gc.nim")
	result = 0;
	nimln(121, "gc.nim");
	nimln(121, "gc.nim");
	nimln(121, "gc.nim");
	result = !((((*(*c).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdcycleroot_46035)(tcell41890* c) {
	nimfr("rtlAddCycleRoot", "gc.nim")
	nimln(189, "gc.nim");
	{
		nimln(189, "gc.nim");
		nimln(189, "gc.nim");
		nimln(189, "gc.nim");
		if (!!((((NI) ((NI)((*c).Refcount & 3))) == 3))) goto LA3;
		nimln(139, "gc.nim");
		nimln(139, "gc.nim");
		nimln(139, "gc.nim");
		(*c).Refcount = (NI)((NI)((*c).Refcount & -4) | 3);
		nimln(191, "gc.nim");
		incl_42655(&gch_43844.Cycleroots, c);
	}
	LA3: ;
	popFrame();
}

static N_INLINE(void, incref_47627)(tcell41890* c) {
	nimfr("incRef", "gc.nim")
	nimln(216, "gc.nim");
	nimln(216, "gc.nim");
	(*c).Refcount = (NI)((NU64)((*c).Refcount) + (NU64)(8));
	nimln(219, "gc.nim");
	{
		NIM_BOOL LOC3;
		nimln(219, "gc.nim");
		LOC3 = 0;
		LOC3 = canbecycleroot_45262(c);
		if (!LOC3) goto LA4;
		nimln(220, "gc.nim");
		rtladdcycleroot_46035(c);
	}
	LA4: ;
	popFrame();
}

static N_INLINE(tcell41890*, usrtocell_45243)(void* usr) {
	tcell41890* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	result = ((tcell41890*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell41890))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_46802)(tcell41890* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_45218(&gch_43844.Zct, c);
	popFrame();
}

static N_INLINE(void, decref_47202)(tcell41890* c) {
	nimfr("decRef", "gc.nim")
	nimln(206, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).Refcount -= 8;
		nimln(168, "gc.nim");
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		nimln(207, "gc.nim");
		rtladdzct_46802(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		nimln(208, "gc.nim");
		LOC6 = 0;
		LOC6 = canbecycleroot_45262(c);
		if (!LOC6) goto LA7;
		nimln(211, "gc.nim");
		rtladdcycleroot_46035(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
	popFrame();
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	nimfr("asgnRef", "gc.nim")
	nimln(244, "gc.nim");
	{
		tcell41890* LOC5;
		nimln(244, "gc.nim");
		nimln(244, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(244, "gc.nim");
		nimln(244, "gc.nim");
		LOC5 = 0;
		LOC5 = usrtocell_45243(src);
		incref_47627(LOC5);
	}
	LA3: ;
	nimln(245, "gc.nim");
	{
		tcell41890* LOC10;
		nimln(245, "gc.nim");
		nimln(245, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		nimln(245, "gc.nim");
		nimln(245, "gc.nim");
		LOC10 = 0;
		LOC10 = usrtocell_45243((*dest));
		decref_47202(LOC10);
	}
	LA8: ;
	nimln(246, "gc.nim");
	(*dest) = src;
	popFrame();
}

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) &currexception_13241, (*currexception_13241).parent);
}

N_NIMCALL(tnode191813*, close_526014)(tpasscontext250003* p, tnode191813* n) {
	tnode191813* result;
	tgen526008* g;
	NIM_BOOL usewarning;
	nimfr("close", "docgen2.nim")
	result = 0;
	nimln(23, "docgen2.nim");
	if (p) chckObj((*p).Sup.m_type, (&NTI526008));
	g = ((tgen526008*) (p));
	nimln(24, "docgen2.nim");
	nimln(24, "docgen2.nim");
	nimln(24, "docgen2.nim");
	usewarning = !((((*(*g).Module).Flags &(1<<((((NU8) 12))&31)))!=0));
	nimln(25, "docgen2.nim");
	{
		NIM_BOOL LOC3;
		NimStringDesc* LOC7;
		TSafePoint TMP7624;
		nimln(25, "docgen2.nim");
		LOC3 = 0;
		LOC3 = gwholeproject_138122;
		if (LOC3) goto LA4;
		nimln(25, "docgen2.nim");
		LOC3 = (((*(*g).Module).Flags &(1<<((((NU8) 12))&31)))!=0);
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(26, "docgen2.nim");
		nimln(26, "docgen2.nim");
		LOC7 = 0;
		LOC7 = tofilename_167780(((NI32)chckRange((*(*g).Module).Position, ((NI32) (-2147483647 -1)), ((NI32) 2147483647))));
		writeoutput_348719((*g).Doc, LOC7, ((NimStringDesc*) &TMP7623), usewarning);
		nimln(27, "docgen2.nim");
		pushSafePoint(&TMP7624);
		TMP7624.status = setjmp(TMP7624.context);
		if (TMP7624.status == 0) {
			nimln(28, "docgen2.nim");
			generateindex_348700((*g).Doc);
			popSafePoint();
		}
		else {
			popSafePoint();
			setFrame((TFrame*)&F);
			if (isObj(getCurrentException()->Sup.m_type, (&NTI2433))) {
				TMP7624.status = 0;
				popCurrentException();
			}
		}
		if (TMP7624.status != 0) reraiseException();
	}
	LA5: ;
	popFrame();
	return result;
}

N_NIMCALL(tnode191813*, processnode_526049)(tpasscontext250003* c, tnode191813* n) {
	tnode191813* result;
	tgen526008* g;
	nimfr("processNode", "docgen2.nim")
	result = 0;
	nimln(33, "docgen2.nim");
	result = n;
	nimln(34, "docgen2.nim");
	if (c) chckObj((*c).Sup.m_type, (&NTI526008));
	g = ((tgen526008*) (c));
	nimln(35, "docgen2.nim");
	generatedoc_346458((*g).Doc, n);
	popFrame();
	return result;
}
N_NIMCALL(void, TMP7625)(void* p, NI op) {
	tgen526008* a;
	a = (tgen526008*)p;
	nimGCvisit((void*)(*a).Doc, op);
	nimGCvisit((void*)(*a).Module, op);
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
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
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

N_NIMCALL(tpasscontext250003*, myopen_526057)(tsym191843* module) {
	tpasscontext250003* result;
	tgen526008* g;
	tdocumentor345005* d;
	NimStringDesc* LOC1;
	nimfr("myOpen", "docgen2.nim")
	result = 0;
	g = 0;
	nimln(39, "docgen2.nim");
	g = (tgen526008*) newObj((&NTI526010), sizeof(tgen526008));
	(*g).Sup.Sup.m_type = (&NTI526008);
	nimln(40, "docgen2.nim");
	asgnRefNoCycle((void**) &(*g).Module, module);
	nimln(41, "docgen2.nim");
	nimln(41, "docgen2.nim");
	LOC1 = 0;
	LOC1 = tofilename_167780(((NI32)chckRange((*module).Position, ((NI32) (-2147483647 -1)), ((NI32) 2147483647))));
	d = newdocumentor_345048(LOC1, gconfigvars_138203);
	nimln(42, "docgen2.nim");
	(*d).Sup.Hastoc = NIM_TRUE;
	nimln(43, "docgen2.nim");
	asgnRef((void**) &(*g).Doc, d);
	nimln(44, "docgen2.nim");
	result = &g->Sup;
	popFrame();
	return result;
}

N_NIMCALL(void, finishdoc2pass_526085)(NimStringDesc* project) {
	nimfr("finishDoc2Pass", "docgen2.nim")
	popFrame();
}
N_NOINLINE(void, docgen2Init)(void) {
	nimfr("docgen2", "docgen2.nim")
	popFrame();
}

N_NOINLINE(void, docgen2DatInit)(void) {
static TNimNode* TMP7622[2];
static TNimNode TMP7620[3];
NTI526008.size = sizeof(tgen526008);
NTI526008.kind = 17;
NTI526008.base = (&NTI250003);
TMP7622[0] = &TMP7620[1];
TMP7620[1].kind = 1;
TMP7620[1].offset = offsetof(tgen526008, Doc);
TMP7620[1].typ = (&NTI345007);
TMP7620[1].name = "doc";
TMP7622[1] = &TMP7620[2];
TMP7620[2].kind = 1;
TMP7620[2].offset = offsetof(tgen526008, Module);
TMP7620[2].typ = (&NTI191811);
TMP7620[2].name = "module";
TMP7620[0].len = 2; TMP7620[0].kind = 2; TMP7620[0].sons = &TMP7622[0];
NTI526008.node = &TMP7620[0];
NTI526010.size = sizeof(tgen526008*);
NTI526010.kind = 22;
NTI526010.base = (&NTI526008);
NTI526010.marker = TMP7625;
}

