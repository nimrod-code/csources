/* Generated by Nimrod Compiler v0.9.5 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tsym191843 tsym191843;
typedef struct ttype191847 ttype191847;
typedef struct tstrtable191817 tstrtable191817;
typedef struct tsymseq191815 tsymseq191815;
typedef struct TGenericSeq TGenericSeq;
typedef struct tidobj170013 tidobj170013;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq191845 ttypeseq191845;
typedef struct tnode191813 tnode191813;
typedef struct tloc191827 tloc191827;
typedef struct trope148007 trope148007;
typedef struct tcell42090 tcell42090;
typedef struct tcellseq42106 tcellseq42106;
typedef struct tgcheap44016 tgcheap44016;
typedef struct tcellset42102 tcellset42102;
typedef struct tpagedesc42098 tpagedesc42098;
typedef struct tmemregion24410 tmemregion24410;
typedef struct tsmallchunk23638 tsmallchunk23638;
typedef struct tllchunk24404 tllchunk24404;
typedef struct tbigchunk23640 tbigchunk23640;
typedef struct tintset23615 tintset23615;
typedef struct ttrunk23611 ttrunk23611;
typedef struct tavlnode24408 tavlnode24408;
typedef struct tgcstat44014 tgcstat44014;
typedef struct NimStringDesc NimStringDesc;
typedef struct tident170019 tident170019;
typedef struct tscope191837 tscope191837;
typedef struct TY191943 TY191943;
typedef struct tinstantiation191833 tinstantiation191833;
typedef struct tlineinfo166527 tlineinfo166527;
typedef struct tlib191831 tlib191831;
typedef struct tidentiter200106 tidentiter200106;
typedef struct tnodeseq191807 tnodeseq191807;
typedef struct tbasechunk23636 tbasechunk23636;
typedef struct tfreecell23628 tfreecell23628;
typedef struct TY191932 TY191932;
typedef struct tlistentry119017 tlistentry119017;
typedef ttype191847* TY246045[62];
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  tstrtable191817  {
NI Counter;
tsymseq191815* Data;
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
struct  TNimObject  {
TNimType* m_type;
};
struct  tidobj170013  {
  TNimObject Sup;
NI Id;
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
struct  tcell42090  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq42106  {
NI Len;
NI Cap;
tcell42090** D;
};
struct  tcellset42102  {
NI Counter;
NI Max;
tpagedesc42098* Head;
tpagedesc42098** Data;
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
tcellseq42106 Zct;
tcellseq42106 Decstack;
tcellset42102 Cycleroots;
tcellseq42106 Tempstack;
NI Recgclock;
tmemregion24410 Region;
tgcstat44014 Stat;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tlineinfo166527  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
struct  tidentiter200106  {
NI H;
tident170019* Name;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef ttype191847* TY246287[70];
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
struct  trope148007  {
  TNimObject Sup;
trope148007* Left;
trope148007* Right;
NI Length;
NimStringDesc* Data;
};
typedef NI TY23618[16];
struct  tpagedesc42098  {
tpagedesc42098* Next;
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
struct  tident170019  {
  tidobj170013 Sup;
NimStringDesc* S;
tident170019* Next;
NI H;
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
struct  tfreecell23628  {
tfreecell23628* Next;
NI Zerofield;
};
struct tsymseq191815 {
  TGenericSeq Sup;
  tsym191843* data[SEQ_DECL_SIZE];
};
struct ttypeseq191845 {
  TGenericSeq Sup;
  ttype191847* data[SEQ_DECL_SIZE];
};
struct TY191943 {
  TGenericSeq Sup;
  tinstantiation191833* data[SEQ_DECL_SIZE];
};
struct tnodeseq191807 {
  TGenericSeq Sup;
  tnode191813* data[SEQ_DECL_SIZE];
};
struct TY191932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, registersystype_246020)(ttype191847* t);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell42090*, usrtocell_45443)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_47002)(tcell42090* c);
N_NOINLINE(void, addzct_45418)(tcellseq42106* s, tcell42090* c);
N_NIMCALL(ttype191847*, newsystype_246075)(NU8 kind, NI size);
N_NIMCALL(ttype191847*, newtype_192070)(NU8 kind, tsym191843* owner);
N_NIMCALL(tsym191843*, getsyssym_246040)(NimStringDesc* name);
N_NIMCALL(tsym191843*, strtableget_200084)(tstrtable191817 t, tident170019* name);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NIMCALL(tident170019*, getident_170456)(NimStringDesc* identifier);
N_NIMCALL(void, rawmessage_168386)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(tsym191843*, newsym_192063)(NU8 symkind, tident170019* name, tsym191843* owner, tlineinfo166527 info);
N_NIMCALL(void, loadstub_243239)(tsym191843* s);
N_NIMCALL(tsym191843*, getsysmagic_246128)(NimStringDesc* name, NU16 m);
N_NIMCALL(tsym191843*, initidentiter_200110)(tidentiter200106* ti, tstrtable191817 tab, tident170019* s);
N_NIMCALL(tsym191843*, nextidentiter_200117)(tidentiter200106* ti, tstrtable191817 tab);
N_NIMCALL(ttype191847*, systypefromname_246204)(NimStringDesc* name);
N_NIMCALL(ttype191847*, getsystype_246024)(NU8 kind);
N_NIMCALL(void, internalerror_168606)(NimStringDesc* errmsg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e_76880, TNimType* typ);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, resetsystypes_246292)(void);
N_NIMCALL(void, initstrtable_192120)(tstrtable191817* x);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(ttype191847*, getintlittype_246378)(tnode191813* literal);
N_NIMCALL(NI64, chckRange64)(NI64 i, NI64 a, NI64 b);
N_NIMCALL(ttype191847*, copytype_192151)(ttype191847* t, tsym191843* owner, NIM_BOOL keepid);
N_NIMCALL(ttype191847*, getfloatlittype_246418)(tnode191813* literal);
static N_INLINE(ttype191847*, skipintlit_246424)(ttype191847* t);
N_NIMCALL(void, addsonskipintlit_246461)(ttype191847* father, ttype191847* son);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(void, propagatetoowner_195852)(ttype191847* owner, ttype191847* elem);
N_NIMCALL(void, setintlittype_246517)(tnode191813* result);
N_NIMCALL(void, internalerror_168591)(tlineinfo166527 info, NimStringDesc* errmsg);
N_NIMCALL(tsym191843*, getcompilerproc_246028)(NimStringDesc* name);
N_NIMCALL(tident170019*, getident_170462)(NimStringDesc* identifier, NI h);
N_NIMCALL(NI, hashignorestyle_120859)(NimStringDesc* x);
N_NIMCALL(void, strtableadd_200078)(tstrtable191817* t, tsym191843* n);
N_NIMCALL(void, registercompilerproc_246032)(tsym191843* s);
N_NIMCALL(void, finishsystem_246036)(tstrtable191817 tab);
STRING_LITERAL(TMP3110, "tab", 3);
STRING_LITERAL(TMP3111, "int", 3);
STRING_LITERAL(TMP3112, "int8", 4);
STRING_LITERAL(TMP3113, "int16", 5);
STRING_LITERAL(TMP3114, "int32", 5);
STRING_LITERAL(TMP3115, "int64", 5);
STRING_LITERAL(TMP3116, "uint", 4);
STRING_LITERAL(TMP3117, "uint8", 5);
STRING_LITERAL(TMP3118, "uint16", 6);
STRING_LITERAL(TMP3119, "uint32", 6);
STRING_LITERAL(TMP3120, "uint64", 6);
STRING_LITERAL(TMP3121, "float", 5);
STRING_LITERAL(TMP3122, "float32", 7);
STRING_LITERAL(TMP3123, "float64", 7);
STRING_LITERAL(TMP3124, "float128", 8);
STRING_LITERAL(TMP3125, "bool", 4);
STRING_LITERAL(TMP3126, "char", 4);
STRING_LITERAL(TMP3127, "string", 6);
STRING_LITERAL(TMP3128, "cstring", 7);
STRING_LITERAL(TMP3129, "pointer", 7);
STRING_LITERAL(TMP3130, "request for typekind: ", 22);
STRING_LITERAL(TMP3131, "wanted: ", 8);
STRING_LITERAL(TMP3132, " got: ", 6);
STRING_LITERAL(TMP3133, "type not found: ", 16);
static NIM_CONST TY192025 TMP3134 = {
0xE0, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3135, "intVal", 6);
STRING_LITERAL(TMP3136, "invalid int size", 16);
tsym191843* systemmodule_246017;
TY246045 gsystypes_246048;
tstrtable191817 compilerprocs_246049;
extern TFrame* frameptr_13438;
extern tgcheap44016 gch_44044;
extern NI ptrsize_145592;
extern TNimType NTI191240; /* TTypeKind */
TY246287 inttypecache_246289;
extern TNimType NTI191845; /* TTypeSeq */
extern NI intsize_145590;
extern tstrtable191817 rodcompilerprocs_240058;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13438;
	frameptr_13438 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13438 = (*frameptr_13438).prev;
}

static N_INLINE(tcell42090*, usrtocell_45443)(void* usr) {
	tcell42090* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	result = ((tcell42090*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell42090))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_47002)(tcell42090* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_45418(&gch_44044.Zct, c);
	popFrame();
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(251, "gc.nim");
	{
		tcell42090* c;
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
		tcell42090* c;
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
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
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

N_NIMCALL(void, registersystype_246020)(ttype191847* t) {
	nimfr("registerSysType", "magicsys.nim")
	nimln(31, "magicsys.nim");
	{
		nimln(31, "magicsys.nim");
		if (!(gsystypes_246048[((*t).Kind)- 0] == NIM_NIL)) goto LA3;
		nimln(31, "magicsys.nim");
		asgnRefNoCycle((void**) &gsystypes_246048[((*t).Kind)- 0], t);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(ttype191847*, newsystype_246075)(NU8 kind, NI size) {
	ttype191847* result;
	nimfr("newSysType", "magicsys.nim")
	result = 0;
	nimln(34, "magicsys.nim");
	result = newtype_192070(kind, systemmodule_246017);
	nimln(35, "magicsys.nim");
	(*result).Size = ((NI64) (size));
	nimln(36, "magicsys.nim");
	(*result).Align = size;
	popFrame();
	return result;
}

N_NIMCALL(tsym191843*, getsyssym_246040)(NimStringDesc* name) {
	tsym191843* result;
	tident170019* LOC1;
	nimfr("getSysSym", "magicsys.nim")
	result = 0;
	nimln(39, "magicsys.nim");
	if (!(((64 &(1<<(((*systemmodule_246017).Kind)&31)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3110));
	nimln(39, "magicsys.nim");
	LOC1 = 0;
	LOC1 = getident_170456(name);
	result = strtableget_200084((*systemmodule_246017).kindU.S3.Tab, LOC1);
	nimln(40, "magicsys.nim");
	{
		tident170019* LOC6;
		nimln(40, "magicsys.nim");
		if (!(result == NIM_NIL)) goto LA4;
		nimln(41, "magicsys.nim");
		rawmessage_168386(((NU16) 64), name);
		nimln(42, "magicsys.nim");
		nimln(42, "magicsys.nim");
		LOC6 = 0;
		LOC6 = getident_170456(name);
		result = newsym_192063(((NU8) 0), LOC6, systemmodule_246017, (*systemmodule_246017).Info);
		nimln(43, "magicsys.nim");
		asgnRefNoCycle((void**) &(*result).Typ, newtype_192070(((NU8) 50), systemmodule_246017));
	}
	LA4: ;
	nimln(44, "magicsys.nim");
	{
		nimln(44, "magicsys.nim");
		if (!((*result).Kind == ((NU8) 23))) goto LA9;
		nimln(44, "magicsys.nim");
		loadstub_243239(result);
	}
	LA9: ;
	popFrame();
	return result;
}

N_NIMCALL(tsym191843*, getsysmagic_246128)(NimStringDesc* name, NU16 m) {
	tsym191843* result;
	tidentiter200106 ti;
	tident170019* id;
	nimfr("getSysMagic", "magicsys.nim")
	result = 0;
	memset((void*)&ti, 0, sizeof(ti));
	nimln(48, "magicsys.nim");
	id = getident_170456(name);
	nimln(49, "magicsys.nim");
	if (!(((64 &(1<<(((*systemmodule_246017).Kind)&31)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3110));
	result = initidentiter_200110(&ti, (*systemmodule_246017).kindU.S3.Tab, id);
	nimln(50, "magicsys.nim");
	while (1) {
		nimln(50, "magicsys.nim");
		nimln(50, "magicsys.nim");
		if (!!((result == NIM_NIL))) goto LA1;
		nimln(51, "magicsys.nim");
		{
			nimln(51, "magicsys.nim");
			if (!((*result).Kind == ((NU8) 23))) goto LA4;
			nimln(51, "magicsys.nim");
			loadstub_243239(result);
		}
		LA4: ;
		nimln(52, "magicsys.nim");
		{
			nimln(52, "magicsys.nim");
			if (!((*result).Magic == m)) goto LA8;
			nimln(52, "magicsys.nim");
			goto BeforeRet;
		}
		LA8: ;
		nimln(53, "magicsys.nim");
		if (!(((64 &(1<<(((*systemmodule_246017).Kind)&31)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3110));
		result = nextidentiter_200117(&ti, (*systemmodule_246017).kindU.S3.Tab);
	} LA1: ;
	nimln(54, "magicsys.nim");
	rawmessage_168386(((NU16) 64), name);
	nimln(55, "magicsys.nim");
	result = newsym_192063(((NU8) 0), id, systemmodule_246017, (*systemmodule_246017).Info);
	nimln(56, "magicsys.nim");
	asgnRefNoCycle((void**) &(*result).Typ, newtype_192070(((NU8) 50), systemmodule_246017));
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(ttype191847*, systypefromname_246204)(NimStringDesc* name) {
	ttype191847* result;
	tsym191843* LOC1;
	nimfr("sysTypeFromName", "magicsys.nim")
	result = 0;
	nimln(59, "magicsys.nim");
	nimln(59, "magicsys.nim");
	LOC1 = 0;
	LOC1 = getsyssym_246040(name);
	result = (*LOC1).Typ;
	popFrame();
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(ttype191847*, getsystype_246024)(NU8 kind) {
	ttype191847* result;
	nimfr("getSysType", "magicsys.nim")
	result = 0;
	nimln(62, "magicsys.nim");
	result = gsystypes_246048[(kind)- 0];
	nimln(63, "magicsys.nim");
	{
		nimln(63, "magicsys.nim");
		if (!(result == NIM_NIL)) goto LA3;
		nimln(64, "magicsys.nim");
		switch (kind) {
		case ((NU8) 31):
		{
			nimln(65, "magicsys.nim");
			result = systypefromname_246204(((NimStringDesc*) &TMP3111));
		}
		break;
		case ((NU8) 32):
		{
			nimln(66, "magicsys.nim");
			result = systypefromname_246204(((NimStringDesc*) &TMP3112));
		}
		break;
		case ((NU8) 33):
		{
			nimln(67, "magicsys.nim");
			result = systypefromname_246204(((NimStringDesc*) &TMP3113));
		}
		break;
		case ((NU8) 34):
		{
			nimln(68, "magicsys.nim");
			result = systypefromname_246204(((NimStringDesc*) &TMP3114));
		}
		break;
		case ((NU8) 35):
		{
			nimln(69, "magicsys.nim");
			result = systypefromname_246204(((NimStringDesc*) &TMP3115));
		}
		break;
		case ((NU8) 40):
		{
			nimln(70, "magicsys.nim");
			result = systypefromname_246204(((NimStringDesc*) &TMP3116));
		}
		break;
		case ((NU8) 41):
		{
			nimln(71, "magicsys.nim");
			result = systypefromname_246204(((NimStringDesc*) &TMP3117));
		}
		break;
		case ((NU8) 42):
		{
			nimln(72, "magicsys.nim");
			result = systypefromname_246204(((NimStringDesc*) &TMP3118));
		}
		break;
		case ((NU8) 43):
		{
			nimln(73, "magicsys.nim");
			result = systypefromname_246204(((NimStringDesc*) &TMP3119));
		}
		break;
		case ((NU8) 44):
		{
			nimln(74, "magicsys.nim");
			result = systypefromname_246204(((NimStringDesc*) &TMP3120));
		}
		break;
		case ((NU8) 36):
		{
			nimln(75, "magicsys.nim");
			result = systypefromname_246204(((NimStringDesc*) &TMP3121));
		}
		break;
		case ((NU8) 37):
		{
			nimln(76, "magicsys.nim");
			result = systypefromname_246204(((NimStringDesc*) &TMP3122));
		}
		break;
		case ((NU8) 38):
		{
			nimln(77, "magicsys.nim");
			nimln(77, "magicsys.nim");
			result = systypefromname_246204(((NimStringDesc*) &TMP3123));
			goto BeforeRet;
		}
		break;
		case ((NU8) 39):
		{
			nimln(78, "magicsys.nim");
			result = systypefromname_246204(((NimStringDesc*) &TMP3124));
		}
		break;
		case ((NU8) 1):
		{
			nimln(79, "magicsys.nim");
			result = systypefromname_246204(((NimStringDesc*) &TMP3125));
		}
		break;
		case ((NU8) 2):
		{
			nimln(80, "magicsys.nim");
			result = systypefromname_246204(((NimStringDesc*) &TMP3126));
		}
		break;
		case ((NU8) 28):
		{
			nimln(81, "magicsys.nim");
			result = systypefromname_246204(((NimStringDesc*) &TMP3127));
		}
		break;
		case ((NU8) 29):
		{
			nimln(82, "magicsys.nim");
			result = systypefromname_246204(((NimStringDesc*) &TMP3128));
		}
		break;
		case ((NU8) 26):
		{
			nimln(83, "magicsys.nim");
			result = systypefromname_246204(((NimStringDesc*) &TMP3129));
		}
		break;
		case ((NU8) 5):
		{
			nimln(84, "magicsys.nim");
			result = newsystype_246075(((NU8) 5), ptrsize_145592);
		}
		break;
		default:
		{
			NimStringDesc* LOC26;
			nimln(85, "magicsys.nim");
			nimln(85, "magicsys.nim");
			LOC26 = 0;
			nimln(85, "magicsys.nim");
			LOC26 = rawNewString(reprEnum(kind, (&NTI191240))->Sup.len + 22);
appendString(LOC26, ((NimStringDesc*) &TMP3130));
appendString(LOC26, reprEnum(kind, (&NTI191240)));
			internalerror_168606(LOC26);
		}
		break;
		}
		nimln(86, "magicsys.nim");
		asgnRefNoCycle((void**) &gsystypes_246048[(kind)- 0], result);
	}
	LA3: ;
	nimln(87, "magicsys.nim");
	{
		NimStringDesc* LOC31;
		nimln(87, "magicsys.nim");
		nimln(87, "magicsys.nim");
		if (!!(((*result).Kind == kind))) goto LA29;
		nimln(88, "magicsys.nim");
		nimln(88, "magicsys.nim");
		LOC31 = 0;
		nimln(88, "magicsys.nim");
		nimln(88, "magicsys.nim");
		LOC31 = rawNewString(reprEnum(kind, (&NTI191240))->Sup.len + reprEnum((*result).Kind, (&NTI191240))->Sup.len + 14);
appendString(LOC31, ((NimStringDesc*) &TMP3131));
appendString(LOC31, reprEnum(kind, (&NTI191240)));
appendString(LOC31, ((NimStringDesc*) &TMP3132));
appendString(LOC31, reprEnum((*result).Kind, (&NTI191240)));
		internalerror_168606(LOC31);
	}
	LA29: ;
	nimln(89, "magicsys.nim");
	{
		NimStringDesc* LOC36;
		nimln(89, "magicsys.nim");
		if (!(result == NIM_NIL)) goto LA34;
		nimln(89, "magicsys.nim");
		nimln(89, "magicsys.nim");
		LOC36 = 0;
		nimln(89, "magicsys.nim");
		LOC36 = rawNewString(reprEnum(kind, (&NTI191240))->Sup.len + 16);
appendString(LOC36, ((NimStringDesc*) &TMP3133));
appendString(LOC36, reprEnum(kind, (&NTI191240)));
		internalerror_168606(LOC36);
	}
	LA34: ;
	BeforeRet: ;
	popFrame();
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

N_NIMCALL(void, resetsystypes_246292)(void) {
	NU8 i_246335;
	NU8 res_246369;
	NI i_246367;
	NI res_246372;
	nimfr("resetSysTypes", "magicsys.nim")
	nimln(95, "magicsys.nim");
	asgnRefNoCycle((void**) &systemmodule_246017, NIM_NIL);
	nimln(96, "magicsys.nim");
	initstrtable_192120(&compilerprocs_246049);
	i_246335 = 0;
	nimln(1458, "system.nim");
	res_246369 = ((NU8) 0);
	nimln(1459, "system.nim");
	while (1) {
		nimln(1459, "system.nim");
		if (!(res_246369 <= ((NU8) 61))) goto LA1;
		nimln(1458, "system.nim");
		i_246335 = res_246369;
		nimln(98, "magicsys.nim");
		asgnRefNoCycle((void**) &gsystypes_246048[(i_246335)- 0], NIM_NIL);
		nimln(1461, "system.nim");
		res_246369 = addInt(res_246369, 1);
	} LA1: ;
	i_246367 = 0;
	nimln(1458, "system.nim");
	res_246372 = -5;
	nimln(1459, "system.nim");
	while (1) {
		nimln(1459, "system.nim");
		if (!(((NI) (res_246372)) <= 64)) goto LA2;
		nimln(1458, "system.nim");
		i_246367 = res_246372;
		nimln(101, "magicsys.nim");
		if (i_246367 < -5 || i_246367 > 64) raiseIndexError();
		asgnRefNoCycle((void**) &inttypecache_246289[(i_246367)- -5], NIM_NIL);
		nimln(1461, "system.nim");
		res_246372 = addInt(res_246372, 1);
	} LA2: ;
	popFrame();
}

N_NIMCALL(ttype191847*, getintlittype_246378)(tnode191813* literal) {
	ttype191847* result;
	NI64 value;
	nimfr("getIntLitType", "magicsys.nim")
	result = 0;
	nimln(105, "magicsys.nim");
	if (!(((TMP3134[(*literal).Kind/8] &(1<<((*literal).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3135));
	value = (*literal).kindU.S1.Intval;
	nimln(106, "magicsys.nim");
	{
		NIM_BOOL LOC3;
		nimln(106, "magicsys.nim");
		LOC3 = 0;
		nimln(106, "magicsys.nim");
		LOC3 = (-5 <= value);
		if (!(LOC3)) goto LA4;
		nimln(106, "magicsys.nim");
		LOC3 = (value <= 64);
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(107, "magicsys.nim");
		if (((NI)chckRange64(value, (-2147483647 -1), 2147483647)) < -5 || ((NI)chckRange64(value, (-2147483647 -1), 2147483647)) > 64) raiseIndexError();
		result = inttypecache_246289[(((NI)chckRange64(value, (-2147483647 -1), 2147483647)))- -5];
		nimln(108, "magicsys.nim");
		{
			ttype191847* ti;
			nimln(108, "magicsys.nim");
			if (!(result == NIM_NIL)) goto LA9;
			nimln(109, "magicsys.nim");
			ti = getsystype_246024(((NU8) 31));
			nimln(110, "magicsys.nim");
			result = copytype_192151(ti, (*ti).Owner, NIM_FALSE);
			nimln(111, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).N, literal);
			nimln(112, "magicsys.nim");
			if (((NI)chckRange64(value, (-2147483647 -1), 2147483647)) < -5 || ((NI)chckRange64(value, (-2147483647 -1), 2147483647)) > 64) raiseIndexError();
			asgnRefNoCycle((void**) &inttypecache_246289[(((NI)chckRange64(value, (-2147483647 -1), 2147483647)))- -5], result);
		}
		LA9: ;
	}
	goto LA1;
	LA5: ;
	{
		ttype191847* ti;
		nimln(114, "magicsys.nim");
		ti = getsystype_246024(((NU8) 31));
		nimln(115, "magicsys.nim");
		result = copytype_192151(ti, (*ti).Owner, NIM_FALSE);
		nimln(116, "magicsys.nim");
		asgnRefNoCycle((void**) &(*result).N, literal);
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(ttype191847*, getfloatlittype_246418)(tnode191813* literal) {
	ttype191847* result;
	nimfr("getFloatLitType", "magicsys.nim")
	result = 0;
	nimln(120, "magicsys.nim");
	result = newsystype_246075(((NU8) 36), 8);
	nimln(121, "magicsys.nim");
	asgnRefNoCycle((void**) &(*result).N, literal);
	popFrame();
	return result;
}

static N_INLINE(ttype191847*, skipintlit_246424)(ttype191847* t) {
	ttype191847* result;
	nimfr("skipIntLit", "magicsys.nim")
	result = 0;
	nimln(124, "magicsys.nim");
	{
		nimln(124, "magicsys.nim");
		nimln(124, "magicsys.nim");
		if (!!(((*t).N == NIM_NIL))) goto LA3;
		nimln(125, "magicsys.nim");
		{
			nimln(125, "magicsys.nim");
			if (!((*t).Kind == ((NU8) 31) || (*t).Kind == ((NU8) 36))) goto LA7;
			nimln(126, "magicsys.nim");
			nimln(126, "magicsys.nim");
			result = getsystype_246024((*t).Kind);
			goto BeforeRet;
		}
		LA7: ;
	}
	LA3: ;
	nimln(127, "magicsys.nim");
	result = t;
	BeforeRet: ;
	popFrame();
	return result;
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell42090* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(233, "gc.nim");
	c = usrtocell_45443(p);
	nimln(235, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).Refcount -= 8;
		nimln(168, "gc.nim");
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		nimln(236, "gc.nim");
		rtladdzct_47002(c);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(void, addsonskipintlit_246461)(ttype191847* father, ttype191847* son) {
	ttype191847* s;
	nimfr("addSonSkipIntLit", "magicsys.nim")
	nimln(130, "magicsys.nim");
	{
		nimln(130, "magicsys.nim");
		if (!(*father).Sons == 0) goto LA3;
		nimln(130, "magicsys.nim");
		if ((*father).Sons) nimGCunrefNoCycle((*father).Sons);
		(*father).Sons = (ttypeseq191845*) newSeqRC1((&NTI191845), 0);
	}
	LA3: ;
	nimln(131, "magicsys.nim");
	s = skipintlit_246424(son);
	nimln(132, "magicsys.nim");
	(*father).Sons = (ttypeseq191845*) incrSeq(&((*father).Sons)->Sup, sizeof(ttype191847*));
	asgnRefNoCycle((void**) &(*father).Sons->data[(*father).Sons->Sup.len-1], s);
	nimln(133, "magicsys.nim");
	propagatetoowner_195852(father, s);
	popFrame();
}

N_NIMCALL(void, setintlittype_246517)(tnode191813* result) {
	NI64 i;
	nimfr("setIntLitType", "magicsys.nim")
	nimln(136, "magicsys.nim");
	if (!(((TMP3134[(*result).Kind/8] &(1<<((*result).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3135));
	i = (*result).kindU.S1.Intval;
	nimln(137, "magicsys.nim");
	switch (intsize_145590) {
	case 8:
	{
		nimln(138, "magicsys.nim");
		asgnRefNoCycle((void**) &(*result).Typ, getintlittype_246378(result));
	}
	break;
	case 4:
	{
		nimln(140, "magicsys.nim");
		{
			NIM_BOOL LOC5;
			nimln(140, "magicsys.nim");
			LOC5 = 0;
			nimln(140, "magicsys.nim");
			LOC5 = ((-2147483647 -1) <= i);
			if (!(LOC5)) goto LA6;
			nimln(140, "magicsys.nim");
			LOC5 = (i <= 2147483647);
			LA6: ;
			if (!LOC5) goto LA7;
			nimln(141, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).Typ, getintlittype_246378(result));
		}
		goto LA3;
		LA7: ;
		{
			nimln(143, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).Typ, getsystype_246024(((NU8) 35)));
		}
		LA3: ;
	}
	break;
	case 2:
	{
		nimln(145, "magicsys.nim");
		{
			NIM_BOOL LOC13;
			nimln(145, "magicsys.nim");
			LOC13 = 0;
			nimln(145, "magicsys.nim");
			LOC13 = (-32768 <= i);
			if (!(LOC13)) goto LA14;
			nimln(145, "magicsys.nim");
			LOC13 = (i <= 32767);
			LA14: ;
			if (!LOC13) goto LA15;
			nimln(146, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).Typ, getintlittype_246378(result));
		}
		goto LA11;
		LA15: ;
		{
			NIM_BOOL LOC18;
			nimln(147, "magicsys.nim");
			LOC18 = 0;
			nimln(147, "magicsys.nim");
			LOC18 = ((-2147483647 -1) <= i);
			if (!(LOC18)) goto LA19;
			nimln(147, "magicsys.nim");
			LOC18 = (i <= 2147483647);
			LA19: ;
			if (!LOC18) goto LA20;
			nimln(148, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).Typ, getsystype_246024(((NU8) 34)));
		}
		goto LA11;
		LA20: ;
		{
			nimln(150, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).Typ, getsystype_246024(((NU8) 35)));
		}
		LA11: ;
	}
	break;
	case 1:
	{
		nimln(153, "magicsys.nim");
		{
			NIM_BOOL LOC26;
			nimln(153, "magicsys.nim");
			LOC26 = 0;
			nimln(153, "magicsys.nim");
			LOC26 = (-128 <= i);
			if (!(LOC26)) goto LA27;
			nimln(153, "magicsys.nim");
			LOC26 = (i <= 127);
			LA27: ;
			if (!LOC26) goto LA28;
			nimln(154, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).Typ, getintlittype_246378(result));
		}
		goto LA24;
		LA28: ;
		{
			NIM_BOOL LOC31;
			nimln(155, "magicsys.nim");
			LOC31 = 0;
			nimln(155, "magicsys.nim");
			LOC31 = (-32768 <= i);
			if (!(LOC31)) goto LA32;
			nimln(155, "magicsys.nim");
			LOC31 = (i <= 32767);
			LA32: ;
			if (!LOC31) goto LA33;
			nimln(156, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).Typ, getsystype_246024(((NU8) 33)));
		}
		goto LA24;
		LA33: ;
		{
			NIM_BOOL LOC36;
			nimln(157, "magicsys.nim");
			LOC36 = 0;
			nimln(157, "magicsys.nim");
			LOC36 = ((-2147483647 -1) <= i);
			if (!(LOC36)) goto LA37;
			nimln(157, "magicsys.nim");
			LOC36 = (i <= 2147483647);
			LA37: ;
			if (!LOC36) goto LA38;
			nimln(158, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).Typ, getsystype_246024(((NU8) 34)));
		}
		goto LA24;
		LA38: ;
		{
			nimln(160, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).Typ, getsystype_246024(((NU8) 35)));
		}
		LA24: ;
	}
	break;
	default:
	{
		nimln(161, "magicsys.nim");
		internalerror_168591((*result).Info, ((NimStringDesc*) &TMP3136));
	}
	break;
	}
	popFrame();
}

N_NIMCALL(tsym191843*, getcompilerproc_246028)(NimStringDesc* name) {
	tsym191843* result;
	tident170019* ident;
	NI LOC1;
	nimfr("getCompilerProc", "magicsys.nim")
	result = 0;
	nimln(164, "magicsys.nim");
	nimln(164, "magicsys.nim");
	LOC1 = 0;
	LOC1 = hashignorestyle_120859(name);
	ident = getident_170462(name, LOC1);
	nimln(165, "magicsys.nim");
	result = strtableget_200084(compilerprocs_246049, ident);
	nimln(166, "magicsys.nim");
	{
		nimln(166, "magicsys.nim");
		if (!(result == NIM_NIL)) goto LA4;
		nimln(167, "magicsys.nim");
		result = strtableget_200084(rodcompilerprocs_240058, ident);
		nimln(168, "magicsys.nim");
		{
			nimln(168, "magicsys.nim");
			nimln(168, "magicsys.nim");
			if (!!((result == NIM_NIL))) goto LA8;
			nimln(169, "magicsys.nim");
			strtableadd_200078(&compilerprocs_246049, result);
			nimln(170, "magicsys.nim");
			{
				nimln(170, "magicsys.nim");
				if (!((*result).Kind == ((NU8) 23))) goto LA12;
				nimln(170, "magicsys.nim");
				loadstub_243239(result);
			}
			LA12: ;
		}
		LA8: ;
	}
	LA4: ;
	popFrame();
	return result;
}

N_NIMCALL(void, registercompilerproc_246032)(tsym191843* s) {
	nimfr("registerCompilerProc", "magicsys.nim")
	nimln(173, "magicsys.nim");
	strtableadd_200078(&compilerprocs_246049, s);
	popFrame();
}

N_NIMCALL(void, finishsystem_246036)(tstrtable191817 tab) {
	nimfr("finishSystem", "magicsys.nim")
	popFrame();
}
N_NOINLINE(void, magicsysInit)(void) {
	nimfr("magicsys", "magicsys.nim")
	nimln(177, "magicsys.nim");
	initstrtable_192120(&compilerprocs_246049);
	popFrame();
}

N_NOINLINE(void, magicsysDatInit)(void) {
}

