/* Generated by Nimrod Compiler v0.9.5 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tnode191813 tnode191813;
typedef struct templctx395010 templctx395010;
typedef struct tsym191843 tsym191843;
typedef struct tidtable191859 tidtable191859;
typedef struct tidpairseq191857 tidpairseq191857;
typedef struct tidpair191855 tidpair191855;
typedef struct tidobj170013 tidobj170013;
typedef struct TNimObject TNimObject;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttype191847 ttype191847;
typedef struct tlineinfo166527 tlineinfo166527;
typedef struct NimStringDesc NimStringDesc;
typedef struct tident170019 tident170019;
typedef struct tnodeseq191807 tnodeseq191807;
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
typedef struct TY131008 TY131008;
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
typedef struct TY191932 TY191932;
typedef struct tlistentry119017 tlistentry119017;
typedef struct tbasechunk23436 tbasechunk23436;
typedef struct tfreecell23428 tfreecell23428;
struct  tidpair191855  {
tidobj170013* Key;
TNimObject* Val;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  tidtable191859  {
NI Counter;
tidpairseq191857* Data;
};
struct  templctx395010  {
tsym191843* Owner;
tsym191843* Gensymowner;
NIM_BOOL Instlines;
tidtable191859 Mapping;
};
struct  tlineinfo166527  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
struct TY131008 {
NimStringDesc* Field0;
NI Field1;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct tidpairseq191857 {
  TGenericSeq Sup;
  tidpair191855 data[SEQ_DECL_SIZE];
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
N_NIMCALL(tnode191813*, copynode_395016)(templctx395010* ctx, tnode191813* a, tnode191813* b);
N_NIMCALL(tnode191813*, copynode_192243)(tnode191813* src);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, evaltemplateaux_395024)(tnode191813* templ, tnode191813* actual, templctx395010* c, tnode191813* result);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, len_192274)(tnode191813* n);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(void, add_192400)(tnode191813* father, tnode191813* son);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(tnode191813*, copytree_192247)(tnode191813* src);
N_NIMCALL(void, internalerror_168606)(NimStringDesc* errmsg);
N_NIMCALL(NimStringDesc*, HEX24_168714)(TY131008 x_168718);
N_NIMCALL(TNimObject*, idtableget_200137)(tidtable191859 t, tidobj170013* key);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
N_NIMCALL(tsym191843*, copysym_192157)(tsym191843* s, NIM_BOOL keepid);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell41888*, usrtocell_45243)(void* usr);
static N_INLINE(void, rtladdzct_46802)(tcell41888* c);
N_NOINLINE(void, addzct_45218)(tcellseq41904* s, tcell41888* c);
N_NIMCALL(void, idtableput_200147)(tidtable191859* t, tidobj170013* key, TNimObject* val);
N_NIMCALL(tnode191813*, newsymnode_193723)(tsym191843* sym, tlineinfo166527 info);
static N_INLINE(NI, sonslen_192191)(tnode191813* n);
N_NIMCALL(tnode191813*, evaltemplateargs_395174)(tnode191813* n, tsym191843* s);
static N_INLINE(NI, sonslen_192195)(ttype191847* n);
N_NIMCALL(void, globalerror_168558)(tlineinfo166527 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(tnode191813*, newnodei_192109)(NU8 kind, tlineinfo166527 info);
N_NIMCALL(void, localerror_168571)(tlineinfo166527 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, addson_192217)(tnode191813* father, tnode191813* son);
N_NIMCALL(tnode191813*, evaltemplate_395275)(tnode191813* n, tsym191843* tmpl, tsym191843* gensymowner);
N_NIMCALL(void, initidtable_192130)(tidtable191859* x);
N_NIMCALL(tnode191813*, getbody_243244)(tsym191843* s);
static N_INLINE(NIM_BOOL, isatom_198186)(tnode191813* n);
N_NIMCALL(NimStringDesc*, rendertree_215051)(tnode191813* n, NU8 renderflags);
static N_INLINE(NI, safelen_192330)(tnode191813* n);
static NIM_CONST TY192025 TMP5468 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP5469, "sym", 3);
static NIM_CONST TY192025 TMP5470 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP5471, "sons", 4);
STRING_LITERAL(TMP5473, "evaltempl.nim", 13);
NIM_CONST TY131008 TMP5472 = {((NimStringDesc*) &TMP5473),
39}
;
STRING_LITERAL(TMP5475, "", 0);
extern TFrame* frameptr_13238;
extern TNimType NTI191843; /* TSym */
extern tgcheap43816 gch_43844;
NI evaltemplatecounter_395273;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13238;
	frameptr_13238 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13238 = (*frameptr_13238).prev;
}

N_NIMCALL(tnode191813*, copynode_395016)(templctx395010* ctx, tnode191813* a, tnode191813* b) {
	tnode191813* result;
	nimfr("copyNode", "evaltempl.nim")
	result = 0;
	nimln(24, "evaltempl.nim");
	result = copynode_192243(a);
	nimln(25, "evaltempl.nim");
	{
		if (!(*ctx).Instlines) goto LA3;
		nimln(25, "evaltempl.nim");
		(*result).Info = (*b).Info;
	}
	LA3: ;
	popFrame();
	return result;
}

static N_INLINE(NI, len_192274)(tnode191813* n) {
	NI result;
	nimfr("len", "ast.nim")
	result = 0;
	nimln(957, "ast.nim");
	{
		nimln(957, "ast.nim");
		if (((TMP5470[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5471));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(957, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(958, "ast.nim");
		nimln(958, "ast.nim");
		if (((TMP5470[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5471));
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

static N_INLINE(NI, sonslen_192191)(tnode191813* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1300, "ast.nim");
	{
		nimln(1300, "ast.nim");
		if (((TMP5470[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5471));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1300, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(1301, "ast.nim");
		nimln(1301, "ast.nim");
		if (((TMP5470[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5471));
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(void, evaltemplateaux_395024)(tnode191813* templ, tnode191813* actual, templctx395010* c, tnode191813* result) {
	nimfr("evalTemplateAux", "evaltempl.nim")
	nimln(28, "evaltempl.nim");
	switch ((*templ).Kind) {
	case ((NU8) 3):
	{
		tsym191843* s;
		nimln(30, "evaltempl.nim");
		if (!(((TMP5468[(*templ).Kind/8] &(1<<((*templ).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP5469));
		s = (*templ).kindU.S4.Sym;
		nimln(31, "evaltempl.nim");
		{
			nimln(31, "evaltempl.nim");
			if (!((*(*s).Owner).Sup.Id == (*(*c).Owner).Sup.Id)) goto LA4;
			nimln(32, "evaltempl.nim");
			{
				tnode191813* x;
				nimln(32, "evaltempl.nim");
				if (!((*s).Kind == ((NU8) 3))) goto LA8;
				nimln(33, "evaltempl.nim");
				if (((TMP5470[(*actual).Kind/8] &(1<<((*actual).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5471));
				if ((NU)((*s).Position) >= (NU)((*actual).kindU.S6.Sons->Sup.len)) raiseIndexError();
				x = (*actual).kindU.S6.Sons->data[(*s).Position];
				nimln(34, "evaltempl.nim");
				{
					tnode191813* y_395079;
					NI i_395161;
					NI HEX3Atmp_395163;
					NI LOC14;
					NI res_395165;
					nimln(34, "evaltempl.nim");
					if (!((*x).Kind == ((NU8) 150))) goto LA12;
					y_395079 = 0;
					i_395161 = 0;
					HEX3Atmp_395163 = 0;
					nimln(1521, "ast.nim");
					nimln(1521, "ast.nim");
					nimln(1521, "ast.nim");
					LOC14 = 0;
					LOC14 = len_192274(x);
					HEX3Atmp_395163 = subInt(LOC14, 1);
					nimln(1458, "system.nim");
					res_395165 = 0;
					nimln(1459, "system.nim");
					while (1) {
						nimln(1459, "system.nim");
						if (!(res_395165 <= HEX3Atmp_395163)) goto LA15;
						nimln(1458, "system.nim");
						i_395161 = res_395165;
						nimln(1521, "ast.nim");
						if (((TMP5470[(*x).Kind/8] &(1<<((*x).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5471));
						if ((NU)(i_395161) >= (NU)((*x).kindU.S6.Sons->Sup.len)) raiseIndexError();
						y_395079 = (*x).kindU.S6.Sons->data[i_395161];
						nimln(35, "evaltempl.nim");
						add_192400(result, y_395079);
						nimln(1461, "system.nim");
						res_395165 = addInt(res_395165, 1);
					} LA15: ;
				}
				goto LA10;
				LA12: ;
				{
					tnode191813* LOC17;
					nimln(37, "evaltempl.nim");
					nimln(37, "evaltempl.nim");
					LOC17 = 0;
					LOC17 = copytree_192247(x);
					add_192400(result, LOC17);
				}
				LA10: ;
			}
			goto LA6;
			LA8: ;
			{
				tsym191843* x;
				TNimObject* LOC24;
				tlineinfo166527 LOC29;
				tnode191813* LOC35;
				nimln(849, "msgs.nim");
				{
					NimStringDesc* LOC23;
					nimln(849, "msgs.nim");
					nimln(39, "evaltempl.nim");
					if (!!((((*s).Flags &(1<<((((NU8) 31))&31)))!=0))) goto LA21;
					nimln(849, "msgs.nim");
					nimln(849, "msgs.nim");
					LOC23 = 0;
					LOC23 = HEX24_168714(TMP5472);
					internalerror_168606(LOC23);
				}
				LA21: ;
				nimln(40, "evaltempl.nim");
				nimln(40, "evaltempl.nim");
				LOC24 = 0;
				LOC24 = idtableget_200137((*c).Mapping, &s->Sup);
				if (LOC24) chckObj((*LOC24).m_type, (&NTI191843));
				x = ((tsym191843*) (LOC24));
				nimln(41, "evaltempl.nim");
				{
					nimln(41, "evaltempl.nim");
					if (!(x == NIM_NIL)) goto LA27;
					nimln(42, "evaltempl.nim");
					x = copysym_192157(s, NIM_FALSE);
					nimln(43, "evaltempl.nim");
					asgnRefNoCycle((void**) &(*x).Owner, (*c).Gensymowner);
					nimln(44, "evaltempl.nim");
					idtableput_200147(&(*c).Mapping, &s->Sup, &x->Sup.Sup);
				}
				LA27: ;
				nimln(45, "evaltempl.nim");
				nimln(45, "evaltempl.nim");
				nimln(45, "evaltempl.nim");
				{
					if (!(*c).Instlines) goto LA32;
					LOC29 = (*actual).Info;
				}
				goto LA30;
				LA32: ;
				{
					LOC29 = (*templ).Info;
				}
				LA30: ;
				LOC35 = 0;
				LOC35 = newsymnode_193723(x, LOC29);
				add_192400(result, LOC35);
			}
			LA6: ;
		}
		goto LA2;
		LA4: ;
		{
			tnode191813* LOC37;
			nimln(47, "evaltempl.nim");
			nimln(47, "evaltempl.nim");
			LOC37 = 0;
			LOC37 = copynode_395016(&(*c), templ, actual);
			add_192400(result, LOC37);
		}
		LA2: ;
	}
	break;
	case ((NU8) 0) ... ((NU8) 2):
	case ((NU8) 4) ... ((NU8) 23):
	{
		tnode191813* LOC39;
		nimln(49, "evaltempl.nim");
		nimln(49, "evaltempl.nim");
		LOC39 = 0;
		LOC39 = copynode_395016(&(*c), templ, actual);
		add_192400(result, LOC39);
	}
	break;
	default:
	{
		tnode191813* res;
		NI i_395145;
		NI HEX3Atmp_395166;
		NI LOC41;
		NI TMP5474;
		NI res_395168;
		nimln(51, "evaltempl.nim");
		res = copynode_395016(&(*c), templ, actual);
		i_395145 = 0;
		HEX3Atmp_395166 = 0;
		nimln(52, "evaltempl.nim");
		nimln(52, "evaltempl.nim");
		nimln(52, "evaltempl.nim");
		LOC41 = 0;
		LOC41 = sonslen_192191(templ);
		TMP5474 = subInt(LOC41, 1);
		HEX3Atmp_395166 = (NI32)(TMP5474);
		nimln(1451, "system.nim");
		res_395168 = 0;
		nimln(1452, "system.nim");
		while (1) {
			nimln(1452, "system.nim");
			if (!(res_395168 <= HEX3Atmp_395166)) goto LA42;
			nimln(1451, "system.nim");
			i_395145 = res_395168;
			nimln(53, "evaltempl.nim");
			if (((TMP5470[(*templ).Kind/8] &(1<<((*templ).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5471));
			if ((NU)(i_395145) >= (NU)((*templ).kindU.S6.Sons->Sup.len)) raiseIndexError();
			evaltemplateaux_395024((*templ).kindU.S6.Sons->data[i_395145], actual, c, res);
			nimln(1454, "system.nim");
			res_395168 = addInt(res_395168, 1);
		} LA42: ;
		nimln(54, "evaltempl.nim");
		add_192400(result, res);
	}
	break;
	}
	popFrame();
}

static N_INLINE(NI, sonslen_192195)(ttype191847* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1286, "ast.nim");
	{
		nimln(1286, "ast.nim");
		if (!(*n).Sons == 0) goto LA3;
		nimln(1286, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(1287, "ast.nim");
		nimln(1287, "ast.nim");
		result = (*n).Sons->Sup.len;
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(tnode191813*, evaltemplateargs_395174)(tnode191813* n, tsym191843* s) {
	tnode191813* result;
	NI a;
	NI f;
	NI i_395194;
	NI HEX3Atmp_395266;
	NI TMP5476;
	NI res_395268;
	nimfr("evalTemplateArgs", "evaltempl.nim")
	result = 0;
	a = 0;
	nimln(60, "evaltempl.nim");
	switch ((*n).Kind) {
	case ((NU8) 27):
	case ((NU8) 29):
	case ((NU8) 30):
	case ((NU8) 31):
	case ((NU8) 26):
	case ((NU8) 28):
	{
		nimln(62, "evaltempl.nim");
		a = sonslen_192191(n);
	}
	break;
	default:
	{
		nimln(63, "evaltempl.nim");
		a = 0;
	}
	break;
	}
	nimln(64, "evaltempl.nim");
	f = sonslen_192195((*s).Typ);
	nimln(65, "evaltempl.nim");
	{
		nimln(65, "evaltempl.nim");
		if (!(f < a)) goto LA5;
		nimln(65, "evaltempl.nim");
		globalerror_168558((*n).Info, ((NU16) 133), ((NimStringDesc*) &TMP5475));
	}
	LA5: ;
	nimln(67, "evaltempl.nim");
	result = newnodei_192109(((NU8) 150), (*n).Info);
	i_395194 = 0;
	HEX3Atmp_395266 = 0;
	nimln(68, "evaltempl.nim");
	nimln(68, "evaltempl.nim");
	TMP5476 = subInt(f, 1);
	HEX3Atmp_395266 = (NI32)(TMP5476);
	nimln(1451, "system.nim");
	res_395268 = 1;
	nimln(1452, "system.nim");
	while (1) {
		tnode191813* arg;
		nimln(1452, "system.nim");
		if (!(res_395268 <= HEX3Atmp_395266)) goto LA7;
		nimln(1451, "system.nim");
		i_395194 = res_395268;
		nimln(69, "evaltempl.nim");
		nimln(69, "evaltempl.nim");
		{
			nimln(69, "evaltempl.nim");
			if (!(i_395194 < a)) goto LA10;
			if (((TMP5470[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5471));
			if ((NU)(i_395194) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			arg = (*n).kindU.S6.Sons->data[i_395194];
		}
		goto LA8;
		LA10: ;
		{
			nimln(69, "evaltempl.nim");
			if (((TMP5470[(*(*(*s).Typ).N).Kind/8] &(1<<((*(*(*s).Typ).N).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5471));
			if ((NU)(i_395194) >= (NU)((*(*(*s).Typ).N).kindU.S6.Sons->Sup.len)) raiseIndexError();
			if (!(((TMP5468[(*(*(*(*s).Typ).N).kindU.S6.Sons->data[i_395194]).Kind/8] &(1<<((*(*(*(*s).Typ).N).kindU.S6.Sons->data[i_395194]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP5469));
			arg = copytree_192247((*(*(*(*(*s).Typ).N).kindU.S6.Sons->data[i_395194]).kindU.S4.Sym).Ast);
		}
		LA8: ;
		nimln(70, "evaltempl.nim");
		{
			NIM_BOOL LOC15;
			nimln(70, "evaltempl.nim");
			LOC15 = 0;
			nimln(70, "evaltempl.nim");
			LOC15 = (arg == NIM_NIL);
			if (LOC15) goto LA16;
			nimln(70, "evaltempl.nim");
			LOC15 = ((*arg).Kind == ((NU8) 1));
			LA16: ;
			if (!LOC15) goto LA17;
			nimln(71, "evaltempl.nim");
			localerror_168571((*n).Info, ((NU16) 133), ((NimStringDesc*) &TMP5475));
		}
		LA17: ;
		nimln(72, "evaltempl.nim");
		addson_192217(result, arg);
		nimln(1454, "system.nim");
		res_395268 = addInt(res_395268, 1);
	} LA7: ;
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, isatom_198186)(tnode191813* n) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	nimfr("isAtom", "ast.nim")
	result = 0;
	nimln(1527, "ast.nim");
	nimln(1527, "ast.nim");
	LOC1 = 0;
	nimln(1527, "ast.nim");
	LOC1 = (((NU8) 0) <= (*n).Kind);
	if (!(LOC1)) goto LA2;
	nimln(1527, "ast.nim");
	LOC1 = ((*n).Kind <= ((NU8) 23));
	LA2: ;
	result = LOC1;
	popFrame();
	return result;
}

static N_INLINE(NI, safelen_192330)(tnode191813* n) {
	NI result;
	nimfr("safeLen", "ast.nim")
	result = 0;
	nimln(962, "ast.nim");
	{
		NIM_BOOL LOC3;
		nimln(962, "ast.nim");
		LOC3 = 0;
		nimln(962, "ast.nim");
		LOC3 = ((*n).Kind >= ((NU8) 0) && (*n).Kind <= ((NU8) 23));
		if (LOC3) goto LA4;
		nimln(962, "ast.nim");
		if (((TMP5470[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5471));
		LOC3 = (*n).kindU.S6.Sons == 0;
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(962, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA5: ;
	{
		nimln(963, "ast.nim");
		nimln(963, "ast.nim");
		if (((TMP5470[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5471));
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(tnode191813*, evaltemplate_395275)(tnode191813* n, tsym191843* tmpl, tsym191843* gensymowner) {
	tnode191813* result;
	tnode191813* args;
	templctx395010 ctx;
	tnode191813* body;
	nimfr("evalTemplate", "evaltempl.nim")
	result = 0;
	nimln(78, "evaltempl.nim");
	evaltemplatecounter_395273 = addInt(evaltemplatecounter_395273, 1);
	nimln(79, "evaltempl.nim");
	{
		nimln(79, "evaltempl.nim");
		if (!(100 < evaltemplatecounter_395273)) goto LA3;
		nimln(80, "evaltempl.nim");
		globalerror_168558((*n).Info, ((NU16) 183), ((NimStringDesc*) &TMP5475));
		nimln(81, "evaltempl.nim");
		result = n;
	}
	LA3: ;
	nimln(84, "evaltempl.nim");
	args = evaltemplateargs_395174(n, tmpl);
	memset((void*)&ctx, 0, sizeof(ctx));
	nimln(86, "evaltempl.nim");
	ctx.Owner = tmpl;
	nimln(87, "evaltempl.nim");
	ctx.Gensymowner = gensymowner;
	nimln(88, "evaltempl.nim");
	initidtable_192130(&ctx.Mapping);
	nimln(90, "evaltempl.nim");
	body = getbody_243244(tmpl);
	nimln(91, "evaltempl.nim");
	{
		NIM_BOOL LOC7;
		nimln(91, "evaltempl.nim");
		LOC7 = 0;
		LOC7 = isatom_198186(body);
		if (!LOC7) goto LA8;
		nimln(92, "evaltempl.nim");
		result = newnodei_192109(((NU8) 37), (*body).Info);
		nimln(93, "evaltempl.nim");
		evaltemplateaux_395024(body, args, &ctx, result);
		nimln(94, "evaltempl.nim");
		{
			NI LOC12;
			nimln(94, "evaltempl.nim");
			nimln(94, "evaltempl.nim");
			LOC12 = 0;
			LOC12 = len_192274(result);
			if (!(LOC12 == 1)) goto LA13;
			nimln(94, "evaltempl.nim");
			if (((TMP5470[(*result).Kind/8] &(1<<((*result).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5471));
			if ((NU)(0) >= (NU)((*result).kindU.S6.Sons->Sup.len)) raiseIndexError();
			result = (*result).kindU.S6.Sons->data[0];
		}
		goto LA10;
		LA13: ;
		{
			NimStringDesc* LOC16;
			nimln(96, "evaltempl.nim");
			nimln(97, "evaltempl.nim");
			LOC16 = 0;
			LOC16 = rendertree_215051(result, 4);
			globalerror_168558((*result).Info, ((NU16) 1), LOC16);
		}
		LA10: ;
	}
	goto LA5;
	LA8: ;
	{
		NI i_395345;
		NI HEX3Atmp_395378;
		NI LOC22;
		NI TMP5477;
		NI res_395380;
		nimln(99, "evaltempl.nim");
		result = copynode_192243(body);
		nimln(100, "evaltempl.nim");
		nimln(100, "evaltempl.nim");
		nimln(100, "evaltempl.nim");
		ctx.Instlines = !(((*body).Kind == ((NU8) 114) || (*body).Kind == ((NU8) 125) || (*body).Kind == ((NU8) 111) || (*body).Kind == ((NU8) 126)));
		nimln(102, "evaltempl.nim");
		{
			if (!ctx.Instlines) goto LA20;
			nimln(102, "evaltempl.nim");
			(*result).Info = (*n).Info;
		}
		LA20: ;
		i_395345 = 0;
		HEX3Atmp_395378 = 0;
		nimln(103, "evaltempl.nim");
		nimln(103, "evaltempl.nim");
		nimln(103, "evaltempl.nim");
		LOC22 = 0;
		LOC22 = safelen_192330(body);
		TMP5477 = subInt(LOC22, 1);
		HEX3Atmp_395378 = (NI32)(TMP5477);
		nimln(1451, "system.nim");
		res_395380 = 0;
		nimln(1452, "system.nim");
		while (1) {
			nimln(1452, "system.nim");
			if (!(res_395380 <= HEX3Atmp_395378)) goto LA23;
			nimln(1451, "system.nim");
			i_395345 = res_395380;
			nimln(104, "evaltempl.nim");
			if (((TMP5470[(*body).Kind/8] &(1<<((*body).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5471));
			if ((NU)(i_395345) >= (NU)((*body).kindU.S6.Sons->Sup.len)) raiseIndexError();
			evaltemplateaux_395024((*body).kindU.S6.Sons->data[i_395345], args, &ctx, result);
			nimln(1454, "system.nim");
			res_395380 = addInt(res_395380, 1);
		} LA23: ;
	}
	LA5: ;
	nimln(106, "evaltempl.nim");
	evaltemplatecounter_395273 = subInt(evaltemplatecounter_395273, 1);
	popFrame();
	return result;
}
N_NOINLINE(void, evaltemplInit)(void) {
	nimfr("evaltempl", "evaltempl.nim")
	nimln(74, "evaltempl.nim");
	evaltemplatecounter_395273 = 0;
	popFrame();
}

N_NOINLINE(void, evaltemplDatInit)(void) {
}

