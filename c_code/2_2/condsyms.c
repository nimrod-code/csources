/* Generated by Nimrod Compiler v0.9.5 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct tstringtable122810 tstringtable122810;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tident171019 tident171019;
typedef struct tidobj171013 tidobj171013;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tkeyvaluepairseq122808 tkeyvaluepairseq122808;
typedef struct TY95106 TY95106;
typedef struct tcell41890 tcell41890;
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
typedef struct tinfocpu146453 tinfocpu146453;
typedef struct tinfoos146044 tinfoos146044;
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
struct  tidobj171013  {
  TNimObject Sup;
NI Id;
};
struct  tident171019  {
  tidobj171013 Sup;
NimStringDesc* S;
tident171019* Next;
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
struct tinfocpu146453 {
NimStringDesc* Field0;
NI Field1;
NU8 Field2;
NI Field3;
NI Field4;
};
typedef tinfocpu146453 TY146469[14];
typedef NimStringDesc* TY146463[2];
struct tinfoos146044 {
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
typedef tinfoos146044 TY146064[23];
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
struct tkeyvaluepairseq122808 {
  TGenericSeq Sup;
  TY95106 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, definesymbol_172006)(NimStringDesc* symbol);
N_NIMCALL(void, nstPut)(tstringtable122810* t, NimStringDesc* key, NimStringDesc* val);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, undefsymbol_172011)(NimStringDesc* symbol);
N_NIMCALL(NIM_BOOL, isdefined_172016)(NimStringDesc* symbol);
N_NIMCALL(NIM_BOOL, nsthasKey)(tstringtable122810* t, NimStringDesc* key);
N_NIMCALL(NimStringDesc*, nstGet)(tstringtable122810* t, NimStringDesc* key);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NIM_BOOL, isdefined_172022)(tident171019* symbol);
N_NIMCALL(NI, countdefinedsymbols_172042)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(void, initdefines_172072)(void);
N_NIMCALL(tstringtable122810*, nstnewStringTable)(NU8 mode);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_47627)(tcell41890* c);
static N_INLINE(NIM_BOOL, canbecycleroot_45262)(tcell41890* c);
static N_INLINE(void, rtladdcycleroot_46035)(tcell41890* c);
N_NOINLINE(void, incl_42655)(tcellset41902* s, tcell41890* cell);
static N_INLINE(tcell41890*, usrtocell_45243)(void* usr);
static N_INLINE(void, decref_47202)(tcell41890* c);
static N_INLINE(void, rtladdzct_46802)(tcell41890* c);
N_NOINLINE(void, addzct_45218)(tcellseq41906* s, tcell41890* c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s);
STRING_LITERAL(TMP986, "true", 4);
STRING_LITERAL(TMP987, "false", 5);
STRING_LITERAL(TMP988, "nimrod", 6);
STRING_LITERAL(TMP989, "nimhygiene", 10);
STRING_LITERAL(TMP990, "niminheritable", 14);
STRING_LITERAL(TMP991, "nimmixin", 8);
STRING_LITERAL(TMP992, "nimeffects", 10);
STRING_LITERAL(TMP993, "nimbabel", 8);
STRING_LITERAL(TMP994, "nimcomputedgoto", 15);
STRING_LITERAL(TMP995, "nimunion", 8);
STRING_LITERAL(TMP996, "nimnewshared", 12);
STRING_LITERAL(TMP997, "nimrequiresnimframe", 19);
STRING_LITERAL(TMP998, "x86", 3);
STRING_LITERAL(TMP999, "itanium", 7);
STRING_LITERAL(TMP1000, "x8664", 5);
STRING_LITERAL(TMP1001, "msdos", 5);
STRING_LITERAL(TMP1002, "mswindows", 9);
STRING_LITERAL(TMP1003, "win32", 5);
STRING_LITERAL(TMP1004, "unix", 4);
STRING_LITERAL(TMP1005, "posix", 5);
STRING_LITERAL(TMP1006, "sunos", 5);
STRING_LITERAL(TMP1007, "bsd", 3);
STRING_LITERAL(TMP1008, "macintosh", 9);
STRING_LITERAL(TMP1009, "cpu", 3);
extern NIM_CONST TY146469 cpu_146468;
extern NIM_CONST TY146463 endiantostr_146462;
extern NIM_CONST TY146064 os_146063;
STRING_LITERAL(TMP1012, "emulatedthreadvars", 18);
tstringtable122810* gsymbols_172003;
extern TFrame* frameptr_13238;
extern tgcheap43816 gch_43844;
extern NU8 targetcpu_146573;
extern NU8 targetos_146575;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13238;
	frameptr_13238 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13238 = (*frameptr_13238).prev;
}

N_NIMCALL(void, definesymbol_172006)(NimStringDesc* symbol) {
	nimfr("defineSymbol", "condsyms.nim")
	nimln(20, "condsyms.nim");
	nstPut(gsymbols_172003, symbol, ((NimStringDesc*) &TMP986));
	popFrame();
}

N_NIMCALL(void, undefsymbol_172011)(NimStringDesc* symbol) {
	nimfr("undefSymbol", "condsyms.nim")
	nimln(23, "condsyms.nim");
	nstPut(gsymbols_172003, symbol, ((NimStringDesc*) &TMP987));
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

N_NIMCALL(NIM_BOOL, isdefined_172016)(NimStringDesc* symbol) {
	NIM_BOOL result;
	nimfr("isDefined", "condsyms.nim")
	result = 0;
	nimln(26, "condsyms.nim");
	{
		NIM_BOOL LOC3;
		NimStringDesc* LOC6;
		nimln(26, "condsyms.nim");
		LOC3 = 0;
		LOC3 = nsthasKey(gsymbols_172003, symbol);
		if (!LOC3) goto LA4;
		nimln(27, "condsyms.nim");
		nimln(27, "condsyms.nim");
		nimln(27, "condsyms.nim");
		LOC6 = 0;
		LOC6 = nstGet(gsymbols_172003, symbol);
		result = eqStrings(LOC6, ((NimStringDesc*) &TMP986));
	}
	LA4: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, isdefined_172022)(tident171019* symbol) {
	NIM_BOOL result;
	nimfr("isDefined", "condsyms.nim")
	result = 0;
	nimln(29, "condsyms.nim");
	result = isdefined_172016((*symbol).S);
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

N_NIMCALL(NI, countdefinedsymbols_172042)(void) {
	NI result;
	NimStringDesc* key_172045;
	NimStringDesc* val_172046;
	NI h_172064;
	NI HEX3Atmp_172066;
	NI res_172068;
	nimfr("countDefinedSymbols", "condsyms.nim")
	result = 0;
	nimln(36, "condsyms.nim");
	result = 0;
	key_172045 = 0;
	val_172046 = 0;
	h_172064 = 0;
	HEX3Atmp_172066 = 0;
	nimln(40, "strtabs.nim");
	nimln(40, "strtabs.nim");
	HEX3Atmp_172066 = ((*gsymbols_172003).Data->Sup.len-1);
	nimln(1458, "system.nim");
	res_172068 = 0;
	nimln(1459, "system.nim");
	while (1) {
		nimln(1459, "system.nim");
		if (!(res_172068 <= HEX3Atmp_172066)) goto LA1;
		nimln(1458, "system.nim");
		h_172064 = res_172068;
		nimln(41, "strtabs.nim");
		{
			nimln(41, "strtabs.nim");
			nimln(41, "strtabs.nim");
			if ((NU)(h_172064) >= (NU)((*gsymbols_172003).Data->Sup.len)) raiseIndexError();
			if (!!((*gsymbols_172003).Data->data[h_172064].Field0 == 0)) goto LA4;
			nimln(42, "strtabs.nim");
			if ((NU)(h_172064) >= (NU)((*gsymbols_172003).Data->Sup.len)) raiseIndexError();
			key_172045 = (*gsymbols_172003).Data->data[h_172064].Field0;
			nimln(42, "strtabs.nim");
			if ((NU)(h_172064) >= (NU)((*gsymbols_172003).Data->Sup.len)) raiseIndexError();
			val_172046 = (*gsymbols_172003).Data->data[h_172064].Field1;
			nimln(38, "condsyms.nim");
			{
				nimln(38, "condsyms.nim");
				if (!eqStrings(val_172046, ((NimStringDesc*) &TMP986))) goto LA8;
				nimln(38, "condsyms.nim");
				result = addInt(result, 1);
			}
			LA8: ;
		}
		LA4: ;
		nimln(1461, "system.nim");
		res_172068 = addInt(res_172068, 1);
	} LA1: ;
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
	(*c).Refcount = (NI)((NU64)((*c).Refcount) + (NU64)(8));
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

static N_INLINE(void, decref_47202)(tcell41890* c) {
	nimfr("decRef", "gc.nim")
	nimln(206, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).Refcount -= 8;
		nimln(168, "gc.nim");
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
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

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, initdefines_172072)(void) {
	NimStringDesc* LOC13;
	NimStringDesc* LOC14;
	NimStringDesc* LOC15;
	nimfr("initDefines", "condsyms.nim")
	nimln(41, "condsyms.nim");
	asgnRef((void**) &gsymbols_172003, nstnewStringTable(((NU8) 2)));
	nimln(42, "condsyms.nim");
	definesymbol_172006(((NimStringDesc*) &TMP988));
	nimln(44, "condsyms.nim");
	definesymbol_172006(((NimStringDesc*) &TMP989));
	nimln(45, "condsyms.nim");
	definesymbol_172006(((NimStringDesc*) &TMP990));
	nimln(46, "condsyms.nim");
	definesymbol_172006(((NimStringDesc*) &TMP991));
	nimln(47, "condsyms.nim");
	definesymbol_172006(((NimStringDesc*) &TMP992));
	nimln(48, "condsyms.nim");
	definesymbol_172006(((NimStringDesc*) &TMP993));
	nimln(49, "condsyms.nim");
	definesymbol_172006(((NimStringDesc*) &TMP994));
	nimln(50, "condsyms.nim");
	definesymbol_172006(((NimStringDesc*) &TMP995));
	nimln(51, "condsyms.nim");
	definesymbol_172006(((NimStringDesc*) &TMP996));
	nimln(52, "condsyms.nim");
	definesymbol_172006(((NimStringDesc*) &TMP997));
	nimln(55, "condsyms.nim");
	switch (targetcpu_146573) {
	case ((NU8) 1):
	{
		nimln(56, "condsyms.nim");
		definesymbol_172006(((NimStringDesc*) &TMP998));
	}
	break;
	case ((NU8) 8):
	{
		nimln(57, "condsyms.nim");
		definesymbol_172006(((NimStringDesc*) &TMP999));
	}
	break;
	case ((NU8) 9):
	{
		nimln(58, "condsyms.nim");
		definesymbol_172006(((NimStringDesc*) &TMP1000));
	}
	break;
	default:
	{
	}
	break;
	}
	nimln(60, "condsyms.nim");
	switch (targetos_146575) {
	case ((NU8) 1):
	{
		nimln(62, "condsyms.nim");
		definesymbol_172006(((NimStringDesc*) &TMP1001));
	}
	break;
	case ((NU8) 2):
	{
		nimln(64, "condsyms.nim");
		definesymbol_172006(((NimStringDesc*) &TMP1002));
		nimln(65, "condsyms.nim");
		definesymbol_172006(((NimStringDesc*) &TMP1003));
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
		definesymbol_172006(((NimStringDesc*) &TMP1004));
		nimln(70, "condsyms.nim");
		definesymbol_172006(((NimStringDesc*) &TMP1005));
	}
	break;
	case ((NU8) 7):
	{
		nimln(72, "condsyms.nim");
		definesymbol_172006(((NimStringDesc*) &TMP1006));
		nimln(73, "condsyms.nim");
		definesymbol_172006(((NimStringDesc*) &TMP1004));
		nimln(74, "condsyms.nim");
		definesymbol_172006(((NimStringDesc*) &TMP1005));
	}
	break;
	case ((NU8) 9):
	case ((NU8) 10):
	case ((NU8) 11):
	{
		nimln(76, "condsyms.nim");
		definesymbol_172006(((NimStringDesc*) &TMP1004));
		nimln(77, "condsyms.nim");
		definesymbol_172006(((NimStringDesc*) &TMP1007));
		nimln(78, "condsyms.nim");
		definesymbol_172006(((NimStringDesc*) &TMP1005));
	}
	break;
	case ((NU8) 18):
	{
		nimln(80, "condsyms.nim");
		definesymbol_172006(((NimStringDesc*) &TMP1008));
	}
	break;
	case ((NU8) 19):
	{
		nimln(82, "condsyms.nim");
		definesymbol_172006(((NimStringDesc*) &TMP1008));
		nimln(83, "condsyms.nim");
		definesymbol_172006(((NimStringDesc*) &TMP1004));
		nimln(84, "condsyms.nim");
		definesymbol_172006(((NimStringDesc*) &TMP1005));
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
	if (targetcpu_146573 < 1 || targetcpu_146573 > 14) raiseIndexError();
	LOC14 = 0;
	LOC14 = nimIntToStr(cpu_146468[(targetcpu_146573)- 1].Field4);
	LOC13 = rawNewString(LOC14->Sup.len + 3);
appendString(LOC13, ((NimStringDesc*) &TMP1009));
appendString(LOC13, LOC14);
	definesymbol_172006(LOC13);
	nimln(87, "condsyms.nim");
	nimln(87, "condsyms.nim");
	if (targetcpu_146573 < 1 || targetcpu_146573 > 14) raiseIndexError();
	LOC15 = 0;
	LOC15 = nsuNormalize(endiantostr_146462[(cpu_146468[(targetcpu_146573)- 1].Field2)- 0]);
	definesymbol_172006(LOC15);
	nimln(88, "condsyms.nim");
	if (targetcpu_146573 < 1 || targetcpu_146573 > 14) raiseIndexError();
	definesymbol_172006(cpu_146468[(targetcpu_146573)- 1].Field0);
	nimln(89, "condsyms.nim");
	if (targetos_146575 < 1 || targetos_146575 > 23) raiseIndexError();
	definesymbol_172006(os_146063[(targetos_146575)- 1].Field0);
	nimln(90, "condsyms.nim");
	{
		nimln(90, "condsyms.nim");
		if (targetos_146575 < 1 || targetos_146575 > 23) raiseIndexError();
		if (!((os_146063[(targetos_146575)- 1].Field12 &(1<<((((NU8) 3))&7)))!=0)) goto LA18;
		nimln(91, "condsyms.nim");
		definesymbol_172006(((NimStringDesc*) &TMP1012));
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

