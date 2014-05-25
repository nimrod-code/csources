/* Generated by Nimrod Compiler v0.9.5 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tidobj169013 tidobj169013;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NimStringDesc* TY128224[1];
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
static N_INLINE(NI, getid_189402)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, backendid_189423)(void);
static N_INLINE(void, setid_189444)(NI id);
N_NIMCALL(void, idsynchronizationpoint_189452)(NI idrange);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(NimStringDesc*, togid_189457)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, completegeneratedfilepath_138001)(NimStringDesc* f, NIM_BOOL createsubdir);
N_NIMCALL(void, savemaxids_189463)(NimStringDesc* project);
N_NIMCALL(FILE*, open_10417)(NimStringDesc* filename, NU8 mode, NI bufsize);
static N_INLINE(void, writeln_138205)(FILE* f_138209, NimStringDesc** x_138213, NI x_138213Len0);
N_NIMCALL(void, write_10663)(FILE* f, NimStringDesc* s);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(void, loadmaxids_189501)(NimStringDesc* project);
N_NIMCALL(NIM_BOOL, open_10403)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, readline_10687)(FILE* f, NimStringDesc** line);
N_NIMCALL(NI, nsuParseInt)(NimStringDesc* s);
STRING_LITERAL(TMP1969, "nimrod.gid", 10);
STRING_LITERAL(TMP1970, "\012", 1);
NI gfrontendid_189007;
NI gbackendid_189008;
extern TFrame* frameptr_13238;

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

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13238;
	frameptr_13238 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13238 = (*frameptr_13238).prev;
}

static N_INLINE(NI, getid_189402)(void) {
	NI result;
	nimfr("getID", "idgen.nim")
	result = 0;
	nimln(30, "idgen.nim");
	result = gfrontendid_189007;
	nimln(31, "idgen.nim");
	gfrontendid_189007 = addInt(gfrontendid_189007, 1);
	popFrame();
	return result;
}

static N_INLINE(NI, backendid_189423)(void) {
	NI result;
	nimfr("backendId", "idgen.nim")
	result = 0;
	nimln(34, "idgen.nim");
	result = gbackendid_189008;
	nimln(35, "idgen.nim");
	gbackendid_189008 = addInt(gbackendid_189008, 1);
	popFrame();
	return result;
}

static N_INLINE(void, setid_189444)(NI id) {
	NI TMP1964;
	nimfr("setId", "idgen.nim")
	nimln(38, "idgen.nim");
	nimln(38, "idgen.nim");
	nimln(38, "idgen.nim");
	TMP1964 = addInt(id, 1);
	gfrontendid_189007 = ((gfrontendid_189007 >= (NI64)(TMP1964)) ? gfrontendid_189007 : (NI64)(TMP1964));
	popFrame();
}

static N_INLINE(NI, divInt)(NI a, NI b) {
	NI result;
	result = 0;
	{
		if (!(b == 0)) goto LA3;
		raiseDivByZero();
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == (IL64(-9223372036854775807) - IL64(1)));
		if (!(LOC7)) goto LA8;
		LOC7 = (b == -1);
		LA8: ;
		if (!LOC7) goto LA9;
		raiseOverflow();
	}
	LA9: ;
	result = (NI64)(a / b);
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, idsynchronizationpoint_189452)(NI idrange) {
	NI TMP1965;
	NI TMP1966;
	NI TMP1967;
	NI TMP1968;
	nimfr("idSynchronizationPoint", "idgen.nim")
	nimln(41, "idgen.nim");
	nimln(41, "idgen.nim");
	nimln(41, "idgen.nim");
	nimln(41, "idgen.nim");
	nimln(41, "idgen.nim");
	TMP1965 = divInt(gfrontendid_189007, idrange);
	TMP1966 = addInt((NI64)(TMP1965), 1);
	TMP1967 = mulInt((NI64)(TMP1966), idrange);
	TMP1968 = addInt((NI64)(TMP1967), 1);
	gfrontendid_189007 = (NI64)(TMP1968);
	popFrame();
}

N_NIMCALL(NimStringDesc*, togid_189457)(NimStringDesc* f) {
	NimStringDesc* result;
	nimfr("toGid", "idgen.nim")
	result = 0;
	nimln(47, "idgen.nim");
	result = completegeneratedfilepath_138001(((NimStringDesc*) &TMP1969), NIM_TRUE);
	popFrame();
	return result;
}

static N_INLINE(void, writeln_138205)(FILE* f_138209, NimStringDesc** x_138213, NI x_138213Len0) {
	NimStringDesc* i_138226;
	NI i_138232;
	nimfr("writeln", "sysio.nim")
	i_138226 = 0;
	nimln(1531, "system.nim");
	i_138232 = 0;
	nimln(1532, "system.nim");
	while (1) {
		nimln(1532, "system.nim");
		nimln(1532, "system.nim");
		if (!(i_138232 < x_138213Len0)) goto LA1;
		nimln(1533, "system.nim");
		i_138226 = x_138213[i_138232];
		nimln(171, "sysio.nim");
		write_10663(f_138209, i_138226);
		nimln(1534, "system.nim");
		i_138232 += 1;
	} LA1: ;
	nimln(172, "sysio.nim");
	write_10663(f_138209, ((NimStringDesc*) &TMP1970));
	popFrame();
}

N_NIMCALL(void, savemaxids_189463)(NimStringDesc* project) {
	FILE* f;
	NimStringDesc* LOC1;
	TY128224 LOC2;
	TY128224 LOC3;
	nimfr("saveMaxIds", "idgen.nim")
	nimln(50, "idgen.nim");
	nimln(50, "idgen.nim");
	LOC1 = 0;
	LOC1 = togid_189457(project);
	f = open_10417(LOC1, ((NU8) 1), -1);
	nimln(51, "idgen.nim");
	memset((void*)LOC2, 0, sizeof(LOC2));
	nimln(51, "idgen.nim");
	nimln(51, "idgen.nim");
	LOC2[0] = nimIntToStr(gfrontendid_189007);
	writeln_138205(f, LOC2, 1);
	nimln(52, "idgen.nim");
	memset((void*)LOC3, 0, sizeof(LOC3));
	nimln(52, "idgen.nim");
	nimln(52, "idgen.nim");
	LOC3[0] = nimIntToStr(gbackendid_189008);
	writeln_138205(f, LOC3, 1);
	nimln(53, "idgen.nim");
	fclose(f);
	popFrame();
}

N_NIMCALL(void, loadmaxids_189501)(NimStringDesc* project) {
	FILE* f;
	nimfr("loadMaxIds", "idgen.nim")
	f = 0;
	nimln(57, "idgen.nim");
	{
		NimStringDesc* LOC3;
		NIM_BOOL LOC4;
		NimStringDesc* line;
		nimln(57, "idgen.nim");
		nimln(57, "idgen.nim");
		LOC3 = 0;
		LOC3 = togid_189457(project);
		LOC4 = 0;
		LOC4 = open_10403(&f, LOC3, ((NU8) 0), -1);
		if (!LOC4) goto LA5;
		nimln(58, "idgen.nim");
		nimln(58, "idgen.nim");
		line = rawNewString(20);
		nimln(59, "idgen.nim");
		{
			NIM_BOOL LOC9;
			NI frontendid;
			nimln(59, "idgen.nim");
			LOC9 = 0;
			LOC9 = readline_10687(f, &line);
			if (!LOC9) goto LA10;
			nimln(60, "idgen.nim");
			frontendid = nsuParseInt(line);
			nimln(61, "idgen.nim");
			{
				NIM_BOOL LOC14;
				NI backendid;
				nimln(61, "idgen.nim");
				LOC14 = 0;
				LOC14 = readline_10687(f, &line);
				if (!LOC14) goto LA15;
				nimln(62, "idgen.nim");
				backendid = nsuParseInt(line);
				nimln(63, "idgen.nim");
				nimln(63, "idgen.nim");
				gfrontendid_189007 = ((gfrontendid_189007 >= frontendid) ? gfrontendid_189007 : frontendid);
				nimln(64, "idgen.nim");
				nimln(64, "idgen.nim");
				gbackendid_189008 = ((gbackendid_189008 >= backendid) ? gbackendid_189008 : backendid);
			}
			LA15: ;
		}
		LA10: ;
		nimln(65, "idgen.nim");
		fclose(f);
	}
	LA5: ;
	popFrame();
}

N_NIMCALL(void, registerid_189201)(tidobj169013* id) {
	nimfr("registerID", "idgen.nim")
	popFrame();
}
N_NOINLINE(void, idgenInit)(void) {
	nimfr("idgen", "idgen.nim")
	popFrame();
}

N_NOINLINE(void, idgenDatInit)(void) {
}

