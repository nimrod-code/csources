/* Generated by Nimrod Compiler v0.9.5 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct tstringtable122810 tstringtable122810;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tident170019 tident170019;
typedef struct tidobj170013 tidobj170013;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tkeyvaluepairseq122808 tkeyvaluepairseq122808;
typedef struct TY95106 TY95106;
typedef struct tcell42088 tcell42088;
typedef struct tcellset42100 tcellset42100;
typedef struct tgcheap44016 tgcheap44016;
typedef struct tcellseq42104 tcellseq42104;
typedef struct tpagedesc42096 tpagedesc42096;
typedef struct tmemregion24410 tmemregion24410;
typedef struct tsmallchunk23638 tsmallchunk23638;
typedef struct tllchunk24404 tllchunk24404;
typedef struct tbigchunk23640 tbigchunk23640;
typedef struct tintset23615 tintset23615;
typedef struct ttrunk23611 ttrunk23611;
typedef struct tavlnode24408 tavlnode24408;
typedef struct tgcstat44014 tgcstat44014;
typedef struct tinfocpu145453 tinfocpu145453;
typedef struct tinfoos145044 tinfoos145044;
typedef struct tbasechunk23636 tbasechunk23636;
typedef struct tfreecell23628 tfreecell23628;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct  tident170019  {
  tidobj170013 Sup;
NimStringDesc* S;
tident170019* Next;
NI H;
};
struct TY95106 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  tstringtable122810  {
  TNimObject Sup;
NI Counter;
tkeyvaluepairseq122808* Data;
NU8 Mode;
};
struct  tcell42088  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq42104  {
NI Len;
NI Cap;
tcell42088** D;
};
struct  tcellset42100  {
NI Counter;
NI Max;
tpagedesc42096* Head;
tpagedesc42096** Data;
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
tcellseq42104 Zct;
tcellseq42104 Decstack;
tcellset42100 Cycleroots;
tcellseq42104 Tempstack;
NI Recgclock;
tmemregion24410 Region;
tgcstat44014 Stat;
};
struct tinfocpu145453 {
NimStringDesc* Field0;
NI Field1;
NU8 Field2;
NI Field3;
NI Field4;
};
typedef tinfocpu145453 TY145469[14];
typedef NimStringDesc* TY145463[2];
struct tinfoos145044 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
NimStringDesc* Field3;
NimStringDesc* Field4;
NimStringDesc* Field5;
NimStringDesc* Field6;
NimStringDesc* Field7;
NimStringDesc* Field8;
NimStringDesc* Field9;
NimStringDesc* Field10;
NimStringDesc* Field11;
NU8 Field12;
};
typedef tinfoos145044 TY145064[23];
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NI TY23618[8];
struct  tpagedesc42096  {
tpagedesc42096* Next;
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
struct  tfreecell23628  {
tfreecell23628* Next;
NI Zerofield;
};
struct tkeyvaluepairseq122808 {
  TGenericSeq Sup;
  TY95106 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, definesymbol_171006)(NimStringDesc* symbol);
N_NIMCALL(void, nstPut)(tstringtable122810* t, NimStringDesc* key, NimStringDesc* val);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, undefsymbol_171011)(NimStringDesc* symbol);
N_NIMCALL(NIM_BOOL, isdefined_171016)(NimStringDesc* symbol);
N_NIMCALL(NIM_BOOL, nsthasKey)(tstringtable122810* t, NimStringDesc* key);
N_NIMCALL(NimStringDesc*, nstGet)(tstringtable122810* t, NimStringDesc* key);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NIM_BOOL, isdefined_171022)(tident170019* symbol);
N_NIMCALL(NI, countdefinedsymbols_171042)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(void, initdefines_171072)(void);
N_NIMCALL(tstringtable122810*, nstnewStringTable)(NU8 mode);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_47827)(tcell42088* c);
static N_INLINE(NIM_BOOL, canbecycleroot_45462)(tcell42088* c);
static N_INLINE(void, rtladdcycleroot_46235)(tcell42088* c);
N_NOINLINE(void, incl_42855)(tcellset42100* s, tcell42088* cell);
static N_INLINE(tcell42088*, usrtocell_45443)(void* usr);
static N_INLINE(void, decref_47402)(tcell42088* c);
static N_INLINE(void, rtladdzct_47002)(tcell42088* c);
N_NOINLINE(void, addzct_45418)(tcellseq42104* s, tcell42088* c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s);
STRING_LITERAL(TMP975, "true", 4);
STRING_LITERAL(TMP976, "false", 5);
STRING_LITERAL(TMP977, "nimrod", 6);
STRING_LITERAL(TMP978, "nimhygiene", 10);
STRING_LITERAL(TMP979, "niminheritable", 14);
STRING_LITERAL(TMP980, "nimmixin", 8);
STRING_LITERAL(TMP981, "nimeffects", 10);
STRING_LITERAL(TMP982, "nimbabel", 8);
STRING_LITERAL(TMP983, "nimcomputedgoto", 15);
STRING_LITERAL(TMP984, "nimunion", 8);
STRING_LITERAL(TMP985, "nimnewshared", 12);
STRING_LITERAL(TMP986, "nimrequiresnimframe", 19);
STRING_LITERAL(TMP987, "x86", 3);
STRING_LITERAL(TMP988, "itanium", 7);
STRING_LITERAL(TMP989, "x8664", 5);
STRING_LITERAL(TMP990, "msdos", 5);
STRING_LITERAL(TMP991, "mswindows", 9);
STRING_LITERAL(TMP992, "win32", 5);
STRING_LITERAL(TMP993, "unix", 4);
STRING_LITERAL(TMP994, "posix", 5);
STRING_LITERAL(TMP995, "sunos", 5);
STRING_LITERAL(TMP996, "bsd", 3);
STRING_LITERAL(TMP997, "macintosh", 9);
STRING_LITERAL(TMP998, "cpu", 3);
extern NIM_CONST TY145469 cpu_145468;
extern NIM_CONST TY145463 endiantostr_145462;
extern NIM_CONST TY145064 os_145063;
STRING_LITERAL(TMP1001, "emulatedthreadvars", 18);
tstringtable122810* gsymbols_171003;
extern TFrame* frameptr_13438;
extern tgcheap44016 gch_44044;
extern NU8 targetcpu_145573;
extern NU8 targetos_145575;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13438;
	frameptr_13438 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13438 = (*frameptr_13438).prev;
}

N_NIMCALL(void, definesymbol_171006)(NimStringDesc* symbol) {
	nimfr("defineSymbol", "condsyms.nim")
	nimln(20, "condsyms.nim");
	nstPut(gsymbols_171003, symbol, ((NimStringDesc*) &TMP975));
	popFrame();
}

N_NIMCALL(void, undefsymbol_171011)(NimStringDesc* symbol) {
	nimfr("undefSymbol", "condsyms.nim")
	nimln(23, "condsyms.nim");
	nstPut(gsymbols_171003, symbol, ((NimStringDesc*) &TMP976));
	popFrame();
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

N_NIMCALL(NIM_BOOL, isdefined_171016)(NimStringDesc* symbol) {
	NIM_BOOL result;
	nimfr("isDefined", "condsyms.nim")
	result = 0;
	nimln(26, "condsyms.nim");
	{
		NIM_BOOL LOC3;
		NimStringDesc* LOC6;
		nimln(26, "condsyms.nim");
		LOC3 = 0;
		LOC3 = nsthasKey(gsymbols_171003, symbol);
		if (!LOC3) goto LA4;
		nimln(27, "condsyms.nim");
		nimln(27, "condsyms.nim");
		nimln(27, "condsyms.nim");
		LOC6 = 0;
		LOC6 = nstGet(gsymbols_171003, symbol);
		result = eqStrings(LOC6, ((NimStringDesc*) &TMP975));
	}
	LA4: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, isdefined_171022)(tident170019* symbol) {
	NIM_BOOL result;
	nimfr("isDefined", "condsyms.nim")
	result = 0;
	nimln(29, "condsyms.nim");
	result = isdefined_171016((*symbol).S);
	popFrame();
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

N_NIMCALL(NI, countdefinedsymbols_171042)(void) {
	NI result;
	NimStringDesc* key_171045;
	NimStringDesc* val_171046;
	NI h_171064;
	NI HEX3Atmp_171066;
	NI res_171068;
	nimfr("countDefinedSymbols", "condsyms.nim")
	result = 0;
	nimln(36, "condsyms.nim");
	result = 0;
	key_171045 = 0;
	val_171046 = 0;
	h_171064 = 0;
	HEX3Atmp_171066 = 0;
	nimln(40, "strtabs.nim");
	nimln(40, "strtabs.nim");
	HEX3Atmp_171066 = ((*gsymbols_171003).Data->Sup.len-1);
	nimln(1458, "system.nim");
	res_171068 = 0;
	nimln(1459, "system.nim");
	while (1) {
		nimln(1459, "system.nim");
		if (!(res_171068 <= HEX3Atmp_171066)) goto LA1;
		nimln(1458, "system.nim");
		h_171064 = res_171068;
		nimln(41, "strtabs.nim");
		{
			nimln(41, "strtabs.nim");
			nimln(41, "strtabs.nim");
			if ((NU)(h_171064) >= (NU)((*gsymbols_171003).Data->Sup.len)) raiseIndexError();
			if (!!((*gsymbols_171003).Data->data[h_171064].Field0 == 0)) goto LA4;
			nimln(42, "strtabs.nim");
			if ((NU)(h_171064) >= (NU)((*gsymbols_171003).Data->Sup.len)) raiseIndexError();
			key_171045 = (*gsymbols_171003).Data->data[h_171064].Field0;
			nimln(42, "strtabs.nim");
			if ((NU)(h_171064) >= (NU)((*gsymbols_171003).Data->Sup.len)) raiseIndexError();
			val_171046 = (*gsymbols_171003).Data->data[h_171064].Field1;
			nimln(38, "condsyms.nim");
			{
				nimln(38, "condsyms.nim");
				if (!eqStrings(val_171046, ((NimStringDesc*) &TMP975))) goto LA8;
				nimln(38, "condsyms.nim");
				result = addInt(result, 1);
			}
			LA8: ;
		}
		LA4: ;
		nimln(1461, "system.nim");
		res_171068 = addInt(res_171068, 1);
	} LA1: ;
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, canbecycleroot_45462)(tcell42088* c) {
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

static N_INLINE(void, rtladdcycleroot_46235)(tcell42088* c) {
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
		incl_42855(&gch_44044.Cycleroots, c);
	}
	LA3: ;
	popFrame();
}

static N_INLINE(void, incref_47827)(tcell42088* c) {
	nimfr("incRef", "gc.nim")
	nimln(216, "gc.nim");
	nimln(216, "gc.nim");
	(*c).Refcount = (NI)((NU64)((*c).Refcount) + (NU64)(8));
	nimln(219, "gc.nim");
	{
		NIM_BOOL LOC3;
		nimln(219, "gc.nim");
		LOC3 = 0;
		LOC3 = canbecycleroot_45462(c);
		if (!LOC3) goto LA4;
		nimln(220, "gc.nim");
		rtladdcycleroot_46235(c);
	}
	LA4: ;
	popFrame();
}

static N_INLINE(tcell42088*, usrtocell_45443)(void* usr) {
	tcell42088* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	result = ((tcell42088*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell42088))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_47002)(tcell42088* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_45418(&gch_44044.Zct, c);
	popFrame();
}

static N_INLINE(void, decref_47402)(tcell42088* c) {
	nimfr("decRef", "gc.nim")
	nimln(206, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).Refcount -= 8;
		nimln(168, "gc.nim");
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		nimln(207, "gc.nim");
		rtladdzct_47002(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		nimln(208, "gc.nim");
		LOC6 = 0;
		LOC6 = canbecycleroot_45462(c);
		if (!LOC6) goto LA7;
		nimln(211, "gc.nim");
		rtladdcycleroot_46235(c);
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
		tcell42088* LOC5;
		nimln(244, "gc.nim");
		nimln(244, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(244, "gc.nim");
		nimln(244, "gc.nim");
		LOC5 = 0;
		LOC5 = usrtocell_45443(src);
		incref_47827(LOC5);
	}
	LA3: ;
	nimln(245, "gc.nim");
	{
		tcell42088* LOC10;
		nimln(245, "gc.nim");
		nimln(245, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		nimln(245, "gc.nim");
		nimln(245, "gc.nim");
		LOC10 = 0;
		LOC10 = usrtocell_45443((*dest));
		decref_47402(LOC10);
	}
	LA8: ;
	nimln(246, "gc.nim");
	(*dest) = src;
	popFrame();
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, initdefines_171072)(void) {
	NimStringDesc* LOC13;
	NimStringDesc* LOC14;
	NimStringDesc* LOC15;
	nimfr("initDefines", "condsyms.nim")
	nimln(41, "condsyms.nim");
	asgnRef((void**) &gsymbols_171003, nstnewStringTable(((NU8) 2)));
	nimln(42, "condsyms.nim");
	definesymbol_171006(((NimStringDesc*) &TMP977));
	nimln(44, "condsyms.nim");
	definesymbol_171006(((NimStringDesc*) &TMP978));
	nimln(45, "condsyms.nim");
	definesymbol_171006(((NimStringDesc*) &TMP979));
	nimln(46, "condsyms.nim");
	definesymbol_171006(((NimStringDesc*) &TMP980));
	nimln(47, "condsyms.nim");
	definesymbol_171006(((NimStringDesc*) &TMP981));
	nimln(48, "condsyms.nim");
	definesymbol_171006(((NimStringDesc*) &TMP982));
	nimln(49, "condsyms.nim");
	definesymbol_171006(((NimStringDesc*) &TMP983));
	nimln(50, "condsyms.nim");
	definesymbol_171006(((NimStringDesc*) &TMP984));
	nimln(51, "condsyms.nim");
	definesymbol_171006(((NimStringDesc*) &TMP985));
	nimln(52, "condsyms.nim");
	definesymbol_171006(((NimStringDesc*) &TMP986));
	nimln(55, "condsyms.nim");
	switch (targetcpu_145573) {
	case ((NU8) 1):
	{
		nimln(56, "condsyms.nim");
		definesymbol_171006(((NimStringDesc*) &TMP987));
	}
	break;
	case ((NU8) 8):
	{
		nimln(57, "condsyms.nim");
		definesymbol_171006(((NimStringDesc*) &TMP988));
	}
	break;
	case ((NU8) 9):
	{
		nimln(58, "condsyms.nim");
		definesymbol_171006(((NimStringDesc*) &TMP989));
	}
	break;
	default:
	{
	}
	break;
	}
	nimln(60, "condsyms.nim");
	switch (targetos_145575) {
	case ((NU8) 1):
	{
		nimln(62, "condsyms.nim");
		definesymbol_171006(((NimStringDesc*) &TMP990));
	}
	break;
	case ((NU8) 2):
	{
		nimln(64, "condsyms.nim");
		definesymbol_171006(((NimStringDesc*) &TMP991));
		nimln(65, "condsyms.nim");
		definesymbol_171006(((NimStringDesc*) &TMP992));
	}
	break;
	case ((NU8) 4):
	case ((NU8) 5):
	case ((NU8) 6):
	case ((NU8) 8):
	case ((NU8) 13):
	case ((NU8) 14):
	case ((NU8) 16):
	case ((NU8) 12):
	case ((NU8) 20):
	{
		nimln(69, "condsyms.nim");
		definesymbol_171006(((NimStringDesc*) &TMP993));
		nimln(70, "condsyms.nim");
		definesymbol_171006(((NimStringDesc*) &TMP994));
	}
	break;
	case ((NU8) 7):
	{
		nimln(72, "condsyms.nim");
		definesymbol_171006(((NimStringDesc*) &TMP995));
		nimln(73, "condsyms.nim");
		definesymbol_171006(((NimStringDesc*) &TMP993));
		nimln(74, "condsyms.nim");
		definesymbol_171006(((NimStringDesc*) &TMP994));
	}
	break;
	case ((NU8) 9):
	case ((NU8) 10):
	case ((NU8) 11):
	{
		nimln(76, "condsyms.nim");
		definesymbol_171006(((NimStringDesc*) &TMP993));
		nimln(77, "condsyms.nim");
		definesymbol_171006(((NimStringDesc*) &TMP996));
		nimln(78, "condsyms.nim");
		definesymbol_171006(((NimStringDesc*) &TMP994));
	}
	break;
	case ((NU8) 18):
	{
		nimln(80, "condsyms.nim");
		definesymbol_171006(((NimStringDesc*) &TMP997));
	}
	break;
	case ((NU8) 19):
	{
		nimln(82, "condsyms.nim");
		definesymbol_171006(((NimStringDesc*) &TMP997));
		nimln(83, "condsyms.nim");
		definesymbol_171006(((NimStringDesc*) &TMP993));
		nimln(84, "condsyms.nim");
		definesymbol_171006(((NimStringDesc*) &TMP994));
	}
	break;
	default:
	{
	}
	break;
	}
	nimln(86, "condsyms.nim");
	nimln(86, "condsyms.nim");
	LOC13 = 0;
	nimln(86, "condsyms.nim");
	if (targetcpu_145573 < 1 || targetcpu_145573 > 14) raiseIndexError();
	LOC14 = 0;
	LOC14 = nimIntToStr(cpu_145468[(targetcpu_145573)- 1].Field4);
	LOC13 = rawNewString(LOC14->Sup.len + 3);
appendString(LOC13, ((NimStringDesc*) &TMP998));
appendString(LOC13, LOC14);
	definesymbol_171006(LOC13);
	nimln(87, "condsyms.nim");
	nimln(87, "condsyms.nim");
	if (targetcpu_145573 < 1 || targetcpu_145573 > 14) raiseIndexError();
	LOC15 = 0;
	LOC15 = nsuNormalize(endiantostr_145462[(cpu_145468[(targetcpu_145573)- 1].Field2)- 0]);
	definesymbol_171006(LOC15);
	nimln(88, "condsyms.nim");
	if (targetcpu_145573 < 1 || targetcpu_145573 > 14) raiseIndexError();
	definesymbol_171006(cpu_145468[(targetcpu_145573)- 1].Field0);
	nimln(89, "condsyms.nim");
	if (targetos_145575 < 1 || targetos_145575 > 23) raiseIndexError();
	definesymbol_171006(os_145063[(targetos_145575)- 1].Field0);
	nimln(90, "condsyms.nim");
	{
		nimln(90, "condsyms.nim");
		if (targetos_145575 < 1 || targetos_145575 > 23) raiseIndexError();
		if (!((os_145063[(targetos_145575)- 1].Field12 &(1<<((((NU8) 3))&7)))!=0)) goto LA18;
		nimln(91, "condsyms.nim");
		definesymbol_171006(((NimStringDesc*) &TMP1001));
	}
	LA18: ;
	popFrame();
}
N_NOINLINE(void, condsymsInit)(void) {
	nimfr("condsyms", "condsyms.nim")
	popFrame();
}

N_NOINLINE(void, condsymsDatInit)(void) {
}

