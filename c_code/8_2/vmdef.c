/* Generated by Nimrod Compiler v0.9.5 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct tctx252037 tctx252037;
typedef struct tsym190843 tsym190843;
typedef struct tpasscontext249003 tpasscontext249003;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY252229 TY252229;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY166208 TY166208;
typedef struct tlineinfo165527 tlineinfo165527;
typedef struct tnode190813 tnode190813;
typedef struct ttypeseq190845 ttypeseq190845;
typedef struct ttype190847 ttype190847;
typedef struct pprocHEX3Aobjecttype252216 pprocHEX3Aobjecttype252216;
typedef struct TY252217 TY252217;
typedef struct tblock252023 tblock252023;
typedef struct TY252198 TY252198;
typedef struct TY252223 TY252223;
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
typedef struct tidobj169013 tidobj169013;
typedef struct tscope190837 tscope190837;
typedef struct TY190943 TY190943;
typedef struct tinstantiation190833 tinstantiation190833;
typedef struct tstrtable190817 tstrtable190817;
typedef struct tsymseq190815 tsymseq190815;
typedef struct tident169019 tident169019;
typedef struct tloc190827 tloc190827;
typedef struct trope147007 trope147007;
typedef struct tlib190831 tlib190831;
typedef struct NimStringDesc NimStringDesc;
typedef struct tnodeseq190807 tnodeseq190807;
typedef struct tbasechunk23436 tbasechunk23436;
typedef struct tfreecell23428 tfreecell23428;
typedef struct TY190932 TY190932;
typedef struct tlistentry118017 tlistentry118017;
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
struct  tpasscontext249003  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  tlineinfo165527  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  tctx252037  {
  tpasscontext249003 Sup;
TY252229* Code;
TY166208* Debug;
tnode190813* Globals;
tnode190813* Constants;
ttypeseq190845* Types;
tnode190813* Currentexceptiona;
tnode190813* Currentexceptionb;
NI Exceptioninstr;
pprocHEX3Aobjecttype252216* Prc;
tsym190843* Module;
tnode190813* Callsite;
NU8 Mode;
NU8 Features;
NIM_BOOL Traceactive;
NI Loopiterations;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tblock252023  {
tsym190843* Label;
TY252198* Fixups;
};
struct TY252223 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY252223 TY252220[256];
struct  pprocHEX3Aobjecttype252216  {
TY252217* Blocks;
tsym190843* Sym;
TY252220 Slots;
NI Maxslots;
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
typedef NU8 TY252366[20];
struct  tidobj169013  {
  TNimObject Sup;
NI Id;
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
struct  tident169019  {
  tidobj169013 Sup;
NimStringDesc* S;
tident169019* Next;
NI H;
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
struct  tfreecell23428  {
tfreecell23428* Next;
NI Zerofield;
};
struct TY252229 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY166208 {
  TGenericSeq Sup;
  tlineinfo165527 data[SEQ_DECL_SIZE];
};
struct ttypeseq190845 {
  TGenericSeq Sup;
  ttype190847* data[SEQ_DECL_SIZE];
};
struct TY252198 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY252217 {
  TGenericSeq Sup;
  tblock252023 data[SEQ_DECL_SIZE];
};
struct TY190943 {
  TGenericSeq Sup;
  tinstantiation190833* data[SEQ_DECL_SIZE];
};
struct tsymseq190815 {
  TGenericSeq Sup;
  tsym190843* data[SEQ_DECL_SIZE];
};
struct tnodeseq190807 {
  TGenericSeq Sup;
  tnode190813* data[SEQ_DECL_SIZE];
};
struct TY190932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(tctx252037*, newctx_252249)(tsym190843* module);
N_NIMCALL(void, TMP3219)(void* p, NI op);
N_NIMCALL(void, TMP3222)(void* p, NI op);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP3223)(void* p, NI op);
N_NIMCALL(void, TMP3228)(void* p, NI op);
N_NIMCALL(void, TMP3235)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell41890*, usrtocell_45243)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_46802)(tcell41890* c);
N_NOINLINE(void, addzct_45218)(tcellseq41906* s, tcell41890* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(tnode190813*, newnode_191075)(NU8 kind);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, refresh_252337)(tctx252037* c, tsym190843* module);
NIM_CONST TY252366 largeinstrs_252365 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x1D, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x40, 0x00, 0x00}
;
NIM_CONST TY252366 relativejumps_252368 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xF0, 0x00, 0x00, 0x00}
;
extern TNimType NTI249003; /* TPassContext */
TNimType NTI252037; /* TCtx */
extern TNimType NTI122; /* uint32 */
TNimType NTI252229; /* seq[TInstr] */
extern TNimType NTI166208; /* seq[TLineInfo] */
extern TNimType NTI190805; /* PNode */
extern TNimType NTI190845; /* TTypeSeq */
extern TNimType NTI106; /* int */
TNimType NTI252216; /* PProc:ObjectType */
TNimType NTI252023; /* TBlock */
extern TNimType NTI190811; /* PSym */
TNimType NTI252198; /* seq[TPosition] */
TNimType NTI252217; /* seq[TBlock] */
TNimType NTI252223; /* tuple[inUse: bool, kind: TSlotKind] */
extern TNimType NTI134; /* bool */
TNimType NTI252031; /* TSlotKind */
TNimType NTI252220; /* array[0..255, tuple[inUse: bool, kind: TSlotKind]] */
TNimType NTI252033; /* PProc */
TNimType NTI252025; /* TEvalMode */
TNimType NTI252027; /* TSandboxFlag */
TNimType NTI252029; /* TSandboxFlags */
TNimType NTI252035; /* PCtx */
extern TFrame* frameptr_13238;
extern tgcheap43816 gch_43844;
TNimType NTI252021; /* TOpcode */
N_NIMCALL(void, TMP3219)(void* p, NI op) {
	TY252229* a;
	NI LOC1;
	a = (TY252229*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP3222)(void* p, NI op) {
	TY252198* a;
	NI LOC1;
	a = (TY252198*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP3223)(void* p, NI op) {
	TY252217* a;
	NI LOC1;
	a = (TY252217*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Label, op);
	nimGCvisit((void*)a->data[LOC1].Fixups, op);
	}
}
N_NIMCALL(void, TMP3228)(void* p, NI op) {
	pprocHEX3Aobjecttype252216* a;
	NI LOC1;
	a = (pprocHEX3Aobjecttype252216*)p;
	nimGCvisit((void*)(*a).Blocks, op);
	nimGCvisit((void*)(*a).Sym, op);
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 256; LOC1++) {
	}
}
N_NIMCALL(void, TMP3235)(void* p, NI op) {
	tctx252037* a;
	a = (tctx252037*)p;
	nimGCvisit((void*)(*a).Code, op);
	nimGCvisit((void*)(*a).Debug, op);
	nimGCvisit((void*)(*a).Globals, op);
	nimGCvisit((void*)(*a).Constants, op);
	nimGCvisit((void*)(*a).Types, op);
	nimGCvisit((void*)(*a).Currentexceptiona, op);
	nimGCvisit((void*)(*a).Currentexceptionb, op);
	nimGCvisit((void*)(*a).Prc, op);
	nimGCvisit((void*)(*a).Module, op);
	nimGCvisit((void*)(*a).Callsite, op);
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13238;
	frameptr_13238 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13238 = (*frameptr_13238).prev;
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
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		nimln(236, "gc.nim");
		rtladdzct_46802(c);
	}
	LA3: ;
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

N_NIMCALL(tctx252037*, newctx_252249)(tsym190843* module) {
	tctx252037* result;
	tctx252037* LOC1;
	pprocHEX3Aobjecttype252216* LOC2;
	nimfr("newCtx", "vmdef.nim")
	result = 0;
	nimln(197, "vmdef.nim");
	LOC1 = 0;
	LOC1 = (tctx252037*) newObj((&NTI252035), sizeof(tctx252037));
	(*LOC1).Sup.Sup.m_type = (&NTI252037);
	if ((*LOC1).Code) nimGCunrefNoCycle((*LOC1).Code);
	(*LOC1).Code = (TY252229*) newSeqRC1((&NTI252229), 0);
	if ((*LOC1).Debug) nimGCunrefNoCycle((*LOC1).Debug);
	(*LOC1).Debug = (TY166208*) newSeqRC1((&NTI166208), 0);
	nimln(198, "vmdef.nim");
	asgnRefNoCycle((void**) &(*LOC1).Globals, newnode_191075(((NU8) 125)));
	nimln(198, "vmdef.nim");
	asgnRefNoCycle((void**) &(*LOC1).Constants, newnode_191075(((NU8) 114)));
	if ((*LOC1).Types) nimGCunrefNoCycle((*LOC1).Types);
	(*LOC1).Types = (ttypeseq190845*) newSeqRC1((&NTI190845), 0);
	LOC2 = 0;
	LOC2 = (pprocHEX3Aobjecttype252216*) newObj((&NTI252033), sizeof(pprocHEX3Aobjecttype252216));
	if ((*LOC2).Blocks) nimGCunrefNoCycle((*LOC2).Blocks);
	(*LOC2).Blocks = (TY252217*) newSeqRC1((&NTI252217), 0);
	asgnRefNoCycle((void**) &(*LOC1).Prc, LOC2);
	asgnRefNoCycle((void**) &(*LOC1).Module, module);
	(*LOC1).Loopiterations = 500000;
	result = LOC1;
	popFrame();
	return result;
}

N_NIMCALL(void, refresh_252337)(tctx252037* c, tsym190843* module) {
	pprocHEX3Aobjecttype252216* LOC1;
	nimfr("refresh", "vmdef.nim")
	nimln(202, "vmdef.nim");
	asgnRefNoCycle((void**) &(*c).Module, module);
	nimln(203, "vmdef.nim");
	LOC1 = 0;
	LOC1 = (pprocHEX3Aobjecttype252216*) newObj((&NTI252033), sizeof(pprocHEX3Aobjecttype252216));
	if ((*LOC1).Blocks) nimGCunrefNoCycle((*LOC1).Blocks);
	(*LOC1).Blocks = (TY252217*) newSeqRC1((&NTI252217), 0);
	asgnRefNoCycle((void**) &(*c).Prc, LOC1);
	popFrame();
}
N_NOINLINE(void, vmdefInit)(void) {
	nimfr("vmdef", "vmdef.nim")
	popFrame();
}

N_NOINLINE(void, vmdefDatInit)(void) {
static TNimNode* TMP3218[15];
static TNimNode* TMP3220[4];
static TNimNode* TMP3221[2];
static TNimNode* TMP3224[2];
static TNimNode* TMP3225[8];
NI TMP3227;
static char* NIM_CONST TMP3226[8] = {
"slotEmpty", 
"slotFixedVar", 
"slotFixedLet", 
"slotTempUnknown", 
"slotTempInt", 
"slotTempFloat", 
"slotTempStr", 
"slotTempComplex"};
static TNimNode* TMP3229[5];
NI TMP3231;
static char* NIM_CONST TMP3230[5] = {
"emRepl", 
"emConst", 
"emOptimize", 
"emStaticExpr", 
"emStaticStmt"};
static TNimNode* TMP3232[3];
NI TMP3234;
static char* NIM_CONST TMP3233[3] = {
"allowCast", 
"allowFFI", 
"allowInfiniteLoops"};
static TNimNode* TMP5322[153];
NI TMP5324;
static char* NIM_CONST TMP5323[153] = {
"opcEof", 
"opcRet", 
"opcYldYoid", 
"opcYldVal", 
"opcAsgnInt", 
"opcAsgnStr", 
"opcAsgnFloat", 
"opcAsgnRef", 
"opcAsgnComplex", 
"opcRegToNode", 
"opcNodeToReg", 
"opcLdArr", 
"opcWrArr", 
"opcLdObj", 
"opcWrObj", 
"opcAddrReg", 
"opcAddrNode", 
"opcLdDeref", 
"opcWrDeref", 
"opcWrStrIdx", 
"opcLdStrIdx", 
"opcAddInt", 
"opcAddImmInt", 
"opcSubInt", 
"opcSubImmInt", 
"opcLenSeq", 
"opcLenStr", 
"opcIncl", 
"opcInclRange", 
"opcExcl", 
"opcCard", 
"opcMulInt", 
"opcDivInt", 
"opcModInt", 
"opcAddFloat", 
"opcSubFloat", 
"opcMulFloat", 
"opcDivFloat", 
"opcShrInt", 
"opcShlInt", 
"opcBitandInt", 
"opcBitorInt", 
"opcBitxorInt", 
"opcAddu", 
"opcSubu", 
"opcMulu", 
"opcDivu", 
"opcModu", 
"opcEqInt", 
"opcLeInt", 
"opcLtInt", 
"opcEqFloat", 
"opcLeFloat", 
"opcLtFloat", 
"opcLeu", 
"opcLtu", 
"opcEqRef", 
"opcEqNimrodNode", 
"opcXor", 
"opcNot", 
"opcUnaryMinusInt", 
"opcUnaryMinusFloat", 
"opcBitnotInt", 
"opcEqStr", 
"opcLeStr", 
"opcLtStr", 
"opcEqSet", 
"opcLeSet", 
"opcLtSet", 
"opcMulSet", 
"opcPlusSet", 
"opcMinusSet", 
"opcSymdiffSet", 
"opcConcatStr", 
"opcContainsSet", 
"opcRepr", 
"opcSetLenStr", 
"opcSetLenSeq", 
"opcSwap", 
"opcIsNil", 
"opcOf", 
"opcIs", 
"opcSubStr", 
"opcConv", 
"opcCast", 
"opcQuit", 
"opcReset", 
"opcNarrowS", 
"opcNarrowU", 
"opcAddStrCh", 
"opcAddStrStr", 
"opcAddSeqElem", 
"opcRangeChck", 
"opcNAdd", 
"opcNAddMultiple", 
"opcNKind", 
"opcNIntVal", 
"opcNFloatVal", 
"opcNSymbol", 
"opcNIdent", 
"opcNGetType", 
"opcNStrVal", 
"opcNSetIntVal", 
"opcNSetFloatVal", 
"opcNSetSymbol", 
"opcNSetIdent", 
"opcNSetType", 
"opcNSetStrVal", 
"opcNNewNimNode", 
"opcNCopyNimNode", 
"opcNCopyNimTree", 
"opcNDel", 
"opcGenSym", 
"opcSlurp", 
"opcGorge", 
"opcParseExprToAst", 
"opcParseStmtToAst", 
"opcNError", 
"opcNWarning", 
"opcNHint", 
"opcNLineInfo", 
"opcEqIdent", 
"opcStrToIdent", 
"opcIdentToStr", 
"opcEcho", 
"opcIndCall", 
"opcIndCallAsgn", 
"opcRaise", 
"opcNChild", 
"opcNSetChild", 
"opcCallSite", 
"opcNewStr", 
"opcTJmp", 
"opcFJmp", 
"opcJmp", 
"opcJmpBack", 
"opcBranch", 
"opcTry", 
"opcExcept", 
"opcFinally", 
"opcFinallyEnd", 
"opcNew", 
"opcNewSeq", 
"opcLdNull", 
"opcLdNullReg", 
"opcLdConst", 
"opcAsgnConst", 
"opcLdGlobal", 
"opcLdGlobalAddr", 
"opcLdImmInt", 
"opcNBindSym", 
"opcSetType", 
"opcTypeTrait"};
static TNimNode TMP3216[201];
NTI252037.size = sizeof(tctx252037);
NTI252037.kind = 17;
NTI252037.base = (&NTI249003);
TMP3218[0] = &TMP3216[1];
NTI252229.size = sizeof(TY252229*);
NTI252229.kind = 24;
NTI252229.base = (&NTI122);
NTI252229.flags = 2;
NTI252229.marker = TMP3219;
TMP3216[1].kind = 1;
TMP3216[1].offset = offsetof(tctx252037, Code);
TMP3216[1].typ = (&NTI252229);
TMP3216[1].name = "code";
TMP3218[1] = &TMP3216[2];
TMP3216[2].kind = 1;
TMP3216[2].offset = offsetof(tctx252037, Debug);
TMP3216[2].typ = (&NTI166208);
TMP3216[2].name = "debug";
TMP3218[2] = &TMP3216[3];
TMP3216[3].kind = 1;
TMP3216[3].offset = offsetof(tctx252037, Globals);
TMP3216[3].typ = (&NTI190805);
TMP3216[3].name = "globals";
TMP3218[3] = &TMP3216[4];
TMP3216[4].kind = 1;
TMP3216[4].offset = offsetof(tctx252037, Constants);
TMP3216[4].typ = (&NTI190805);
TMP3216[4].name = "constants";
TMP3218[4] = &TMP3216[5];
TMP3216[5].kind = 1;
TMP3216[5].offset = offsetof(tctx252037, Types);
TMP3216[5].typ = (&NTI190845);
TMP3216[5].name = "types";
TMP3218[5] = &TMP3216[6];
TMP3216[6].kind = 1;
TMP3216[6].offset = offsetof(tctx252037, Currentexceptiona);
TMP3216[6].typ = (&NTI190805);
TMP3216[6].name = "currentExceptionA";
TMP3218[6] = &TMP3216[7];
TMP3216[7].kind = 1;
TMP3216[7].offset = offsetof(tctx252037, Currentexceptionb);
TMP3216[7].typ = (&NTI190805);
TMP3216[7].name = "currentExceptionB";
TMP3218[7] = &TMP3216[8];
TMP3216[8].kind = 1;
TMP3216[8].offset = offsetof(tctx252037, Exceptioninstr);
TMP3216[8].typ = (&NTI106);
TMP3216[8].name = "exceptionInstr";
TMP3218[8] = &TMP3216[9];
NTI252216.size = sizeof(pprocHEX3Aobjecttype252216);
NTI252216.kind = 18;
NTI252216.base = 0;
NTI252216.flags = 2;
TMP3220[0] = &TMP3216[11];
NTI252023.size = sizeof(tblock252023);
NTI252023.kind = 18;
NTI252023.base = 0;
NTI252023.flags = 2;
TMP3221[0] = &TMP3216[13];
TMP3216[13].kind = 1;
TMP3216[13].offset = offsetof(tblock252023, Label);
TMP3216[13].typ = (&NTI190811);
TMP3216[13].name = "label";
TMP3221[1] = &TMP3216[14];
NTI252198.size = sizeof(TY252198*);
NTI252198.kind = 24;
NTI252198.base = (&NTI106);
NTI252198.flags = 2;
NTI252198.marker = TMP3222;
TMP3216[14].kind = 1;
TMP3216[14].offset = offsetof(tblock252023, Fixups);
TMP3216[14].typ = (&NTI252198);
TMP3216[14].name = "fixups";
TMP3216[12].len = 2; TMP3216[12].kind = 2; TMP3216[12].sons = &TMP3221[0];
NTI252023.node = &TMP3216[12];
NTI252217.size = sizeof(TY252217*);
NTI252217.kind = 24;
NTI252217.base = (&NTI252023);
NTI252217.flags = 2;
NTI252217.marker = TMP3223;
TMP3216[11].kind = 1;
TMP3216[11].offset = offsetof(pprocHEX3Aobjecttype252216, Blocks);
TMP3216[11].typ = (&NTI252217);
TMP3216[11].name = "blocks";
TMP3220[1] = &TMP3216[15];
TMP3216[15].kind = 1;
TMP3216[15].offset = offsetof(pprocHEX3Aobjecttype252216, Sym);
TMP3216[15].typ = (&NTI190811);
TMP3216[15].name = "sym";
TMP3220[2] = &TMP3216[16];
NTI252223.size = sizeof(TY252223);
NTI252223.kind = 18;
NTI252223.base = 0;
NTI252223.flags = 3;
TMP3224[0] = &TMP3216[18];
TMP3216[18].kind = 1;
TMP3216[18].offset = offsetof(TY252223, Field0);
TMP3216[18].typ = (&NTI134);
TMP3216[18].name = "Field0";
TMP3224[1] = &TMP3216[19];
NTI252031.size = sizeof(NU8);
NTI252031.kind = 14;
NTI252031.base = 0;
NTI252031.flags = 3;
for (TMP3227 = 0; TMP3227 < 8; TMP3227++) {
TMP3216[TMP3227+20].kind = 1;
TMP3216[TMP3227+20].offset = TMP3227;
TMP3216[TMP3227+20].name = TMP3226[TMP3227];
TMP3225[TMP3227] = &TMP3216[TMP3227+20];
}
TMP3216[28].len = 8; TMP3216[28].kind = 2; TMP3216[28].sons = &TMP3225[0];
NTI252031.node = &TMP3216[28];
TMP3216[19].kind = 1;
TMP3216[19].offset = offsetof(TY252223, Field1);
TMP3216[19].typ = (&NTI252031);
TMP3216[19].name = "Field1";
TMP3216[17].len = 2; TMP3216[17].kind = 2; TMP3216[17].sons = &TMP3224[0];
NTI252223.node = &TMP3216[17];
NTI252220.size = sizeof(TY252220);
NTI252220.kind = 16;
NTI252220.base = (&NTI252223);
NTI252220.flags = 3;
TMP3216[16].kind = 1;
TMP3216[16].offset = offsetof(pprocHEX3Aobjecttype252216, Slots);
TMP3216[16].typ = (&NTI252220);
TMP3216[16].name = "slots";
TMP3220[3] = &TMP3216[29];
TMP3216[29].kind = 1;
TMP3216[29].offset = offsetof(pprocHEX3Aobjecttype252216, Maxslots);
TMP3216[29].typ = (&NTI106);
TMP3216[29].name = "maxSlots";
TMP3216[10].len = 4; TMP3216[10].kind = 2; TMP3216[10].sons = &TMP3220[0];
NTI252216.node = &TMP3216[10];
NTI252033.size = sizeof(pprocHEX3Aobjecttype252216*);
NTI252033.kind = 22;
NTI252033.base = (&NTI252216);
NTI252033.flags = 2;
NTI252033.marker = TMP3228;
TMP3216[9].kind = 1;
TMP3216[9].offset = offsetof(tctx252037, Prc);
TMP3216[9].typ = (&NTI252033);
TMP3216[9].name = "prc";
TMP3218[9] = &TMP3216[30];
TMP3216[30].kind = 1;
TMP3216[30].offset = offsetof(tctx252037, Module);
TMP3216[30].typ = (&NTI190811);
TMP3216[30].name = "module";
TMP3218[10] = &TMP3216[31];
TMP3216[31].kind = 1;
TMP3216[31].offset = offsetof(tctx252037, Callsite);
TMP3216[31].typ = (&NTI190805);
TMP3216[31].name = "callsite";
TMP3218[11] = &TMP3216[32];
NTI252025.size = sizeof(NU8);
NTI252025.kind = 14;
NTI252025.base = 0;
NTI252025.flags = 3;
for (TMP3231 = 0; TMP3231 < 5; TMP3231++) {
TMP3216[TMP3231+33].kind = 1;
TMP3216[TMP3231+33].offset = TMP3231;
TMP3216[TMP3231+33].name = TMP3230[TMP3231];
TMP3229[TMP3231] = &TMP3216[TMP3231+33];
}
TMP3216[38].len = 5; TMP3216[38].kind = 2; TMP3216[38].sons = &TMP3229[0];
NTI252025.node = &TMP3216[38];
TMP3216[32].kind = 1;
TMP3216[32].offset = offsetof(tctx252037, Mode);
TMP3216[32].typ = (&NTI252025);
TMP3216[32].name = "mode";
TMP3218[12] = &TMP3216[39];
NTI252027.size = sizeof(NU8);
NTI252027.kind = 14;
NTI252027.base = 0;
NTI252027.flags = 3;
for (TMP3234 = 0; TMP3234 < 3; TMP3234++) {
TMP3216[TMP3234+40].kind = 1;
TMP3216[TMP3234+40].offset = TMP3234;
TMP3216[TMP3234+40].name = TMP3233[TMP3234];
TMP3232[TMP3234] = &TMP3216[TMP3234+40];
}
TMP3216[43].len = 3; TMP3216[43].kind = 2; TMP3216[43].sons = &TMP3232[0];
NTI252027.node = &TMP3216[43];
NTI252029.size = sizeof(NU8);
NTI252029.kind = 19;
NTI252029.base = (&NTI252027);
NTI252029.flags = 3;
TMP3216[44].len = 0; TMP3216[44].kind = 0;
NTI252029.node = &TMP3216[44];
TMP3216[39].kind = 1;
TMP3216[39].offset = offsetof(tctx252037, Features);
TMP3216[39].typ = (&NTI252029);
TMP3216[39].name = "features";
TMP3218[13] = &TMP3216[45];
TMP3216[45].kind = 1;
TMP3216[45].offset = offsetof(tctx252037, Traceactive);
TMP3216[45].typ = (&NTI134);
TMP3216[45].name = "traceActive";
TMP3218[14] = &TMP3216[46];
TMP3216[46].kind = 1;
TMP3216[46].offset = offsetof(tctx252037, Loopiterations);
TMP3216[46].typ = (&NTI106);
TMP3216[46].name = "loopIterations";
TMP3216[0].len = 15; TMP3216[0].kind = 2; TMP3216[0].sons = &TMP3218[0];
NTI252037.node = &TMP3216[0];
NTI252035.size = sizeof(tctx252037*);
NTI252035.kind = 22;
NTI252035.base = (&NTI252037);
NTI252035.marker = TMP3235;
NTI252021.size = sizeof(NU8);
NTI252021.kind = 14;
NTI252021.base = 0;
NTI252021.flags = 3;
for (TMP5324 = 0; TMP5324 < 153; TMP5324++) {
TMP3216[TMP5324+47].kind = 1;
TMP3216[TMP5324+47].offset = TMP5324;
TMP3216[TMP5324+47].name = TMP5323[TMP5324];
TMP5322[TMP5324] = &TMP3216[TMP5324+47];
}
TMP3216[200].len = 153; TMP3216[200].kind = 2; TMP3216[200].sons = &TMP5322[0];
NTI252021.node = &TMP3216[200];
}

