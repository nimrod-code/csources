/* Generated by Nimrod Compiler v0.9.5 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct trope148007 trope148007;
typedef struct TY470142 TY470142;
typedef struct tcgen470030 tcgen470030;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tpasscontext250003 tpasscontext250003;
typedef struct TNimObject TNimObject;
typedef struct tsym191843 tsym191843;
typedef struct NimStringDesc NimStringDesc;
typedef struct tidtable191859 tidtable191859;
typedef struct tidpairseq191857 tidpairseq191857;
typedef struct tidpair191855 tidpair191855;
typedef struct tidobj170013 tidobj170013;
typedef struct tintset188047 tintset188047;
typedef struct ttrunk188043 ttrunk188043;
typedef struct ttrunkseq188045 ttrunkseq188045;
typedef struct tlinkedlist119023 tlinkedlist119023;
typedef struct tlistentry119017 tlistentry119017;
typedef struct tcproc470026 tcproc470026;
typedef struct ttypeseq191845 ttypeseq191845;
typedef struct ttype191847 ttype191847;
typedef struct tnodetable191871 tnodetable191871;
typedef struct tnodepairseq191869 tnodepairseq191869;
typedef struct tnodepair191867 tnodepair191867;
typedef struct tnode191813 tnode191813;
typedef struct tsymseq191815 tsymseq191815;
typedef struct tnodeseq191807 tnodeseq191807;
typedef struct tropeseq148009 tropeseq148009;
typedef struct TY470097 TY470097;
typedef struct tblock470024 tblock470024;
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
typedef struct tscope191837 tscope191837;
typedef struct TY191943 TY191943;
typedef struct tinstantiation191833 tinstantiation191833;
typedef struct tstrtable191817 tstrtable191817;
typedef struct tident170019 tident170019;
typedef struct tlineinfo166527 tlineinfo166527;
typedef struct tloc191827 tloc191827;
typedef struct tlib191831 tlib191831;
typedef struct tbasechunk23436 tbasechunk23436;
typedef struct tfreecell23428 tfreecell23428;
typedef struct TY191932 TY191932;
struct  TGenericSeq  {
NI len;
NI reserved;
};
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
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef trope148007* tcfilesections470014[18];
struct  tidpair191855  {
tidobj170013* Key;
TNimObject* Val;
};
struct  tidtable191859  {
NI Counter;
tidpairseq191857* Data;
};
struct  tintset188047  {
NI Counter;
NI Max;
ttrunk188043* Head;
ttrunkseq188045* Data;
};
struct  tlinkedlist119023  {
tlistentry119017* Head;
tlistentry119017* Tail;
NI Counter;
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
typedef trope148007* TY470132[10];
struct  tcgen470030  {
  tpasscontext250003 Sup;
tsym191843* Module;
NimStringDesc* Filename;
tcfilesections470014 S;
NIM_BOOL Preventstacktrace;
NIM_BOOL Usesthreadvars;
NIM_BOOL Framedeclared;
NIM_BOOL Isheaderfile;
NIM_BOOL Includesstringh;
NimStringDesc* Cfilename;
tidtable191859 Typecache;
tidtable191859 Forwtypecache;
tintset188047 Declaredthings;
tintset188047 Declaredprotos;
tlinkedlist119023 Headerfiles;
tintset188047 Typeinfomarker;
tcproc470026* Initproc;
tcproc470026* Postinitproc;
tcproc470026* Preinitproc;
ttypeseq191845* Typestack;
tnodetable191871 Datacache;
tsymseq191815* Forwardedprocs;
NI Typenodes;
NI Nimtypes;
trope148007* Typenodesname;
trope148007* Nimtypesname;
NI Labels;
TY470132 Extensionloaders;
trope148007* Injectstmt;
};
typedef trope148007* tcprocsections470018[3];
struct  tblock470024  {
NI Id;
trope148007* Label;
tcprocsections470018 Sections;
NIM_BOOL Isloop;
NI16 Nestedtrystmts;
NI16 Nestedexceptstmts;
NI16 Framelen;
};
struct  tcproc470026  {
tsym191843* Prc;
NIM_BOOL Beforeretneeded;
NIM_BOOL Threadvaraccessed;
tnodeseq191807* Nestedtrystmts;
NI Inexceptblock;
tropeseq148009* Finallysafepoints;
NI Labels;
TY470097* Blocks;
NI Breakidx;
NU32 Options;
NI Maxframelen;
tcgen470030* Module;
NI Withinloop;
NI Gcframeid;
trope148007* Gcframetype;
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
struct  tidobj170013  {
  TNimObject Sup;
NI Id;
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
struct  trope148007  {
  TNimObject Sup;
trope148007* Left;
trope148007* Right;
NI Length;
NimStringDesc* Data;
};
typedef NI TY23418[16];
struct  ttrunk188043  {
ttrunk188043* Next;
NI Key;
TY23418 Bits;
};
struct  tlistentry119017  {
  TNimObject Sup;
tlistentry119017* Prev;
tlistentry119017* Next;
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
struct  tlib191831  {
  tlistentry119017 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope148007* Name;
tnode191813* Path;
};
struct  tfreecell23428  {
tfreecell23428* Next;
NI Zerofield;
};
struct TY470142 {
  TGenericSeq Sup;
  tcgen470030* data[SEQ_DECL_SIZE];
};
struct tidpairseq191857 {
  TGenericSeq Sup;
  tidpair191855 data[SEQ_DECL_SIZE];
};
struct ttrunkseq188045 {
  TGenericSeq Sup;
  ttrunk188043* data[SEQ_DECL_SIZE];
};
struct ttypeseq191845 {
  TGenericSeq Sup;
  ttype191847* data[SEQ_DECL_SIZE];
};
struct tnodepairseq191869 {
  TGenericSeq Sup;
  tnodepair191867 data[SEQ_DECL_SIZE];
};
struct tsymseq191815 {
  TGenericSeq Sup;
  tsym191843* data[SEQ_DECL_SIZE];
};
struct tnodeseq191807 {
  TGenericSeq Sup;
  tnode191813* data[SEQ_DECL_SIZE];
};
struct tropeseq148009 {
  TGenericSeq Sup;
  trope148007* data[SEQ_DECL_SIZE];
};
struct TY470097 {
  TGenericSeq Sup;
  tblock470024 data[SEQ_DECL_SIZE];
};
struct TY191943 {
  TGenericSeq Sup;
  tinstantiation191833* data[SEQ_DECL_SIZE];
};
struct TY191932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP6216)(void* p, NI op);
N_NIMCALL(void, TMP6217)(void* p, NI op);
N_NIMCALL(void, TMP6219)(void* p, NI op);
N_NIMCALL(void, TMP6220)(void* p, NI op);
static N_INLINE(void, nimGCunref)(void* p);
static N_INLINE(void, decref_47202)(tcell41890* c);
static N_INLINE(void, rtladdzct_46802)(tcell41890* c);
N_NOINLINE(void, addzct_45218)(tcellseq41906* s, tcell41890* c);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NIM_BOOL, canbecycleroot_45262)(tcell41890* c);
static N_INLINE(void, rtladdcycleroot_46035)(tcell41890* c);
N_NOINLINE(void, incl_42655)(tcellset41902* s, tcell41890* cell);
static N_INLINE(tcell41890*, usrtocell_45243)(void* usr);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
static N_INLINE(trope148007**, s_470173)(tcproc470026* p, NU8 s);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(trope148007**, procsec_470193)(tcproc470026* p, NU8 s);
N_NIMCALL(tcgen470030*, bmod_470202)(tsym191843* module);
N_NIMCALL(tcproc470026*, newproc_470208)(tsym191843* prc, tcgen470030* module);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_47627)(tcell41890* c);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
trope148007* mainmodprocs_470137;
trope148007* mainmodinit_470138;
trope148007* othermodsinit_470139;
trope148007* maindatinit_470140;
trope148007* gmapping_470141;
TY470142* gmodules_470163;
extern TNimType NTI250003; /* TPassContext */
TNimType NTI470030; /* TCGen */
extern TNimType NTI191811; /* PSym */
extern TNimType NTI143; /* string */
extern TNimType NTI148005; /* PRope */
TNimType NTI470014; /* TCFileSections */
extern TNimType NTI134; /* bool */
extern TNimType NTI191859; /* TIdTable */
extern TNimType NTI188047; /* TIntSet */
extern TNimType NTI119023; /* TLinkedList */
TNimType NTI470026; /* TCProc */
extern TNimType NTI191807; /* TNodeSeq */
extern TNimType NTI106; /* int */
extern TNimType NTI148009; /* TRopeSeq */
extern TNimType NTI71507; /* range 0..2147483647(int) */
TNimType NTI470024; /* TBlock */
TNimType NTI470018; /* TCProcSections */
extern TNimType NTI110; /* int16 */
TNimType NTI470097; /* seq[TBlock] */
extern TNimType NTI138105; /* set[TOption] */
TNimType NTI470022; /* BProc */
extern TNimType NTI191845; /* TTypeSeq */
extern TNimType NTI191871; /* TNodeTable */
extern TNimType NTI191815; /* TSymSeq */
TNimType NTI470132; /* array[48..57, PRope] */
TNimType NTI470020; /* BModule */
TNimType NTI470142; /* seq[BModule] */
extern tgcheap43816 gch_43844;
extern TFrame* frameptr_13238;
NI gforwardedprocscounter_470164;
extern NU32 goptions_138108;
N_NIMCALL(void, TMP6216)(void* p, NI op) {
	TY470097* a;
	NI LOC1;
	NI LOC2;
	a = (TY470097*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Label, op);
	LOC2 = 0;
	for (LOC2 = 0; LOC2 < 3; LOC2++) {
	nimGCvisit((void*)a->data[LOC1].Sections[LOC2], op);
	}
	}
}
N_NIMCALL(void, TMP6217)(void* p, NI op) {
	tcproc470026* a;
	a = (tcproc470026*)p;
	nimGCvisit((void*)(*a).Prc, op);
	nimGCvisit((void*)(*a).Nestedtrystmts, op);
	nimGCvisit((void*)(*a).Finallysafepoints, op);
	nimGCvisit((void*)(*a).Blocks, op);
	nimGCvisit((void*)(*a).Module, op);
	nimGCvisit((void*)(*a).Gcframetype, op);
}
N_NIMCALL(void, TMP6219)(void* p, NI op) {
	tcgen470030* a;
	NI LOC1;
	NI LOC2;
	a = (tcgen470030*)p;
	nimGCvisit((void*)(*a).Module, op);
	nimGCvisit((void*)(*a).Filename, op);
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 18; LOC1++) {
	nimGCvisit((void*)(*a).S[LOC1], op);
	}
	nimGCvisit((void*)(*a).Cfilename, op);
	nimGCvisit((void*)(*a).Typecache.Data, op);
	nimGCvisit((void*)(*a).Forwtypecache.Data, op);
	nimGCvisit((void*)(*a).Declaredthings.Head, op);
	nimGCvisit((void*)(*a).Declaredthings.Data, op);
	nimGCvisit((void*)(*a).Declaredprotos.Head, op);
	nimGCvisit((void*)(*a).Declaredprotos.Data, op);
	nimGCvisit((void*)(*a).Headerfiles.Head, op);
	nimGCvisit((void*)(*a).Headerfiles.Tail, op);
	nimGCvisit((void*)(*a).Typeinfomarker.Head, op);
	nimGCvisit((void*)(*a).Typeinfomarker.Data, op);
	nimGCvisit((void*)(*a).Initproc, op);
	nimGCvisit((void*)(*a).Postinitproc, op);
	nimGCvisit((void*)(*a).Preinitproc, op);
	nimGCvisit((void*)(*a).Typestack, op);
	nimGCvisit((void*)(*a).Datacache.Data, op);
	nimGCvisit((void*)(*a).Forwardedprocs, op);
	nimGCvisit((void*)(*a).Typenodesname, op);
	nimGCvisit((void*)(*a).Nimtypesname, op);
	LOC2 = 0;
	for (LOC2 = 0; LOC2 < 10; LOC2++) {
	nimGCvisit((void*)(*a).Extensionloaders[LOC2], op);
	}
	nimGCvisit((void*)(*a).Injectstmt, op);
}
N_NIMCALL(void, TMP6220)(void* p, NI op) {
	TY470142* a;
	NI LOC1;
	a = (TY470142*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13238;
	frameptr_13238 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13238 = (*frameptr_13238).prev;
}

static N_INLINE(void, rtladdzct_46802)(tcell41890* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_45218(&gch_43844.Zct, c);
	popFrame();
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

static N_INLINE(void, decref_47202)(tcell41890* c) {
	nimfr("decRef", "gc.nim")
	nimln(206, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).Refcount -= 8;
		nimln(168, "gc.nim");
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
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

static N_INLINE(void, nimGCunref)(void* p) {
	tcell41890* LOC1;
	nimfr("nimGCunref", "gc.nim")
	nimln(223, "gc.nim");
	nimln(223, "gc.nim");
	LOC1 = 0;
	LOC1 = usrtocell_45243(p);
	decref_47202(LOC1);
	popFrame();
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

static N_INLINE(trope148007**, s_470173)(tcproc470026* p, NU8 s) {
	trope148007** result;
	NI TMP6221;
	nimfr("s", "cgendata.nim")
	result = 0;
	nimln(129, "cgendata.nim");
	nimln(129, "cgendata.nim");
	nimln(129, "cgendata.nim");
	TMP6221 = subInt((*p).Blocks->Sup.len, 1);
	if ((NU)((NI32)(TMP6221)) >= (NU)((*p).Blocks->Sup.len)) raiseIndexError();
	result = &(*p).Blocks->data[(NI32)(TMP6221)].Sections[(s)- 0];
	popFrame();
	return result;
}

static N_INLINE(trope148007**, procsec_470193)(tcproc470026* p, NU8 s) {
	trope148007** result;
	nimfr("procSec", "cgendata.nim")
	result = 0;
	nimln(133, "cgendata.nim");
	if ((NU)(0) >= (NU)((*p).Blocks->Sup.len)) raiseIndexError();
	result = &(*p).Blocks->data[0].Sections[(s)- 0];
	popFrame();
	return result;
}

N_NIMCALL(tcgen470030*, bmod_470202)(tsym191843* module) {
	tcgen470030* result;
	nimfr("bmod", "cgendata.nim")
	result = 0;
	nimln(137, "cgendata.nim");
	if ((NU)((*module).Position) >= (NU)(gmodules_470163->Sup.len)) raiseIndexError();
	result = gmodules_470163->data[(*module).Position];
	popFrame();
	return result;
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

static N_INLINE(void, incref_47627)(tcell41890* c) {
	nimfr("incRef", "gc.nim")
	nimln(216, "gc.nim");
	nimln(216, "gc.nim");
	(*c).Refcount = (NI)((NU32)((*c).Refcount) + (NU32)(8));
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

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell41890* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(233, "gc.nim");
	c = usrtocell_45243(p);
	nimln(235, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).Refcount -= 8;
		nimln(168, "gc.nim");
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		nimln(236, "gc.nim");
		rtladdzct_46802(c);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(tcproc470026*, newproc_470208)(tsym191843* prc, tcgen470030* module) {
	tcproc470026* result;
	nimfr("newProc", "cgendata.nim")
	result = 0;
	nimln(140, "cgendata.nim");
	result = (tcproc470026*) newObj((&NTI470022), sizeof(tcproc470026));
	nimln(141, "cgendata.nim");
	asgnRefNoCycle((void**) &(*result).Prc, prc);
	nimln(142, "cgendata.nim");
	asgnRef((void**) &(*result).Module, module);
	nimln(143, "cgendata.nim");
	{
		nimln(143, "cgendata.nim");
		nimln(143, "cgendata.nim");
		if (!!((prc == NIM_NIL))) goto LA3;
		nimln(143, "cgendata.nim");
		(*result).Options = (*prc).Options;
	}
	goto LA1;
	LA3: ;
	{
		nimln(144, "cgendata.nim");
		(*result).Options = goptions_138108;
	}
	LA1: ;
	nimln(145, "cgendata.nim");
	if ((*result).Blocks) nimGCunrefNoCycle((*result).Blocks);
	(*result).Blocks = (TY470097*) newSeqRC1((&NTI470097), 1);
	nimln(146, "cgendata.nim");
	if ((*result).Nestedtrystmts) nimGCunrefNoCycle((*result).Nestedtrystmts);
	(*result).Nestedtrystmts = (tnodeseq191807*) newSeqRC1((&NTI191807), 0);
	nimln(147, "cgendata.nim");
	if ((*result).Finallysafepoints) nimGCunrefNoCycle((*result).Finallysafepoints);
	(*result).Finallysafepoints = (tropeseq148009*) newSeqRC1((&NTI148009), 0);
	popFrame();
	return result;
}
N_NOINLINE(void, cgendataInit)(void) {
	nimfr("cgendata", "cgendata.nim")
	nimln(124, "cgendata.nim");
	if (gmodules_470163) nimGCunref(gmodules_470163);
	gmodules_470163 = (TY470142*) newSeqRC1((&NTI470142), 0);
	nimln(125, "cgendata.nim");
	gforwardedprocscounter_470164 = 0;
	popFrame();
}

N_NOINLINE(void, cgendataDatInit)(void) {
static TNimNode* TMP6213[28];
static TNimNode* TMP6214[15];
static TNimNode* TMP6215[7];
static TNimNode TMP6211[53];
NTI470030.size = sizeof(tcgen470030);
NTI470030.kind = 17;
NTI470030.base = (&NTI250003);
TMP6213[0] = &TMP6211[1];
TMP6211[1].kind = 1;
TMP6211[1].offset = offsetof(tcgen470030, Module);
TMP6211[1].typ = (&NTI191811);
TMP6211[1].name = "module";
TMP6213[1] = &TMP6211[2];
TMP6211[2].kind = 1;
TMP6211[2].offset = offsetof(tcgen470030, Filename);
TMP6211[2].typ = (&NTI143);
TMP6211[2].name = "filename";
TMP6213[2] = &TMP6211[3];
NTI470014.size = sizeof(tcfilesections470014);
NTI470014.kind = 16;
NTI470014.base = (&NTI148005);
NTI470014.flags = 2;
TMP6211[3].kind = 1;
TMP6211[3].offset = offsetof(tcgen470030, S);
TMP6211[3].typ = (&NTI470014);
TMP6211[3].name = "s";
TMP6213[3] = &TMP6211[4];
TMP6211[4].kind = 1;
TMP6211[4].offset = offsetof(tcgen470030, Preventstacktrace);
TMP6211[4].typ = (&NTI134);
TMP6211[4].name = "preventStackTrace";
TMP6213[4] = &TMP6211[5];
TMP6211[5].kind = 1;
TMP6211[5].offset = offsetof(tcgen470030, Usesthreadvars);
TMP6211[5].typ = (&NTI134);
TMP6211[5].name = "usesThreadVars";
TMP6213[5] = &TMP6211[6];
TMP6211[6].kind = 1;
TMP6211[6].offset = offsetof(tcgen470030, Framedeclared);
TMP6211[6].typ = (&NTI134);
TMP6211[6].name = "frameDeclared";
TMP6213[6] = &TMP6211[7];
TMP6211[7].kind = 1;
TMP6211[7].offset = offsetof(tcgen470030, Isheaderfile);
TMP6211[7].typ = (&NTI134);
TMP6211[7].name = "isHeaderFile";
TMP6213[7] = &TMP6211[8];
TMP6211[8].kind = 1;
TMP6211[8].offset = offsetof(tcgen470030, Includesstringh);
TMP6211[8].typ = (&NTI134);
TMP6211[8].name = "includesStringh";
TMP6213[8] = &TMP6211[9];
TMP6211[9].kind = 1;
TMP6211[9].offset = offsetof(tcgen470030, Cfilename);
TMP6211[9].typ = (&NTI143);
TMP6211[9].name = "cfilename";
TMP6213[9] = &TMP6211[10];
TMP6211[10].kind = 1;
TMP6211[10].offset = offsetof(tcgen470030, Typecache);
TMP6211[10].typ = (&NTI191859);
TMP6211[10].name = "typeCache";
TMP6213[10] = &TMP6211[11];
TMP6211[11].kind = 1;
TMP6211[11].offset = offsetof(tcgen470030, Forwtypecache);
TMP6211[11].typ = (&NTI191859);
TMP6211[11].name = "forwTypeCache";
TMP6213[11] = &TMP6211[12];
TMP6211[12].kind = 1;
TMP6211[12].offset = offsetof(tcgen470030, Declaredthings);
TMP6211[12].typ = (&NTI188047);
TMP6211[12].name = "declaredThings";
TMP6213[12] = &TMP6211[13];
TMP6211[13].kind = 1;
TMP6211[13].offset = offsetof(tcgen470030, Declaredprotos);
TMP6211[13].typ = (&NTI188047);
TMP6211[13].name = "declaredProtos";
TMP6213[13] = &TMP6211[14];
TMP6211[14].kind = 1;
TMP6211[14].offset = offsetof(tcgen470030, Headerfiles);
TMP6211[14].typ = (&NTI119023);
TMP6211[14].name = "headerFiles";
TMP6213[14] = &TMP6211[15];
TMP6211[15].kind = 1;
TMP6211[15].offset = offsetof(tcgen470030, Typeinfomarker);
TMP6211[15].typ = (&NTI188047);
TMP6211[15].name = "typeInfoMarker";
TMP6213[15] = &TMP6211[16];
NTI470026.size = sizeof(tcproc470026);
NTI470026.kind = 18;
NTI470026.base = 0;
TMP6214[0] = &TMP6211[18];
TMP6211[18].kind = 1;
TMP6211[18].offset = offsetof(tcproc470026, Prc);
TMP6211[18].typ = (&NTI191811);
TMP6211[18].name = "prc";
TMP6214[1] = &TMP6211[19];
TMP6211[19].kind = 1;
TMP6211[19].offset = offsetof(tcproc470026, Beforeretneeded);
TMP6211[19].typ = (&NTI134);
TMP6211[19].name = "beforeRetNeeded";
TMP6214[2] = &TMP6211[20];
TMP6211[20].kind = 1;
TMP6211[20].offset = offsetof(tcproc470026, Threadvaraccessed);
TMP6211[20].typ = (&NTI134);
TMP6211[20].name = "threadVarAccessed";
TMP6214[3] = &TMP6211[21];
TMP6211[21].kind = 1;
TMP6211[21].offset = offsetof(tcproc470026, Nestedtrystmts);
TMP6211[21].typ = (&NTI191807);
TMP6211[21].name = "nestedTryStmts";
TMP6214[4] = &TMP6211[22];
TMP6211[22].kind = 1;
TMP6211[22].offset = offsetof(tcproc470026, Inexceptblock);
TMP6211[22].typ = (&NTI106);
TMP6211[22].name = "inExceptBlock";
TMP6214[5] = &TMP6211[23];
TMP6211[23].kind = 1;
TMP6211[23].offset = offsetof(tcproc470026, Finallysafepoints);
TMP6211[23].typ = (&NTI148009);
TMP6211[23].name = "finallySafePoints";
TMP6214[6] = &TMP6211[24];
TMP6211[24].kind = 1;
TMP6211[24].offset = offsetof(tcproc470026, Labels);
TMP6211[24].typ = (&NTI71507);
TMP6211[24].name = "labels";
TMP6214[7] = &TMP6211[25];
NTI470024.size = sizeof(tblock470024);
NTI470024.kind = 18;
NTI470024.base = 0;
NTI470024.flags = 2;
TMP6215[0] = &TMP6211[27];
TMP6211[27].kind = 1;
TMP6211[27].offset = offsetof(tblock470024, Id);
TMP6211[27].typ = (&NTI106);
TMP6211[27].name = "id";
TMP6215[1] = &TMP6211[28];
TMP6211[28].kind = 1;
TMP6211[28].offset = offsetof(tblock470024, Label);
TMP6211[28].typ = (&NTI148005);
TMP6211[28].name = "label";
TMP6215[2] = &TMP6211[29];
NTI470018.size = sizeof(tcprocsections470018);
NTI470018.kind = 16;
NTI470018.base = (&NTI148005);
NTI470018.flags = 2;
TMP6211[29].kind = 1;
TMP6211[29].offset = offsetof(tblock470024, Sections);
TMP6211[29].typ = (&NTI470018);
TMP6211[29].name = "sections";
TMP6215[3] = &TMP6211[30];
TMP6211[30].kind = 1;
TMP6211[30].offset = offsetof(tblock470024, Isloop);
TMP6211[30].typ = (&NTI134);
TMP6211[30].name = "isLoop";
TMP6215[4] = &TMP6211[31];
TMP6211[31].kind = 1;
TMP6211[31].offset = offsetof(tblock470024, Nestedtrystmts);
TMP6211[31].typ = (&NTI110);
TMP6211[31].name = "nestedTryStmts";
TMP6215[5] = &TMP6211[32];
TMP6211[32].kind = 1;
TMP6211[32].offset = offsetof(tblock470024, Nestedexceptstmts);
TMP6211[32].typ = (&NTI110);
TMP6211[32].name = "nestedExceptStmts";
TMP6215[6] = &TMP6211[33];
TMP6211[33].kind = 1;
TMP6211[33].offset = offsetof(tblock470024, Framelen);
TMP6211[33].typ = (&NTI110);
TMP6211[33].name = "frameLen";
TMP6211[26].len = 7; TMP6211[26].kind = 2; TMP6211[26].sons = &TMP6215[0];
NTI470024.node = &TMP6211[26];
NTI470097.size = sizeof(TY470097*);
NTI470097.kind = 24;
NTI470097.base = (&NTI470024);
NTI470097.flags = 2;
NTI470097.marker = TMP6216;
TMP6211[25].kind = 1;
TMP6211[25].offset = offsetof(tcproc470026, Blocks);
TMP6211[25].typ = (&NTI470097);
TMP6211[25].name = "blocks";
TMP6214[8] = &TMP6211[34];
TMP6211[34].kind = 1;
TMP6211[34].offset = offsetof(tcproc470026, Breakidx);
TMP6211[34].typ = (&NTI106);
TMP6211[34].name = "breakIdx";
TMP6214[9] = &TMP6211[35];
TMP6211[35].kind = 1;
TMP6211[35].offset = offsetof(tcproc470026, Options);
TMP6211[35].typ = (&NTI138105);
TMP6211[35].name = "options";
TMP6214[10] = &TMP6211[36];
TMP6211[36].kind = 1;
TMP6211[36].offset = offsetof(tcproc470026, Maxframelen);
TMP6211[36].typ = (&NTI106);
TMP6211[36].name = "maxFrameLen";
TMP6214[11] = &TMP6211[37];
TMP6211[37].kind = 1;
TMP6211[37].offset = offsetof(tcproc470026, Module);
TMP6211[37].typ = (&NTI470020);
TMP6211[37].name = "module";
TMP6214[12] = &TMP6211[38];
TMP6211[38].kind = 1;
TMP6211[38].offset = offsetof(tcproc470026, Withinloop);
TMP6211[38].typ = (&NTI106);
TMP6211[38].name = "withinLoop";
TMP6214[13] = &TMP6211[39];
TMP6211[39].kind = 1;
TMP6211[39].offset = offsetof(tcproc470026, Gcframeid);
TMP6211[39].typ = (&NTI71507);
TMP6211[39].name = "gcFrameId";
TMP6214[14] = &TMP6211[40];
TMP6211[40].kind = 1;
TMP6211[40].offset = offsetof(tcproc470026, Gcframetype);
TMP6211[40].typ = (&NTI148005);
TMP6211[40].name = "gcFrameType";
TMP6211[17].len = 15; TMP6211[17].kind = 2; TMP6211[17].sons = &TMP6214[0];
NTI470026.node = &TMP6211[17];
NTI470022.size = sizeof(tcproc470026*);
NTI470022.kind = 22;
NTI470022.base = (&NTI470026);
NTI470022.marker = TMP6217;
TMP6211[16].kind = 1;
TMP6211[16].offset = offsetof(tcgen470030, Initproc);
TMP6211[16].typ = (&NTI470022);
TMP6211[16].name = "initProc";
TMP6213[16] = &TMP6211[41];
TMP6211[41].kind = 1;
TMP6211[41].offset = offsetof(tcgen470030, Postinitproc);
TMP6211[41].typ = (&NTI470022);
TMP6211[41].name = "postInitProc";
TMP6213[17] = &TMP6211[42];
TMP6211[42].kind = 1;
TMP6211[42].offset = offsetof(tcgen470030, Preinitproc);
TMP6211[42].typ = (&NTI470022);
TMP6211[42].name = "preInitProc";
TMP6213[18] = &TMP6211[43];
TMP6211[43].kind = 1;
TMP6211[43].offset = offsetof(tcgen470030, Typestack);
TMP6211[43].typ = (&NTI191845);
TMP6211[43].name = "typeStack";
TMP6213[19] = &TMP6211[44];
TMP6211[44].kind = 1;
TMP6211[44].offset = offsetof(tcgen470030, Datacache);
TMP6211[44].typ = (&NTI191871);
TMP6211[44].name = "dataCache";
TMP6213[20] = &TMP6211[45];
TMP6211[45].kind = 1;
TMP6211[45].offset = offsetof(tcgen470030, Forwardedprocs);
TMP6211[45].typ = (&NTI191815);
TMP6211[45].name = "forwardedProcs";
TMP6213[21] = &TMP6211[46];
TMP6211[46].kind = 1;
TMP6211[46].offset = offsetof(tcgen470030, Typenodes);
TMP6211[46].typ = (&NTI106);
TMP6211[46].name = "typeNodes";
TMP6213[22] = &TMP6211[47];
TMP6211[47].kind = 1;
TMP6211[47].offset = offsetof(tcgen470030, Nimtypes);
TMP6211[47].typ = (&NTI106);
TMP6211[47].name = "nimTypes";
TMP6213[23] = &TMP6211[48];
TMP6211[48].kind = 1;
TMP6211[48].offset = offsetof(tcgen470030, Typenodesname);
TMP6211[48].typ = (&NTI148005);
TMP6211[48].name = "typeNodesName";
TMP6213[24] = &TMP6211[49];
TMP6211[49].kind = 1;
TMP6211[49].offset = offsetof(tcgen470030, Nimtypesname);
TMP6211[49].typ = (&NTI148005);
TMP6211[49].name = "nimTypesName";
TMP6213[25] = &TMP6211[50];
TMP6211[50].kind = 1;
TMP6211[50].offset = offsetof(tcgen470030, Labels);
TMP6211[50].typ = (&NTI71507);
TMP6211[50].name = "labels";
TMP6213[26] = &TMP6211[51];
NTI470132.size = sizeof(TY470132);
NTI470132.kind = 16;
NTI470132.base = (&NTI148005);
NTI470132.flags = 2;
TMP6211[51].kind = 1;
TMP6211[51].offset = offsetof(tcgen470030, Extensionloaders);
TMP6211[51].typ = (&NTI470132);
TMP6211[51].name = "extensionLoaders";
TMP6213[27] = &TMP6211[52];
TMP6211[52].kind = 1;
TMP6211[52].offset = offsetof(tcgen470030, Injectstmt);
TMP6211[52].typ = (&NTI148005);
TMP6211[52].name = "injectStmt";
TMP6211[0].len = 28; TMP6211[0].kind = 2; TMP6211[0].sons = &TMP6213[0];
NTI470030.node = &TMP6211[0];
NTI470020.size = sizeof(tcgen470030*);
NTI470020.kind = 22;
NTI470020.base = (&NTI470030);
NTI470020.marker = TMP6219;
NTI470142.size = sizeof(TY470142*);
NTI470142.kind = 24;
NTI470142.base = (&NTI470020);
NTI470142.marker = TMP6220;
}

