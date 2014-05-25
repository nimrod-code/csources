/* Generated by Nimrod Compiler v0.9.5 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttable165560 ttable165560;
typedef struct tkeyvaluepairseq165563 tkeyvaluepairseq165563;
typedef struct tkeyvaluepair165566 tkeyvaluepair165566;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tkeyvaluepair165566 {
NU8 Field0;
NimStringDesc* Field1;
NI32 Field2;
};
struct  ttable165560  {
tkeyvaluepairseq165563* Data;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct tkeyvaluepairseq165563 {
  TGenericSeq Sup;
  tkeyvaluepair165566 data[SEQ_DECL_SIZE];
};
static N_INLINE(NIM_BOOL, mustrehash_139414)(NI length, NI counter);
N_NIMCALL(void, failedassertimpl_80421)(NimStringDesc* msg);
N_NIMCALL(NI, mulInt)(NI a, NI b);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, nexttry_139606)(NI h, NI maxhash);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NIM_BOOL, ispoweroftwo_132278)(NI x);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP892)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NI, rawget_165744)(ttable165560 t_165751, NimStringDesc* key_165754);
N_NIMCALL(NI, hash_119827)(NimStringDesc* x);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(void, enlarge_165886)(ttable165560* t_165895);
N_NIMCALL(void, rawinsert_165956)(ttable165560* t_165965, tkeyvaluepairseq165563** data_165973, NimStringDesc* key_165977, NI32 val_165979);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell41890*, usrtocell_45243)(void* usr);
static N_INLINE(void, rtladdzct_46802)(tcell41890* c);
N_NOINLINE(void, addzct_45218)(tcellseq41906* s, tcell41890* c);
STRING_LITERAL(TMP455, "length > counter ", 17);
STRING_LITERAL(TMP887, "isPowerOfTwo(initialSize) ", 26);
extern TFrame* frameptr_13238;
TNimType NTI165566; /* TKeyValuePair */
TNimType NTI139010; /* TSlotEnum */
extern TNimType NTI143; /* string */
extern TNimType NTI112; /* int32 */
TNimType NTI165563; /* TKeyValuePairSeq */
TNimType NTI165560; /* TTable */
extern TNimType NTI106; /* int */
extern tgcheap43816 gch_43844;

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

static N_INLINE(NIM_BOOL, mustrehash_139414)(NI length, NI counter) {
	NIM_BOOL result;
	NIM_BOOL LOC5;
	NI TMP456;
	NI TMP457;
	NI TMP458;
	nimfr("mustRehash", "tables.nim")
	result = 0;
	nimln(108, "tables.nim");
	{
		nimln(108, "tables.nim");
		nimln(108, "tables.nim");
		if (!!((counter < length))) goto LA3;
		nimln(108, "tables.nim");
		failedassertimpl_80421(((NimStringDesc*) &TMP455));
	}
	LA3: ;
	nimln(109, "tables.nim");
	nimln(109, "tables.nim");
	LOC5 = 0;
	nimln(109, "tables.nim");
	nimln(109, "tables.nim");
	TMP456 = mulInt(length, 2);
	nimln(109, "tables.nim");
	TMP457 = mulInt(counter, 3);
	LOC5 = ((NI64)(TMP456) < (NI64)(TMP457));
	if (LOC5) goto LA6;
	nimln(109, "tables.nim");
	nimln(109, "tables.nim");
	TMP458 = subInt(length, counter);
	LOC5 = ((NI64)(TMP458) < 4);
	LA6: ;
	result = LOC5;
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

static N_INLINE(NI, nexttry_139606)(NI h, NI maxhash) {
	NI result;
	NI TMP459;
	NI TMP460;
	nimfr("nextTry", "tables.nim")
	result = 0;
	nimln(112, "tables.nim");
	nimln(112, "tables.nim");
	nimln(112, "tables.nim");
	nimln(112, "tables.nim");
	TMP459 = mulInt(5, h);
	TMP460 = addInt((NI64)(TMP459), 1);
	result = (NI)((NI64)(TMP460) & maxhash);
	popFrame();
	return result;
}
N_NIMCALL(void, TMP892)(void* p, NI op) {
	tkeyvaluepairseq165563* a;
	NI LOC1;
	a = (tkeyvaluepairseq165563*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field1, op);
	}
}

N_NIMCALL(void, inittable_165552)(NI initialsize_165557, ttable165560* Result) {
	nimfr("initTable", "tables.nim")
	nimln(209, "tables.nim");
	{
		NIM_BOOL LOC3;
		nimln(209, "tables.nim");
		nimln(209, "tables.nim");
		LOC3 = 0;
		LOC3 = ispoweroftwo_132278(initialsize_165557);
		if (!!(LOC3)) goto LA4;
		nimln(209, "tables.nim");
		failedassertimpl_80421(((NimStringDesc*) &TMP887));
	}
	LA4: ;
	nimln(210, "tables.nim");
	(*Result).Counter = 0;
	nimln(211, "tables.nim");
	unsureAsgnRef((void**) &(*Result).Data, (tkeyvaluepairseq165563*) newSeq((&NTI165563), initialsize_165557));
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

N_NIMCALL(NI, rawget_165744)(ttable165560 t_165751, NimStringDesc* key_165754) {
	NI result;
	NI h;
	NI LOC1;
	nimfr("rawGet", "tables.nim")
	result = 0;
	nimln(115, "tables.nim");
	nimln(115, "tables.nim");
	nimln(115, "tables.nim");
	LOC1 = 0;
	LOC1 = hash_119827(key_165754);
	nimln(115, "tables.nim");
	h = (NI)(LOC1 & (t_165751.Data->Sup.len-1));
	nimln(116, "tables.nim");
	while (1) {
		nimln(116, "tables.nim");
		nimln(116, "tables.nim");
		if ((NU)(h) >= (NU)(t_165751.Data->Sup.len)) raiseIndexError();
		if (!!((t_165751.Data->data[h].Field0 == ((NU8) 0)))) goto LA2;
		nimln(117, "tables.nim");
		{
			NIM_BOOL LOC5;
			nimln(117, "tables.nim");
			LOC5 = 0;
			nimln(117, "tables.nim");
			if ((NU)(h) >= (NU)(t_165751.Data->Sup.len)) raiseIndexError();
			LOC5 = eqStrings(t_165751.Data->data[h].Field1, key_165754);
			if (!(LOC5)) goto LA6;
			nimln(117, "tables.nim");
			if ((NU)(h) >= (NU)(t_165751.Data->Sup.len)) raiseIndexError();
			LOC5 = (t_165751.Data->data[h].Field0 == ((NU8) 1));
			LA6: ;
			if (!LOC5) goto LA7;
			nimln(118, "tables.nim");
			nimln(118, "tables.nim");
			result = h;
			goto BeforeRet;
		}
		LA7: ;
		nimln(119, "tables.nim");
		nimln(119, "tables.nim");
		h = nexttry_139606(h, (t_165751.Data->Sup.len-1));
	} LA2: ;
	nimln(120, "tables.nim");
	result = -1;
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, haskey_165730)(ttable165560 t_165737, NimStringDesc* key_165740) {
	NIM_BOOL result;
	NI LOC1;
	nimfr("hasKey", "tables.nim")
	result = 0;
	nimln(150, "tables.nim");
	nimln(150, "tables.nim");
	nimln(150, "tables.nim");
	LOC1 = 0;
	LOC1 = rawget_165744(t_165737, key_165740);
	result = (0 <= LOC1);
	popFrame();
	return result;
}

N_NIMCALL(NI32, HEX5BHEX5D_165781)(ttable165560 t_165788, NimStringDesc* key_165791) {
	NI32 result;
	NI index;
	nimfr("[]", "tables.nim")
	result = 0;
	nimln(138, "tables.nim");
	index = rawget_165744(t_165788, key_165791);
	nimln(139, "tables.nim");
	{
		nimln(139, "tables.nim");
		if (!(0 <= index)) goto LA3;
		nimln(139, "tables.nim");
		if ((NU)(index) >= (NU)(t_165788.Data->Sup.len)) raiseIndexError();
		result = t_165788.Data->data[index].Field2;
	}
	LA3: ;
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

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell41890* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(233, "gc.nim");
	c = usrtocell_45243(p);
	nimln(235, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).Refcount -= 8;
		nimln(168, "gc.nim");
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		nimln(236, "gc.nim");
		rtladdzct_46802(c);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(void, rawinsert_165956)(ttable165560* t_165965, tkeyvaluepairseq165563** data_165973, NimStringDesc* key_165977, NI32 val_165979) {
	NI h;
	NI LOC1;
	NimStringDesc* LOC3;
	nimfr("rawInsert", "tables.nim")
	nimln(123, "tables.nim");
	nimln(123, "tables.nim");
	nimln(123, "tables.nim");
	LOC1 = 0;
	LOC1 = hash_119827(key_165977);
	nimln(123, "tables.nim");
	h = (NI)(LOC1 & ((*data_165973)->Sup.len-1));
	nimln(124, "tables.nim");
	while (1) {
		nimln(124, "tables.nim");
		if ((NU)(h) >= (NU)((*data_165973)->Sup.len)) raiseIndexError();
		if (!((*data_165973)->data[h].Field0 == ((NU8) 1))) goto LA2;
		nimln(125, "tables.nim");
		nimln(125, "tables.nim");
		h = nexttry_139606(h, ((*data_165973)->Sup.len-1));
	} LA2: ;
	nimln(126, "tables.nim");
	if ((NU)(h) >= (NU)((*data_165973)->Sup.len)) raiseIndexError();
	LOC3 = 0;
	LOC3 = (*data_165973)->data[h].Field1; (*data_165973)->data[h].Field1 = copyStringRC1(key_165977);
	if (LOC3) nimGCunrefNoCycle(LOC3);
	nimln(127, "tables.nim");
	if ((NU)(h) >= (NU)((*data_165973)->Sup.len)) raiseIndexError();
	(*data_165973)->data[h].Field2 = val_165979;
	nimln(128, "tables.nim");
	if ((NU)(h) >= (NU)((*data_165973)->Sup.len)) raiseIndexError();
	(*data_165973)->data[h].Field0 = ((NU8) 1);
	popFrame();
}

N_NIMCALL(void, enlarge_165886)(ttable165560* t_165895) {
	tkeyvaluepairseq165563* n;
	NI TMP905;
	NI i_165941;
	NI HEX3Atmp_166011;
	NI res_166013;
	tkeyvaluepairseq165563* LOC6;
	nimfr("enlarge", "tables.nim")
	n = 0;
	nimln(158, "tables.nim");
	nimln(158, "tables.nim");
	nimln(158, "tables.nim");
	TMP905 = mulInt((*t_165895).Data->Sup.len, 2);
	n = (tkeyvaluepairseq165563*) newSeq((&NTI165563), (NI64)(TMP905));
	i_165941 = 0;
	HEX3Atmp_166011 = 0;
	nimln(159, "tables.nim");
	nimln(159, "tables.nim");
	HEX3Atmp_166011 = ((*t_165895).Data->Sup.len-1);
	nimln(1451, "system.nim");
	res_166013 = 0;
	nimln(1452, "system.nim");
	while (1) {
		nimln(1452, "system.nim");
		if (!(res_166013 <= HEX3Atmp_166011)) goto LA1;
		nimln(1451, "system.nim");
		i_165941 = res_166013;
		nimln(160, "tables.nim");
		{
			nimln(160, "tables.nim");
			if ((NU)(i_165941) >= (NU)((*t_165895).Data->Sup.len)) raiseIndexError();
			if (!((*t_165895).Data->data[i_165941].Field0 == ((NU8) 1))) goto LA4;
			nimln(160, "tables.nim");
			if ((NU)(i_165941) >= (NU)((*t_165895).Data->Sup.len)) raiseIndexError();
			if ((NU)(i_165941) >= (NU)((*t_165895).Data->Sup.len)) raiseIndexError();
			rawinsert_165956(t_165895, &n, (*t_165895).Data->data[i_165941].Field1, (*t_165895).Data->data[i_165941].Field2);
		}
		LA4: ;
		nimln(1454, "system.nim");
		res_166013 = addInt(res_166013, 1);
	} LA1: ;
	nimln(161, "tables.nim");
	LOC6 = 0;
	LOC6 = (*t_165895).Data;
	unsureAsgnRef((void**) &(*t_165895).Data, n);
	n = LOC6;
	popFrame();
}

N_NIMCALL(void, HEX5BHEX5DHEX3D_165841)(ttable165560* t_165850, NimStringDesc* key_165854, NI32 val_165856) {
	NI index;
	nimfr("[]=", "tables.nim")
	nimln(169, "tables.nim");
	index = rawget_165744((*t_165850), key_165854);
	nimln(170, "tables.nim");
	{
		nimln(170, "tables.nim");
		if (!(0 <= index)) goto LA3;
		nimln(171, "tables.nim");
		if ((NU)(index) >= (NU)((*t_165850).Data->Sup.len)) raiseIndexError();
		(*t_165850).Data->data[index].Field2 = val_165856;
	}
	goto LA1;
	LA3: ;
	{
		nimln(164, "tables.nim");
		{
			NIM_BOOL LOC8;
			nimln(164, "tables.nim");
			nimln(164, "tables.nim");
			LOC8 = 0;
			LOC8 = mustrehash_139414((*t_165850).Data->Sup.len, (*t_165850).Counter);
			if (!LOC8) goto LA9;
			nimln(164, "tables.nim");
			enlarge_165886(t_165850);
		}
		LA9: ;
		nimln(165, "tables.nim");
		rawinsert_165956(t_165850, &(*t_165850).Data, key_165854, val_165856);
		nimln(166, "tables.nim");
		(*t_165850).Counter = addInt((*t_165850).Counter, 1);
	}
	LA1: ;
	popFrame();
}
N_NOINLINE(void, stdlibtablesInit)(void) {
	nimfr("tables", "tables.nim")
	popFrame();
}

N_NOINLINE(void, stdlibtablesDatInit)(void) {
static TNimNode* TMP888[3];
static TNimNode* TMP889[3];
NI TMP891;
static char* NIM_CONST TMP890[3] = {
"seEmpty", 
"seFilled", 
"seDeleted"};
static TNimNode* TMP893[2];
static TNimNode TMP453[11];
NTI165566.size = sizeof(tkeyvaluepair165566);
NTI165566.kind = 18;
NTI165566.base = 0;
NTI165566.flags = 2;
TMP888[0] = &TMP453[1];
NTI139010.size = sizeof(NU8);
NTI139010.kind = 14;
NTI139010.base = 0;
NTI139010.flags = 3;
for (TMP891 = 0; TMP891 < 3; TMP891++) {
TMP453[TMP891+2].kind = 1;
TMP453[TMP891+2].offset = TMP891;
TMP453[TMP891+2].name = TMP890[TMP891];
TMP889[TMP891] = &TMP453[TMP891+2];
}
TMP453[5].len = 3; TMP453[5].kind = 2; TMP453[5].sons = &TMP889[0];
NTI139010.node = &TMP453[5];
TMP453[1].kind = 1;
TMP453[1].offset = offsetof(tkeyvaluepair165566, Field0);
TMP453[1].typ = (&NTI139010);
TMP453[1].name = "Field0";
TMP888[1] = &TMP453[6];
TMP453[6].kind = 1;
TMP453[6].offset = offsetof(tkeyvaluepair165566, Field1);
TMP453[6].typ = (&NTI143);
TMP453[6].name = "Field1";
TMP888[2] = &TMP453[7];
TMP453[7].kind = 1;
TMP453[7].offset = offsetof(tkeyvaluepair165566, Field2);
TMP453[7].typ = (&NTI112);
TMP453[7].name = "Field2";
TMP453[0].len = 3; TMP453[0].kind = 2; TMP453[0].sons = &TMP888[0];
NTI165566.node = &TMP453[0];
NTI165563.size = sizeof(tkeyvaluepairseq165563*);
NTI165563.kind = 24;
NTI165563.base = (&NTI165566);
NTI165563.flags = 2;
NTI165563.marker = TMP892;
NTI165560.size = sizeof(ttable165560);
NTI165560.kind = 18;
NTI165560.base = 0;
NTI165560.flags = 2;
TMP893[0] = &TMP453[9];
TMP453[9].kind = 1;
TMP453[9].offset = offsetof(ttable165560, Data);
TMP453[9].typ = (&NTI165563);
TMP453[9].name = "data";
TMP893[1] = &TMP453[10];
TMP453[10].kind = 1;
TMP453[10].offset = offsetof(ttable165560, Counter);
TMP453[10].typ = (&NTI106);
TMP453[10].name = "counter";
TMP453[8].len = 2; TMP453[8].kind = 2; TMP453[8].sons = &TMP893[0];
NTI165560.node = &TMP453[8];
}

