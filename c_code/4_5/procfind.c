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
typedef struct tcontext254019 tcontext254019;
typedef struct tidentiter200106 tidentiter200106;
typedef struct TY191932 TY191932;
typedef struct tlistentry119017 tlistentry119017;
typedef struct tpasscontext250003 tpasscontext250003;
typedef struct tproccon254009 tproccon254009;
typedef struct tintset188047 tintset188047;
typedef struct ttrunk188043 ttrunk188043;
typedef struct ttrunkseq188045 ttrunkseq188045;
typedef struct tlinkedlist119023 tlinkedlist119023;
typedef struct tidtable191859 tidtable191859;
typedef struct tidpairseq191857 tidpairseq191857;
typedef struct tidpair191855 tidpair191855;
typedef struct tctx253037 tctx253037;
typedef struct TY254131 TY254131;
typedef struct tinstantiationpair254011 tinstantiationpair254011;
typedef struct TY253229 TY253229;
typedef struct TY167208 TY167208;
typedef struct pprocHEX3Aobjecttype253216 pprocHEX3Aobjecttype253216;
typedef struct TY253217 TY253217;
typedef struct tblock253023 tblock253023;
typedef struct TY253198 TY253198;
typedef struct TY253223 TY253223;
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
struct  tidentiter200106  {
NI H;
tident170019* Name;
};
struct  tscope191837  {
NI Depthlevel;
tstrtable191817 Symbols;
tnodeseq191807* Usingsyms;
tscope191837* Parent;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct  tpasscontext250003  {
  TNimObject Sup;
NIM_BOOL Fromcache;
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
struct  tidpair191855  {
tidobj170013* Key;
TNimObject* Val;
};
struct  tidtable191859  {
NI Counter;
tidpairseq191857* Data;
};
typedef N_NIMCALL_PTR(tnode191813*, TY254061) (tcontext254019* c, tnode191813* n);
typedef N_NIMCALL_PTR(tnode191813*, TY254066) (tcontext254019* c, tnode191813* n, NU16 flags);
typedef N_NIMCALL_PTR(tnode191813*, TY254074) (tcontext254019* c, tnode191813* n, NU16 flags, NIM_BOOL buffererrors);
typedef N_NIMCALL_PTR(tnode191813*, TY254083) (tcontext254019* c, tnode191813* n);
typedef N_NIMCALL_PTR(tnode191813*, TY254088) (tcontext254019* c, tnode191813* n, NU16 flags);
typedef N_NIMCALL_PTR(tnode191813*, TY254096) (tcontext254019* c, tnode191813* n);
typedef N_NIMCALL_PTR(tnode191813*, TY254101) (tcontext254019* c, tnode191813* n, tnode191813* norig, NU32 filter);
typedef N_NIMCALL_PTR(ttype191847*, TY254108) (tcontext254019* c, tnode191813* n, ttype191847* prev);
typedef struct {
N_NIMCALL_PTR(tnode191813*, ClPrc) (tcontext254019* c, tidtable191859 pt, tnode191813* n, void* ClEnv);
void* ClEnv;
} TY254114;
typedef struct {
N_NIMCALL_PTR(tsym191843*, ClPrc) (tcontext254019* c, tsym191843* fn, tidtable191859 pt, tlineinfo166527 info, void* ClEnv);
void* ClEnv;
} TY254120;
struct  tinstantiationpair254011  {
tsym191843* Genericsym;
tinstantiation191833* Inst;
};
struct  tcontext254019  {
  tpasscontext250003 Sup;
tsym191843* Module;
tscope191837* Currentscope;
tscope191837* Importtable;
tscope191837* Toplevelscope;
tproccon254009* P;
tsym191843* Friendmodule;
NI Instcounter;
tintset188047 Ambiguoussymbols;
NI Intypeclass;
NI Ingenericcontext;
NI Inunrolledcontext;
NI Incompilescontext;
NI Ingenericinst;
tsymseq191815* Converters;
tsymseq191815* Patterns;
tlinkedlist119023 Optionstack;
tidtable191859 Symmapping;
tlinkedlist119023 Libs;
TY254061 Semconstexpr;
TY254066 Semexpr;
TY254074 Semtryexpr;
TY254083 Semtryconstexpr;
TY254088 Semoperand;
TY254096 Semconstboolexpr;
TY254101 Semoverloadedcall;
TY254108 Semtypenode;
TY254114 Seminferredlambda;
TY254120 Semgenerateinstance;
tintset188047 Includedfiles;
tstrtable191817 Userpragmas;
tctx253037* Evalcontext;
tintset188047 Unknownidents;
TY254131* Generics;
NI Lastgenericidx;
NI Hloloopdetector;
};
struct  tproccon254009  {
tsym191843* Owner;
tsym191843* Resultsym;
NI Nestedloopcounter;
NI Nestedblockcounter;
NI Intrystmt;
tproccon254009* Next;
};
typedef NI TY23418[16];
struct  ttrunk188043  {
ttrunk188043* Next;
NI Key;
TY23418 Bits;
};
struct  tctx253037  {
  tpasscontext250003 Sup;
TY253229* Code;
TY167208* Debug;
tnode191813* Globals;
tnode191813* Constants;
ttypeseq191845* Types;
tnode191813* Currentexceptiona;
tnode191813* Currentexceptionb;
NI Exceptioninstr;
pprocHEX3Aobjecttype253216* Prc;
tsym191843* Module;
tnode191813* Callsite;
NU8 Mode;
NU8 Features;
NIM_BOOL Traceactive;
NI Loopiterations;
};
struct  tblock253023  {
tsym191843* Label;
TY253198* Fixups;
};
struct TY253223 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY253223 TY253220[256];
struct  pprocHEX3Aobjecttype253216  {
TY253217* Blocks;
tsym191843* Sym;
TY253220 Slots;
NI Maxslots;
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
struct ttrunkseq188045 {
  TGenericSeq Sup;
  ttrunk188043* data[SEQ_DECL_SIZE];
};
struct tidpairseq191857 {
  TGenericSeq Sup;
  tidpair191855 data[SEQ_DECL_SIZE];
};
struct TY254131 {
  TGenericSeq Sup;
  tinstantiationpair254011 data[SEQ_DECL_SIZE];
};
struct TY253229 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY167208 {
  TGenericSeq Sup;
  tlineinfo166527 data[SEQ_DECL_SIZE];
};
struct TY253198 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY253217 {
  TGenericSeq Sup;
  tblock253023 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, equalgenericparams_270007)(tnode191813* proca, tnode191813* procb);
static N_INLINE(NI, sonslen_192191)(tnode191813* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, internalerror_168591)(tlineinfo166527 info, NimStringDesc* errmsg);
N_NIMCALL(NIM_BOOL, sametypeornil_232151)(ttype191847* a, ttype191847* b, NU8 flags);
N_NIMCALL(NIM_BOOL, exprstructuralequivalent_225150)(tnode191813* a, tnode191813* b);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(tsym191843*, searchforprocold_270171)(tcontext254019* c, tscope191837* scope, tsym191843* fn);
N_NIMCALL(tsym191843*, initidentiter_200110)(tidentiter200106* ti, tstrtable191817 tab, tident170019* s);
N_NIMCALL(NIM_BOOL, isgenericroutine_197927)(tsym191843* s);
N_NIMCALL(tsym191843*, nextidentiter_200117)(tidentiter200106* ti, tstrtable191817 tab);
N_NIMCALL(NU8, equalparams_227066)(tnode191813* a, tnode191813* b);
N_NIMCALL(void, localerror_168571)(tlineinfo166527 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(tsym191843*, searchforprocnew_270296)(tcontext254019* c, tscope191837* scope, tsym191843* fn);
N_NIMCALL(NIM_BOOL, sametype_232139)(ttype191847* a, ttype191847* b, NU8 flags);
N_NIMCALL(tsym191843*, searchforproc_270341)(tcontext254019* c, tscope191837* scope, tsym191843* fn);
static NIM_CONST TY192025 TMP3443 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3444, "sons", 4);
STRING_LITERAL(TMP3446, "equalGenericParams", 18);
static NIM_CONST TY192025 TMP3447 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3448, "sym", 3);
NIM_CONST NU8 flags_270302 = 30;
extern TFrame* frameptr_13238;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13238;
	frameptr_13238 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13238 = (*frameptr_13238).prev;
}

static N_INLINE(NI, sonslen_192191)(tnode191813* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1300, "ast.nim");
	{
		nimln(1300, "ast.nim");
		if (((TMP3443[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3444));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1300, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(1301, "ast.nim");
		nimln(1301, "ast.nim");
		if (((TMP3443[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3444));
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

N_NIMCALL(NIM_BOOL, equalgenericparams_270007)(tnode191813* proca, tnode191813* procb) {
	NIM_BOOL result;
	NI i_270024;
	NI HEX3Atmp_270164;
	NI LOC7;
	NI TMP3445;
	NI res_270166;
	nimfr("equalGenericParams", "procfind.nim")
	result = 0;
	nimln(17, "procfind.nim");
	{
		NI LOC3;
		NI LOC4;
		nimln(17, "procfind.nim");
		nimln(17, "procfind.nim");
		nimln(17, "procfind.nim");
		LOC3 = 0;
		LOC3 = sonslen_192191(proca);
		nimln(17, "procfind.nim");
		LOC4 = 0;
		LOC4 = sonslen_192191(procb);
		if (!!((LOC3 == LOC4))) goto LA5;
		nimln(17, "procfind.nim");
		goto BeforeRet;
	}
	LA5: ;
	i_270024 = 0;
	HEX3Atmp_270164 = 0;
	nimln(18, "procfind.nim");
	nimln(18, "procfind.nim");
	nimln(18, "procfind.nim");
	LOC7 = 0;
	LOC7 = sonslen_192191(proca);
	TMP3445 = subInt(LOC7, 1);
	HEX3Atmp_270164 = (NI32)(TMP3445);
	nimln(1451, "system.nim");
	res_270166 = 0;
	nimln(1452, "system.nim");
	while (1) {
		tsym191843* a;
		tsym191843* b;
		nimln(1452, "system.nim");
		if (!(res_270166 <= HEX3Atmp_270164)) goto LA8;
		nimln(1451, "system.nim");
		i_270024 = res_270166;
		nimln(19, "procfind.nim");
		{
			nimln(19, "procfind.nim");
			nimln(19, "procfind.nim");
			if (((TMP3443[(*proca).Kind/8] &(1<<((*proca).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3444));
			if ((NU)(i_270024) >= (NU)((*proca).kindU.S6.Sons->Sup.len)) raiseIndexError();
			if (!!(((*(*proca).kindU.S6.Sons->data[i_270024]).Kind == ((NU8) 3)))) goto LA11;
			nimln(20, "procfind.nim");
			internalerror_168591((*proca).Info, ((NimStringDesc*) &TMP3446));
			nimln(21, "procfind.nim");
			goto BeforeRet;
		}
		LA11: ;
		nimln(22, "procfind.nim");
		{
			nimln(22, "procfind.nim");
			nimln(22, "procfind.nim");
			if (((TMP3443[(*procb).Kind/8] &(1<<((*procb).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3444));
			if ((NU)(i_270024) >= (NU)((*procb).kindU.S6.Sons->Sup.len)) raiseIndexError();
			if (!!(((*(*procb).kindU.S6.Sons->data[i_270024]).Kind == ((NU8) 3)))) goto LA15;
			nimln(23, "procfind.nim");
			internalerror_168591((*procb).Info, ((NimStringDesc*) &TMP3446));
			nimln(24, "procfind.nim");
			goto BeforeRet;
		}
		LA15: ;
		nimln(25, "procfind.nim");
		if (((TMP3443[(*proca).Kind/8] &(1<<((*proca).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3444));
		if ((NU)(i_270024) >= (NU)((*proca).kindU.S6.Sons->Sup.len)) raiseIndexError();
		if (!(((TMP3447[(*(*proca).kindU.S6.Sons->data[i_270024]).Kind/8] &(1<<((*(*proca).kindU.S6.Sons->data[i_270024]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3448));
		a = (*(*proca).kindU.S6.Sons->data[i_270024]).kindU.S4.Sym;
		nimln(26, "procfind.nim");
		if (((TMP3443[(*procb).Kind/8] &(1<<((*procb).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3444));
		if ((NU)(i_270024) >= (NU)((*procb).kindU.S6.Sons->Sup.len)) raiseIndexError();
		if (!(((TMP3447[(*(*procb).kindU.S6.Sons->data[i_270024]).Kind/8] &(1<<((*(*procb).kindU.S6.Sons->data[i_270024]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3448));
		b = (*(*procb).kindU.S6.Sons->data[i_270024]).kindU.S4.Sym;
		nimln(27, "procfind.nim");
		{
			NIM_BOOL LOC19;
			NIM_BOOL LOC21;
			nimln(27, "procfind.nim");
			LOC19 = 0;
			nimln(27, "procfind.nim");
			nimln(27, "procfind.nim");
			LOC19 = !(((*(*a).Name).Sup.Id == (*(*b).Name).Sup.Id));
			if (LOC19) goto LA20;
			nimln(28, "procfind.nim");
			nimln(28, "procfind.nim");
			LOC21 = 0;
			LOC21 = sametypeornil_232151((*a).Typ, (*b).Typ, 4);
			LOC19 = !(LOC21);
			LA20: ;
			if (!LOC19) goto LA22;
			nimln(28, "procfind.nim");
			goto BeforeRet;
		}
		LA22: ;
		nimln(29, "procfind.nim");
		{
			NIM_BOOL LOC26;
			nimln(29, "procfind.nim");
			LOC26 = 0;
			nimln(29, "procfind.nim");
			nimln(29, "procfind.nim");
			LOC26 = !(((*a).Ast == NIM_NIL));
			if (!(LOC26)) goto LA27;
			nimln(29, "procfind.nim");
			nimln(29, "procfind.nim");
			LOC26 = !(((*b).Ast == NIM_NIL));
			LA27: ;
			if (!LOC26) goto LA28;
			nimln(30, "procfind.nim");
			{
				NIM_BOOL LOC32;
				nimln(30, "procfind.nim");
				nimln(30, "procfind.nim");
				LOC32 = 0;
				LOC32 = exprstructuralequivalent_225150((*a).Ast, (*b).Ast);
				if (!!(LOC32)) goto LA33;
				nimln(30, "procfind.nim");
				goto BeforeRet;
			}
			LA33: ;
		}
		LA28: ;
		nimln(1454, "system.nim");
		res_270166 = addInt(res_270166, 1);
	} LA8: ;
	nimln(31, "procfind.nim");
	result = NIM_TRUE;
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(tsym191843*, searchforprocold_270171)(tcontext254019* c, tscope191837* scope, tsym191843* fn) {
	tsym191843* result;
	tidentiter200106 it;
	nimfr("searchForProcOld", "procfind.nim")
	result = 0;
	memset((void*)&it, 0, sizeof(it));
	nimln(38, "procfind.nim");
	result = initidentiter_200110(&it, (*scope).Symbols, (*fn).Name);
	nimln(39, "procfind.nim");
	{
		NIM_BOOL LOC3;
		nimln(39, "procfind.nim");
		LOC3 = 0;
		LOC3 = isgenericroutine_197927(fn);
		if (!LOC3) goto LA4;
		nimln(43, "procfind.nim");
		while (1) {
			nimln(43, "procfind.nim");
			nimln(43, "procfind.nim");
			if (!!((result == NIM_NIL))) goto LA6;
			nimln(44, "procfind.nim");
			{
				NIM_BOOL LOC9;
				tnode191813* genr;
				tnode191813* genf;
				nimln(44, "procfind.nim");
				LOC9 = 0;
				nimln(44, "procfind.nim");
				LOC9 = ((*result).Kind == (*fn).Kind);
				if (!(LOC9)) goto LA10;
				nimln(44, "procfind.nim");
				LOC9 = isgenericroutine_197927(result);
				LA10: ;
				if (!LOC9) goto LA11;
				nimln(45, "procfind.nim");
				if (((TMP3443[(*(*result).Ast).Kind/8] &(1<<((*(*result).Ast).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3444));
				if ((NU)(2) >= (NU)((*(*result).Ast).kindU.S6.Sons->Sup.len)) raiseIndexError();
				genr = (*(*result).Ast).kindU.S6.Sons->data[2];
				nimln(46, "procfind.nim");
				if (((TMP3443[(*(*fn).Ast).Kind/8] &(1<<((*(*fn).Ast).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3444));
				if ((NU)(2) >= (NU)((*(*fn).Ast).kindU.S6.Sons->Sup.len)) raiseIndexError();
				genf = (*(*fn).Ast).kindU.S6.Sons->data[2];
				nimln(47, "procfind.nim");
				{
					NIM_BOOL LOC15;
					NIM_BOOL LOC16;
					nimln(49, "procfind.nim");
					LOC15 = 0;
					nimln(47, "procfind.nim");
					LOC16 = 0;
					nimln(47, "procfind.nim");
					LOC16 = exprstructuralequivalent_225150(genr, genf);
					if (!(LOC16)) goto LA17;
					nimln(48, "procfind.nim");
					if (((TMP3443[(*(*result).Ast).Kind/8] &(1<<((*(*result).Ast).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3444));
					if ((NU)(3) >= (NU)((*(*result).Ast).kindU.S6.Sons->Sup.len)) raiseIndexError();
					if (((TMP3443[(*(*fn).Ast).Kind/8] &(1<<((*(*fn).Ast).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3444));
					if ((NU)(3) >= (NU)((*(*fn).Ast).kindU.S6.Sons->Sup.len)) raiseIndexError();
					LOC16 = exprstructuralequivalent_225150((*(*result).Ast).kindU.S6.Sons->data[3], (*(*fn).Ast).kindU.S6.Sons->data[3]);
					LA17: ;
					LOC15 = LOC16;
					if (!(LOC15)) goto LA18;
					nimln(50, "procfind.nim");
					LOC15 = equalgenericparams_270007(genr, genf);
					LA18: ;
					if (!LOC15) goto LA19;
					nimln(51, "procfind.nim");
					goto BeforeRet;
				}
				LA19: ;
			}
			LA11: ;
			nimln(52, "procfind.nim");
			result = nextidentiter_200117(&it, (*scope).Symbols);
		} LA6: ;
	}
	goto LA1;
	LA4: ;
	{
		nimln(54, "procfind.nim");
		while (1) {
			nimln(54, "procfind.nim");
			nimln(54, "procfind.nim");
			if (!!((result == NIM_NIL))) goto LA22;
			nimln(55, "procfind.nim");
			{
				NIM_BOOL LOC25;
				NIM_BOOL LOC27;
				NU8 LOC30;
				nimln(55, "procfind.nim");
				LOC25 = 0;
				nimln(55, "procfind.nim");
				LOC25 = ((*result).Kind == (*fn).Kind);
				if (!(LOC25)) goto LA26;
				nimln(55, "procfind.nim");
				nimln(55, "procfind.nim");
				LOC27 = 0;
				LOC27 = isgenericroutine_197927(result);
				LOC25 = !(LOC27);
				LA26: ;
				if (!LOC25) goto LA28;
				nimln(56, "procfind.nim");
				nimln(56, "procfind.nim");
				LOC30 = 0;
				LOC30 = equalparams_227066((*(*result).Typ).N, (*(*fn).Typ).N);
				switch (LOC30) {
				case ((NU8) 1):
				{
					nimln(58, "procfind.nim");
					goto BeforeRet;
				}
				break;
				case ((NU8) 2):
				{
					nimln(60, "procfind.nim");
					localerror_168571((*fn).Info, ((NU16) 66), (*(*fn).Name).S);
					nimln(61, "procfind.nim");
					goto BeforeRet;
				}
				break;
				case ((NU8) 0):
				{
				}
				break;
				}
			}
			LA28: ;
			nimln(64, "procfind.nim");
			result = nextidentiter_200117(&it, (*scope).Symbols);
		} LA22: ;
	}
	LA1: ;
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(tsym191843*, searchforprocnew_270296)(tcontext254019* c, tscope191837* scope, tsym191843* fn) {
	tsym191843* result;
	tidentiter200106 it;
	nimfr("searchForProcNew", "procfind.nim")
	result = 0;
	memset((void*)&it, 0, sizeof(it));
	nimln(71, "procfind.nim");
	result = initidentiter_200110(&it, (*scope).Symbols, (*fn).Name);
	nimln(72, "procfind.nim");
	while (1) {
		nimln(72, "procfind.nim");
		nimln(72, "procfind.nim");
		if (!!((result == NIM_NIL))) goto LA1;
		nimln(73, "procfind.nim");
		{
			NIM_BOOL LOC4;
			nimln(73, "procfind.nim");
			LOC4 = 0;
			nimln(73, "procfind.nim");
			LOC4 = ((520192 &(1<<(((*result).Kind)&31)))!=0);
			if (!(LOC4)) goto LA5;
			nimln(74, "procfind.nim");
			LOC4 = sametype_232139((*result).Typ, (*fn).Typ, 30);
			LA5: ;
			if (!LOC4) goto LA6;
			nimln(74, "procfind.nim");
			goto BeforeRet;
		}
		LA6: ;
		nimln(76, "procfind.nim");
		result = nextidentiter_200117(&it, (*scope).Symbols);
	} LA1: ;
	nimln(78, "procfind.nim");
	nimln(78, "procfind.nim");
	result = NIM_NIL;
	goto BeforeRet;
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(tsym191843*, searchforproc_270341)(tcontext254019* c, tscope191837* scope, tsym191843* fn) {
	tsym191843* result;
	nimfr("searchForProc", "procfind.nim")
	result = 0;
	nimln(81, "procfind.nim");
	result = searchforprocnew_270296(c, scope, fn);
	popFrame();
	return result;
}
N_NOINLINE(void, procfindInit)(void) {
	nimfr("procfind", "procfind.nim")
	popFrame();
}

N_NOINLINE(void, procfindDatInit)(void) {
}

