/* Generated by Nimrod Compiler v0.9.5 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct trstnode301009 trstnode301009;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY301084 TY301084;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct trendercontext301211 trendercontext301211;
typedef struct TY296134 TY296134;
typedef struct tjsonnode296114 tjsonnode296114;
typedef struct TY296130 TY296130;
typedef struct tbasechunk23636 tbasechunk23636;
typedef struct tfreecell23628 tfreecell23628;
typedef struct TY296129 TY296129;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  trstnode301009  {
NU8 Kind;
NimStringDesc* Text;
NI Level;
TY301084* Sons;
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
typedef NIM_CHAR TY301258[9];
struct  trendercontext301211  {
NI Indent;
NI Verbatim;
};
struct TY296130 {
NimStringDesc* Field0;
tjsonnode296114* Field1;
};
typedef TY296130 TY301586[2];
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
struct  tjsonnode296114  {
NU8 Kind;
union {
struct {NimStringDesc* Str;
} S1;
struct {NI64 Num;
} S2;
struct {NF Fnum;
} S3;
struct {NIM_BOOL Bval;
} S4;
struct {TY296129* Fields;
} S6;
struct {TY296134* Elems;
} S7;
} kindU;
};
struct  tfreecell23628  {
tfreecell23628* Next;
NI Zerofield;
};
struct TY301084 {
  TGenericSeq Sup;
  trstnode301009* data[SEQ_DECL_SIZE];
};
struct TY296134 {
  TGenericSeq Sup;
  tjsonnode296114* data[SEQ_DECL_SIZE];
};
struct TY296129 {
  TGenericSeq Sup;
  TY296130 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NI, len_301080)(trstnode301009* n);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(trstnode301009*, newrstnode_301097)(NU8 kind);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP3772)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell42090*, usrtocell_45443)(void* usr);
static N_INLINE(void, rtladdzct_47002)(tcell42090* c);
N_NOINLINE(void, addzct_45418)(tcellseq42106* s, tcell42090* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(trstnode301009*, newrstnode_301139)(NU8 kind, NimStringDesc* s);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(trstnode301009*, lastson_301146)(trstnode301009* n);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, add_301163)(trstnode301009* father, trstnode301009* son);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, addifnotnil_301187)(trstnode301009* father, trstnode301009* son);
N_NIMCALL(void, renderrstsons_301223)(trendercontext301211* d, trstnode301009* n, NimStringDesc** result);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, renderrsttorst_301215)(trendercontext301211* d, trstnode301009* n, NimStringDesc** result);
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NI count, NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e_76880, TNimType* typ);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, renderrsttorst_301557)(trstnode301009* n, NimStringDesc** result);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_301591)(TY301084* x_301597, TY301084* y_301602);
static N_INLINE(void*, seqtoptr_301607)(TY301084* x_301613);
N_NIMCALL(TY296134*, newseq_301745)(NI len_301749);
N_NIMCALL(tjsonnode296114*, renderrsttojsonnode_301567)(trstnode301009* node);
N_NIMCALL(tjsonnode296114*, HEX25_296619)(TY296130* keyvals, NI keyvalsLen0);
N_NIMCALL(tjsonnode296114*, HEX25_296475)(NimStringDesc* s);
N_NIMCALL(tjsonnode296114*, HEX25_296511)(NI64 n);
N_NIMCALL(void, add_297844)(tjsonnode296114* obj, NimStringDesc* key, tjsonnode296114* val);
N_NIMCALL(tjsonnode296114*, HEX25_296745)(tjsonnode296114** elements, NI elementsLen0);
N_NIMCALL(NimStringDesc*, renderrsttojson_301847)(trstnode301009* node);
N_NIMCALL(NimStringDesc*, pretty_299151)(tjsonnode296114* node, NI indent);
NIM_CONST TY301258 lvltochar_301257 = {33,
61,
45,
126,
96,
60,
42,
124,
43}
;
STRING_LITERAL(TMP3775, "\012", 1);
STRING_LITERAL(TMP3777, "", 0);
STRING_LITERAL(TMP3779, "\012\012", 2);
STRING_LITERAL(TMP3781, "* ", 2);
STRING_LITERAL(TMP3782, "(#) ", 4);
STRING_LITERAL(TMP3783, "  ", 2);
STRING_LITERAL(TMP3787, "| ", 2);
STRING_LITERAL(TMP3788, "`", 1);
STRING_LITERAL(TMP3789, "`_", 2);
STRING_LITERAL(TMP3790, " <", 2);
STRING_LITERAL(TMP3791, ">`_", 3);
STRING_LITERAL(TMP3792, "`:", 2);
STRING_LITERAL(TMP3793, "`:sub:", 6);
STRING_LITERAL(TMP3794, "`:sup:", 6);
STRING_LITERAL(TMP3795, "`:idx:", 6);
STRING_LITERAL(TMP3796, "*", 1);
STRING_LITERAL(TMP3797, "**", 2);
STRING_LITERAL(TMP3798, "***", 3);
STRING_LITERAL(TMP3799, "``", 2);
STRING_LITERAL(TMP3800, "\\", 1);
STRING_LITERAL(TMP3801, "\\\\", 2);
STRING_LITERAL(TMP3802, ".. index::\012", 11);
STRING_LITERAL(TMP3803, ".. contents::", 13);
STRING_LITERAL(TMP3804, "Error: cannot render: ", 22);
STRING_LITERAL(TMP3806, "kind", 4);
STRING_LITERAL(TMP3807, "level", 5);
STRING_LITERAL(TMP3808, "text", 4);
STRING_LITERAL(TMP3809, "sons", 4);
extern TFrame* frameptr_13438;
TNimType NTI301009; /* TRstNode */
TNimType NTI301003; /* TRstNodeKind */
extern TNimType NTI143; /* string */
extern TNimType NTI106; /* int */
extern TNimType NTI301084; /* seq[PRstNode] */
TNimType NTI301005; /* PRstNode */
extern tgcheap44016 gch_44044;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13438;
	frameptr_13438 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13438 = (*frameptr_13438).prev;
}

N_NIMCALL(NI, len_301080)(trstnode301009* n) {
	NI result;
	nimfr("len", "rstast.nim")
	result = 0;
	nimln(75, "rstast.nim");
	nimln(75, "rstast.nim");
	result = (*n).Sons->Sup.len;
	popFrame();
	return result;
}
N_NIMCALL(void, TMP3772)(void* p, NI op) {
	trstnode301009* a;
	a = (trstnode301009*)p;
	nimGCvisit((void*)(*a).Text, op);
	nimGCvisit((void*)(*a).Sons, op);
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

N_NIMCALL(trstnode301009*, newrstnode_301097)(NU8 kind) {
	trstnode301009* result;
	nimfr("newRstNode", "rstast.nim")
	result = 0;
	nimln(78, "rstast.nim");
	result = (trstnode301009*) newObj((&NTI301005), sizeof(trstnode301009));
	nimln(79, "rstast.nim");
	if ((*result).Sons) nimGCunrefNoCycle((*result).Sons);
	(*result).Sons = (TY301084*) newSeqRC1((&NTI301084), 0);
	nimln(80, "rstast.nim");
	(*result).Kind = kind;
	popFrame();
	return result;
}

N_NIMCALL(trstnode301009*, newrstnode_301139)(NU8 kind, NimStringDesc* s) {
	trstnode301009* result;
	NimStringDesc* LOC1;
	nimfr("newRstNode", "rstast.nim")
	result = 0;
	nimln(83, "rstast.nim");
	result = newrstnode_301097(kind);
	nimln(84, "rstast.nim");
	LOC1 = 0;
	LOC1 = (*result).Text; (*result).Text = copyStringRC1(s);
	if (LOC1) nimGCunrefNoCycle(LOC1);
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

N_NIMCALL(trstnode301009*, lastson_301146)(trstnode301009* n) {
	trstnode301009* result;
	NI TMP3773;
	nimfr("lastSon", "rstast.nim")
	result = 0;
	nimln(87, "rstast.nim");
	nimln(87, "rstast.nim");
	nimln(87, "rstast.nim");
	TMP3773 = subInt((*n).Sons->Sup.len, 1);
	if ((NU)((NI32)(TMP3773)) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
	result = (*n).Sons->data[(NI32)(TMP3773)];
	popFrame();
	return result;
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

N_NIMCALL(void, add_301163)(trstnode301009* father, trstnode301009* son) {
	nimfr("add", "rstast.nim")
	nimln(90, "rstast.nim");
	(*father).Sons = (TY301084*) incrSeq(&((*father).Sons)->Sup, sizeof(trstnode301009*));
	asgnRefNoCycle((void**) &(*father).Sons->data[(*father).Sons->Sup.len-1], son);
	popFrame();
}

N_NIMCALL(void, addifnotnil_301187)(trstnode301009* father, trstnode301009* son) {
	nimfr("addIfNotNil", "rstast.nim")
	nimln(93, "rstast.nim");
	{
		nimln(93, "rstast.nim");
		nimln(93, "rstast.nim");
		if (!!((son == NIM_NIL))) goto LA3;
		nimln(93, "rstast.nim");
		add_301163(father, son);
	}
	LA3: ;
	popFrame();
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

N_NIMCALL(void, renderrstsons_301223)(trendercontext301211* d, trstnode301009* n, NimStringDesc** result) {
	NI i_301242;
	NI HEX3Atmp_301243;
	NI LOC1;
	NI TMP3774;
	NI res_301245;
	nimfr("renderRstSons", "rstast.nim")
	i_301242 = 0;
	HEX3Atmp_301243 = 0;
	nimln(104, "rstast.nim");
	nimln(104, "rstast.nim");
	nimln(104, "rstast.nim");
	LOC1 = 0;
	LOC1 = len_301080(n);
	TMP3774 = subInt(LOC1, 1);
	HEX3Atmp_301243 = (NI32)(TMP3774);
	nimln(1451, "system.nim");
	res_301245 = 0;
	nimln(1452, "system.nim");
	while (1) {
		nimln(1452, "system.nim");
		if (!(res_301245 <= HEX3Atmp_301243)) goto LA2;
		nimln(1451, "system.nim");
		i_301242 = res_301245;
		nimln(105, "rstast.nim");
		if ((NU)(i_301242) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
		renderrsttorst_301215(d, (*n).Sons->data[i_301242], result);
		nimln(1454, "system.nim");
		res_301245 = addInt(res_301245, 1);
	} LA2: ;
	popFrame();
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
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

N_NIMCALL(void, renderrsttorst_301215)(trendercontext301211* d, trstnode301009* n, NimStringDesc** result) {
	NimStringDesc* ind;
	nimfr("renderRstToRst", "rstast.nim")
	nimln(112, "rstast.nim");
	{
		nimln(112, "rstast.nim");
		if (!(n == NIM_NIL)) goto LA3;
		nimln(112, "rstast.nim");
		goto BeforeRet;
	}
	LA3: ;
	nimln(113, "rstast.nim");
	ind = nsuRepeatChar((*d).Indent, 32);
	nimln(114, "rstast.nim");
	switch ((*n).Kind) {
	case ((NU8) 0):
	{
		nimln(116, "rstast.nim");
		renderrstsons_301223(d, n, result);
	}
	break;
	case ((NU8) 1):
	{
		NI oldlen;
		NI headlinelen;
		NI TMP3776;
		NimStringDesc* LOC7;
		nimln(118, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3775));
		nimln(119, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(121, "rstast.nim");
		nimln(121, "rstast.nim");
		oldlen = (*result)->Sup.len;
		nimln(122, "rstast.nim");
		renderrstsons_301223(d, n, result);
		nimln(123, "rstast.nim");
		nimln(123, "rstast.nim");
		nimln(123, "rstast.nim");
		TMP3776 = subInt((*result)->Sup.len, oldlen);
		headlinelen = (NI32)(TMP3776);
		nimln(125, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3775));
		nimln(126, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(127, "rstast.nim");
		nimln(127, "rstast.nim");
		if ((NU)((*n).Level) > (NU)(8)) raiseIndexError();
		LOC7 = 0;
		LOC7 = nsuRepeatChar(headlinelen, lvltochar_301257[((*n).Level)- 0]);
		(*result) = resizeString((*result), LOC7->Sup.len + 0);
appendString((*result), LOC7);
	}
	break;
	case ((NU8) 2):
	{
		NimStringDesc* headline;
		NimStringDesc* lvl;
		NI TMP3778;
		nimln(129, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3775));
		nimln(130, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(132, "rstast.nim");
		headline = copyString(((NimStringDesc*) &TMP3777));
		nimln(133, "rstast.nim");
		renderrstsons_301223(d, n, &headline);
		nimln(135, "rstast.nim");
		nimln(135, "rstast.nim");
		nimln(135, "rstast.nim");
		TMP3778 = subInt(headline->Sup.len, (*d).Indent);
		if ((NU)((*n).Level) > (NU)(8)) raiseIndexError();
		lvl = nsuRepeatChar((NI32)(TMP3778), lvltochar_301257[((*n).Level)- 0]);
		nimln(136, "rstast.nim");
		(*result) = resizeString((*result), lvl->Sup.len + 0);
appendString((*result), lvl);
		nimln(137, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3775));
		nimln(138, "rstast.nim");
		(*result) = resizeString((*result), headline->Sup.len + 0);
appendString((*result), headline);
		nimln(140, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3775));
		nimln(141, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(142, "rstast.nim");
		(*result) = resizeString((*result), lvl->Sup.len + 0);
appendString((*result), lvl);
	}
	break;
	case ((NU8) 3):
	{
		NI TMP3780;
		NimStringDesc* LOC10;
		nimln(144, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3779));
		nimln(145, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(146, "rstast.nim");
		nimln(146, "rstast.nim");
		nimln(146, "rstast.nim");
		TMP3780 = subInt(78, (*d).Indent);
		LOC10 = 0;
		LOC10 = nsuRepeatChar((NI32)(TMP3780), 45);
		(*result) = resizeString((*result), LOC10->Sup.len + 0);
appendString((*result), LOC10);
		nimln(147, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3779));
	}
	break;
	case ((NU8) 4):
	{
		nimln(149, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3779));
		nimln(150, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(151, "rstast.nim");
		renderrstsons_301223(d, n, result);
	}
	break;
	case ((NU8) 6):
	{
		NimStringDesc* tmp;
		nimln(153, "rstast.nim");
		(*d).Indent = addInt((*d).Indent, 2);
		nimln(154, "rstast.nim");
		tmp = copyString(((NimStringDesc*) &TMP3777));
		nimln(155, "rstast.nim");
		renderrstsons_301223(d, n, &tmp);
		nimln(156, "rstast.nim");
		{
			nimln(156, "rstast.nim");
			nimln(156, "rstast.nim");
			if (!(0 < tmp->Sup.len)) goto LA15;
			nimln(157, "rstast.nim");
			(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3775));
			nimln(158, "rstast.nim");
			(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
			nimln(159, "rstast.nim");
			(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3781));
			nimln(160, "rstast.nim");
			(*result) = resizeString((*result), tmp->Sup.len + 0);
appendString((*result), tmp);
		}
		LA15: ;
		nimln(161, "rstast.nim");
		(*d).Indent = subInt((*d).Indent, 2);
	}
	break;
	case ((NU8) 8):
	{
		NimStringDesc* tmp;
		nimln(163, "rstast.nim");
		(*d).Indent = addInt((*d).Indent, 4);
		nimln(164, "rstast.nim");
		tmp = copyString(((NimStringDesc*) &TMP3777));
		nimln(165, "rstast.nim");
		renderrstsons_301223(d, n, &tmp);
		nimln(166, "rstast.nim");
		{
			nimln(166, "rstast.nim");
			nimln(166, "rstast.nim");
			if (!(0 < tmp->Sup.len)) goto LA20;
			nimln(167, "rstast.nim");
			(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3775));
			nimln(168, "rstast.nim");
			(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
			nimln(169, "rstast.nim");
			(*result) = resizeString((*result), 4);
appendString((*result), ((NimStringDesc*) &TMP3782));
			nimln(170, "rstast.nim");
			(*result) = resizeString((*result), tmp->Sup.len + 0);
appendString((*result), tmp);
		}
		LA20: ;
		nimln(171, "rstast.nim");
		(*d).Indent = subInt((*d).Indent, 4);
	}
	break;
	case ((NU8) 17):
	case ((NU8) 13):
	case ((NU8) 9):
	case ((NU8) 10):
	case ((NU8) 26):
	case ((NU8) 15):
	case ((NU8) 16):
	case ((NU8) 37):
	case ((NU8) 5):
	case ((NU8) 7):
	{
		nimln(174, "rstast.nim");
		renderrstsons_301223(d, n, result);
	}
	break;
	case ((NU8) 11):
	{
		nimln(176, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3779));
		nimln(177, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(178, "rstast.nim");
		renderrstsons_301223(d, n, result);
	}
	break;
	case ((NU8) 12):
	{
		nimln(180, "rstast.nim");
		(*d).Indent = addInt((*d).Indent, 2);
		nimln(181, "rstast.nim");
		{
			nimln(181, "rstast.nim");
			nimln(181, "rstast.nim");
			if ((NU)(0) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
			if (!!(((*(*n).Sons->data[0]).Kind == ((NU8) 5)))) goto LA27;
			nimln(182, "rstast.nim");
			(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3775));
			nimln(183, "rstast.nim");
			(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
			nimln(184, "rstast.nim");
			(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3783));
		}
		LA27: ;
		nimln(185, "rstast.nim");
		renderrstsons_301223(d, n, result);
		nimln(186, "rstast.nim");
		(*d).Indent = subInt((*d).Indent, 2);
	}
	break;
	case ((NU8) 14):
	{
		NimStringDesc* tmp;
		NI l;
		NI TMP3784;
		NI TMP3785;
		NI TMP3786;
		NimStringDesc* LOC30;
		nimln(188, "rstast.nim");
		tmp = copyString(((NimStringDesc*) &TMP3777));
		nimln(189, "rstast.nim");
		if ((NU)(0) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
		renderrsttorst_301215(d, (*n).Sons->data[0], &tmp);
		nimln(191, "rstast.nim");
		nimln(191, "rstast.nim");
		nimln(191, "rstast.nim");
		nimln(191, "rstast.nim");
		TMP3784 = addInt(tmp->Sup.len, 3);
		l = (((NI32)(TMP3784) >= 30) ? (NI32)(TMP3784) : 30);
		nimln(192, "rstast.nim");
		(*d).Indent = addInt((*d).Indent, l);
		nimln(194, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3775));
		nimln(195, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(196, "rstast.nim");
		(*result) = addChar((*result), 58);
		nimln(197, "rstast.nim");
		(*result) = resizeString((*result), tmp->Sup.len + 0);
appendString((*result), tmp);
		nimln(198, "rstast.nim");
		(*result) = addChar((*result), 58);
		nimln(199, "rstast.nim");
		nimln(199, "rstast.nim");
		nimln(199, "rstast.nim");
		nimln(199, "rstast.nim");
		nimln(199, "rstast.nim");
		TMP3785 = subInt(l, tmp->Sup.len);
		TMP3786 = subInt((NI32)(TMP3785), 2);
		LOC30 = 0;
		LOC30 = nsuRepeatChar((NI32)(TMP3786), 32);
		(*result) = resizeString((*result), LOC30->Sup.len + 0);
appendString((*result), LOC30);
		nimln(200, "rstast.nim");
		if ((NU)(1) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
		renderrsttorst_301215(d, (*n).Sons->data[1], result);
		nimln(202, "rstast.nim");
		(*d).Indent = subInt((*d).Indent, l);
	}
	break;
	case ((NU8) 27):
	{
		nimln(204, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3775));
		nimln(205, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(206, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3787));
		nimln(207, "rstast.nim");
		renderrstsons_301223(d, n, result);
	}
	break;
	case ((NU8) 28):
	{
		nimln(209, "rstast.nim");
		(*d).Indent = addInt((*d).Indent, 2);
		nimln(210, "rstast.nim");
		renderrstsons_301223(d, n, result);
		nimln(211, "rstast.nim");
		(*d).Indent = subInt((*d).Indent, 2);
	}
	break;
	case ((NU8) 39):
	{
		nimln(213, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3788));
		nimln(214, "rstast.nim");
		renderrstsons_301223(d, n, result);
		nimln(215, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3789));
	}
	break;
	case ((NU8) 38):
	{
		nimln(217, "rstast.nim");
		(*result) = addChar((*result), 96);
		nimln(218, "rstast.nim");
		if ((NU)(0) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
		renderrsttorst_301215(d, (*n).Sons->data[0], result);
		nimln(219, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3790));
		nimln(220, "rstast.nim");
		if ((NU)(1) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
		renderrsttorst_301215(d, (*n).Sons->data[1], result);
		nimln(221, "rstast.nim");
		(*result) = resizeString((*result), 3);
appendString((*result), ((NimStringDesc*) &TMP3791));
	}
	break;
	case ((NU8) 53):
	{
		nimln(223, "rstast.nim");
		(*result) = addChar((*result), 96);
		nimln(224, "rstast.nim");
		if ((NU)(0) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
		renderrsttorst_301215(d, (*n).Sons->data[0], result);
		nimln(225, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3792));
		nimln(226, "rstast.nim");
		if ((NU)(1) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
		renderrsttorst_301215(d, (*n).Sons->data[1], result);
		nimln(227, "rstast.nim");
		(*result) = addChar((*result), 58);
	}
	break;
	case ((NU8) 54):
	{
		nimln(229, "rstast.nim");
		(*result) = addChar((*result), 96);
		nimln(230, "rstast.nim");
		renderrstsons_301223(d, n, result);
		nimln(231, "rstast.nim");
		(*result) = resizeString((*result), 6);
appendString((*result), ((NimStringDesc*) &TMP3793));
	}
	break;
	case ((NU8) 55):
	{
		nimln(233, "rstast.nim");
		(*result) = addChar((*result), 96);
		nimln(234, "rstast.nim");
		renderrstsons_301223(d, n, result);
		nimln(235, "rstast.nim");
		(*result) = resizeString((*result), 6);
appendString((*result), ((NimStringDesc*) &TMP3794));
	}
	break;
	case ((NU8) 56):
	{
		nimln(237, "rstast.nim");
		(*result) = addChar((*result), 96);
		nimln(238, "rstast.nim");
		renderrstsons_301223(d, n, result);
		nimln(239, "rstast.nim");
		(*result) = resizeString((*result), 6);
appendString((*result), ((NimStringDesc*) &TMP3795));
	}
	break;
	case ((NU8) 57):
	{
		nimln(241, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3796));
		nimln(242, "rstast.nim");
		renderrstsons_301223(d, n, result);
		nimln(243, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3796));
	}
	break;
	case ((NU8) 58):
	{
		nimln(245, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3797));
		nimln(246, "rstast.nim");
		renderrstsons_301223(d, n, result);
		nimln(247, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3797));
	}
	break;
	case ((NU8) 59):
	{
		nimln(249, "rstast.nim");
		(*result) = resizeString((*result), 3);
appendString((*result), ((NimStringDesc*) &TMP3798));
		nimln(250, "rstast.nim");
		renderrstsons_301223(d, n, result);
		nimln(251, "rstast.nim");
		(*result) = resizeString((*result), 3);
appendString((*result), ((NimStringDesc*) &TMP3798));
	}
	break;
	case ((NU8) 60):
	{
		nimln(253, "rstast.nim");
		(*result) = addChar((*result), 96);
		nimln(254, "rstast.nim");
		renderrstsons_301223(d, n, result);
		nimln(255, "rstast.nim");
		(*result) = addChar((*result), 96);
	}
	break;
	case ((NU8) 61):
	{
		nimln(257, "rstast.nim");
		(*d).Verbatim = addInt((*d).Verbatim, 1);
		nimln(258, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3799));
		nimln(259, "rstast.nim");
		renderrstsons_301223(d, n, result);
		nimln(260, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3799));
		nimln(261, "rstast.nim");
		(*d).Verbatim = subInt((*d).Verbatim, 1);
	}
	break;
	case ((NU8) 63):
	{
		nimln(263, "rstast.nim");
		(*result) = resizeString((*result), (*n).Text->Sup.len + 0);
appendString((*result), (*n).Text);
	}
	break;
	case ((NU8) 64):
	{
		nimln(265, "rstast.nim");
		{
			NIM_BOOL LOC48;
			nimln(265, "rstast.nim");
			LOC48 = 0;
			nimln(265, "rstast.nim");
			LOC48 = ((*d).Verbatim == 0);
			if (!(LOC48)) goto LA49;
			nimln(265, "rstast.nim");
			LOC48 = eqStrings((*n).Text, ((NimStringDesc*) &TMP3800));
			LA49: ;
			if (!LOC48) goto LA50;
			nimln(266, "rstast.nim");
			(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3801));
		}
		goto LA46;
		LA50: ;
		{
			nimln(268, "rstast.nim");
			(*result) = resizeString((*result), (*n).Text->Sup.len + 0);
appendString((*result), (*n).Text);
		}
		LA46: ;
	}
	break;
	case ((NU8) 51):
	{
		nimln(270, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3779));
		nimln(271, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(272, "rstast.nim");
		(*result) = resizeString((*result), 11);
appendString((*result), ((NimStringDesc*) &TMP3802));
		nimln(274, "rstast.nim");
		(*d).Indent = addInt((*d).Indent, 3);
		nimln(275, "rstast.nim");
		{
			nimln(275, "rstast.nim");
			nimln(275, "rstast.nim");
			if ((NU)(2) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
			if (!!(((*n).Sons->data[2] == NIM_NIL))) goto LA56;
			nimln(275, "rstast.nim");
			if ((NU)(2) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
			renderrstsons_301223(d, (*n).Sons->data[2], result);
		}
		LA56: ;
		nimln(276, "rstast.nim");
		(*d).Indent = subInt((*d).Indent, 3);
	}
	break;
	case ((NU8) 44):
	{
		nimln(278, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3779));
		nimln(279, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(280, "rstast.nim");
		(*result) = resizeString((*result), 13);
appendString((*result), ((NimStringDesc*) &TMP3803));
	}
	break;
	default:
	{
		NimStringDesc* LOC60;
		nimln(282, "rstast.nim");
		nimln(282, "rstast.nim");
		LOC60 = 0;
		nimln(282, "rstast.nim");
		LOC60 = rawNewString(reprEnum((*n).Kind, (&NTI301003))->Sup.len + 22);
appendString(LOC60, ((NimStringDesc*) &TMP3804));
appendString(LOC60, reprEnum((*n).Kind, (&NTI301003)));
		(*result) = resizeString((*result), LOC60->Sup.len + 0);
appendString((*result), LOC60);
	}
	break;
	}
	BeforeRet: ;
	popFrame();
}

N_NIMCALL(void, renderrsttorst_301557)(trstnode301009* n, NimStringDesc** result) {
	trendercontext301211 d;
	nimfr("renderRstToRst", "rstast.nim")
	memset((void*)&d, 0, sizeof(d));
	nimln(287, "rstast.nim");
	renderrsttorst_301215(&d, n, result);
	popFrame();
}

static N_INLINE(void*, seqtoptr_301607)(TY301084* x_301613) {
	void* result;
	nimfr("seqToPtr", "system.nim")
	result = 0;
	nimln(1659, "system.nim");
	result = ((void*) (x_301613));
	popFrame();
	return result;
}

N_NIMCALL(tjsonnode296114*, renderrsttojsonnode_301567)(trstnode301009* node) {
	tjsonnode296114* result;
	TY301586 LOC1;
	nimfr("renderRstToJsonNode", "rstast.nim")
	result = 0;
	nimln(290, "rstast.nim");
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC1[0].Field0 = copyString(((NimStringDesc*) &TMP3806));
	nimln(292, "rstast.nim");
	nimln(292, "rstast.nim");
	LOC1[0].Field1 = HEX25_296475(reprEnum((*node).Kind, (&NTI301003)));
	LOC1[1].Field0 = copyString(((NimStringDesc*) &TMP3807));
	nimln(293, "rstast.nim");
	LOC1[1].Field1 = HEX25_296511(((NI64) ((*node).Level)));
	result = HEX25_296619(LOC1, 2);
	nimln(295, "rstast.nim");
	{
		tjsonnode296114* LOC6;
		nimln(295, "rstast.nim");
		nimln(295, "rstast.nim");
		if (!!(((*node).Text == NIM_NIL))) goto LA4;
		nimln(296, "rstast.nim");
		nimln(296, "rstast.nim");
		LOC6 = 0;
		LOC6 = HEX25_296475((*node).Text);
		add_297844(result, ((NimStringDesc*) &TMP3808), LOC6);
	}
	LA4: ;
	nimln(297, "rstast.nim");
	{
		NIM_BOOL LOC9;
		NIM_BOOL LOC10;
		TY296134* accm;
		NI i_301838;
		trstnode301009* son_301839;
		TY301084* HEX3Atmp_301841;
		NI i_301843;
		tjsonnode296114* LOC15;
		nimln(297, "rstast.nim");
		LOC9 = 0;
		nimln(297, "rstast.nim");
		nimln(297, "rstast.nim");
		LOC10 = 0;
		LOC10 = HEX3DHEX3D_301591((*node).Sons, NIM_NIL);
		LOC9 = !(LOC10);
		if (!(LOC9)) goto LA11;
		nimln(297, "rstast.nim");
		nimln(297, "rstast.nim");
		LOC9 = (0 < (*node).Sons->Sup.len);
		LA11: ;
		if (!LOC9) goto LA12;
		nimln(298, "rstast.nim");
		nimln(298, "rstast.nim");
		accm = newseq_301745((*node).Sons->Sup.len);
		i_301838 = 0;
		son_301839 = 0;
		HEX3Atmp_301841 = 0;
		nimln(299, "rstast.nim");
		HEX3Atmp_301841 = (*node).Sons;
		nimln(1586, "system.nim");
		i_301843 = 0;
		nimln(1587, "system.nim");
		while (1) {
			nimln(1587, "system.nim");
			nimln(1587, "system.nim");
			if (!(i_301843 < HEX3Atmp_301841->Sup.len)) goto LA14;
			nimln(1586, "system.nim");
			i_301838 = i_301843;
			nimln(1588, "system.nim");
			if ((NU)(i_301843) >= (NU)(HEX3Atmp_301841->Sup.len)) raiseIndexError();
			son_301839 = HEX3Atmp_301841->data[i_301843];
			nimln(300, "rstast.nim");
			if ((NU)(i_301838) >= (NU)(accm->Sup.len)) raiseIndexError();
			asgnRefNoCycle((void**) &accm->data[i_301838], renderrsttojsonnode_301567(son_301839));
			nimln(1589, "system.nim");
			i_301843 = addInt(i_301843, 1);
		} LA14: ;
		nimln(301, "rstast.nim");
		nimln(301, "rstast.nim");
		LOC15 = 0;
		LOC15 = HEX25_296745(accm->data, accm->Sup.len);
		add_297844(result, ((NimStringDesc*) &TMP3809), LOC15);
	}
	LA12: ;
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, renderrsttojson_301847)(trstnode301009* node) {
	NimStringDesc* result;
	tjsonnode296114* LOC1;
	nimfr("renderRstToJson", "rstast.nim")
	result = 0;
	nimln(304, "rstast.nim");
	nimln(312, "rstast.nim");
	nimln(312, "rstast.nim");
	LOC1 = 0;
	LOC1 = renderrsttojsonnode_301567(node);
	result = pretty_299151(LOC1, 2);
	popFrame();
	return result;
}
N_NOINLINE(void, docutilsrstastInit)(void) {
	nimfr("rstast", "rstast.nim")
	popFrame();
}

N_NOINLINE(void, docutilsrstastDatInit)(void) {
static TNimNode* TMP3767[4];
static TNimNode* TMP3768[65];
NI TMP3770;
static char* NIM_CONST TMP3769[65] = {
"rnInner", 
"rnHeadline", 
"rnOverline", 
"rnTransition", 
"rnParagraph", 
"rnBulletList", 
"rnBulletItem", 
"rnEnumList", 
"rnEnumItem", 
"rnDefList", 
"rnDefItem", 
"rnDefName", 
"rnDefBody", 
"rnFieldList", 
"rnField", 
"rnFieldName", 
"rnFieldBody", 
"rnOptionList", 
"rnOptionListItem", 
"rnOptionGroup", 
"rnOption", 
"rnOptionString", 
"rnOptionArgument", 
"rnDescription", 
"rnLiteralBlock", 
"rnQuotedLiteralBlock", 
"rnLineBlock", 
"rnLineBlockItem", 
"rnBlockQuote", 
"rnTable", 
"rnGridTable", 
"rnTableRow", 
"rnTableHeaderCell", 
"rnTableDataCell", 
"rnLabel", 
"rnFootnote", 
"rnCitation", 
"rnStandaloneHyperlink", 
"rnHyperlink", 
"rnRef", 
"rnDirective", 
"rnDirArg", 
"rnRaw", 
"rnTitle", 
"rnContents", 
"rnImage", 
"rnFigure", 
"rnCodeBlock", 
"rnRawHtml", 
"rnRawLatex", 
"rnContainer", 
"rnIndex", 
"rnSubstitutionDef", 
"rnGeneralRole", 
"rnSub", 
"rnSup", 
"rnIdx", 
"rnEmphasis", 
"rnStrongEmphasis", 
"rnTripleEmphasis", 
"rnInterpretedText", 
"rnInlineLiteral", 
"rnSubstitutionReferences", 
"rnSmiley", 
"rnLeaf"};
static TNimNode TMP3608[71];
NTI301009.size = sizeof(trstnode301009);
NTI301009.kind = 18;
NTI301009.base = 0;
NTI301009.flags = 2;
TMP3767[0] = &TMP3608[1];
NTI301003.size = sizeof(NU8);
NTI301003.kind = 14;
NTI301003.base = 0;
NTI301003.flags = 3;
for (TMP3770 = 0; TMP3770 < 65; TMP3770++) {
TMP3608[TMP3770+2].kind = 1;
TMP3608[TMP3770+2].offset = TMP3770;
TMP3608[TMP3770+2].name = TMP3769[TMP3770];
TMP3768[TMP3770] = &TMP3608[TMP3770+2];
}
TMP3608[67].len = 65; TMP3608[67].kind = 2; TMP3608[67].sons = &TMP3768[0];
NTI301003.node = &TMP3608[67];
TMP3608[1].kind = 1;
TMP3608[1].offset = offsetof(trstnode301009, Kind);
TMP3608[1].typ = (&NTI301003);
TMP3608[1].name = "kind";
TMP3767[1] = &TMP3608[68];
TMP3608[68].kind = 1;
TMP3608[68].offset = offsetof(trstnode301009, Text);
TMP3608[68].typ = (&NTI143);
TMP3608[68].name = "text";
TMP3767[2] = &TMP3608[69];
TMP3608[69].kind = 1;
TMP3608[69].offset = offsetof(trstnode301009, Level);
TMP3608[69].typ = (&NTI106);
TMP3608[69].name = "level";
TMP3767[3] = &TMP3608[70];
TMP3608[70].kind = 1;
TMP3608[70].offset = offsetof(trstnode301009, Sons);
TMP3608[70].typ = (&NTI301084);
TMP3608[70].name = "sons";
TMP3608[0].len = 4; TMP3608[0].kind = 2; TMP3608[0].sons = &TMP3767[0];
NTI301009.node = &TMP3608[0];
NTI301005.size = sizeof(trstnode301009*);
NTI301005.kind = 22;
NTI301005.base = (&NTI301009);
NTI301005.flags = 2;
NTI301005.marker = TMP3772;
}

