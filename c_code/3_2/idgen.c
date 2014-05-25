/* Generated by Nimrod Compiler v0.9.5 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tidobj170013 tidobj170013;
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
typedef NimStringDesc* TY129224[1];
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
static N_INLINE(NI, getid_190402)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, backendid_190423)(void);
static N_INLINE(void, setid_190444)(NI id);
N_NIMCALL(void, idsynchronizationpoint_190452)(NI idrange);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(NimStringDesc*, togid_190457)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, completegeneratedfilepath_139001)(NimStringDesc* f, NIM_BOOL createsubdir);
N_NIMCALL(void, savemaxids_190463)(NimStringDesc* project);
N_NIMCALL(FILE*, open_10617)(NimStringDesc* filename, NU8 mode, NI bufsize);
static N_INLINE(void, writeln_139205)(FILE* f_139209, NimStringDesc** x_139213, NI x_139213Len0);
N_NIMCALL(void, write_10863)(FILE* f, NimStringDesc* s);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(void, loadmaxids_190501)(NimStringDesc* project);
N_NIMCALL(NIM_BOOL, open_10603)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, readline_10887)(FILE* f, NimStringDesc** line);
N_NIMCALL(NI, nsuParseInt)(NimStringDesc* s);
STRING_LITERAL(TMP1962, "nimrod.gid", 10);
STRING_LITERAL(TMP1963, "\012", 1);
NI gfrontendid_190007;
NI gbackendid_190008;
extern TFrame* frameptr_13438;

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
	(*s).prev = frameptr_13438;
	frameptr_13438 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13438 = (*frameptr_13438).prev;
}

static N_INLINE(NI, getid_190402)(void) {
	NI result;
	nimfr("getID", "idgen.nim")
	result = 0;
	nimln(30, "idgen.nim");
	result = gfrontendid_190007;
	nimln(31, "idgen.nim");
	gfrontendid_190007 = addInt(gfrontendid_190007, 1);
	popFrame();
	return result;
}

static N_INLINE(NI, backendid_190423)(void) {
	NI result;
	nimfr("backendId", "idgen.nim")
	result = 0;
	nimln(34, "idgen.nim");
	result = gbackendid_190008;
	nimln(35, "idgen.nim");
	gbackendid_190008 = addInt(gbackendid_190008, 1);
	popFrame();
	return result;
}

static N_INLINE(void, setid_190444)(NI id) {
	NI TMP1957;
	nimfr("setId", "idgen.nim")
	nimln(38, "idgen.nim");
	nimln(38, "idgen.nim");
	nimln(38, "idgen.nim");
	TMP1957 = addInt(id, 1);
	gfrontendid_190007 = ((gfrontendid_190007 >= (NI64)(TMP1957)) ? gfrontendid_190007 : (NI64)(TMP1957));
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

N_NIMCALL(void, idsynchronizationpoint_190452)(NI idrange) {
	NI TMP1958;
	NI TMP1959;
	NI TMP1960;
	NI TMP1961;
	nimfr("idSynchronizationPoint", "idgen.nim")
	nimln(41, "idgen.nim");
	nimln(41, "idgen.nim");
	nimln(41, "idgen.nim");
	nimln(41, "idgen.nim");
	nimln(41, "idgen.nim");
	TMP1958 = divInt(gfrontendid_190007, idrange);
	TMP1959 = addInt((NI64)(TMP1958), 1);
	TMP1960 = mulInt((NI64)(TMP1959), idrange);
	TMP1961 = addInt((NI64)(TMP1960), 1);
	gfrontendid_190007 = (NI64)(TMP1961);
	popFrame();
}

N_NIMCALL(NimStringDesc*, togid_190457)(NimStringDesc* f) {
	NimStringDesc* result;
	nimfr("toGid", "idgen.nim")
	result = 0;
	nimln(47, "idgen.nim");
	result = completegeneratedfilepath_139001(((NimStringDesc*) &TMP1962), NIM_TRUE);
	popFrame();
	return result;
}

static N_INLINE(void, writeln_139205)(FILE* f_139209, NimStringDesc** x_139213, NI x_139213Len0) {
	NimStringDesc* i_139226;
	NI i_139232;
	nimfr("writeln", "sysio.nim")
	i_139226 = 0;
	nimln(1531, "system.nim");
	i_139232 = 0;
	nimln(1532, "system.nim");
	while (1) {
		nimln(1532, "system.nim");
		nimln(1532, "system.nim");
		if (!(i_139232 < x_139213Len0)) goto LA1;
		nimln(1533, "system.nim");
		i_139226 = x_139213[i_139232];
		nimln(171, "sysio.nim");
		write_10863(f_139209, i_139226);
		nimln(1534, "system.nim");
		i_139232 += 1;
	} LA1: ;
	nimln(172, "sysio.nim");
	write_10863(f_139209, ((NimStringDesc*) &TMP1963));
	popFrame();
}

N_NIMCALL(void, savemaxids_190463)(NimStringDesc* project) {
	FILE* f;
	NimStringDesc* LOC1;
	TY129224 LOC2;
	TY129224 LOC3;
	nimfr("saveMaxIds", "idgen.nim")
	nimln(50, "idgen.nim");
	nimln(50, "idgen.nim");
	LOC1 = 0;
	LOC1 = togid_190457(project);
	f = open_10617(LOC1, ((NU8) 1), -1);
	nimln(51, "idgen.nim");
	memset((void*)LOC2, 0, sizeof(LOC2));
	nimln(51, "idgen.nim");
	nimln(51, "idgen.nim");
	LOC2[0] = nimIntToStr(gfrontendid_190007);
	writeln_139205(f, LOC2, 1);
	nimln(52, "idgen.nim");
	memset((void*)LOC3, 0, sizeof(LOC3));
	nimln(52, "idgen.nim");
	nimln(52, "idgen.nim");
	LOC3[0] = nimIntToStr(gbackendid_190008);
	writeln_139205(f, LOC3, 1);
	nimln(53, "idgen.nim");
	fclose(f);
	popFrame();
}

N_NIMCALL(void, loadmaxids_190501)(NimStringDesc* project) {
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
		LOC3 = togid_190457(project);
		LOC4 = 0;
		LOC4 = open_10603(&f, LOC3, ((NU8) 0), -1);
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
			LOC9 = readline_10887(f, &line);
			if (!LOC9) goto LA10;
			nimln(60, "idgen.nim");
			frontendid = nsuParseInt(line);
			nimln(61, "idgen.nim");
			{
				NIM_BOOL LOC14;
				NI backendid;
				nimln(61, "idgen.nim");
				LOC14 = 0;
				LOC14 = readline_10887(f, &line);
				if (!LOC14) goto LA15;
				nimln(62, "idgen.nim");
				backendid = nsuParseInt(line);
				nimln(63, "idgen.nim");
				nimln(63, "idgen.nim");
				gfrontendid_190007 = ((gfrontendid_190007 >= frontendid) ? gfrontendid_190007 : frontendid);
				nimln(64, "idgen.nim");
				nimln(64, "idgen.nim");
				gbackendid_190008 = ((gbackendid_190008 >= backendid) ? gbackendid_190008 : backendid);
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

N_NIMCALL(void, registerid_190201)(tidobj170013* id) {
	nimfr("registerID", "idgen.nim")
	popFrame();
}
N_NOINLINE(void, idgenInit)(void) {
	nimfr("idgen", "idgen.nim")
	popFrame();
}

N_NOINLINE(void, idgenDatInit)(void) {
}

