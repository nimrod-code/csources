/* Generated by Nimrod Compiler v0.9.5 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct tsym191843 tsym191843;
typedef struct tnode191813 tnode191813;
typedef struct ttype191847 ttype191847;
typedef struct tlineinfo166527 tlineinfo166527;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tident170019 tident170019;
typedef struct tnodeseq191807 tnodeseq191807;
typedef struct tidobj170013 tidobj170013;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq191845 ttypeseq191845;
typedef struct tloc191827 tloc191827;
typedef struct trope148007 trope148007;
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
typedef struct tsymseq191815 tsymseq191815;
typedef struct tlib191831 tlib191831;
typedef struct tbasechunk23436 tbasechunk23436;
typedef struct tfreecell23428 tfreecell23428;
typedef struct TY191932 TY191932;
typedef struct tlistentry119017 tlistentry119017;
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
struct  tstrtable191817  {
NI Counter;
tsymseq191815* Data;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  trope148007  {
  TNimObject Sup;
trope148007* Left;
trope148007* Right;
NI Length;
NimStringDesc* Data;
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
struct  tfreecell23428  {
tfreecell23428* Next;
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
N_NIMCALL(tsym191843*, ithfield_420007)(tnode191813* n, NI field);
static N_INLINE(NI, sonslen_192191)(tnode191813* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, internalerror_168591)(tlineinfo166527 info, NimStringDesc* errmsg);
static N_INLINE(tnode191813*, lastson_192199)(tnode191813* n);
N_NIMCALL(void, annotatetype_420194)(tnode191813* n, ttype191847* t);
N_NIMCALL(ttype191847*, skiptypes_195793)(ttype191847* t, NU64 kinds);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell41890*, usrtocell_45243)(void* usr);
static N_INLINE(void, rtladdzct_46802)(tcell41890* c);
N_NOINLINE(void, addzct_45218)(tcellseq41906* s, tcell41890* c);
static N_INLINE(NI, len_192274)(tnode191813* n);
N_NIMCALL(void, globalerror_168565)(tlineinfo166527 info, NimStringDesc* arg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NI, len_195569)(ttype191847* n);
N_NIMCALL(ttype191847*, elemtype_227559)(ttype191847* t);
static NIM_CONST TY192025 TMP5677 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP5678, "sons", 4);
STRING_LITERAL(TMP5681, "ithField", 8);
STRING_LITERAL(TMP5686, "ithField(record case branch)", 28);
static NIM_CONST TY192025 TMP5687 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP5688, "sym", 3);
STRING_LITERAL(TMP5689, "invalid field at index ", 23);
STRING_LITERAL(TMP5690, "() must have an object or tuple type", 36);
STRING_LITERAL(TMP5691, "[] must have some form of array type", 36);
STRING_LITERAL(TMP5692, "{} must have the set type", 25);
STRING_LITERAL(TMP5693, "float literal must have some float type", 39);
STRING_LITERAL(TMP5694, "integer literal must have some int type", 39);
STRING_LITERAL(TMP5695, "string literal must be of some string type", 42);
STRING_LITERAL(TMP5696, "nil literal must be of some pointer type", 40);
extern TFrame* frameptr_13238;
extern tgcheap43816 gch_43844;

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
		if (((TMP5677[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5678));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1300, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(1301, "ast.nim");
		nimln(1301, "ast.nim");
		if (((TMP5677[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5678));
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

static N_INLINE(tnode191813*, lastson_192199)(tnode191813* n) {
	tnode191813* result;
	NI LOC1;
	NI TMP5684;
	nimfr("lastSon", "ast.nim")
	result = 0;
	nimln(1420, "ast.nim");
	if (((TMP5677[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5678));
	nimln(1420, "ast.nim");
	nimln(1420, "ast.nim");
	LOC1 = 0;
	LOC1 = sonslen_192191(n);
	TMP5684 = subInt(LOC1, 1);
	if ((NU)((NI64)(TMP5684)) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
	result = (*n).kindU.S6.Sons->data[(NI64)(TMP5684)];
	popFrame();
	return result;
}

N_NIMCALL(tsym191843*, ithfield_420007)(tnode191813* n, NI field) {
	tsym191843* result;
	nimfr("ithField", "semmacrosanity.nim")
	result = 0;
	nimln(16, "semmacrosanity.nim");
	result = NIM_NIL;
	nimln(17, "semmacrosanity.nim");
	switch ((*n).Kind) {
	case ((NU8) 136):
	{
		NI i_420024;
		NI HEX3Atmp_420182;
		NI LOC2;
		NI TMP5679;
		NI res_420184;
		i_420024 = 0;
		HEX3Atmp_420182 = 0;
		nimln(19, "semmacrosanity.nim");
		nimln(19, "semmacrosanity.nim");
		nimln(19, "semmacrosanity.nim");
		LOC2 = 0;
		LOC2 = sonslen_192191(n);
		TMP5679 = subInt(LOC2, 1);
		HEX3Atmp_420182 = (NI64)(TMP5679);
		nimln(1451, "system.nim");
		res_420184 = 0;
		nimln(1452, "system.nim");
		while (1) {
			NI TMP5680;
			nimln(1452, "system.nim");
			if (!(res_420184 <= HEX3Atmp_420182)) goto LA3;
			nimln(1451, "system.nim");
			i_420024 = res_420184;
			nimln(20, "semmacrosanity.nim");
			if (((TMP5677[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5678));
			if ((NU)(i_420024) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			nimln(20, "semmacrosanity.nim");
			TMP5680 = subInt(field, i_420024);
			result = ithfield_420007((*n).kindU.S6.Sons->data[i_420024], (NI64)(TMP5680));
			nimln(21, "semmacrosanity.nim");
			{
				nimln(21, "semmacrosanity.nim");
				nimln(21, "semmacrosanity.nim");
				if (!!((result == NIM_NIL))) goto LA6;
				nimln(21, "semmacrosanity.nim");
				goto BeforeRet;
			}
			LA6: ;
			nimln(1454, "system.nim");
			res_420184 = addInt(res_420184, 1);
		} LA3: ;
	}
	break;
	case ((NU8) 137):
	{
		NI TMP5682;
		NI i_420122;
		NI HEX3Atmp_420186;
		NI LOC17;
		NI TMP5683;
		NI res_420188;
		nimln(23, "semmacrosanity.nim");
		{
			nimln(23, "semmacrosanity.nim");
			nimln(23, "semmacrosanity.nim");
			if (((TMP5677[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5678));
			if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			if (!!(((*(*n).kindU.S6.Sons->data[0]).Kind == ((NU8) 3)))) goto LA11;
			nimln(23, "semmacrosanity.nim");
			internalerror_168591((*n).Info, ((NimStringDesc*) &TMP5681));
		}
		LA11: ;
		nimln(24, "semmacrosanity.nim");
		if (((TMP5677[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5678));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		nimln(24, "semmacrosanity.nim");
		TMP5682 = subInt(field, 1);
		result = ithfield_420007((*n).kindU.S6.Sons->data[0], (NI64)(TMP5682));
		nimln(25, "semmacrosanity.nim");
		{
			nimln(25, "semmacrosanity.nim");
			nimln(25, "semmacrosanity.nim");
			if (!!((result == NIM_NIL))) goto LA15;
			nimln(25, "semmacrosanity.nim");
			goto BeforeRet;
		}
		LA15: ;
		i_420122 = 0;
		HEX3Atmp_420186 = 0;
		nimln(26, "semmacrosanity.nim");
		nimln(26, "semmacrosanity.nim");
		nimln(26, "semmacrosanity.nim");
		LOC17 = 0;
		LOC17 = sonslen_192191(n);
		TMP5683 = subInt(LOC17, 1);
		HEX3Atmp_420186 = (NI64)(TMP5683);
		nimln(1451, "system.nim");
		res_420188 = 1;
		nimln(1452, "system.nim");
		while (1) {
			nimln(1452, "system.nim");
			if (!(res_420188 <= HEX3Atmp_420186)) goto LA18;
			nimln(1451, "system.nim");
			i_420122 = res_420188;
			nimln(27, "semmacrosanity.nim");
			if (((TMP5677[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5678));
			if ((NU)(i_420122) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			switch ((*(*n).kindU.S6.Sons->data[i_420122]).Kind) {
			case ((NU8) 85):
			case ((NU8) 88):
			{
				tnode191813* LOC20;
				NI TMP5685;
				nimln(29, "semmacrosanity.nim");
				nimln(29, "semmacrosanity.nim");
				if (((TMP5677[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5678));
				if ((NU)(i_420122) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				LOC20 = 0;
				LOC20 = lastson_192199((*n).kindU.S6.Sons->data[i_420122]);
				nimln(29, "semmacrosanity.nim");
				TMP5685 = subInt(field, 1);
				result = ithfield_420007(LOC20, (NI64)(TMP5685));
				nimln(30, "semmacrosanity.nim");
				{
					nimln(30, "semmacrosanity.nim");
					nimln(30, "semmacrosanity.nim");
					if (!!((result == NIM_NIL))) goto LA23;
					nimln(30, "semmacrosanity.nim");
					goto BeforeRet;
				}
				LA23: ;
			}
			break;
			default:
			{
				nimln(31, "semmacrosanity.nim");
				internalerror_168591((*n).Info, ((NimStringDesc*) &TMP5686));
			}
			break;
			}
			nimln(1454, "system.nim");
			res_420188 = addInt(res_420188, 1);
		} LA18: ;
	}
	break;
	case ((NU8) 3):
	{
		nimln(33, "semmacrosanity.nim");
		{
			nimln(33, "semmacrosanity.nim");
			if (!(field == 0)) goto LA29;
			nimln(33, "semmacrosanity.nim");
			if (!(((TMP5687[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP5688));
			result = (*n).kindU.S4.Sym;
		}
		LA29: ;
	}
	break;
	default:
	{
	}
	break;
	}
	BeforeRet: ;
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

static N_INLINE(NI, len_192274)(tnode191813* n) {
	NI result;
	nimfr("len", "ast.nim")
	result = 0;
	nimln(957, "ast.nim");
	{
		nimln(957, "ast.nim");
		if (((TMP5677[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5678));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(957, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(958, "ast.nim");
		nimln(958, "ast.nim");
		if (((TMP5677[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5678));
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	popFrame();
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, annotatetype_420194)(tnode191813* n, ttype191847* t) {
	ttype191847* x;
	nimfr("annotateType", "semmacrosanity.nim")
	nimln(37, "semmacrosanity.nim");
	x = skiptypes_195793(t, IL64(211106232576256));
	nimln(40, "semmacrosanity.nim");
	switch ((*n).Kind) {
	case ((NU8) 37):
	{
		nimln(42, "semmacrosanity.nim");
		{
			NI i_420229;
			NI HEX3Atmp_420404;
			NI LOC6;
			NI res_420406;
			nimln(42, "semmacrosanity.nim");
			if (!((*x).Kind == ((NU8) 17))) goto LA4;
			nimln(43, "semmacrosanity.nim");
			asgnRefNoCycle((void**) &(*n).Typ, t);
			i_420229 = 0;
			HEX3Atmp_420404 = 0;
			nimln(44, "semmacrosanity.nim");
			nimln(44, "semmacrosanity.nim");
			nimln(44, "semmacrosanity.nim");
			LOC6 = 0;
			LOC6 = len_192274(n);
			HEX3Atmp_420404 = subInt(LOC6, 1);
			nimln(1458, "system.nim");
			res_420406 = 0;
			nimln(1459, "system.nim");
			while (1) {
				tsym191843* field;
				nimln(1459, "system.nim");
				if (!(res_420406 <= HEX3Atmp_420404)) goto LA7;
				nimln(1458, "system.nim");
				i_420229 = res_420406;
				nimln(45, "semmacrosanity.nim");
				field = ithfield_420007((*x).N, i_420229);
				nimln(46, "semmacrosanity.nim");
				{
					NimStringDesc* LOC12;
					NimStringDesc* LOC13;
					nimln(46, "semmacrosanity.nim");
					if (!field == 0) goto LA10;
					nimln(46, "semmacrosanity.nim");
					nimln(46, "semmacrosanity.nim");
					LOC12 = 0;
					nimln(46, "semmacrosanity.nim");
					LOC13 = 0;
					LOC13 = nimIntToStr(i_420229);
					LOC12 = rawNewString(LOC13->Sup.len + 23);
appendString(LOC12, ((NimStringDesc*) &TMP5689));
appendString(LOC12, LOC13);
					globalerror_168565((*n).Info, LOC12);
				}
				goto LA8;
				LA10: ;
				{
					nimln(47, "semmacrosanity.nim");
					if (((TMP5677[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5678));
					if ((NU)(i_420229) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
					annotatetype_420194((*n).kindU.S6.Sons->data[i_420229], (*field).Typ);
				}
				LA8: ;
				nimln(1461, "system.nim");
				res_420406 = addInt(res_420406, 1);
			} LA7: ;
		}
		goto LA2;
		LA4: ;
		{
			NI i_420286;
			NI HEX3Atmp_420408;
			NI LOC18;
			NI res_420410;
			nimln(48, "semmacrosanity.nim");
			if (!((*x).Kind == ((NU8) 18))) goto LA16;
			nimln(49, "semmacrosanity.nim");
			asgnRefNoCycle((void**) &(*n).Typ, t);
			i_420286 = 0;
			HEX3Atmp_420408 = 0;
			nimln(50, "semmacrosanity.nim");
			nimln(50, "semmacrosanity.nim");
			nimln(50, "semmacrosanity.nim");
			LOC18 = 0;
			LOC18 = len_192274(n);
			HEX3Atmp_420408 = subInt(LOC18, 1);
			nimln(1458, "system.nim");
			res_420410 = 0;
			nimln(1459, "system.nim");
			while (1) {
				nimln(1459, "system.nim");
				if (!(res_420410 <= HEX3Atmp_420408)) goto LA19;
				nimln(1458, "system.nim");
				i_420286 = res_420410;
				nimln(51, "semmacrosanity.nim");
				{
					NI LOC22;
					NimStringDesc* LOC25;
					NimStringDesc* LOC26;
					nimln(51, "semmacrosanity.nim");
					nimln(51, "semmacrosanity.nim");
					LOC22 = 0;
					LOC22 = len_195569(x);
					if (!(LOC22 <= i_420286)) goto LA23;
					nimln(51, "semmacrosanity.nim");
					nimln(51, "semmacrosanity.nim");
					LOC25 = 0;
					nimln(51, "semmacrosanity.nim");
					LOC26 = 0;
					LOC26 = nimIntToStr(i_420286);
					LOC25 = rawNewString(LOC26->Sup.len + 23);
appendString(LOC25, ((NimStringDesc*) &TMP5689));
appendString(LOC25, LOC26);
					globalerror_168565((*n).Info, LOC25);
				}
				goto LA20;
				LA23: ;
				{
					nimln(52, "semmacrosanity.nim");
					if (((TMP5677[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5678));
					if ((NU)(i_420286) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
					if ((NU)(i_420286) >= (NU)((*x).Sons->Sup.len)) raiseIndexError();
					annotatetype_420194((*n).kindU.S6.Sons->data[i_420286], (*x).Sons->data[i_420286]);
				}
				LA20: ;
				nimln(1461, "system.nim");
				res_420410 = addInt(res_420410, 1);
			} LA19: ;
		}
		goto LA2;
		LA16: ;
		{
			NIM_BOOL LOC29;
			nimln(53, "semmacrosanity.nim");
			LOC29 = 0;
			nimln(53, "semmacrosanity.nim");
			LOC29 = ((*x).Kind == ((NU8) 25));
			if (!(LOC29)) goto LA30;
			nimln(53, "semmacrosanity.nim");
			LOC29 = ((*x).Callconv == ((NU8) 8));
			LA30: ;
			if (!LOC29) goto LA31;
			nimln(54, "semmacrosanity.nim");
			asgnRefNoCycle((void**) &(*n).Typ, t);
		}
		goto LA2;
		LA31: ;
		{
			nimln(56, "semmacrosanity.nim");
			globalerror_168565((*n).Info, ((NimStringDesc*) &TMP5690));
		}
		LA2: ;
	}
	break;
	case ((NU8) 41):
	{
		nimln(58, "semmacrosanity.nim");
		{
			tnode191813* m_420333;
			NI i_420413;
			NI HEX3Atmp_420415;
			NI LOC39;
			NI res_420417;
			nimln(58, "semmacrosanity.nim");
			if (!((151060496 &(IL64(1)<<(((*x).Kind)&IL64(63))))!=0)) goto LA37;
			nimln(59, "semmacrosanity.nim");
			asgnRefNoCycle((void**) &(*n).Typ, t);
			m_420333 = 0;
			i_420413 = 0;
			HEX3Atmp_420415 = 0;
			nimln(1521, "ast.nim");
			nimln(1521, "ast.nim");
			nimln(1521, "ast.nim");
			LOC39 = 0;
			LOC39 = len_192274(n);
			HEX3Atmp_420415 = subInt(LOC39, 1);
			nimln(1458, "system.nim");
			res_420417 = 0;
			nimln(1459, "system.nim");
			while (1) {
				ttype191847* LOC41;
				nimln(1459, "system.nim");
				if (!(res_420417 <= HEX3Atmp_420415)) goto LA40;
				nimln(1458, "system.nim");
				i_420413 = res_420417;
				nimln(1521, "ast.nim");
				if (((TMP5677[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5678));
				if ((NU)(i_420413) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				m_420333 = (*n).kindU.S6.Sons->data[i_420413];
				nimln(60, "semmacrosanity.nim");
				nimln(60, "semmacrosanity.nim");
				LOC41 = 0;
				LOC41 = elemtype_227559(x);
				annotatetype_420194(m_420333, LOC41);
				nimln(1461, "system.nim");
				res_420417 = addInt(res_420417, 1);
			} LA40: ;
		}
		goto LA35;
		LA37: ;
		{
			nimln(62, "semmacrosanity.nim");
			globalerror_168565((*n).Info, ((NimStringDesc*) &TMP5691));
		}
		LA35: ;
	}
	break;
	case ((NU8) 39):
	{
		nimln(64, "semmacrosanity.nim");
		{
			tnode191813* m_420348;
			NI i_420419;
			NI HEX3Atmp_420421;
			NI LOC48;
			NI res_420423;
			nimln(64, "semmacrosanity.nim");
			if (!((524288 &(IL64(1)<<(((*x).Kind)&IL64(63))))!=0)) goto LA46;
			nimln(65, "semmacrosanity.nim");
			asgnRefNoCycle((void**) &(*n).Typ, t);
			m_420348 = 0;
			i_420419 = 0;
			HEX3Atmp_420421 = 0;
			nimln(1521, "ast.nim");
			nimln(1521, "ast.nim");
			nimln(1521, "ast.nim");
			LOC48 = 0;
			LOC48 = len_192274(n);
			HEX3Atmp_420421 = subInt(LOC48, 1);
			nimln(1458, "system.nim");
			res_420423 = 0;
			nimln(1459, "system.nim");
			while (1) {
				ttype191847* LOC50;
				nimln(1459, "system.nim");
				if (!(res_420423 <= HEX3Atmp_420421)) goto LA49;
				nimln(1458, "system.nim");
				i_420419 = res_420423;
				nimln(1521, "ast.nim");
				if (((TMP5677[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5678));
				if ((NU)(i_420419) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				m_420348 = (*n).kindU.S6.Sons->data[i_420419];
				nimln(66, "semmacrosanity.nim");
				nimln(66, "semmacrosanity.nim");
				LOC50 = 0;
				LOC50 = elemtype_227559(x);
				annotatetype_420194(m_420348, LOC50);
				nimln(1461, "system.nim");
				res_420423 = addInt(res_420423, 1);
			} LA49: ;
		}
		goto LA44;
		LA46: ;
		{
			nimln(68, "semmacrosanity.nim");
			globalerror_168565((*n).Info, ((NimStringDesc*) &TMP5692));
		}
		LA44: ;
	}
	break;
	case ((NU8) 16) ... ((NU8) 19):
	{
		nimln(70, "semmacrosanity.nim");
		{
			nimln(70, "semmacrosanity.nim");
			if (!((IL64(1030792151040) &(IL64(1)<<(((*x).Kind)&IL64(63))))!=0)) goto LA55;
			nimln(71, "semmacrosanity.nim");
			asgnRefNoCycle((void**) &(*n).Typ, t);
		}
		goto LA53;
		LA55: ;
		{
			nimln(73, "semmacrosanity.nim");
			globalerror_168565((*n).Info, ((NimStringDesc*) &TMP5693));
		}
		LA53: ;
	}
	break;
	case ((NU8) 5) ... ((NU8) 15):
	{
		nimln(75, "semmacrosanity.nim");
		{
			nimln(75, "semmacrosanity.nim");
			if (!((IL64(35182224621574) &(IL64(1)<<(((*x).Kind)&IL64(63))))!=0)) goto LA61;
			nimln(76, "semmacrosanity.nim");
			asgnRefNoCycle((void**) &(*n).Typ, t);
		}
		goto LA59;
		LA61: ;
		{
			nimln(78, "semmacrosanity.nim");
			globalerror_168565((*n).Info, ((NimStringDesc*) &TMP5694));
		}
		LA59: ;
	}
	break;
	case ((NU8) 20) ... ((NU8) 22):
	{
		nimln(80, "semmacrosanity.nim");
		{
			nimln(80, "semmacrosanity.nim");
			if (!((805306368 &(IL64(1)<<(((*x).Kind)&IL64(63))))!=0)) goto LA67;
			nimln(81, "semmacrosanity.nim");
			asgnRefNoCycle((void**) &(*n).Typ, t);
		}
		goto LA65;
		LA67: ;
		{
			nimln(83, "semmacrosanity.nim");
			globalerror_168565((*n).Info, ((NimStringDesc*) &TMP5695));
		}
		LA65: ;
	}
	break;
	case ((NU8) 23):
	{
		nimln(85, "semmacrosanity.nim");
		{
			nimln(85, "semmacrosanity.nim");
			if (!((IL64(1125900835880960) &(IL64(1)<<(((*x).Kind)&IL64(63))))!=0)) goto LA73;
			nimln(86, "semmacrosanity.nim");
			asgnRefNoCycle((void**) &(*n).Typ, t);
		}
		goto LA71;
		LA73: ;
		{
			nimln(88, "semmacrosanity.nim");
			globalerror_168565((*n).Info, ((NimStringDesc*) &TMP5696));
		}
		LA71: ;
	}
	break;
	default:
	{
	}
	break;
	}
	popFrame();
}
N_NOINLINE(void, semmacrosanityInit)(void) {
	nimfr("semmacrosanity", "semmacrosanity.nim")
	popFrame();
}

N_NOINLINE(void, semmacrosanityDatInit)(void) {
}

