/* Generated by Nimrod Compiler v0.9.5 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct tlinkedlist120023 tlinkedlist120023;
typedef struct tlistentry120017 tlistentry120017;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcell41688 tcell41688;
typedef struct tcellset41700 tcellset41700;
typedef struct tgcheap43616 tgcheap43616;
typedef struct tcellseq41704 tcellseq41704;
typedef struct tpagedesc41696 tpagedesc41696;
typedef struct tmemregion24010 tmemregion24010;
typedef struct tsmallchunk23238 tsmallchunk23238;
typedef struct tllchunk24004 tllchunk24004;
typedef struct tbigchunk23240 tbigchunk23240;
typedef struct tintset23215 tintset23215;
typedef struct ttrunk23211 ttrunk23211;
typedef struct tavlnode24008 tavlnode24008;
typedef struct tgcstat43614 tgcstat43614;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tstrentry120019 tstrentry120019;
typedef struct tbasechunk23236 tbasechunk23236;
typedef struct tfreecell23228 tfreecell23228;
struct  tlinkedlist120023  {
tlistentry120017* Head;
tlistentry120017* Tail;
NI Counter;
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
struct  tlistentry120017  {
  TNimObject Sup;
tlistentry120017* Prev;
tlistentry120017* Next;
};
struct  tcell41688  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq41704  {
NI Len;
NI Cap;
tcell41688** D;
};
struct  tcellset41700  {
NI Counter;
NI Max;
tpagedesc41696* Head;
tpagedesc41696** Data;
};
typedef tsmallchunk23238* TY24022[512];
typedef ttrunk23211* ttrunkbuckets23213[256];
struct  tintset23215  {
ttrunkbuckets23213 Data;
};
struct  tmemregion24010  {
NI Minlargeobj;
NI Maxlargeobj;
TY24022 Freesmallchunks;
tllchunk24004* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk23240* Freechunkslist;
tintset23215 Chunkstarts;
tavlnode24008* Root;
tavlnode24008* Deleted;
tavlnode24008* Last;
tavlnode24008* Freeavlnodes;
};
struct  tgcstat43614  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap43616  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq41704 Zct;
tcellseq41704 Decstack;
tcellset41700 Cycleroots;
tcellseq41704 Tempstack;
NI Recgclock;
tmemregion24010 Region;
tgcstat43614 Stat;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tstrentry120019  {
  tlistentry120017 Sup;
NimStringDesc* Data;
};
typedef N_NIMCALL_PTR(NIM_BOOL, tcompareproc120025) (tlistentry120017* entry, void* closure);
typedef NI TY23218[8];
struct  tpagedesc41696  {
tpagedesc41696* Next;
NI Key;
TY23218 Bits;
};
struct  tbasechunk23236  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk23238  {
  tbasechunk23236 Sup;
tsmallchunk23238* Next;
tsmallchunk23238* Prev;
tfreecell23228* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk24004  {
NI Size;
NI Acc;
tllchunk24004* Next;
};
struct  tbigchunk23240  {
  tbasechunk23236 Sup;
tbigchunk23240* Next;
tbigchunk23240* Prev;
NI Align;
NF Data;
};
struct  ttrunk23211  {
ttrunk23211* Next;
NI Key;
TY23218 Bits;
};
typedef tavlnode24008* TY24014[2];
struct  tavlnode24008  {
TY24014 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tfreecell23228  {
tfreecell23228* Next;
NI Zerofield;
};
N_NIMCALL(void, initlinkedlist_120036)(tlinkedlist120023* list);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, append_120042)(tlinkedlist120023* list, tlistentry120017* entry);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_47427)(tcell41688* c);
static N_INLINE(NIM_BOOL, canbecycleroot_45062)(tcell41688* c);
static N_INLINE(void, rtladdcycleroot_45835)(tcell41688* c);
N_NOINLINE(void, incl_42455)(tcellset41700* s, tcell41688* cell);
static N_INLINE(tcell41688*, usrtocell_45043)(void* usr);
static N_INLINE(void, decref_47002)(tcell41688* c);
static N_INLINE(void, rtladdzct_46602)(tcell41688* c);
N_NOINLINE(void, addzct_45018)(tcellseq41704* s, tcell41688* c);
N_NIMCALL(void, failedassertimpl_81621)(NimStringDesc* msg);
N_NIMCALL(NIM_BOOL, contains_120237)(tlinkedlist120023* list, NimStringDesc* data);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP277)(void* p, NI op);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(tstrentry120019*, newstrentry_120263)(NimStringDesc* data);
N_NIMCALL(void, TMP278)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
N_NIMCALL(void, appendstr_120285)(tlinkedlist120023* list, NimStringDesc* data);
N_NIMCALL(NIM_BOOL, includestr_120292)(tlinkedlist120023* list, NimStringDesc* data);
N_NIMCALL(void, prepend_120300)(tlinkedlist120023* list, tlistentry120017* entry);
N_NIMCALL(void, prependstr_120437)(tlinkedlist120023* list, NimStringDesc* data);
N_NIMCALL(void, insertbefore_120444)(tlinkedlist120023* list, tlistentry120017* pos, tlistentry120017* entry);
N_NIMCALL(void, remove_120669)(tlinkedlist120023* list, tlistentry120017* entry);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NIMCALL(void, bringtofront_120758)(tlinkedlist120023* list, tlistentry120017* entry);
N_NIMCALL(void, excludestr_120803)(tlinkedlist120023* list, NimStringDesc* data);
N_NIMCALL(tlistentry120017*, find_120830)(tlinkedlist120023* list, tcompareproc120025 fn, void* closure);
STRING_LITERAL(TMP275, "list.tail.next == nil ", 22);
STRING_LITERAL(TMP279, "list.head.prev == nil ", 22);
STRING_LITERAL(TMP280, "pos != nil ", 11);
extern TFrame* frameptr_13238;
extern tgcheap43616 gch_43644;
extern TNimType NTI2409; /* TObject */
TNimType NTI120017; /* TListEntry */
TNimType NTI120015; /* PListEntry */
TNimType NTI120019; /* TStrEntry */
extern TNimType NTI143; /* string */
TNimType NTI120021; /* PStrEntry */
TNimType NTI120023; /* TLinkedList */
extern TNimType NTI106; /* int */

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13238;
	frameptr_13238 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13238 = (*frameptr_13238).prev;
}

N_NIMCALL(void, initlinkedlist_120036)(tlinkedlist120023* list) {
	nimfr("initLinkedList", "lists.nim")
	nimln(28, "lists.nim");
	(*list).Counter = 0;
	nimln(29, "lists.nim");
	unsureAsgnRef((void**) &(*list).Head, NIM_NIL);
	nimln(30, "lists.nim");
	unsureAsgnRef((void**) &(*list).Tail, NIM_NIL);
	popFrame();
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

static N_INLINE(NIM_BOOL, canbecycleroot_45062)(tcell41688* c) {
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

static N_INLINE(void, rtladdcycleroot_45835)(tcell41688* c) {
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
		incl_42455(&gch_43644.Cycleroots, c);
	}
	LA3: ;
	popFrame();
}

static N_INLINE(void, incref_47427)(tcell41688* c) {
	nimfr("incRef", "gc.nim")
	nimln(216, "gc.nim");
	nimln(216, "gc.nim");
	(*c).Refcount = (NI)((NU64)((*c).Refcount) + (NU64)(8));
	nimln(219, "gc.nim");
	{
		NIM_BOOL LOC3;
		nimln(219, "gc.nim");
		LOC3 = 0;
		LOC3 = canbecycleroot_45062(c);
		if (!LOC3) goto LA4;
		nimln(220, "gc.nim");
		rtladdcycleroot_45835(c);
	}
	LA4: ;
	popFrame();
}

static N_INLINE(tcell41688*, usrtocell_45043)(void* usr) {
	tcell41688* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	result = ((tcell41688*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell41688))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_46602)(tcell41688* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_45018(&gch_43644.Zct, c);
	popFrame();
}

static N_INLINE(void, decref_47002)(tcell41688* c) {
	nimfr("decRef", "gc.nim")
	nimln(206, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).Refcount -= 8;
		nimln(168, "gc.nim");
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		nimln(207, "gc.nim");
		rtladdzct_46602(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		nimln(208, "gc.nim");
		LOC6 = 0;
		LOC6 = canbecycleroot_45062(c);
		if (!LOC6) goto LA7;
		nimln(211, "gc.nim");
		rtladdcycleroot_45835(c);
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
		tcell41688* LOC5;
		nimln(244, "gc.nim");
		nimln(244, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(244, "gc.nim");
		nimln(244, "gc.nim");
		LOC5 = 0;
		LOC5 = usrtocell_45043(src);
		incref_47427(LOC5);
	}
	LA3: ;
	nimln(245, "gc.nim");
	{
		tcell41688* LOC10;
		nimln(245, "gc.nim");
		nimln(245, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		nimln(245, "gc.nim");
		nimln(245, "gc.nim");
		LOC10 = 0;
		LOC10 = usrtocell_45043((*dest));
		decref_47002(LOC10);
	}
	LA8: ;
	nimln(246, "gc.nim");
	(*dest) = src;
	popFrame();
}

N_NIMCALL(void, append_120042)(tlinkedlist120023* list, tlistentry120017* entry) {
	nimfr("append", "lists.nim")
	nimln(33, "lists.nim");
	(*list).Counter = addInt((*list).Counter, 1);
	nimln(34, "lists.nim");
	asgnRef((void**) &(*entry).Next, NIM_NIL);
	nimln(35, "lists.nim");
	asgnRef((void**) &(*entry).Prev, (*list).Tail);
	nimln(36, "lists.nim");
	{
		nimln(36, "lists.nim");
		nimln(36, "lists.nim");
		if (!!(((*list).Tail == NIM_NIL))) goto LA3;
		nimln(37, "lists.nim");
		{
			nimln(37, "lists.nim");
			nimln(37, "lists.nim");
			if (!!(((*(*list).Tail).Next == NIM_NIL))) goto LA7;
			nimln(37, "lists.nim");
			failedassertimpl_81621(((NimStringDesc*) &TMP275));
		}
		LA7: ;
		nimln(38, "lists.nim");
		asgnRef((void**) &(*(*list).Tail).Next, entry);
	}
	LA3: ;
	nimln(39, "lists.nim");
	unsureAsgnRef((void**) &(*list).Tail, entry);
	nimln(40, "lists.nim");
	{
		nimln(40, "lists.nim");
		if (!((*list).Head == NIM_NIL)) goto LA11;
		nimln(40, "lists.nim");
		unsureAsgnRef((void**) &(*list).Head, entry);
	}
	LA11: ;
	popFrame();
}
N_NIMCALL(void, TMP277)(void* p, NI op) {
	tlistentry120017* a;
	a = (tlistentry120017*)p;
	nimGCvisit((void*)(*a).Prev, op);
	nimGCvisit((void*)(*a).Next, op);
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
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI64)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, contains_120237)(tlinkedlist120023* list, NimStringDesc* data) {
	NIM_BOOL result;
	tlistentry120017* it;
	nimfr("contains", "lists.nim")
	result = 0;
	nimln(43, "lists.nim");
	it = (*list).Head;
	nimln(44, "lists.nim");
	while (1) {
		nimln(44, "lists.nim");
		nimln(44, "lists.nim");
		if (!!((it == NIM_NIL))) goto LA1;
		nimln(45, "lists.nim");
		{
			nimln(45, "lists.nim");
			if (it) chckObj((*it).Sup.m_type, (&NTI120019));
			if (!eqStrings((*((tstrentry120019*) (it))).Data, data)) goto LA4;
			nimln(46, "lists.nim");
			nimln(46, "lists.nim");
			result = NIM_TRUE;
			goto BeforeRet;
		}
		LA4: ;
		nimln(47, "lists.nim");
		it = (*it).Next;
	} LA1: ;
	BeforeRet: ;
	popFrame();
	return result;
}
N_NIMCALL(void, TMP278)(void* p, NI op) {
	tstrentry120019* a;
	a = (tstrentry120019*)p;
	nimGCvisit((void*)(*a).Sup.Prev, op);
	nimGCvisit((void*)(*a).Sup.Next, op);
	nimGCvisit((void*)(*a).Data, op);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell41688* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(233, "gc.nim");
	c = usrtocell_45043(p);
	nimln(235, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).Refcount -= 8;
		nimln(168, "gc.nim");
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		nimln(236, "gc.nim");
		rtladdzct_46602(c);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(tstrentry120019*, newstrentry_120263)(NimStringDesc* data) {
	tstrentry120019* result;
	NimStringDesc* LOC1;
	nimfr("newStrEntry", "lists.nim")
	result = 0;
	nimln(50, "lists.nim");
	result = (tstrentry120019*) newObj((&NTI120021), sizeof(tstrentry120019));
	(*result).Sup.Sup.m_type = (&NTI120019);
	nimln(51, "lists.nim");
	LOC1 = 0;
	LOC1 = (*result).Data; (*result).Data = copyStringRC1(data);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	popFrame();
	return result;
}

N_NIMCALL(void, appendstr_120285)(tlinkedlist120023* list, NimStringDesc* data) {
	tstrentry120019* LOC1;
	nimfr("appendStr", "lists.nim")
	nimln(54, "lists.nim");
	nimln(54, "lists.nim");
	LOC1 = 0;
	LOC1 = newstrentry_120263(data);
	append_120042(list, &LOC1->Sup);
	popFrame();
}

N_NIMCALL(NIM_BOOL, includestr_120292)(tlinkedlist120023* list, NimStringDesc* data) {
	NIM_BOOL result;
	nimfr("includeStr", "lists.nim")
	result = 0;
	nimln(57, "lists.nim");
	{
		NIM_BOOL LOC3;
		nimln(57, "lists.nim");
		LOC3 = 0;
		LOC3 = contains_120237(&(*list), data);
		if (!LOC3) goto LA4;
		nimln(57, "lists.nim");
		nimln(57, "lists.nim");
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA4: ;
	nimln(58, "lists.nim");
	appendstr_120285(list, data);
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(void, prepend_120300)(tlinkedlist120023* list, tlistentry120017* entry) {
	nimfr("prepend", "lists.nim")
	nimln(61, "lists.nim");
	(*list).Counter = addInt((*list).Counter, 1);
	nimln(62, "lists.nim");
	asgnRef((void**) &(*entry).Prev, NIM_NIL);
	nimln(63, "lists.nim");
	asgnRef((void**) &(*entry).Next, (*list).Head);
	nimln(64, "lists.nim");
	{
		nimln(64, "lists.nim");
		nimln(64, "lists.nim");
		if (!!(((*list).Head == NIM_NIL))) goto LA3;
		nimln(65, "lists.nim");
		{
			nimln(65, "lists.nim");
			nimln(65, "lists.nim");
			if (!!(((*(*list).Head).Prev == NIM_NIL))) goto LA7;
			nimln(65, "lists.nim");
			failedassertimpl_81621(((NimStringDesc*) &TMP279));
		}
		LA7: ;
		nimln(66, "lists.nim");
		asgnRef((void**) &(*(*list).Head).Prev, entry);
	}
	LA3: ;
	nimln(67, "lists.nim");
	unsureAsgnRef((void**) &(*list).Head, entry);
	nimln(68, "lists.nim");
	{
		nimln(68, "lists.nim");
		if (!((*list).Tail == NIM_NIL)) goto LA11;
		nimln(68, "lists.nim");
		unsureAsgnRef((void**) &(*list).Tail, entry);
	}
	LA11: ;
	popFrame();
}

N_NIMCALL(void, prependstr_120437)(tlinkedlist120023* list, NimStringDesc* data) {
	tstrentry120019* LOC1;
	nimfr("prependStr", "lists.nim")
	nimln(71, "lists.nim");
	nimln(71, "lists.nim");
	LOC1 = 0;
	LOC1 = newstrentry_120263(data);
	prepend_120300(list, &LOC1->Sup);
	popFrame();
}

N_NIMCALL(void, insertbefore_120444)(tlinkedlist120023* list, tlistentry120017* pos, tlistentry120017* entry) {
	nimfr("insertBefore", "lists.nim")
	nimln(74, "lists.nim");
	{
		nimln(74, "lists.nim");
		nimln(74, "lists.nim");
		nimln(74, "lists.nim");
		if (!!(!((pos == NIM_NIL)))) goto LA3;
		nimln(74, "lists.nim");
		failedassertimpl_81621(((NimStringDesc*) &TMP280));
	}
	LA3: ;
	nimln(75, "lists.nim");
	{
		nimln(75, "lists.nim");
		if (!(pos == (*list).Head)) goto LA7;
		nimln(76, "lists.nim");
		prepend_120300(list, entry);
	}
	goto LA5;
	LA7: ;
	{
		nimln(78, "lists.nim");
		(*list).Counter = addInt((*list).Counter, 1);
		nimln(79, "lists.nim");
		asgnRef((void**) &(*entry).Next, pos);
		nimln(80, "lists.nim");
		asgnRef((void**) &(*entry).Prev, (*pos).Prev);
		nimln(81, "lists.nim");
		{
			nimln(81, "lists.nim");
			nimln(81, "lists.nim");
			if (!!(((*pos).Prev == NIM_NIL))) goto LA12;
			nimln(81, "lists.nim");
			asgnRef((void**) &(*(*pos).Prev).Next, entry);
		}
		LA12: ;
		nimln(82, "lists.nim");
		asgnRef((void**) &(*pos).Prev, entry);
	}
	LA5: ;
	popFrame();
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

N_NIMCALL(void, remove_120669)(tlinkedlist120023* list, tlistentry120017* entry) {
	nimfr("remove", "lists.nim")
	nimln(85, "lists.nim");
	(*list).Counter = subInt((*list).Counter, 1);
	nimln(86, "lists.nim");
	{
		nimln(86, "lists.nim");
		if (!(entry == (*list).Tail)) goto LA3;
		nimln(87, "lists.nim");
		unsureAsgnRef((void**) &(*list).Tail, (*entry).Prev);
	}
	LA3: ;
	nimln(88, "lists.nim");
	{
		nimln(88, "lists.nim");
		if (!(entry == (*list).Head)) goto LA7;
		nimln(89, "lists.nim");
		unsureAsgnRef((void**) &(*list).Head, (*entry).Next);
	}
	LA7: ;
	nimln(90, "lists.nim");
	{
		nimln(90, "lists.nim");
		nimln(90, "lists.nim");
		if (!!(((*entry).Next == NIM_NIL))) goto LA11;
		nimln(90, "lists.nim");
		asgnRef((void**) &(*(*entry).Next).Prev, (*entry).Prev);
	}
	LA11: ;
	nimln(91, "lists.nim");
	{
		nimln(91, "lists.nim");
		nimln(91, "lists.nim");
		if (!!(((*entry).Prev == NIM_NIL))) goto LA15;
		nimln(91, "lists.nim");
		asgnRef((void**) &(*(*entry).Prev).Next, (*entry).Next);
	}
	LA15: ;
	popFrame();
}

N_NIMCALL(void, bringtofront_120758)(tlinkedlist120023* list, tlistentry120017* entry) {
	nimfr("bringToFront", "lists.nim")
	nimln(95, "lists.nim");
	remove_120669(list, entry);
	nimln(96, "lists.nim");
	prepend_120300(list, entry);
	popFrame();
}

N_NIMCALL(void, excludestr_120803)(tlinkedlist120023* list, NimStringDesc* data) {
	tlistentry120017* it;
	nimfr("excludeStr", "lists.nim")
	nimln(107, "lists.nim");
	it = (*list).Head;
	nimln(108, "lists.nim");
	while (1) {
		tlistentry120017* nxt;
		nimln(108, "lists.nim");
		nimln(108, "lists.nim");
		if (!!((it == NIM_NIL))) goto LA1;
		nimln(109, "lists.nim");
		nxt = (*it).Next;
		nimln(110, "lists.nim");
		{
			nimln(110, "lists.nim");
			if (it) chckObj((*it).Sup.m_type, (&NTI120019));
			if (!eqStrings((*((tstrentry120019*) (it))).Data, data)) goto LA4;
			nimln(110, "lists.nim");
			remove_120669(list, it);
		}
		LA4: ;
		nimln(111, "lists.nim");
		it = nxt;
	} LA1: ;
	popFrame();
}

N_NIMCALL(tlistentry120017*, find_120830)(tlinkedlist120023* list, tcompareproc120025 fn, void* closure) {
	tlistentry120017* result;
	nimfr("find", "lists.nim")
	result = 0;
	nimln(114, "lists.nim");
	result = (*list).Head;
	nimln(115, "lists.nim");
	while (1) {
		nimln(115, "lists.nim");
		nimln(115, "lists.nim");
		if (!!((result == NIM_NIL))) goto LA1;
		nimln(116, "lists.nim");
		{
			NIM_BOOL LOC4;
			nimln(116, "lists.nim");
			LOC4 = 0;
			LOC4 = fn(result, closure);
			if (!LOC4) goto LA5;
			nimln(116, "lists.nim");
			goto BeforeRet;
		}
		LA5: ;
		nimln(117, "lists.nim");
		result = (*result).Next;
	} LA1: ;
	BeforeRet: ;
	popFrame();
	return result;
}
N_NOINLINE(void, listsInit)(void) {
	nimfr("lists", "lists.nim")
	popFrame();
}

N_NOINLINE(void, listsDatInit)(void) {
static TNimNode* TMP276[2];
static TNimNode* TMP3240[3];
static TNimNode TMP273[8];
NTI120017.size = sizeof(tlistentry120017);
NTI120017.kind = 17;
NTI120017.base = (&NTI2409);
TMP276[0] = &TMP273[1];
NTI120015.size = sizeof(tlistentry120017*);
NTI120015.kind = 22;
NTI120015.base = (&NTI120017);
NTI120015.marker = TMP277;
TMP273[1].kind = 1;
TMP273[1].offset = offsetof(tlistentry120017, Prev);
TMP273[1].typ = (&NTI120015);
TMP273[1].name = "prev";
TMP276[1] = &TMP273[2];
TMP273[2].kind = 1;
TMP273[2].offset = offsetof(tlistentry120017, Next);
TMP273[2].typ = (&NTI120015);
TMP273[2].name = "next";
TMP273[0].len = 2; TMP273[0].kind = 2; TMP273[0].sons = &TMP276[0];
NTI120017.node = &TMP273[0];
NTI120019.size = sizeof(tstrentry120019);
NTI120019.kind = 17;
NTI120019.base = (&NTI120017);
TMP273[3].kind = 1;
TMP273[3].offset = offsetof(tstrentry120019, Data);
TMP273[3].typ = (&NTI143);
TMP273[3].name = "data";
NTI120019.node = &TMP273[3];
NTI120021.size = sizeof(tstrentry120019*);
NTI120021.kind = 22;
NTI120021.base = (&NTI120019);
NTI120021.marker = TMP278;
NTI120023.size = sizeof(tlinkedlist120023);
NTI120023.kind = 18;
NTI120023.base = 0;
TMP3240[0] = &TMP273[5];
TMP273[5].kind = 1;
TMP273[5].offset = offsetof(tlinkedlist120023, Head);
TMP273[5].typ = (&NTI120015);
TMP273[5].name = "head";
TMP3240[1] = &TMP273[6];
TMP273[6].kind = 1;
TMP273[6].offset = offsetof(tlinkedlist120023, Tail);
TMP273[6].typ = (&NTI120015);
TMP273[6].name = "tail";
TMP3240[2] = &TMP273[7];
TMP273[7].kind = 1;
TMP273[7].offset = offsetof(tlinkedlist120023, Counter);
TMP273[7].typ = (&NTI106);
TMP273[7].name = "counter";
TMP273[4].len = 3; TMP273[4].kind = 2; TMP273[4].sons = &TMP3240[0];
NTI120023.node = &TMP273[4];
}

