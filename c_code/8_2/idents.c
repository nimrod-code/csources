/* Generated by Nimrod Compiler v0.9.5 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct tident169019 tident169019;
typedef struct tidobj169013 tidobj169013;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
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
typedef struct tbasechunk23436 tbasechunk23436;
typedef struct tfreecell23428 tfreecell23428;
typedef tident169019* TY169028[8192];
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
struct  tidobj169013  {
  TNimObject Sup;
NI Id;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tident169019  {
  tidobj169013 Sup;
NimStringDesc* S;
tident169019* Next;
NI H;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct  tfreecell23428  {
tfreecell23428* Next;
NI Zerofield;
};
N_NIMCALL(NI, cmpignorestyle_169036)(NCSTRING a, NCSTRING b, NI blen);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
static N_INLINE(NI, subInt)(NI a, NI b);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NI, cmpexact_169186)(NCSTRING a, NCSTRING b, NI blen);
N_NIMCALL(tident169019*, getident_169250)(NCSTRING identifier, NI length, NI h);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell41890*, usrtocell_45243)(void* usr);
static N_INLINE(void, rtladdzct_46802)(tcell41890* c);
N_NOINLINE(void, addzct_45218)(tcellseq41906* s, tcell41890* c);
N_NIMCALL(void, failedassertimpl_80421)(NimStringDesc* msg);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP978)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(tident169019*, getident_169456)(NimStringDesc* identifier);
N_NIMCALL(NI, hashignorestyle_119859)(NimStringDesc* x);
N_NIMCALL(tident169019*, getident_169462)(NimStringDesc* identifier, NI h);
N_NIMCALL(NIM_BOOL, identeq_169469)(tident169019* id, NimStringDesc* name);
N_NIMCALL(void, TMP2048)(void* p, NI op);
STRING_LITERAL(TMP976, "(id == 0) or (id == result.id) ", 31);
STRING_LITERAL(TMP980, ":anonymous", 10);
STRING_LITERAL(TMP981, ":delegator", 10);
NIM_BOOL firstchariscs_169025;
TY169028 buckets_169033;
extern TFrame* frameptr_13238;
NI wordcounter_169248;
extern tgcheap43816 gch_43844;
extern TNimType NTI2409; /* TObject */
TNimType NTI169013; /* TIdObj */
extern TNimType NTI106; /* int */
TNimType NTI169019; /* TIdent */
extern TNimType NTI143; /* string */
extern TNimType NTI119013; /* THash */
TNimType NTI169017; /* PIdent */
tident169019* idanon_169476;
tident169019* iddelegator_169478;
TNimType NTI169015; /* PIdObj */

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

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13238;
	frameptr_13238 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13238 = (*frameptr_13238).prev;
}

N_NIMCALL(NI, cmpignorestyle_169036)(NCSTRING a, NCSTRING b, NI blen) {
	NI result;
	NI i;
	NI j;
	nimfr("cmpIgnoreStyle", "idents.nim")
	result = 0;
	nimln(32, "idents.nim");
	{
		if (!firstchariscs_169025) goto LA3;
		nimln(33, "idents.nim");
		{
			nimln(33, "idents.nim");
			nimln(33, "idents.nim");
			if (!!(((NU8)(a[0]) == (NU8)(b[0])))) goto LA7;
			nimln(33, "idents.nim");
			nimln(33, "idents.nim");
			result = 1;
			goto BeforeRet;
		}
		LA7: ;
	}
	LA3: ;
	nimln(34, "idents.nim");
	i = 0;
	nimln(35, "idents.nim");
	j = 0;
	nimln(36, "idents.nim");
	result = 1;
	nimln(37, "idents.nim");
	while (1) {
		NIM_CHAR aa;
		NIM_CHAR bb;
		NI TMP974;
		nimln(37, "idents.nim");
		if (!(j < blen)) goto LA9;
		nimln(38, "idents.nim");
		while (1) {
			nimln(38, "idents.nim");
			if (!((NU8)(a[i]) == (NU8)(95))) goto LA10;
			nimln(38, "idents.nim");
			i = addInt(i, 1);
		} LA10: ;
		nimln(39, "idents.nim");
		while (1) {
			nimln(39, "idents.nim");
			if (!((NU8)(b[j]) == (NU8)(95))) goto LA11;
			nimln(39, "idents.nim");
			j = addInt(j, 1);
		} LA11: ;
		nimln(41, "idents.nim");
		aa = a[i];
		nimln(42, "idents.nim");
		bb = b[j];
		nimln(43, "idents.nim");
		{
			NIM_BOOL LOC14;
			NI TMP972;
			nimln(43, "idents.nim");
			LOC14 = 0;
			nimln(43, "idents.nim");
			LOC14 = ((NU8)(65) <= (NU8)(aa));
			if (!(LOC14)) goto LA15;
			nimln(43, "idents.nim");
			LOC14 = ((NU8)(aa) <= (NU8)(90));
			LA15: ;
			if (!LOC14) goto LA16;
			nimln(43, "idents.nim");
			nimln(43, "idents.nim");
			nimln(43, "idents.nim");
			nimln(43, "idents.nim");
			TMP972 = addInt(((NI) (((NU8)(aa)))), 32);
			aa = ((NIM_CHAR) (((NI)chckRange((NI64)(TMP972), 0, 255))));
		}
		LA16: ;
		nimln(44, "idents.nim");
		{
			NIM_BOOL LOC20;
			NI TMP973;
			nimln(44, "idents.nim");
			LOC20 = 0;
			nimln(44, "idents.nim");
			LOC20 = ((NU8)(65) <= (NU8)(bb));
			if (!(LOC20)) goto LA21;
			nimln(44, "idents.nim");
			LOC20 = ((NU8)(bb) <= (NU8)(90));
			LA21: ;
			if (!LOC20) goto LA22;
			nimln(44, "idents.nim");
			nimln(44, "idents.nim");
			nimln(44, "idents.nim");
			nimln(44, "idents.nim");
			TMP973 = addInt(((NI) (((NU8)(bb)))), 32);
			bb = ((NIM_CHAR) (((NI)chckRange((NI64)(TMP973), 0, 255))));
		}
		LA22: ;
		nimln(45, "idents.nim");
		nimln(45, "idents.nim");
		nimln(45, "idents.nim");
		nimln(45, "idents.nim");
		TMP974 = subInt(((NI) (((NU8)(aa)))), ((NI) (((NU8)(bb)))));
		result = (NI64)(TMP974);
		nimln(46, "idents.nim");
		{
			NIM_BOOL LOC26;
			nimln(46, "idents.nim");
			LOC26 = 0;
			nimln(46, "idents.nim");
			nimln(46, "idents.nim");
			LOC26 = !((result == 0));
			if (LOC26) goto LA27;
			nimln(46, "idents.nim");
			LOC26 = ((NU8)(aa) == (NU8)(0));
			LA27: ;
			if (!LOC26) goto LA28;
			nimln(46, "idents.nim");
			goto LA9;
		}
		LA28: ;
		nimln(47, "idents.nim");
		i = addInt(i, 1);
		nimln(48, "idents.nim");
		j = addInt(j, 1);
	} LA9: ;
	nimln(49, "idents.nim");
	{
		nimln(49, "idents.nim");
		if (!(result == 0)) goto LA32;
		nimln(50, "idents.nim");
		{
			nimln(50, "idents.nim");
			nimln(50, "idents.nim");
			if (!!(((NU8)(a[i]) == (NU8)(0)))) goto LA36;
			nimln(50, "idents.nim");
			result = 1;
		}
		LA36: ;
	}
	LA32: ;
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NI, cmpexact_169186)(NCSTRING a, NCSTRING b, NI blen) {
	NI result;
	NI i;
	NI j;
	nimfr("cmpExact", "idents.nim")
	result = 0;
	nimln(53, "idents.nim");
	i = 0;
	nimln(54, "idents.nim");
	j = 0;
	nimln(55, "idents.nim");
	result = 1;
	nimln(56, "idents.nim");
	while (1) {
		NIM_CHAR aa;
		NIM_CHAR bb;
		NI TMP975;
		nimln(56, "idents.nim");
		if (!(j < blen)) goto LA1;
		nimln(57, "idents.nim");
		aa = a[i];
		nimln(58, "idents.nim");
		bb = b[j];
		nimln(59, "idents.nim");
		nimln(59, "idents.nim");
		nimln(59, "idents.nim");
		nimln(59, "idents.nim");
		TMP975 = subInt(((NI) (((NU8)(aa)))), ((NI) (((NU8)(bb)))));
		result = (NI64)(TMP975);
		nimln(60, "idents.nim");
		{
			NIM_BOOL LOC4;
			nimln(60, "idents.nim");
			LOC4 = 0;
			nimln(60, "idents.nim");
			nimln(60, "idents.nim");
			LOC4 = !((result == 0));
			if (LOC4) goto LA5;
			nimln(60, "idents.nim");
			LOC4 = ((NU8)(aa) == (NU8)(0));
			LA5: ;
			if (!LOC4) goto LA6;
			nimln(60, "idents.nim");
			goto LA1;
		}
		LA6: ;
		nimln(61, "idents.nim");
		i = addInt(i, 1);
		nimln(62, "idents.nim");
		j = addInt(j, 1);
	} LA1: ;
	nimln(63, "idents.nim");
	{
		nimln(63, "idents.nim");
		if (!(result == 0)) goto LA10;
		nimln(64, "idents.nim");
		{
			nimln(64, "idents.nim");
			nimln(64, "idents.nim");
			if (!!(((NU8)(a[i]) == (NU8)(0)))) goto LA14;
			nimln(64, "idents.nim");
			result = 1;
		}
		LA14: ;
	}
	LA10: ;
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
N_NIMCALL(void, TMP978)(void* p, NI op) {
	tident169019* a;
	a = (tident169019*)p;
	nimGCvisit((void*)(*a).S, op);
	nimGCvisit((void*)(*a).Next, op);
}

N_NIMCALL(tident169019*, getident_169250)(NCSTRING identifier, NI length, NI h) {
	tident169019* result;
	NI idx;
	tident169019* last;
	NI id;
	NI i_169429;
	NI HEX3Atmp_169448;
	NI TMP979;
	NI res_169450;
	nimfr("getIdent", "idents.nim")
	result = 0;
	nimln(69, "idents.nim");
	nimln(69, "idents.nim");
	idx = (NI)(h & 8191);
	nimln(70, "idents.nim");
	result = buckets_169033[(idx)- 0];
	nimln(71, "idents.nim");
	last = NIM_NIL;
	nimln(72, "idents.nim");
	id = 0;
	nimln(73, "idents.nim");
	while (1) {
		nimln(73, "idents.nim");
		nimln(73, "idents.nim");
		if (!!((result == NIM_NIL))) goto LA1;
		nimln(74, "idents.nim");
		{
			NI LOC4;
			nimln(74, "idents.nim");
			nimln(74, "idents.nim");
			LOC4 = 0;
			LOC4 = cmpexact_169186((*result).S->data, identifier, length);
			if (!(LOC4 == 0)) goto LA5;
			nimln(75, "idents.nim");
			{
				nimln(75, "idents.nim");
				nimln(75, "idents.nim");
				if (!!((last == NIM_NIL))) goto LA9;
				nimln(77, "idents.nim");
				asgnRefNoCycle((void**) &(*last).Next, (*result).Next);
				nimln(78, "idents.nim");
				asgnRefNoCycle((void**) &(*result).Next, buckets_169033[(idx)- 0]);
				nimln(79, "idents.nim");
				asgnRefNoCycle((void**) &buckets_169033[(idx)- 0], result);
			}
			LA9: ;
			nimln(80, "idents.nim");
			goto BeforeRet;
		}
		goto LA2;
		LA5: ;
		{
			NI LOC12;
			nimln(81, "idents.nim");
			nimln(81, "idents.nim");
			LOC12 = 0;
			LOC12 = cmpignorestyle_169036((*result).S->data, identifier, length);
			if (!(LOC12 == 0)) goto LA13;
			nimln(82, "idents.nim");
			{
				NIM_BOOL LOC17;
				nimln(82, "idents.nim");
				nimln(82, "idents.nim");
				LOC17 = 0;
				nimln(82, "idents.nim");
				LOC17 = (id == 0);
				if (LOC17) goto LA18;
				nimln(82, "idents.nim");
				LOC17 = (id == (*result).Sup.Id);
				LA18: ;
				if (!!(LOC17)) goto LA19;
				nimln(82, "idents.nim");
				failedassertimpl_80421(((NimStringDesc*) &TMP976));
			}
			LA19: ;
			nimln(83, "idents.nim");
			id = (*result).Sup.Id;
		}
		goto LA2;
		LA13: ;
		LA2: ;
		nimln(84, "idents.nim");
		last = result;
		nimln(85, "idents.nim");
		result = (*result).Next;
	} LA1: ;
	nimln(86, "idents.nim");
	result = (tident169019*) newObj((&NTI169017), sizeof(tident169019));
	(*result).Sup.Sup.m_type = (&NTI169019);
	nimln(87, "idents.nim");
	(*result).H = h;
	nimln(88, "idents.nim");
	nimln(88, "idents.nim");
	asgnRefNoCycle((void**) &(*result).S, mnewString(length));
	i_169429 = 0;
	HEX3Atmp_169448 = 0;
	nimln(89, "idents.nim");
	nimln(89, "idents.nim");
	TMP979 = subInt(length, 1);
	HEX3Atmp_169448 = (NI64)(TMP979);
	nimln(1451, "system.nim");
	res_169450 = 0;
	nimln(1452, "system.nim");
	while (1) {
		nimln(1452, "system.nim");
		if (!(res_169450 <= HEX3Atmp_169448)) goto LA21;
		nimln(1451, "system.nim");
		i_169429 = res_169450;
		nimln(89, "idents.nim");
		if ((NU)(i_169429) > (NU)((*result).S->Sup.len)) raiseIndexError();
		(*result).S->data[i_169429] = identifier[i_169429];
		nimln(1454, "system.nim");
		res_169450 = addInt(res_169450, 1);
	} LA21: ;
	nimln(90, "idents.nim");
	asgnRefNoCycle((void**) &(*result).Next, buckets_169033[(idx)- 0]);
	nimln(91, "idents.nim");
	asgnRefNoCycle((void**) &buckets_169033[(idx)- 0], result);
	nimln(92, "idents.nim");
	{
		nimln(92, "idents.nim");
		if (!(id == 0)) goto LA24;
		nimln(93, "idents.nim");
		wordcounter_169248 = addInt(wordcounter_169248, 1);
		nimln(94, "idents.nim");
		nimln(94, "idents.nim");
		if (wordcounter_169248 == (IL64(-9223372036854775807) - IL64(1))) raiseOverflow();
		(*result).Sup.Id = ((NI64)-(wordcounter_169248));
	}
	goto LA22;
	LA24: ;
	{
		nimln(96, "idents.nim");
		(*result).Sup.Id = id;
	}
	LA22: ;
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(tident169019*, getident_169456)(NimStringDesc* identifier) {
	tident169019* result;
	NI LOC1;
	nimfr("getIdent", "idents.nim")
	result = 0;
	nimln(99, "idents.nim");
	nimln(99, "idents.nim");
	nimln(100, "idents.nim");
	LOC1 = 0;
	LOC1 = hashignorestyle_119859(identifier);
	result = getident_169250(identifier->data, identifier->Sup.len, LOC1);
	popFrame();
	return result;
}

N_NIMCALL(tident169019*, getident_169462)(NimStringDesc* identifier, NI h) {
	tident169019* result;
	nimfr("getIdent", "idents.nim")
	result = 0;
	nimln(103, "idents.nim");
	nimln(103, "idents.nim");
	result = getident_169250(identifier->data, identifier->Sup.len, h);
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, identeq_169469)(tident169019* id, NimStringDesc* name) {
	NIM_BOOL result;
	tident169019* LOC1;
	nimfr("identEq", "idents.nim")
	result = 0;
	nimln(106, "idents.nim");
	nimln(106, "idents.nim");
	nimln(106, "idents.nim");
	LOC1 = 0;
	LOC1 = getident_169456(name);
	result = ((*id).Sup.Id == (*LOC1).Sup.Id);
	popFrame();
	return result;
}
N_NIMCALL(void, TMP2048)(void* p, NI op) {
	tidobj169013* a;
	a = (tidobj169013*)p;
}
N_NOINLINE(void, identsInit)(void) {
	nimfr("idents", "idents.nim")
	nimln(66, "idents.nim");
	wordcounter_169248 = 1;
	nimln(108, "idents.nim");
	asgnRefNoCycle((void**) &idanon_169476, getident_169456(((NimStringDesc*) &TMP980)));
	nimln(109, "idents.nim");
	asgnRefNoCycle((void**) &iddelegator_169478, getident_169456(((NimStringDesc*) &TMP981)));
	popFrame();
}

N_NOINLINE(void, identsDatInit)(void) {
static TNimNode* TMP977[3];
static TNimNode TMP970[5];
NTI169013.size = sizeof(tidobj169013);
NTI169013.kind = 17;
NTI169013.base = (&NTI2409);
NTI169013.flags = 1;
TMP970[0].kind = 1;
TMP970[0].offset = offsetof(tidobj169013, Id);
TMP970[0].typ = (&NTI106);
TMP970[0].name = "id";
NTI169013.node = &TMP970[0];
NTI169019.size = sizeof(tident169019);
NTI169019.kind = 17;
NTI169019.base = (&NTI169013);
NTI169019.flags = 2;
TMP977[0] = &TMP970[2];
TMP970[2].kind = 1;
TMP970[2].offset = offsetof(tident169019, S);
TMP970[2].typ = (&NTI143);
TMP970[2].name = "s";
TMP977[1] = &TMP970[3];
TMP970[3].kind = 1;
TMP970[3].offset = offsetof(tident169019, Next);
TMP970[3].typ = (&NTI169017);
TMP970[3].name = "next";
TMP977[2] = &TMP970[4];
TMP970[4].kind = 1;
TMP970[4].offset = offsetof(tident169019, H);
TMP970[4].typ = (&NTI119013);
TMP970[4].name = "h";
TMP970[1].len = 3; TMP970[1].kind = 2; TMP970[1].sons = &TMP977[0];
NTI169019.node = &TMP970[1];
NTI169017.size = sizeof(tident169019*);
NTI169017.kind = 22;
NTI169017.base = (&NTI169019);
NTI169017.flags = 2;
NTI169017.marker = TMP978;
NTI169015.size = sizeof(tidobj169013*);
NTI169015.kind = 22;
NTI169015.base = (&NTI169013);
NTI169015.marker = TMP2048;
}

