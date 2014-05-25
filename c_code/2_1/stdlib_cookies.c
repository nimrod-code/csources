/* Generated by Nimrod Compiler v0.9.5 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tstringtable122810 tstringtable122810;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttimeinfo95003 ttimeinfo95003;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tkeyvaluepairseq122808 tkeyvaluepairseq122808;
typedef struct TY95105 TY95105;
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
struct  ttimeinfo95003  {
  TNimObject Sup;
NI Second;
NI Minute;
NI Hour;
NI Monthday;
NU8 Month;
NI Year;
NU8 Weekday;
NI Yearday;
NIM_BOOL Isdst;
NimStringDesc* Tzname;
NI Timezone;
};
struct TY95105 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  tstringtable122810  {
  TNimObject Sup;
NI Counter;
tkeyvaluepairseq122808* Data;
NU8 Mode;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tkeyvaluepairseq122808 {
  TGenericSeq Sup;
  TY95105 data[SEQ_DECL_SIZE];
};
N_NIMCALL(tstringtable122810*, parsecookies_340012)(NimStringDesc* s);
N_NIMCALL(tstringtable122810*, nstnewStringTable)(NU8 mode);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NIMCALL(void, nstPut)(tstringtable122810* t, NimStringDesc* key, NimStringDesc* val);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_71424, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NimStringDesc*, setcookie_340106)(NimStringDesc* key, NimStringDesc* value, NimStringDesc* domain, NimStringDesc* path, NimStringDesc* expires, NIM_BOOL noname);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, setcookie_340117)(NimStringDesc* key, NimStringDesc* value, ttimeinfo95003* expires, NimStringDesc* domain, NimStringDesc* path, NIM_BOOL noname);
N_NIMCALL(NimStringDesc*, format_96999)(ttimeinfo95003* info, NimStringDesc* f);
STRING_LITERAL(TMP4694, "", 0);
STRING_LITERAL(TMP4695, "Set-Cookie: ", 12);
STRING_LITERAL(TMP4696, "=", 1);
STRING_LITERAL(TMP4697, "; Domain=", 9);
STRING_LITERAL(TMP4698, "; Path=", 7);
STRING_LITERAL(TMP4699, "; Expires=", 10);
STRING_LITERAL(TMP4700, "ddd\',\' dd MMM yyyy HH:mm:ss \'UTC\'", 33);
extern TFrame* frameptr_13238;

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

N_NIMCALL(tstringtable122810*, parsecookies_340012)(NimStringDesc* s) {
	tstringtable122810* result;
	NI i;
	nimfr("parseCookies", "cookies.nim")
	result = 0;
	nimln(16, "cookies.nim");
	result = nstnewStringTable(((NU8) 1));
	nimln(17, "cookies.nim");
	i = 0;
	nimln(18, "cookies.nim");
	while (1) {
		NI keystart;
		NI keyend;
		NI TMP4692;
		NI valstart;
		NimStringDesc* LOC15;
		NI TMP4693;
		NimStringDesc* LOC16;
		nimln(19, "cookies.nim");
		while (1) {
			NIM_BOOL LOC3;
			nimln(19, "cookies.nim");
			LOC3 = 0;
			nimln(19, "cookies.nim");
			if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
			LOC3 = ((NU8)(s->data[i]) == (NU8)(32));
			if (LOC3) goto LA4;
			nimln(19, "cookies.nim");
			if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
			LOC3 = ((NU8)(s->data[i]) == (NU8)(9));
			LA4: ;
			if (!LOC3) goto LA2;
			nimln(19, "cookies.nim");
			i = addInt(i, 1);
		} LA2: ;
		nimln(20, "cookies.nim");
		keystart = i;
		nimln(21, "cookies.nim");
		while (1) {
			NIM_BOOL LOC6;
			nimln(21, "cookies.nim");
			LOC6 = 0;
			nimln(21, "cookies.nim");
			nimln(21, "cookies.nim");
			if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
			LOC6 = !(((NU8)(s->data[i]) == (NU8)(61)));
			if (!(LOC6)) goto LA7;
			nimln(21, "cookies.nim");
			nimln(21, "cookies.nim");
			if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
			LOC6 = !(((NU8)(s->data[i]) == (NU8)(0)));
			LA7: ;
			if (!LOC6) goto LA5;
			nimln(21, "cookies.nim");
			i = addInt(i, 1);
		} LA5: ;
		nimln(22, "cookies.nim");
		nimln(22, "cookies.nim");
		TMP4692 = subInt(i, 1);
		keyend = (NI32)(TMP4692);
		nimln(23, "cookies.nim");
		{
			nimln(23, "cookies.nim");
			if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
			if (!((NU8)(s->data[i]) == (NU8)(0))) goto LA10;
			nimln(23, "cookies.nim");
			goto LA1;
		}
		LA10: ;
		nimln(24, "cookies.nim");
		i = addInt(i, 1);
		nimln(25, "cookies.nim");
		valstart = i;
		nimln(26, "cookies.nim");
		while (1) {
			NIM_BOOL LOC13;
			nimln(26, "cookies.nim");
			LOC13 = 0;
			nimln(26, "cookies.nim");
			nimln(26, "cookies.nim");
			if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
			LOC13 = !(((NU8)(s->data[i]) == (NU8)(59)));
			if (!(LOC13)) goto LA14;
			nimln(26, "cookies.nim");
			nimln(26, "cookies.nim");
			if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
			LOC13 = !(((NU8)(s->data[i]) == (NU8)(0)));
			LA14: ;
			if (!LOC13) goto LA12;
			nimln(26, "cookies.nim");
			i = addInt(i, 1);
		} LA12: ;
		nimln(27, "cookies.nim");
		nimln(27, "cookies.nim");
		LOC15 = 0;
		LOC15 = copyStrLast(s, keystart, keyend);
		nimln(27, "cookies.nim");
		nimln(27, "cookies.nim");
		TMP4693 = subInt(i, 1);
		LOC16 = 0;
		LOC16 = copyStrLast(s, valstart, (NI32)(TMP4693));
		nstPut(result, LOC15, LOC16);
		nimln(28, "cookies.nim");
		{
			nimln(28, "cookies.nim");
			if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
			if (!((NU8)(s->data[i]) == (NU8)(0))) goto LA19;
			nimln(28, "cookies.nim");
			goto LA1;
		}
		LA19: ;
		nimln(29, "cookies.nim");
		i = addInt(i, 1);
	} LA1: ;
	popFrame();
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, setcookie_340106)(NimStringDesc* key, NimStringDesc* value, NimStringDesc* domain, NimStringDesc* path, NimStringDesc* expires, NIM_BOOL noname) {
	NimStringDesc* result;
	NimStringDesc* LOC5;
	nimfr("setCookie", "cookies.nim")
	result = 0;
	nimln(35, "cookies.nim");
	result = copyString(((NimStringDesc*) &TMP4694));
	nimln(36, "cookies.nim");
	{
		nimln(36, "cookies.nim");
		if (!!(noname)) goto LA3;
		nimln(36, "cookies.nim");
		result = resizeString(result, 12);
appendString(result, ((NimStringDesc*) &TMP4695));
	}
	LA3: ;
	nimln(37, "cookies.nim");
	nimln(37, "cookies.nim");
	LOC5 = 0;
	LOC5 = rawNewString(key->Sup.len + value->Sup.len + 1);
appendString(LOC5, key);
appendString(LOC5, ((NimStringDesc*) &TMP4696));
appendString(LOC5, value);
	result = resizeString(result, LOC5->Sup.len + 0);
appendString(result, LOC5);
	nimln(38, "cookies.nim");
	{
		NimStringDesc* LOC10;
		nimln(38, "cookies.nim");
		nimln(38, "cookies.nim");
		if (!!(((domain) && (domain)->Sup.len == 0))) goto LA8;
		nimln(38, "cookies.nim");
		nimln(38, "cookies.nim");
		LOC10 = 0;
		LOC10 = rawNewString(domain->Sup.len + 9);
appendString(LOC10, ((NimStringDesc*) &TMP4697));
appendString(LOC10, domain);
		result = resizeString(result, LOC10->Sup.len + 0);
appendString(result, LOC10);
	}
	LA8: ;
	nimln(39, "cookies.nim");
	{
		NimStringDesc* LOC15;
		nimln(39, "cookies.nim");
		nimln(39, "cookies.nim");
		if (!!(((path) && (path)->Sup.len == 0))) goto LA13;
		nimln(39, "cookies.nim");
		nimln(39, "cookies.nim");
		LOC15 = 0;
		LOC15 = rawNewString(path->Sup.len + 7);
appendString(LOC15, ((NimStringDesc*) &TMP4698));
appendString(LOC15, path);
		result = resizeString(result, LOC15->Sup.len + 0);
appendString(result, LOC15);
	}
	LA13: ;
	nimln(40, "cookies.nim");
	{
		NimStringDesc* LOC20;
		nimln(40, "cookies.nim");
		nimln(40, "cookies.nim");
		if (!!(((expires) && (expires)->Sup.len == 0))) goto LA18;
		nimln(40, "cookies.nim");
		nimln(40, "cookies.nim");
		LOC20 = 0;
		LOC20 = rawNewString(expires->Sup.len + 10);
appendString(LOC20, ((NimStringDesc*) &TMP4699));
appendString(LOC20, expires);
		result = resizeString(result, LOC20->Sup.len + 0);
appendString(result, LOC20);
	}
	LA18: ;
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, setcookie_340117)(NimStringDesc* key, NimStringDesc* value, ttimeinfo95003* expires, NimStringDesc* domain, NimStringDesc* path, NIM_BOOL noname) {
	NimStringDesc* result;
	NimStringDesc* LOC1;
	nimfr("setCookie", "cookies.nim")
	result = 0;
	nimln(49, "cookies.nim");
	nimln(49, "cookies.nim");
	nimln(50, "cookies.nim");
	LOC1 = 0;
	LOC1 = format_96999(expires, ((NimStringDesc*) &TMP4700));
	result = setcookie_340106(key, value, domain, path, LOC1, noname);
	goto BeforeRet;
	BeforeRet: ;
	popFrame();
	return result;
}
N_NOINLINE(void, stdlibcookiesInit)(void) {
	nimfr("cookies", "cookies.nim")
	popFrame();
}

N_NOINLINE(void, stdlibcookiesDatInit)(void) {
}

