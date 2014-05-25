/* Generated by Nimrod Compiler v0.9.5 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttrunk189043 ttrunk189043;
typedef struct tintset189047 tintset189047;
typedef struct ttrunkseq189045 ttrunkseq189045;
typedef struct tcell41890 tcell41890;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct tbasechunk23436 tbasechunk23436;
typedef struct tfreecell23428 tfreecell23428;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tintset189047  {
NI Counter;
NI Max;
ttrunk189043* Head;
ttrunkseq189045* Data;
};
typedef NI TY23418[16];
struct  ttrunk189043  {
ttrunk189043* Next;
NI Key;
TY23418 Bits;
};
struct  tcell41890  {
NI Refcount;
TNimType* Typ;
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
struct ttrunkseq189045 {
  TGenericSeq Sup;
  ttrunk189043* data[SEQ_DECL_SIZE];
};
static N_INLINE(NIM_BOOL, mustrehash_189058)(NI length, NI counter);
N_NIMCALL(void, failedassertimpl_80421)(NimStringDesc* msg);
N_NIMCALL(NI, mulInt)(NI a, NI b);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, nexttry_189206)(NI h, NI maxhash);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(ttrunk189043*, intsetget_189213)(tintset189047 t, NI key);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, intsetrawinsert_189239)(tintset189047 t, ttrunkseq189045** data, ttrunk189043* desc);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_47627)(tcell41890* c);
static N_INLINE(NIM_BOOL, canbecycleroot_45262)(tcell41890* c);
static N_INLINE(void, rtladdcycleroot_46035)(tcell41890* c);
N_NOINLINE(void, incl_42655)(tcellset41902* s, tcell41890* cell);
static N_INLINE(tcell41890*, usrtocell_45243)(void* usr);
static N_INLINE(void, decref_47202)(tcell41890* c);
static N_INLINE(void, rtladdzct_46802)(tcell41890* c);
N_NOINLINE(void, addzct_45218)(tcellseq41906* s, tcell41890* c);
N_NIMCALL(void, intsetenlarge_189621)(tintset189047* t);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1958)(void* p, NI op);
N_NIMCALL(void, TMP1959)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(ttrunk189043*, intsetput_189696)(tintset189047* t, NI key);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NIM_BOOL, contains_189838)(tintset189047 s, NI key);
N_NIMCALL(void, incl_189866)(tintset189047* s, NI key);
N_NIMCALL(void, excl_189877)(tintset189047* s, NI key);
N_NIMCALL(NIM_BOOL, containsorincl_189905)(tintset189047* s, NI key);
N_NIMCALL(void, initintset_189935)(tintset189047* Result);
N_NIMCALL(void, assign_189956)(tintset189047* dest, tintset189047 src);
N_NIMCALL(NimStringDesc*, HEX24_190322)(tintset189047 s);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
static N_INLINE(NIM_BOOL, empty_190342)(tintset189047 s);
STRING_LITERAL(TMP1945, "length > counter ", 17);
STRING_LITERAL(TMP1951, "data[h] != desc ", 16);
STRING_LITERAL(TMP1952, "data[h] == nil ", 15);
STRING_LITERAL(TMP1961, "t.data[h] == nil ", 17);
STRING_LITERAL(TMP1962, "dest.data[h] == nil ", 20);
STRING_LITERAL(TMP1963, "{", 1);
STRING_LITERAL(TMP1964, ", ", 2);
STRING_LITERAL(TMP1965, "}", 1);
extern TFrame* frameptr_13238;
extern tgcheap43816 gch_43844;
TNimType NTI189043; /* TTrunk */
extern TNimType NTI106; /* int */
extern TNimType NTI23418; /* array[0..15, int] */
TNimType NTI189041; /* PTrunk */
TNimType NTI189045; /* TTrunkSeq */
TNimType NTI189047; /* TIntSet */

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

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13238;
	frameptr_13238 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13238 = (*frameptr_13238).prev;
}

static N_INLINE(NIM_BOOL, mustrehash_189058)(NI length, NI counter) {
	NIM_BOOL result;
	NIM_BOOL LOC5;
	NI TMP1946;
	NI TMP1947;
	NI TMP1948;
	nimfr("mustRehash", "intsets.nim")
	result = 0;
	nimln(47, "intsets.nim");
	{
		nimln(47, "intsets.nim");
		nimln(47, "intsets.nim");
		if (!!((counter < length))) goto LA3;
		nimln(47, "intsets.nim");
		failedassertimpl_80421(((NimStringDesc*) &TMP1945));
	}
	LA3: ;
	nimln(48, "intsets.nim");
	nimln(48, "intsets.nim");
	LOC5 = 0;
	nimln(48, "intsets.nim");
	nimln(48, "intsets.nim");
	TMP1946 = mulInt(length, 2);
	nimln(48, "intsets.nim");
	TMP1947 = mulInt(counter, 3);
	LOC5 = ((NI32)(TMP1946) < (NI32)(TMP1947));
	if (LOC5) goto LA6;
	nimln(48, "intsets.nim");
	nimln(48, "intsets.nim");
	TMP1948 = subInt(length, counter);
	LOC5 = ((NI32)(TMP1948) < 4);
	LA6: ;
	result = LOC5;
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

static N_INLINE(NI, nexttry_189206)(NI h, NI maxhash) {
	NI result;
	NI TMP1949;
	NI TMP1950;
	nimfr("nextTry", "intsets.nim")
	result = 0;
	nimln(51, "intsets.nim");
	nimln(51, "intsets.nim");
	nimln(51, "intsets.nim");
	nimln(51, "intsets.nim");
	TMP1949 = mulInt(5, h);
	TMP1950 = addInt((NI32)(TMP1949), 1);
	result = (NI)((NI32)(TMP1950) & maxhash);
	popFrame();
	return result;
}

N_NIMCALL(ttrunk189043*, intsetget_189213)(tintset189047 t, NI key) {
	ttrunk189043* result;
	NI h;
	nimfr("intSetGet", "intsets.nim")
	result = 0;
	nimln(54, "intsets.nim");
	nimln(54, "intsets.nim");
	h = (NI)(key & t.Max);
	nimln(55, "intsets.nim");
	while (1) {
		nimln(55, "intsets.nim");
		nimln(55, "intsets.nim");
		if ((NU)(h) >= (NU)(t.Data->Sup.len)) raiseIndexError();
		if (!!((t.Data->data[h] == NIM_NIL))) goto LA1;
		nimln(56, "intsets.nim");
		{
			nimln(56, "intsets.nim");
			if ((NU)(h) >= (NU)(t.Data->Sup.len)) raiseIndexError();
			if (!((*t.Data->data[h]).Key == key)) goto LA4;
			nimln(57, "intsets.nim");
			nimln(57, "intsets.nim");
			if ((NU)(h) >= (NU)(t.Data->Sup.len)) raiseIndexError();
			result = t.Data->data[h];
			goto BeforeRet;
		}
		LA4: ;
		nimln(58, "intsets.nim");
		h = nexttry_189206(h, t.Max);
	} LA1: ;
	nimln(59, "intsets.nim");
	result = NIM_NIL;
	BeforeRet: ;
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

N_NIMCALL(void, intsetrawinsert_189239)(tintset189047 t, ttrunkseq189045** data, ttrunk189043* desc) {
	NI h;
	nimfr("intSetRawInsert", "intsets.nim")
	nimln(62, "intsets.nim");
	nimln(62, "intsets.nim");
	h = (NI)((*desc).Key & t.Max);
	nimln(63, "intsets.nim");
	while (1) {
		nimln(63, "intsets.nim");
		nimln(63, "intsets.nim");
		if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
		if (!!(((*data)->data[h] == NIM_NIL))) goto LA1;
		nimln(64, "intsets.nim");
		{
			nimln(64, "intsets.nim");
			nimln(64, "intsets.nim");
			nimln(64, "intsets.nim");
			if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
			if (!!(!(((*data)->data[h] == desc)))) goto LA4;
			nimln(64, "intsets.nim");
			failedassertimpl_80421(((NimStringDesc*) &TMP1951));
		}
		LA4: ;
		nimln(65, "intsets.nim");
		h = nexttry_189206(h, t.Max);
	} LA1: ;
	nimln(66, "intsets.nim");
	{
		nimln(66, "intsets.nim");
		nimln(66, "intsets.nim");
		if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
		if (!!(((*data)->data[h] == NIM_NIL))) goto LA8;
		nimln(66, "intsets.nim");
		failedassertimpl_80421(((NimStringDesc*) &TMP1952));
	}
	LA8: ;
	nimln(67, "intsets.nim");
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	asgnRef((void**) &(*data)->data[h], desc);
	popFrame();
}
N_NIMCALL(void, TMP1958)(void* p, NI op) {
	ttrunk189043* a;
	NI LOC1;
	a = (ttrunk189043*)p;
	nimGCvisit((void*)(*a).Next, op);
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 16; LOC1++) {
	}
}
N_NIMCALL(void, TMP1959)(void* p, NI op) {
	ttrunkseq189045* a;
	NI LOC1;
	a = (ttrunkseq189045*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}

N_NIMCALL(void, intsetenlarge_189621)(tintset189047* t) {
	ttrunkseq189045* n;
	NI oldmax;
	NI TMP1953;
	NI TMP1954;
	NI TMP1955;
	NI TMP1956;
	NI i_189655;
	NI res_189691;
	ttrunkseq189045* LOC6;
	nimfr("intSetEnlarge", "intsets.nim")
	n = 0;
	nimln(71, "intsets.nim");
	oldmax = (*t).Max;
	nimln(72, "intsets.nim");
	nimln(72, "intsets.nim");
	nimln(72, "intsets.nim");
	nimln(72, "intsets.nim");
	TMP1953 = addInt((*t).Max, 1);
	TMP1954 = mulInt((NI32)(TMP1953), 2);
	TMP1955 = subInt((NI32)(TMP1954), 1);
	(*t).Max = (NI32)(TMP1955);
	nimln(73, "intsets.nim");
	nimln(73, "intsets.nim");
	TMP1956 = addInt((*t).Max, 1);
	n = (ttrunkseq189045*) newSeq((&NTI189045), (NI32)(TMP1956));
	i_189655 = 0;
	nimln(1451, "system.nim");
	res_189691 = 0;
	nimln(1452, "system.nim");
	while (1) {
		nimln(1452, "system.nim");
		if (!(res_189691 <= oldmax)) goto LA1;
		nimln(1451, "system.nim");
		i_189655 = res_189691;
		nimln(75, "intsets.nim");
		{
			nimln(75, "intsets.nim");
			nimln(75, "intsets.nim");
			if ((NU)(i_189655) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			if (!!(((*t).Data->data[i_189655] == NIM_NIL))) goto LA4;
			nimln(75, "intsets.nim");
			if ((NU)(i_189655) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			intsetrawinsert_189239((*t), &n, (*t).Data->data[i_189655]);
		}
		LA4: ;
		nimln(1454, "system.nim");
		res_189691 = addInt(res_189691, 1);
	} LA1: ;
	nimln(76, "intsets.nim");
	LOC6 = 0;
	LOC6 = (*t).Data;
	unsureAsgnRef((void**) &(*t).Data, n);
	n = LOC6;
	popFrame();
}

N_NIMCALL(ttrunk189043*, intsetput_189696)(tintset189047* t, NI key) {
	ttrunk189043* result;
	NI h;
	nimfr("intSetPut", "intsets.nim")
	result = 0;
	nimln(79, "intsets.nim");
	nimln(79, "intsets.nim");
	h = (NI)(key & (*t).Max);
	nimln(80, "intsets.nim");
	while (1) {
		nimln(80, "intsets.nim");
		nimln(80, "intsets.nim");
		if ((NU)(h) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
		if (!!(((*t).Data->data[h] == NIM_NIL))) goto LA1;
		nimln(81, "intsets.nim");
		{
			nimln(81, "intsets.nim");
			if ((NU)(h) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			if (!((*(*t).Data->data[h]).Key == key)) goto LA4;
			nimln(82, "intsets.nim");
			nimln(82, "intsets.nim");
			if ((NU)(h) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			result = (*t).Data->data[h];
			goto BeforeRet;
		}
		LA4: ;
		nimln(83, "intsets.nim");
		h = nexttry_189206(h, (*t).Max);
	} LA1: ;
	nimln(84, "intsets.nim");
	{
		NI TMP1960;
		NIM_BOOL LOC8;
		nimln(84, "intsets.nim");
		nimln(84, "intsets.nim");
		TMP1960 = addInt((*t).Max, 1);
		LOC8 = 0;
		LOC8 = mustrehash_189058((NI32)(TMP1960), (*t).Counter);
		if (!LOC8) goto LA9;
		nimln(84, "intsets.nim");
		intsetenlarge_189621(t);
	}
	LA9: ;
	nimln(85, "intsets.nim");
	(*t).Counter = addInt((*t).Counter, 1);
	nimln(86, "intsets.nim");
	nimln(86, "intsets.nim");
	h = (NI)(key & (*t).Max);
	nimln(87, "intsets.nim");
	while (1) {
		nimln(87, "intsets.nim");
		nimln(87, "intsets.nim");
		if ((NU)(h) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
		if (!!(((*t).Data->data[h] == NIM_NIL))) goto LA11;
		nimln(87, "intsets.nim");
		h = nexttry_189206(h, (*t).Max);
	} LA11: ;
	nimln(88, "intsets.nim");
	{
		nimln(88, "intsets.nim");
		nimln(88, "intsets.nim");
		if ((NU)(h) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
		if (!!(((*t).Data->data[h] == NIM_NIL))) goto LA14;
		nimln(88, "intsets.nim");
		failedassertimpl_80421(((NimStringDesc*) &TMP1961));
	}
	LA14: ;
	nimln(89, "intsets.nim");
	result = (ttrunk189043*) newObj((&NTI189041), sizeof(ttrunk189043));
	nimln(90, "intsets.nim");
	asgnRef((void**) &(*result).Next, (*t).Head);
	nimln(91, "intsets.nim");
	(*result).Key = key;
	nimln(92, "intsets.nim");
	unsureAsgnRef((void**) &(*t).Head, result);
	nimln(93, "intsets.nim");
	if ((NU)(h) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
	asgnRef((void**) &(*t).Data->data[h], result);
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, contains_189838)(tintset189047 s, NI key) {
	NIM_BOOL result;
	ttrunk189043* t;
	nimfr("contains", "intsets.nim")
	result = 0;
	nimln(97, "intsets.nim");
	nimln(97, "intsets.nim");
	t = intsetget_189213(s, (NI)((NU32)(key) >> (NU32)(9)));
	nimln(98, "intsets.nim");
	{
		NI u;
		nimln(98, "intsets.nim");
		nimln(98, "intsets.nim");
		if (!!((t == NIM_NIL))) goto LA3;
		nimln(99, "intsets.nim");
		nimln(99, "intsets.nim");
		u = (NI)(key & 511);
		nimln(100, "intsets.nim");
		nimln(100, "intsets.nim");
		nimln(100, "intsets.nim");
		nimln(100, "intsets.nim");
		nimln(100, "intsets.nim");
		if ((NU)((NI)((NU32)(((NI) (u))) >> (NU32)(5))) > (NU)(15)) raiseIndexError();
		nimln(100, "intsets.nim");
		nimln(100, "intsets.nim");
		result = !(((NI)((*t).Bits[((NI)((NU32)(((NI) (u))) >> (NU32)(5)))- 0] & (NI)((NU32)(1) << (NU32)(((NI) ((NI)(((NI) (u)) & 31)))))) == 0));
	}
	goto LA1;
	LA3: ;
	{
		nimln(102, "intsets.nim");
		result = NIM_FALSE;
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(void, incl_189866)(tintset189047* s, NI key) {
	ttrunk189043* t;
	NI u;
	nimfr("incl", "intsets.nim")
	nimln(106, "intsets.nim");
	nimln(106, "intsets.nim");
	t = intsetput_189696(s, (NI)((NU32)(key) >> (NU32)(9)));
	nimln(107, "intsets.nim");
	nimln(107, "intsets.nim");
	u = (NI)(key & 511);
	nimln(108, "intsets.nim");
	nimln(108, "intsets.nim");
	if ((NU)((NI)((NU32)(((NI) (u))) >> (NU32)(5))) > (NU)(15)) raiseIndexError();
	nimln(108, "intsets.nim");
	nimln(108, "intsets.nim");
	if ((NU)((NI)((NU32)(((NI) (u))) >> (NU32)(5))) > (NU)(15)) raiseIndexError();
	nimln(109, "intsets.nim");
	nimln(109, "intsets.nim");
	(*t).Bits[((NI)((NU32)(((NI) (u))) >> (NU32)(5)))- 0] = (NI)((*t).Bits[((NI)((NU32)(((NI) (u))) >> (NU32)(5)))- 0] | (NI)((NU32)(1) << (NU32)(((NI) ((NI)(((NI) (u)) & 31))))));
	popFrame();
}

N_NIMCALL(void, excl_189877)(tintset189047* s, NI key) {
	ttrunk189043* t;
	nimfr("excl", "intsets.nim")
	nimln(113, "intsets.nim");
	nimln(113, "intsets.nim");
	t = intsetget_189213((*s), (NI)((NU32)(key) >> (NU32)(9)));
	nimln(114, "intsets.nim");
	{
		NI u;
		nimln(114, "intsets.nim");
		nimln(114, "intsets.nim");
		if (!!((t == NIM_NIL))) goto LA3;
		nimln(115, "intsets.nim");
		nimln(115, "intsets.nim");
		u = (NI)(key & 511);
		nimln(116, "intsets.nim");
		nimln(116, "intsets.nim");
		if ((NU)((NI)((NU32)(((NI) (u))) >> (NU32)(5))) > (NU)(15)) raiseIndexError();
		nimln(116, "intsets.nim");
		nimln(116, "intsets.nim");
		if ((NU)((NI)((NU32)(((NI) (u))) >> (NU32)(5))) > (NU)(15)) raiseIndexError();
		nimln(117, "intsets.nim");
		nimln(117, "intsets.nim");
		nimln(117, "intsets.nim");
		(*t).Bits[((NI)((NU32)(((NI) (u))) >> (NU32)(5)))- 0] = (NI)((*t).Bits[((NI)((NU32)(((NI) (u))) >> (NU32)(5)))- 0] & (NI)((NU32) ~((NI)((NU32)(1) << (NU32)(((NI) ((NI)(((NI) (u)) & 31))))))));
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(NIM_BOOL, containsorincl_189905)(tintset189047* s, NI key) {
	NIM_BOOL result;
	ttrunk189043* t;
	nimfr("containsOrIncl", "intsets.nim")
	result = 0;
	nimln(122, "intsets.nim");
	nimln(122, "intsets.nim");
	t = intsetget_189213((*s), (NI)((NU32)(key) >> (NU32)(9)));
	nimln(123, "intsets.nim");
	{
		NI u;
		nimln(123, "intsets.nim");
		nimln(123, "intsets.nim");
		if (!!((t == NIM_NIL))) goto LA3;
		nimln(124, "intsets.nim");
		nimln(124, "intsets.nim");
		u = (NI)(key & 511);
		nimln(125, "intsets.nim");
		nimln(125, "intsets.nim");
		nimln(125, "intsets.nim");
		nimln(125, "intsets.nim");
		nimln(125, "intsets.nim");
		if ((NU)((NI)((NU32)(((NI) (u))) >> (NU32)(5))) > (NU)(15)) raiseIndexError();
		nimln(125, "intsets.nim");
		nimln(125, "intsets.nim");
		result = !(((NI)((*t).Bits[((NI)((NU32)(((NI) (u))) >> (NU32)(5)))- 0] & (NI)((NU32)(1) << (NU32)(((NI) ((NI)(((NI) (u)) & 31)))))) == 0));
		nimln(126, "intsets.nim");
		{
			nimln(126, "intsets.nim");
			if (!!(result)) goto LA7;
			nimln(127, "intsets.nim");
			nimln(127, "intsets.nim");
			if ((NU)((NI)((NU32)(((NI) (u))) >> (NU32)(5))) > (NU)(15)) raiseIndexError();
			nimln(127, "intsets.nim");
			nimln(127, "intsets.nim");
			if ((NU)((NI)((NU32)(((NI) (u))) >> (NU32)(5))) > (NU)(15)) raiseIndexError();
			nimln(128, "intsets.nim");
			nimln(128, "intsets.nim");
			(*t).Bits[((NI)((NU32)(((NI) (u))) >> (NU32)(5)))- 0] = (NI)((*t).Bits[((NI)((NU32)(((NI) (u))) >> (NU32)(5)))- 0] | (NI)((NU32)(1) << (NU32)(((NI) ((NI)(((NI) (u)) & 31))))));
		}
		LA7: ;
	}
	goto LA1;
	LA3: ;
	{
		nimln(130, "intsets.nim");
		incl_189866(s, key);
		nimln(131, "intsets.nim");
		result = NIM_FALSE;
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(void, initintset_189935)(tintset189047* Result) {
	nimfr("initIntSet", "intsets.nim")
	nimln(135, "intsets.nim");
	unsureAsgnRef((void**) &(*Result).Data, (ttrunkseq189045*) newSeq((&NTI189045), 8));
	nimln(136, "intsets.nim");
	(*Result).Max = 7;
	nimln(137, "intsets.nim");
	(*Result).Counter = 0;
	nimln(138, "intsets.nim");
	unsureAsgnRef((void**) &(*Result).Head, NIM_NIL);
	popFrame();
}

N_NIMCALL(void, assign_189956)(tintset189047* dest, tintset189047 src) {
	ttrunk189043* it;
	nimfr("assign", "intsets.nim")
	nimln(143, "intsets.nim");
	(*dest).Counter = src.Counter;
	nimln(144, "intsets.nim");
	(*dest).Max = src.Max;
	nimln(145, "intsets.nim");
	nimln(145, "intsets.nim");
	unsureAsgnRef((void**) &(*dest).Data, (ttrunkseq189045*) newSeq((&NTI189045), src.Data->Sup.len));
	nimln(147, "intsets.nim");
	it = src.Head;
	nimln(148, "intsets.nim");
	while (1) {
		NI h;
		ttrunk189043* n;
		nimln(148, "intsets.nim");
		nimln(148, "intsets.nim");
		if (!!((it == NIM_NIL))) goto LA1;
		nimln(150, "intsets.nim");
		nimln(150, "intsets.nim");
		h = (NI)((*it).Key & (*dest).Max);
		nimln(151, "intsets.nim");
		while (1) {
			nimln(151, "intsets.nim");
			nimln(151, "intsets.nim");
			if ((NU)(h) >= (NU)((*dest).Data->Sup.len)) raiseIndexError();
			if (!!(((*dest).Data->data[h] == NIM_NIL))) goto LA2;
			nimln(151, "intsets.nim");
			h = nexttry_189206(h, (*dest).Max);
		} LA2: ;
		nimln(152, "intsets.nim");
		{
			nimln(152, "intsets.nim");
			nimln(152, "intsets.nim");
			if ((NU)(h) >= (NU)((*dest).Data->Sup.len)) raiseIndexError();
			if (!!(((*dest).Data->data[h] == NIM_NIL))) goto LA5;
			nimln(152, "intsets.nim");
			failedassertimpl_80421(((NimStringDesc*) &TMP1962));
		}
		LA5: ;
		n = 0;
		nimln(155, "intsets.nim");
		n = (ttrunk189043*) newObj((&NTI189041), sizeof(ttrunk189043));
		nimln(156, "intsets.nim");
		asgnRef((void**) &(*n).Next, (*dest).Head);
		nimln(157, "intsets.nim");
		(*n).Key = (*it).Key;
		nimln(158, "intsets.nim");
		memcpy((void*)(*n).Bits, (NIM_CONST void*)(*it).Bits, sizeof((*n).Bits));
		nimln(159, "intsets.nim");
		unsureAsgnRef((void**) &(*dest).Head, n);
		nimln(160, "intsets.nim");
		if ((NU)(h) >= (NU)((*dest).Data->Sup.len)) raiseIndexError();
		asgnRef((void**) &(*dest).Data->data[h], n);
		nimln(162, "intsets.nim");
		it = (*it).Next;
	} LA1: ;
	popFrame();
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, HEX24_190322)(tintset189047 s) {
	NimStringDesc* result;
	NI key_190327;
	ttrunk189043* r_190330;
	nimfr("$", "intsets.nim")
	result = 0;
	nimln(183, "intsets.nim");
	result = copyString(((NimStringDesc*) &TMP1963));
	key_190327 = 0;
	nimln(166, "intsets.nim");
	r_190330 = s.Head;
	nimln(167, "intsets.nim");
	while (1) {
		NI i_190332;
		nimln(167, "intsets.nim");
		nimln(167, "intsets.nim");
		if (!!((r_190330 == NIM_NIL))) goto LA1;
		nimln(168, "intsets.nim");
		i_190332 = 0;
		nimln(169, "intsets.nim");
		while (1) {
			NI w_190334;
			NI j_190336;
			nimln(169, "intsets.nim");
			if (!(i_190332 <= 15)) goto LA2;
			nimln(170, "intsets.nim");
			if ((NU)(i_190332) > (NU)(15)) raiseIndexError();
			w_190334 = (*r_190330).Bits[(i_190332)- 0];
			nimln(173, "intsets.nim");
			j_190336 = 0;
			nimln(174, "intsets.nim");
			while (1) {
				nimln(174, "intsets.nim");
				nimln(174, "intsets.nim");
				if (!!((w_190334 == 0))) goto LA3;
				nimln(175, "intsets.nim");
				{
					NimStringDesc* LOC12;
					nimln(175, "intsets.nim");
					nimln(175, "intsets.nim");
					nimln(175, "intsets.nim");
					if (!!((((NI) ((NI)(w_190334 & 1))) == 0))) goto LA6;
					nimln(176, "intsets.nim");
					nimln(176, "intsets.nim");
					nimln(176, "intsets.nim");
					nimln(176, "intsets.nim");
					nimln(176, "intsets.nim");
					key_190327 = (NI)((NI)((NU32)((*r_190330).Key) << (NU32)(9)) | (NI)((NU32)((NI)((NU32)(i_190332) << (NU32)(5))) + (NU32)(j_190336)));
					nimln(185, "intsets.nim");
					{
						nimln(185, "intsets.nim");
						nimln(185, "intsets.nim");
						if (!(1 < result->Sup.len)) goto LA10;
						nimln(185, "intsets.nim");
						result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TMP1964));
					}
					LA10: ;
					nimln(186, "intsets.nim");
					nimln(186, "intsets.nim");
					LOC12 = 0;
					LOC12 = nimIntToStr(key_190327);
					result = resizeString(result, LOC12->Sup.len + 0);
appendString(result, LOC12);
				}
				LA6: ;
				nimln(177, "intsets.nim");
				j_190336 = addInt(j_190336, 1);
				nimln(178, "intsets.nim");
				nimln(178, "intsets.nim");
				w_190334 = (NI)((NU32)(w_190334) >> (NU32)(1));
			} LA3: ;
			nimln(179, "intsets.nim");
			i_190332 = addInt(i_190332, 1);
		} LA2: ;
		nimln(180, "intsets.nim");
		r_190330 = (*r_190330).Next;
	} LA1: ;
	nimln(187, "intsets.nim");
	result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TMP1965));
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, empty_190342)(tintset189047 s) {
	NIM_BOOL result;
	nimfr("empty", "intsets.nim")
	result = 0;
	nimln(196, "intsets.nim");
	nimln(196, "intsets.nim");
	result = (s.Counter == 0);
	popFrame();
	return result;
}
N_NOINLINE(void, stdlibintsetsInit)(void) {
	nimfr("intsets", "intsets.nim")
	popFrame();
}

N_NOINLINE(void, stdlibintsetsDatInit)(void) {
static TNimNode* TMP1957[3];
static TNimNode* TMP3251[4];
static TNimNode TMP1943[9];
NTI189043.size = sizeof(ttrunk189043);
NTI189043.kind = 18;
NTI189043.base = 0;
TMP1957[0] = &TMP1943[1];
TMP1943[1].kind = 1;
TMP1943[1].offset = offsetof(ttrunk189043, Next);
TMP1943[1].typ = (&NTI189041);
TMP1943[1].name = "next";
TMP1957[1] = &TMP1943[2];
TMP1943[2].kind = 1;
TMP1943[2].offset = offsetof(ttrunk189043, Key);
TMP1943[2].typ = (&NTI106);
TMP1943[2].name = "key";
TMP1957[2] = &TMP1943[3];
TMP1943[3].kind = 1;
TMP1943[3].offset = offsetof(ttrunk189043, Bits);
TMP1943[3].typ = (&NTI23418);
TMP1943[3].name = "bits";
TMP1943[0].len = 3; TMP1943[0].kind = 2; TMP1943[0].sons = &TMP1957[0];
NTI189043.node = &TMP1943[0];
NTI189041.size = sizeof(ttrunk189043*);
NTI189041.kind = 22;
NTI189041.base = (&NTI189043);
NTI189041.marker = TMP1958;
NTI189045.size = sizeof(ttrunkseq189045*);
NTI189045.kind = 24;
NTI189045.base = (&NTI189041);
NTI189045.flags = 2;
NTI189045.marker = TMP1959;
NTI189047.size = sizeof(tintset189047);
NTI189047.kind = 18;
NTI189047.base = 0;
NTI189047.flags = 2;
TMP3251[0] = &TMP1943[5];
TMP1943[5].kind = 1;
TMP1943[5].offset = offsetof(tintset189047, Counter);
TMP1943[5].typ = (&NTI106);
TMP1943[5].name = "counter";
TMP3251[1] = &TMP1943[6];
TMP1943[6].kind = 1;
TMP1943[6].offset = offsetof(tintset189047, Max);
TMP1943[6].typ = (&NTI106);
TMP1943[6].name = "max";
TMP3251[2] = &TMP1943[7];
TMP1943[7].kind = 1;
TMP1943[7].offset = offsetof(tintset189047, Head);
TMP1943[7].typ = (&NTI189041);
TMP1943[7].name = "head";
TMP3251[3] = &TMP1943[8];
TMP1943[8].kind = 1;
TMP1943[8].offset = offsetof(tintset189047, Data);
TMP1943[8].typ = (&NTI189045);
TMP1943[8].name = "data";
TMP1943[4].len = 4; TMP1943[4].kind = 2; TMP1943[4].sons = &TMP3251[0];
NTI189047.node = &TMP1943[4];
}

