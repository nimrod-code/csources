/* Generated by Nimrod Compiler v0.9.5 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct trope149007 trope149007;
typedef struct TY471142 TY471142;
typedef struct tcgen471030 tcgen471030;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tpasscontext251003 tpasscontext251003;
typedef struct TNimObject TNimObject;
typedef struct tsym192843 tsym192843;
typedef struct NimStringDesc NimStringDesc;
typedef struct tidtable192859 tidtable192859;
typedef struct tidpairseq192857 tidpairseq192857;
typedef struct tidpair192855 tidpair192855;
typedef struct tidobj171013 tidobj171013;
typedef struct tintset189047 tintset189047;
typedef struct ttrunk189043 ttrunk189043;
typedef struct ttrunkseq189045 ttrunkseq189045;
typedef struct tlinkedlist119023 tlinkedlist119023;
typedef struct tlistentry119017 tlistentry119017;
typedef struct tcproc471026 tcproc471026;
typedef struct ttypeseq192845 ttypeseq192845;
typedef struct ttype192847 ttype192847;
typedef struct tnodetable192871 tnodetable192871;
typedef struct tnodepairseq192869 tnodepairseq192869;
typedef struct tnodepair192867 tnodepair192867;
typedef struct tnode192813 tnode192813;
typedef struct tsymseq192815 tsymseq192815;
typedef struct tnodeseq192807 tnodeseq192807;
typedef struct tropeseq149009 tropeseq149009;
typedef struct TY471097 TY471097;
typedef struct tblock471024 tblock471024;
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
typedef struct tscope192837 tscope192837;
typedef struct TY192943 TY192943;
typedef struct tinstantiation192833 tinstantiation192833;
typedef struct tstrtable192817 tstrtable192817;
typedef struct tident171019 tident171019;
typedef struct tlineinfo167527 tlineinfo167527;
typedef struct tloc192827 tloc192827;
typedef struct tlib192831 tlib192831;
typedef struct tbasechunk23436 tbasechunk23436;
typedef struct tfreecell23428 tfreecell23428;
typedef struct TY192932 TY192932;
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
struct  tpasscontext251003  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef trope149007* tcfilesections471014[18];
struct  tidpair192855  {
tidobj171013* Key;
TNimObject* Val;
};
struct  tidtable192859  {
NI Counter;
tidpairseq192857* Data;
};
struct  tintset189047  {
NI Counter;
NI Max;
ttrunk189043* Head;
ttrunkseq189045* Data;
};
struct  tlinkedlist119023  {
tlistentry119017* Head;
tlistentry119017* Tail;
NI Counter;
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
typedef trope149007* TY471132[10];
struct  tcgen471030  {
  tpasscontext251003 Sup;
tsym192843* Module;
NimStringDesc* Filename;
tcfilesections471014 S;
NIM_BOOL Preventstacktrace;
NIM_BOOL Usesthreadvars;
NIM_BOOL Framedeclared;
NIM_BOOL Isheaderfile;
NIM_BOOL Includesstringh;
NimStringDesc* Cfilename;
tidtable192859 Typecache;
tidtable192859 Forwtypecache;
tintset189047 Declaredthings;
tintset189047 Declaredprotos;
tlinkedlist119023 Headerfiles;
tintset189047 Typeinfomarker;
tcproc471026* Initproc;
tcproc471026* Postinitproc;
tcproc471026* Preinitproc;
ttypeseq192845* Typestack;
tnodetable192871 Datacache;
tsymseq192815* Forwardedprocs;
NI Typenodes;
NI Nimtypes;
trope149007* Typenodesname;
trope149007* Nimtypesname;
NI Labels;
TY471132 Extensionloaders;
trope149007* Injectstmt;
};
typedef trope149007* tcprocsections471018[3];
struct  tblock471024  {
NI Id;
trope149007* Label;
tcprocsections471018 Sections;
NIM_BOOL Isloop;
NI16 Nestedtrystmts;
NI16 Nestedexceptstmts;
NI16 Framelen;
};
struct  tcproc471026  {
tsym192843* Prc;
NIM_BOOL Beforeretneeded;
NIM_BOOL Threadvaraccessed;
tnodeseq192807* Nestedtrystmts;
NI Inexceptblock;
tropeseq149009* Finallysafepoints;
NI Labels;
TY471097* Blocks;
NI Breakidx;
NU32 Options;
NI Maxframelen;
tcgen471030* Module;
NI Withinloop;
NI Gcframeid;
trope149007* Gcframetype;
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
struct  tidobj171013  {
  TNimObject Sup;
NI Id;
};
struct  tstrtable192817  {
NI Counter;
tsymseq192815* Data;
};
struct  tlineinfo167527  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
struct  trope149007  {
  TNimObject Sup;
trope149007* Left;
trope149007* Right;
NI Length;
NimStringDesc* Data;
};
typedef NI TY23418[16];
struct  ttrunk189043  {
ttrunk189043* Next;
NI Key;
TY23418 Bits;
};
struct  tlistentry119017  {
  TNimObject Sup;
tlistentry119017* Prev;
tlistentry119017* Next;
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
struct  tident171019  {
  tidobj171013 Sup;
NimStringDesc* S;
tident171019* Next;
NI H;
};
struct  tlib192831  {
  tlistentry119017 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope149007* Name;
tnode192813* Path;
};
struct  tfreecell23428  {
tfreecell23428* Next;
NI Zerofield;
};
struct TY471142 {
  TGenericSeq Sup;
  tcgen471030* data[SEQ_DECL_SIZE];
};
struct tidpairseq192857 {
  TGenericSeq Sup;
  tidpair192855 data[SEQ_DECL_SIZE];
};
struct ttrunkseq189045 {
  TGenericSeq Sup;
  ttrunk189043* data[SEQ_DECL_SIZE];
};
struct ttypeseq192845 {
  TGenericSeq Sup;
  ttype192847* data[SEQ_DECL_SIZE];
};
struct tnodepairseq192869 {
  TGenericSeq Sup;
  tnodepair192867 data[SEQ_DECL_SIZE];
};
struct tsymseq192815 {
  TGenericSeq Sup;
  tsym192843* data[SEQ_DECL_SIZE];
};
struct tnodeseq192807 {
  TGenericSeq Sup;
  tnode192813* data[SEQ_DECL_SIZE];
};
struct tropeseq149009 {
  TGenericSeq Sup;
  trope149007* data[SEQ_DECL_SIZE];
};
struct TY471097 {
  TGenericSeq Sup;
  tblock471024 data[SEQ_DECL_SIZE];
};
struct TY192943 {
  TGenericSeq Sup;
  tinstantiation192833* data[SEQ_DECL_SIZE];
};
struct TY192932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP6220)(void* p, NI op);
N_NIMCALL(void, TMP6221)(void* p, NI op);
N_NIMCALL(void, TMP6223)(void* p, NI op);
N_NIMCALL(void, TMP6224)(void* p, NI op);
static N_INLINE(void, nimGCunref)(void* p);
static N_INLINE(void, decref_47202)(tcell41888* c);
static N_INLINE(void, rtladdzct_46802)(tcell41888* c);
N_NOINLINE(void, addzct_45218)(tcellseq41904* s, tcell41888* c);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NIM_BOOL, canbecycleroot_45262)(tcell41888* c);
static N_INLINE(void, rtladdcycleroot_46035)(tcell41888* c);
N_NOINLINE(void, incl_42655)(tcellset41900* s, tcell41888* cell);
static N_INLINE(tcell41888*, usrtocell_45243)(void* usr);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
static N_INLINE(trope149007**, s_471173)(tcproc471026* p, NU8 s);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(trope149007**, procsec_471193)(tcproc471026* p, NU8 s);
N_NIMCALL(tcgen471030*, bmod_471202)(tsym192843* module);
N_NIMCALL(tcproc471026*, newproc_471208)(tsym192843* prc, tcgen471030* module);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_47627)(tcell41888* c);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
trope149007* mainmodprocs_471137;
trope149007* mainmodinit_471138;
trope149007* othermodsinit_471139;
trope149007* maindatinit_471140;
trope149007* gmapping_471141;
TY471142* gmodules_471163;
extern TNimType NTI251003; /* TPassContext */
TNimType NTI471030; /* TCGen */
extern TNimType NTI192811; /* PSym */
extern TNimType NTI143; /* string */
extern TNimType NTI149005; /* PRope */
TNimType NTI471014; /* TCFileSections */
extern TNimType NTI134; /* bool */
extern TNimType NTI192859; /* TIdTable */
extern TNimType NTI189047; /* TIntSet */
extern TNimType NTI119023; /* TLinkedList */
TNimType NTI471026; /* TCProc */
extern TNimType NTI192807; /* TNodeSeq */
extern TNimType NTI106; /* int */
extern TNimType NTI149009; /* TRopeSeq */
extern TNimType NTI71707; /* range 0..2147483647(int) */
TNimType NTI471024; /* TBlock */
TNimType NTI471018; /* TCProcSections */
extern TNimType NTI110; /* int16 */
TNimType NTI471097; /* seq[TBlock] */
extern TNimType NTI139105; /* set[TOption] */
TNimType NTI471022; /* BProc */
extern TNimType NTI192845; /* TTypeSeq */
extern TNimType NTI192871; /* TNodeTable */
extern TNimType NTI192815; /* TSymSeq */
TNimType NTI471132; /* array[48..57, PRope] */
TNimType NTI471020; /* BModule */
TNimType NTI471142; /* seq[BModule] */
extern tgcheap43816 gch_43844;
extern TFrame* frameptr_13238;
NI gforwardedprocscounter_471164;
extern NU32 goptions_139108;
N_NIMCALL(void, TMP6220)(void* p, NI op) {
	TY471097* a;
	NI LOC1;
	NI LOC2;
	a = (TY471097*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Label, op);
	LOC2 = 0;
	for (LOC2 = 0; LOC2 < 3; LOC2++) {
	nimGCvisit((void*)a->data[LOC1].Sections[LOC2], op);
	}
	}
}
N_NIMCALL(void, TMP6221)(void* p, NI op) {
	tcproc471026* a;
	a = (tcproc471026*)p;
	nimGCvisit((void*)(*a).Prc, op);
	nimGCvisit((void*)(*a).Nestedtrystmts, op);
	nimGCvisit((void*)(*a).Finallysafepoints, op);
	nimGCvisit((void*)(*a).Blocks, op);
	nimGCvisit((void*)(*a).Module, op);
	nimGCvisit((void*)(*a).Gcframetype, op);
}
N_NIMCALL(void, TMP6223)(void* p, NI op) {
	tcgen471030* a;
	NI LOC1;
	NI LOC2;
	a = (tcgen471030*)p;
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
N_NIMCALL(void, TMP6224)(void* p, NI op) {
	TY471142* a;
	NI LOC1;
	a = (TY471142*)p;
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

static N_INLINE(void, rtladdzct_46802)(tcell41888* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_45218(&gch_43844.Zct, c);
	popFrame();
}

static N_INLINE(NIM_BOOL, canbecycleroot_45262)(tcell41888* c) {
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

static N_INLINE(void, rtladdcycleroot_46035)(tcell41888* c) {
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

static N_INLINE(void, decref_47202)(tcell41888* c) {
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

static N_INLINE(void, nimGCunref)(void* p) {
	tcell41888* LOC1;
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

static N_INLINE(trope149007**, s_471173)(tcproc471026* p, NU8 s) {
	trope149007** result;
	NI TMP6225;
	nimfr("s", "cgendata.nim")
	result = 0;
	nimln(129, "cgendata.nim");
	nimln(129, "cgendata.nim");
	nimln(129, "cgendata.nim");
	TMP6225 = subInt((*p).Blocks->Sup.len, 1);
	if ((NU)((NI32)(TMP6225)) >= (NU)((*p).Blocks->Sup.len)) raiseIndexError();
	result = &(*p).Blocks->data[(NI32)(TMP6225)].Sections[(s)- 0];
	popFrame();
	return result;
}

static N_INLINE(trope149007**, procsec_471193)(tcproc471026* p, NU8 s) {
	trope149007** result;
	nimfr("procSec", "cgendata.nim")
	result = 0;
	nimln(133, "cgendata.nim");
	if ((NU)(0) >= (NU)((*p).Blocks->Sup.len)) raiseIndexError();
	result = &(*p).Blocks->data[0].Sections[(s)- 0];
	popFrame();
	return result;
}

N_NIMCALL(tcgen471030*, bmod_471202)(tsym192843* module) {
	tcgen471030* result;
	nimfr("bmod", "cgendata.nim")
	result = 0;
	nimln(137, "cgendata.nim");
	if ((NU)((*module).Position) >= (NU)(gmodules_471163->Sup.len)) raiseIndexError();
	result = gmodules_471163->data[(*module).Position];
	popFrame();
	return result;
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

static N_INLINE(void, incref_47627)(tcell41888* c) {
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
		tcell41888* LOC5;
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
		tcell41888* LOC10;
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
	tcell41888* c;
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

N_NIMCALL(tcproc471026*, newproc_471208)(tsym192843* prc, tcgen471030* module) {
	tcproc471026* result;
	nimfr("newProc", "cgendata.nim")
	result = 0;
	nimln(140, "cgendata.nim");
	result = (tcproc471026*) newObj((&NTI471022), sizeof(tcproc471026));
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
		(*result).Options = goptions_139108;
	}
	LA1: ;
	nimln(145, "cgendata.nim");
	if ((*result).Blocks) nimGCunrefNoCycle((*result).Blocks);
	(*result).Blocks = (TY471097*) newSeqRC1((&NTI471097), 1);
	nimln(146, "cgendata.nim");
	if ((*result).Nestedtrystmts) nimGCunrefNoCycle((*result).Nestedtrystmts);
	(*result).Nestedtrystmts = (tnodeseq192807*) newSeqRC1((&NTI192807), 0);
	nimln(147, "cgendata.nim");
	if ((*result).Finallysafepoints) nimGCunrefNoCycle((*result).Finallysafepoints);
	(*result).Finallysafepoints = (tropeseq149009*) newSeqRC1((&NTI149009), 0);
	popFrame();
	return result;
}
N_NOINLINE(void, cgendataInit)(void) {
	nimfr("cgendata", "cgendata.nim")
	nimln(124, "cgendata.nim");
	if (gmodules_471163) nimGCunref(gmodules_471163);
	gmodules_471163 = (TY471142*) newSeqRC1((&NTI471142), 0);
	nimln(125, "cgendata.nim");
	gforwardedprocscounter_471164 = 0;
	popFrame();
}

N_NOINLINE(void, cgendataDatInit)(void) {
static TNimNode* TMP6217[28];
static TNimNode* TMP6218[15];
static TNimNode* TMP6219[7];
static TNimNode TMP6215[53];
NTI471030.size = sizeof(tcgen471030);
NTI471030.kind = 17;
NTI471030.base = (&NTI251003);
TMP6217[0] = &TMP6215[1];
TMP6215[1].kind = 1;
TMP6215[1].offset = offsetof(tcgen471030, Module);
TMP6215[1].typ = (&NTI192811);
TMP6215[1].name = "module";
TMP6217[1] = &TMP6215[2];
TMP6215[2].kind = 1;
TMP6215[2].offset = offsetof(tcgen471030, Filename);
TMP6215[2].typ = (&NTI143);
TMP6215[2].name = "filename";
TMP6217[2] = &TMP6215[3];
NTI471014.size = sizeof(tcfilesections471014);
NTI471014.kind = 16;
NTI471014.base = (&NTI149005);
NTI471014.flags = 2;
TMP6215[3].kind = 1;
TMP6215[3].offset = offsetof(tcgen471030, S);
TMP6215[3].typ = (&NTI471014);
TMP6215[3].name = "s";
TMP6217[3] = &TMP6215[4];
TMP6215[4].kind = 1;
TMP6215[4].offset = offsetof(tcgen471030, Preventstacktrace);
TMP6215[4].typ = (&NTI134);
TMP6215[4].name = "preventStackTrace";
TMP6217[4] = &TMP6215[5];
TMP6215[5].kind = 1;
TMP6215[5].offset = offsetof(tcgen471030, Usesthreadvars);
TMP6215[5].typ = (&NTI134);
TMP6215[5].name = "usesThreadVars";
TMP6217[5] = &TMP6215[6];
TMP6215[6].kind = 1;
TMP6215[6].offset = offsetof(tcgen471030, Framedeclared);
TMP6215[6].typ = (&NTI134);
TMP6215[6].name = "frameDeclared";
TMP6217[6] = &TMP6215[7];
TMP6215[7].kind = 1;
TMP6215[7].offset = offsetof(tcgen471030, Isheaderfile);
TMP6215[7].typ = (&NTI134);
TMP6215[7].name = "isHeaderFile";
TMP6217[7] = &TMP6215[8];
TMP6215[8].kind = 1;
TMP6215[8].offset = offsetof(tcgen471030, Includesstringh);
TMP6215[8].typ = (&NTI134);
TMP6215[8].name = "includesStringh";
TMP6217[8] = &TMP6215[9];
TMP6215[9].kind = 1;
TMP6215[9].offset = offsetof(tcgen471030, Cfilename);
TMP6215[9].typ = (&NTI143);
TMP6215[9].name = "cfilename";
TMP6217[9] = &TMP6215[10];
TMP6215[10].kind = 1;
TMP6215[10].offset = offsetof(tcgen471030, Typecache);
TMP6215[10].typ = (&NTI192859);
TMP6215[10].name = "typeCache";
TMP6217[10] = &TMP6215[11];
TMP6215[11].kind = 1;
TMP6215[11].offset = offsetof(tcgen471030, Forwtypecache);
TMP6215[11].typ = (&NTI192859);
TMP6215[11].name = "forwTypeCache";
TMP6217[11] = &TMP6215[12];
TMP6215[12].kind = 1;
TMP6215[12].offset = offsetof(tcgen471030, Declaredthings);
TMP6215[12].typ = (&NTI189047);
TMP6215[12].name = "declaredThings";
TMP6217[12] = &TMP6215[13];
TMP6215[13].kind = 1;
TMP6215[13].offset = offsetof(tcgen471030, Declaredprotos);
TMP6215[13].typ = (&NTI189047);
TMP6215[13].name = "declaredProtos";
TMP6217[13] = &TMP6215[14];
TMP6215[14].kind = 1;
TMP6215[14].offset = offsetof(tcgen471030, Headerfiles);
TMP6215[14].typ = (&NTI119023);
TMP6215[14].name = "headerFiles";
TMP6217[14] = &TMP6215[15];
TMP6215[15].kind = 1;
TMP6215[15].offset = offsetof(tcgen471030, Typeinfomarker);
TMP6215[15].typ = (&NTI189047);
TMP6215[15].name = "typeInfoMarker";
TMP6217[15] = &TMP6215[16];
NTI471026.size = sizeof(tcproc471026);
NTI471026.kind = 18;
NTI471026.base = 0;
TMP6218[0] = &TMP6215[18];
TMP6215[18].kind = 1;
TMP6215[18].offset = offsetof(tcproc471026, Prc);
TMP6215[18].typ = (&NTI192811);
TMP6215[18].name = "prc";
TMP6218[1] = &TMP6215[19];
TMP6215[19].kind = 1;
TMP6215[19].offset = offsetof(tcproc471026, Beforeretneeded);
TMP6215[19].typ = (&NTI134);
TMP6215[19].name = "beforeRetNeeded";
TMP6218[2] = &TMP6215[20];
TMP6215[20].kind = 1;
TMP6215[20].offset = offsetof(tcproc471026, Threadvaraccessed);
TMP6215[20].typ = (&NTI134);
TMP6215[20].name = "threadVarAccessed";
TMP6218[3] = &TMP6215[21];
TMP6215[21].kind = 1;
TMP6215[21].offset = offsetof(tcproc471026, Nestedtrystmts);
TMP6215[21].typ = (&NTI192807);
TMP6215[21].name = "nestedTryStmts";
TMP6218[4] = &TMP6215[22];
TMP6215[22].kind = 1;
TMP6215[22].offset = offsetof(tcproc471026, Inexceptblock);
TMP6215[22].typ = (&NTI106);
TMP6215[22].name = "inExceptBlock";
TMP6218[5] = &TMP6215[23];
TMP6215[23].kind = 1;
TMP6215[23].offset = offsetof(tcproc471026, Finallysafepoints);
TMP6215[23].typ = (&NTI149009);
TMP6215[23].name = "finallySafePoints";
TMP6218[6] = &TMP6215[24];
TMP6215[24].kind = 1;
TMP6215[24].offset = offsetof(tcproc471026, Labels);
TMP6215[24].typ = (&NTI71707);
TMP6215[24].name = "labels";
TMP6218[7] = &TMP6215[25];
NTI471024.size = sizeof(tblock471024);
NTI471024.kind = 18;
NTI471024.base = 0;
NTI471024.flags = 2;
TMP6219[0] = &TMP6215[27];
TMP6215[27].kind = 1;
TMP6215[27].offset = offsetof(tblock471024, Id);
TMP6215[27].typ = (&NTI106);
TMP6215[27].name = "id";
TMP6219[1] = &TMP6215[28];
TMP6215[28].kind = 1;
TMP6215[28].offset = offsetof(tblock471024, Label);
TMP6215[28].typ = (&NTI149005);
TMP6215[28].name = "label";
TMP6219[2] = &TMP6215[29];
NTI471018.size = sizeof(tcprocsections471018);
NTI471018.kind = 16;
NTI471018.base = (&NTI149005);
NTI471018.flags = 2;
TMP6215[29].kind = 1;
TMP6215[29].offset = offsetof(tblock471024, Sections);
TMP6215[29].typ = (&NTI471018);
TMP6215[29].name = "sections";
TMP6219[3] = &TMP6215[30];
TMP6215[30].kind = 1;
TMP6215[30].offset = offsetof(tblock471024, Isloop);
TMP6215[30].typ = (&NTI134);
TMP6215[30].name = "isLoop";
TMP6219[4] = &TMP6215[31];
TMP6215[31].kind = 1;
TMP6215[31].offset = offsetof(tblock471024, Nestedtrystmts);
TMP6215[31].typ = (&NTI110);
TMP6215[31].name = "nestedTryStmts";
TMP6219[5] = &TMP6215[32];
TMP6215[32].kind = 1;
TMP6215[32].offset = offsetof(tblock471024, Nestedexceptstmts);
TMP6215[32].typ = (&NTI110);
TMP6215[32].name = "nestedExceptStmts";
TMP6219[6] = &TMP6215[33];
TMP6215[33].kind = 1;
TMP6215[33].offset = offsetof(tblock471024, Framelen);
TMP6215[33].typ = (&NTI110);
TMP6215[33].name = "frameLen";
TMP6215[26].len = 7; TMP6215[26].kind = 2; TMP6215[26].sons = &TMP6219[0];
NTI471024.node = &TMP6215[26];
NTI471097.size = sizeof(TY471097*);
NTI471097.kind = 24;
NTI471097.base = (&NTI471024);
NTI471097.flags = 2;
NTI471097.marker = TMP6220;
TMP6215[25].kind = 1;
TMP6215[25].offset = offsetof(tcproc471026, Blocks);
TMP6215[25].typ = (&NTI471097);
TMP6215[25].name = "blocks";
TMP6218[8] = &TMP6215[34];
TMP6215[34].kind = 1;
TMP6215[34].offset = offsetof(tcproc471026, Breakidx);
TMP6215[34].typ = (&NTI106);
TMP6215[34].name = "breakIdx";
TMP6218[9] = &TMP6215[35];
TMP6215[35].kind = 1;
TMP6215[35].offset = offsetof(tcproc471026, Options);
TMP6215[35].typ = (&NTI139105);
TMP6215[35].name = "options";
TMP6218[10] = &TMP6215[36];
TMP6215[36].kind = 1;
TMP6215[36].offset = offsetof(tcproc471026, Maxframelen);
TMP6215[36].typ = (&NTI106);
TMP6215[36].name = "maxFrameLen";
TMP6218[11] = &TMP6215[37];
TMP6215[37].kind = 1;
TMP6215[37].offset = offsetof(tcproc471026, Module);
TMP6215[37].typ = (&NTI471020);
TMP6215[37].name = "module";
TMP6218[12] = &TMP6215[38];
TMP6215[38].kind = 1;
TMP6215[38].offset = offsetof(tcproc471026, Withinloop);
TMP6215[38].typ = (&NTI106);
TMP6215[38].name = "withinLoop";
TMP6218[13] = &TMP6215[39];
TMP6215[39].kind = 1;
TMP6215[39].offset = offsetof(tcproc471026, Gcframeid);
TMP6215[39].typ = (&NTI71707);
TMP6215[39].name = "gcFrameId";
TMP6218[14] = &TMP6215[40];
TMP6215[40].kind = 1;
TMP6215[40].offset = offsetof(tcproc471026, Gcframetype);
TMP6215[40].typ = (&NTI149005);
TMP6215[40].name = "gcFrameType";
TMP6215[17].len = 15; TMP6215[17].kind = 2; TMP6215[17].sons = &TMP6218[0];
NTI471026.node = &TMP6215[17];
NTI471022.size = sizeof(tcproc471026*);
NTI471022.kind = 22;
NTI471022.base = (&NTI471026);
NTI471022.marker = TMP6221;
TMP6215[16].kind = 1;
TMP6215[16].offset = offsetof(tcgen471030, Initproc);
TMP6215[16].typ = (&NTI471022);
TMP6215[16].name = "initProc";
TMP6217[16] = &TMP6215[41];
TMP6215[41].kind = 1;
TMP6215[41].offset = offsetof(tcgen471030, Postinitproc);
TMP6215[41].typ = (&NTI471022);
TMP6215[41].name = "postInitProc";
TMP6217[17] = &TMP6215[42];
TMP6215[42].kind = 1;
TMP6215[42].offset = offsetof(tcgen471030, Preinitproc);
TMP6215[42].typ = (&NTI471022);
TMP6215[42].name = "preInitProc";
TMP6217[18] = &TMP6215[43];
TMP6215[43].kind = 1;
TMP6215[43].offset = offsetof(tcgen471030, Typestack);
TMP6215[43].typ = (&NTI192845);
TMP6215[43].name = "typeStack";
TMP6217[19] = &TMP6215[44];
TMP6215[44].kind = 1;
TMP6215[44].offset = offsetof(tcgen471030, Datacache);
TMP6215[44].typ = (&NTI192871);
TMP6215[44].name = "dataCache";
TMP6217[20] = &TMP6215[45];
TMP6215[45].kind = 1;
TMP6215[45].offset = offsetof(tcgen471030, Forwardedprocs);
TMP6215[45].typ = (&NTI192815);
TMP6215[45].name = "forwardedProcs";
TMP6217[21] = &TMP6215[46];
TMP6215[46].kind = 1;
TMP6215[46].offset = offsetof(tcgen471030, Typenodes);
TMP6215[46].typ = (&NTI106);
TMP6215[46].name = "typeNodes";
TMP6217[22] = &TMP6215[47];
TMP6215[47].kind = 1;
TMP6215[47].offset = offsetof(tcgen471030, Nimtypes);
TMP6215[47].typ = (&NTI106);
TMP6215[47].name = "nimTypes";
TMP6217[23] = &TMP6215[48];
TMP6215[48].kind = 1;
TMP6215[48].offset = offsetof(tcgen471030, Typenodesname);
TMP6215[48].typ = (&NTI149005);
TMP6215[48].name = "typeNodesName";
TMP6217[24] = &TMP6215[49];
TMP6215[49].kind = 1;
TMP6215[49].offset = offsetof(tcgen471030, Nimtypesname);
TMP6215[49].typ = (&NTI149005);
TMP6215[49].name = "nimTypesName";
TMP6217[25] = &TMP6215[50];
TMP6215[50].kind = 1;
TMP6215[50].offset = offsetof(tcgen471030, Labels);
TMP6215[50].typ = (&NTI71707);
TMP6215[50].name = "labels";
TMP6217[26] = &TMP6215[51];
NTI471132.size = sizeof(TY471132);
NTI471132.kind = 16;
NTI471132.base = (&NTI149005);
NTI471132.flags = 2;
TMP6215[51].kind = 1;
TMP6215[51].offset = offsetof(tcgen471030, Extensionloaders);
TMP6215[51].typ = (&NTI471132);
TMP6215[51].name = "extensionLoaders";
TMP6217[27] = &TMP6215[52];
TMP6215[52].kind = 1;
TMP6215[52].offset = offsetof(tcgen471030, Injectstmt);
TMP6215[52].typ = (&NTI149005);
TMP6215[52].name = "injectStmt";
TMP6215[0].len = 28; TMP6215[0].kind = 2; TMP6215[0].sons = &TMP6217[0];
NTI471030.node = &TMP6215[0];
NTI471020.size = sizeof(tcgen471030*);
NTI471020.kind = 22;
NTI471020.base = (&NTI471030);
NTI471020.marker = TMP6223;
NTI471142.size = sizeof(TY471142*);
NTI471142.kind = 24;
NTI471142.base = (&NTI471020);
NTI471142.marker = TMP6224;
}

