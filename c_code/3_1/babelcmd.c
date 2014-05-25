/* Generated by Nimrod Compiler v0.9.5 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <dirent.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <sys/time.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tlineinfo166527 tlineinfo166527;
typedef struct tlinkedlist119023 tlinkedlist119023;
typedef struct tlistentry119017 tlistentry119017;
typedef struct tstringtable122810 tstringtable122810;
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
struct  tlineinfo166527  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  tlinkedlist119023  {
tlistentry119017* Head;
tlistentry119017* Tail;
NI Counter;
};
typedef NIM_CHAR TY98549[256];
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
struct  tlistentry119017  {
  TNimObject Sup;
tlistentry119017* Prev;
tlistentry119017* Next;
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
N_NIMCALL(void, addpath_175007)(NimStringDesc* path, tlineinfo166527 info);
N_NIMCALL(NIM_BOOL, contains_119237)(tlinkedlist119023 list, NimStringDesc* data);
N_NIMCALL(void, prependstr_119437)(tlinkedlist119023* list, NimStringDesc* data);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NI, versionsplitpos_175014)(NimStringDesc* s);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NIM_BOOL, HEX3CHEX2E_175054)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, npuParseInt)(NimStringDesc* s, NI* number, NI start);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, addpackage_175137)(tstringtable122810* packages, NimStringDesc* p);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_71624, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NimStringDesc*, nstGet)(tstringtable122810* t, NimStringDesc* key);
N_NIMCALL(void, nstPut)(tstringtable122810* t, NimStringDesc* key, NimStringDesc* val);
N_NIMCALL(void, addbabelpath_175163)(NimStringDesc* p, tlineinfo166527 info);
N_NIMCALL(void, message_168584)(tlineinfo166527 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, addpathwithnimfiles_175170)(NimStringDesc* p, tlineinfo166527 info);
N_NIMCALL(NIM_BOOL, hasnimfile_175174)(NimStringDesc* dir);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_NIMCALL(NimStringDesc*, HEX2F_109677)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(NIM_BOOL, nsuEndsWith)(NimStringDesc* s, NimStringDesc* suffix);
N_NIMCALL(void, addpathrec_175216)(NimStringDesc* dir, tlineinfo166527 info);
N_NIMCALL(tstringtable122810*, nstnewStringTable)(NU8 mode);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, babelpath_175290)(NimStringDesc* path, tlineinfo166527 info);
STRING_LITERAL(TMP1419, "head", 4);
STRING_LITERAL(TMP1422, ".", 1);
STRING_LITERAL(TMP1423, "..", 2);
STRING_LITERAL(TMP1427, ".nim", 4);
extern tlinkedlist119023 searchpaths_138115;
extern TFrame* frameptr_13438;
extern NI gverbosity_138120;
extern tlinkedlist119023 lazypaths_138116;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13438;
	frameptr_13438 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13438 = (*frameptr_13438).prev;
}

N_NIMCALL(void, addpath_175007)(NimStringDesc* path, tlineinfo166527 info) {
	nimfr("addPath", "babelcmd.nim")
	nimln(15, "babelcmd.nim");
	{
		NIM_BOOL LOC3;
		nimln(15, "babelcmd.nim");
		nimln(15, "babelcmd.nim");
		LOC3 = 0;
		LOC3 = contains_119237(searchpaths_138115, path);
		if (!!(LOC3)) goto LA4;
		nimln(16, "babelcmd.nim");
		prependstr_119437(&searchpaths_138115, path);
	}
	LA4: ;
	popFrame();
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

N_NIMCALL(NI, versionsplitpos_175014)(NimStringDesc* s) {
	NI result;
	NI TMP1418;
	nimfr("versionSplitPos", "babelcmd.nim")
	result = 0;
	nimln(19, "babelcmd.nim");
	nimln(19, "babelcmd.nim");
	nimln(19, "babelcmd.nim");
	TMP1418 = subInt(s->Sup.len, 2);
	result = (NI32)(TMP1418);
	nimln(20, "babelcmd.nim");
	while (1) {
		NIM_BOOL LOC2;
		nimln(20, "babelcmd.nim");
		LOC2 = 0;
		nimln(20, "babelcmd.nim");
		LOC2 = (1 < result);
		if (!(LOC2)) goto LA3;
		nimln(20, "babelcmd.nim");
		if ((NU)(result) > (NU)(s->Sup.len)) raiseIndexError();
		LOC2 = (((NU8)(s->data[result])) >= ((NU8)(48)) && ((NU8)(s->data[result])) <= ((NU8)(57)) || ((NU8)(s->data[result])) == ((NU8)(46)));
		LA3: ;
		if (!LOC2) goto LA1;
		nimln(20, "babelcmd.nim");
		result = subInt(result, 1);
	} LA1: ;
	nimln(21, "babelcmd.nim");
	{
		nimln(21, "babelcmd.nim");
		nimln(21, "babelcmd.nim");
		if ((NU)(result) > (NU)(s->Sup.len)) raiseIndexError();
		if (!!(((NU8)(s->data[result]) == (NU8)(45)))) goto LA6;
		nimln(21, "babelcmd.nim");
		nimln(21, "babelcmd.nim");
		result = s->Sup.len;
	}
	LA6: ;
	popFrame();
	return result;
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

N_NIMCALL(NIM_BOOL, HEX3CHEX2E_175054)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NI i;
	NI j;
	NI vera;
	NI verb;
	nimfr("<.", "babelcmd.nim")
	result = 0;
	nimln(28, "babelcmd.nim");
	{
		nimln(28, "babelcmd.nim");
		if (!eqStrings(a, ((NimStringDesc*) &TMP1419))) goto LA3;
		nimln(28, "babelcmd.nim");
		nimln(28, "babelcmd.nim");
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	nimln(29, "babelcmd.nim");
	i = 0;
	nimln(30, "babelcmd.nim");
	j = 0;
	nimln(31, "babelcmd.nim");
	vera = 0;
	nimln(32, "babelcmd.nim");
	verb = 0;
	nimln(33, "babelcmd.nim");
	while (1) {
		NI ii;
		NI jj;
		nimln(34, "babelcmd.nim");
		ii = npuParseInt(a, &vera, i);
		nimln(35, "babelcmd.nim");
		jj = npuParseInt(b, &verb, j);
		nimln(37, "babelcmd.nim");
		{
			NIM_BOOL LOC8;
			nimln(37, "babelcmd.nim");
			LOC8 = 0;
			nimln(37, "babelcmd.nim");
			LOC8 = (ii <= 0);
			if (LOC8) goto LA9;
			nimln(37, "babelcmd.nim");
			LOC8 = (jj <= 0);
			LA9: ;
			if (!LOC8) goto LA10;
			nimln(37, "babelcmd.nim");
			nimln(37, "babelcmd.nim");
			nimln(37, "babelcmd.nim");
			result = (0 < jj);
			goto BeforeRet;
		}
		LA10: ;
		nimln(38, "babelcmd.nim");
		{
			nimln(38, "babelcmd.nim");
			if (!(vera < verb)) goto LA14;
			nimln(38, "babelcmd.nim");
			nimln(38, "babelcmd.nim");
			result = NIM_TRUE;
			goto BeforeRet;
		}
		goto LA12;
		LA14: ;
		{
			nimln(39, "babelcmd.nim");
			if (!(verb < vera)) goto LA17;
			nimln(39, "babelcmd.nim");
			nimln(39, "babelcmd.nim");
			result = NIM_FALSE;
			goto BeforeRet;
		}
		goto LA12;
		LA17: ;
		LA12: ;
		nimln(41, "babelcmd.nim");
		i = addInt(i, ii);
		nimln(42, "babelcmd.nim");
		j = addInt(j, jj);
		nimln(43, "babelcmd.nim");
		{
			nimln(43, "babelcmd.nim");
			if ((NU)(i) > (NU)(a->Sup.len)) raiseIndexError();
			if (!((NU8)(a->data[i]) == (NU8)(46))) goto LA21;
			nimln(43, "babelcmd.nim");
			i = addInt(i, 1);
		}
		LA21: ;
		nimln(44, "babelcmd.nim");
		{
			nimln(44, "babelcmd.nim");
			if ((NU)(j) > (NU)(b->Sup.len)) raiseIndexError();
			if (!((NU8)(b->data[j]) == (NU8)(46))) goto LA25;
			nimln(44, "babelcmd.nim");
			j = addInt(j, 1);
		}
		LA25: ;
	}
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(void, addpackage_175137)(tstringtable122810* packages, NimStringDesc* p) {
	NI x;
	NimStringDesc* name;
	NI TMP1420;
	nimfr("addPackage", "babelcmd.nim")
	nimln(47, "babelcmd.nim");
	x = versionsplitpos_175014(p);
	nimln(48, "babelcmd.nim");
	nimln(48, "babelcmd.nim");
	nimln(48, "babelcmd.nim");
	TMP1420 = subInt(x, 1);
	name = copyStrLast(p, 0, (NI32)(TMP1420));
	nimln(49, "babelcmd.nim");
	{
		NimStringDesc* version;
		NI TMP1421;
		nimln(49, "babelcmd.nim");
		nimln(49, "babelcmd.nim");
		if (!(x < p->Sup.len)) goto LA3;
		nimln(50, "babelcmd.nim");
		nimln(50, "babelcmd.nim");
		nimln(50, "babelcmd.nim");
		TMP1421 = addInt(x, 1);
		version = copyStr(p, (NI32)(TMP1421));
		nimln(51, "babelcmd.nim");
		{
			NimStringDesc* LOC7;
			NIM_BOOL LOC8;
			nimln(51, "babelcmd.nim");
			nimln(51, "babelcmd.nim");
			LOC7 = 0;
			LOC7 = nstGet(packages, name);
			LOC8 = 0;
			LOC8 = HEX3CHEX2E_175054(LOC7, version);
			if (!LOC8) goto LA9;
			nimln(52, "babelcmd.nim");
			nstPut(packages, name, version);
		}
		LA9: ;
	}
	goto LA1;
	LA3: ;
	{
		nimln(54, "babelcmd.nim");
		nstPut(packages, name, ((NimStringDesc*) &TMP1419));
	}
	LA1: ;
	popFrame();
}

N_NIMCALL(void, addbabelpath_175163)(NimStringDesc* p, tlineinfo166527 info) {
	nimfr("addBabelPath", "babelcmd.nim")
	nimln(62, "babelcmd.nim");
	{
		NIM_BOOL LOC3;
		nimln(62, "babelcmd.nim");
		nimln(62, "babelcmd.nim");
		LOC3 = 0;
		LOC3 = contains_119237(searchpaths_138115, p);
		if (!!(LOC3)) goto LA4;
		nimln(63, "babelcmd.nim");
		{
			nimln(63, "babelcmd.nim");
			if (!(1 <= gverbosity_138120)) goto LA8;
			nimln(63, "babelcmd.nim");
			message_168584(info, ((NU16) 269), p);
		}
		LA8: ;
		nimln(64, "babelcmd.nim");
		prependstr_119437(&lazypaths_138116, p);
	}
	LA4: ;
	popFrame();
}

N_NIMCALL(NIM_BOOL, hasnimfile_175174)(NimStringDesc* dir) {
	NIM_BOOL result;
	NU8 kind_175178;
	NimStringDesc* path_175179;
	DIR* d_175190;
	nimfr("hasNimFile", "babelcmd.nim")
	result = 0;
	kind_175178 = 0;
	path_175179 = 0;
	nimln(1262, "os.nim");
	d_175190 = opendir(dir->data);
	nimln(1263, "os.nim");
	{
		int LOC37;
		nimln(1263, "os.nim");
		nimln(1263, "os.nim");
		if (!!((d_175190 == NIM_NIL))) goto LA3;
		nimln(1264, "os.nim");
		while (1) {
			struct dirent* x_175192;
			NimStringDesc* y_175194;
			nimln(1265, "os.nim");
			x_175192 = readdir(d_175190);
			nimln(1266, "os.nim");
			{
				nimln(1266, "os.nim");
				if (!(x_175192 == NIM_NIL)) goto LA8;
				nimln(1266, "os.nim");
				goto LA5;
			}
			LA8: ;
			nimln(1267, "os.nim");
			nimln(1267, "os.nim");
			y_175194 = cstrToNimstr(((NCSTRING) ((*x_175192).d_name)));
			nimln(1268, "os.nim");
			{
				NIM_BOOL LOC12;
				struct stat s_175196;
				NU8 k_175198;
				nimln(1268, "os.nim");
				LOC12 = 0;
				nimln(1268, "os.nim");
				nimln(1268, "os.nim");
				LOC12 = !(eqStrings(y_175194, ((NimStringDesc*) &TMP1422)));
				if (!(LOC12)) goto LA13;
				nimln(1268, "os.nim");
				nimln(1268, "os.nim");
				LOC12 = !(eqStrings(y_175194, ((NimStringDesc*) &TMP1423)));
				LA13: ;
				if (!LOC12) goto LA14;
				memset((void*)&s_175196, 0, sizeof(s_175196));
				nimln(1270, "os.nim");
				y_175194 = HEX2F_109677(dir, y_175194);
				nimln(1271, "os.nim");
				{
					int LOC18;
					nimln(1271, "os.nim");
					nimln(1271, "os.nim");
					LOC18 = 0;
					LOC18 = lstat(y_175194->data, &s_175196);
					if (!(LOC18 < ((NI32) 0))) goto LA19;
					nimln(1271, "os.nim");
					goto LA5;
				}
				LA19: ;
				nimln(1272, "os.nim");
				k_175198 = ((NU8) 0);
				nimln(1273, "os.nim");
				{
					NIM_BOOL LOC23;
					nimln(1273, "os.nim");
					LOC23 = 0;
					LOC23 = S_ISDIR(s_175196.st_mode);
					if (!LOC23) goto LA24;
					nimln(1273, "os.nim");
					k_175198 = ((NU8) 2);
				}
				LA24: ;
				nimln(1274, "os.nim");
				{
					NIM_BOOL LOC28;
					nimln(1274, "os.nim");
					LOC28 = 0;
					LOC28 = S_ISLNK(s_175196.st_mode);
					if (!LOC28) goto LA29;
					nimln(1274, "os.nim");
					nimln(1274, "os.nim");
					k_175198 = addInt(k_175198, 1);
				}
				LA29: ;
				nimln(1272, "os.nim");
				kind_175178 = k_175198;
				nimln(1267, "os.nim");
				path_175179 = y_175194;
				nimln(69, "babelcmd.nim");
				{
					NIM_BOOL LOC33;
					nimln(69, "babelcmd.nim");
					LOC33 = 0;
					nimln(69, "babelcmd.nim");
					LOC33 = (kind_175178 == ((NU8) 0));
					if (!(LOC33)) goto LA34;
					nimln(69, "babelcmd.nim");
					LOC33 = nsuEndsWith(path_175179, ((NimStringDesc*) &TMP1427));
					LA34: ;
					if (!LOC33) goto LA35;
					nimln(70, "babelcmd.nim");
					result = NIM_TRUE;
					nimln(71, "babelcmd.nim");
					goto LA5;
				}
				LA35: ;
			}
			LA14: ;
		} LA5: ;
		nimln(1276, "os.nim");
		nimln(1276, "os.nim");
		LOC37 = 0;
		LOC37 = closedir(d_175190);
	}
	LA3: ;
	popFrame();
	return result;
}

N_NIMCALL(void, addpathwithnimfiles_175170)(NimStringDesc* p, tlineinfo166527 info) {
	nimfr("addPathWithNimFiles", "babelcmd.nim")
	nimln(72, "babelcmd.nim");
	{
		NIM_BOOL LOC3;
		nimln(72, "babelcmd.nim");
		LOC3 = 0;
		LOC3 = hasnimfile_175174(p);
		if (!LOC3) goto LA4;
		nimln(73, "babelcmd.nim");
		addbabelpath_175163(p, info);
	}
	goto LA1;
	LA4: ;
	{
		NU8 kind_175201;
		NimStringDesc* p2_175202;
		DIR* d_175204;
		kind_175201 = 0;
		p2_175202 = 0;
		nimln(1262, "os.nim");
		d_175204 = opendir(p->data);
		nimln(1263, "os.nim");
		{
			int LOC42;
			nimln(1263, "os.nim");
			nimln(1263, "os.nim");
			if (!!((d_175204 == NIM_NIL))) goto LA9;
			nimln(1264, "os.nim");
			while (1) {
				struct dirent* x_175206;
				NimStringDesc* y_175208;
				nimln(1265, "os.nim");
				x_175206 = readdir(d_175204);
				nimln(1266, "os.nim");
				{
					nimln(1266, "os.nim");
					if (!(x_175206 == NIM_NIL)) goto LA14;
					nimln(1266, "os.nim");
					goto LA11;
				}
				LA14: ;
				nimln(1267, "os.nim");
				nimln(1267, "os.nim");
				y_175208 = cstrToNimstr(((NCSTRING) ((*x_175206).d_name)));
				nimln(1268, "os.nim");
				{
					NIM_BOOL LOC18;
					struct stat s_175210;
					NU8 k_175212;
					nimln(1268, "os.nim");
					LOC18 = 0;
					nimln(1268, "os.nim");
					nimln(1268, "os.nim");
					LOC18 = !(eqStrings(y_175208, ((NimStringDesc*) &TMP1422)));
					if (!(LOC18)) goto LA19;
					nimln(1268, "os.nim");
					nimln(1268, "os.nim");
					LOC18 = !(eqStrings(y_175208, ((NimStringDesc*) &TMP1423)));
					LA19: ;
					if (!LOC18) goto LA20;
					memset((void*)&s_175210, 0, sizeof(s_175210));
					nimln(1270, "os.nim");
					y_175208 = HEX2F_109677(p, y_175208);
					nimln(1271, "os.nim");
					{
						int LOC24;
						nimln(1271, "os.nim");
						nimln(1271, "os.nim");
						LOC24 = 0;
						LOC24 = lstat(y_175208->data, &s_175210);
						if (!(LOC24 < ((NI32) 0))) goto LA25;
						nimln(1271, "os.nim");
						goto LA11;
					}
					LA25: ;
					nimln(1272, "os.nim");
					k_175212 = ((NU8) 0);
					nimln(1273, "os.nim");
					{
						NIM_BOOL LOC29;
						nimln(1273, "os.nim");
						LOC29 = 0;
						LOC29 = S_ISDIR(s_175210.st_mode);
						if (!LOC29) goto LA30;
						nimln(1273, "os.nim");
						k_175212 = ((NU8) 2);
					}
					LA30: ;
					nimln(1274, "os.nim");
					{
						NIM_BOOL LOC34;
						nimln(1274, "os.nim");
						LOC34 = 0;
						LOC34 = S_ISLNK(s_175210.st_mode);
						if (!LOC34) goto LA35;
						nimln(1274, "os.nim");
						nimln(1274, "os.nim");
						k_175212 = addInt(k_175212, 1);
					}
					LA35: ;
					nimln(1272, "os.nim");
					kind_175201 = k_175212;
					nimln(1267, "os.nim");
					p2_175202 = y_175208;
					nimln(76, "babelcmd.nim");
					{
						NIM_BOOL LOC39;
						nimln(76, "babelcmd.nim");
						LOC39 = 0;
						LOC39 = hasnimfile_175174(p2_175202);
						if (!LOC39) goto LA40;
						nimln(76, "babelcmd.nim");
						addbabelpath_175163(p2_175202, info);
					}
					LA40: ;
				}
				LA20: ;
			} LA11: ;
			nimln(1276, "os.nim");
			nimln(1276, "os.nim");
			LOC42 = 0;
			LOC42 = closedir(d_175204);
		}
		LA9: ;
	}
	LA1: ;
	popFrame();
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI32)((*dest).Sup.len + 1))- 0] = 0;
	(*dest).Sup.len += 1;
}

N_NIMCALL(void, addpathrec_175216)(NimStringDesc* dir, tlineinfo166527 info) {
	tstringtable122810* packages;
	NI pos;
	NI TMP1428;
	NU8 k_175252;
	NimStringDesc* p_175253;
	DIR* d_175265;
	NimStringDesc* p_175263;
	NimStringDesc* key_175275;
	NimStringDesc* val_175277;
	NI h_175279;
	NI HEX3Atmp_175281;
	NI res_175283;
	nimfr("addPathRec", "babelcmd.nim")
	nimln(79, "babelcmd.nim");
	packages = nstnewStringTable(((NU8) 2));
	nimln(80, "babelcmd.nim");
	nimln(80, "babelcmd.nim");
	nimln(80, "babelcmd.nim");
	TMP1428 = subInt(dir->Sup.len, 1);
	pos = (NI32)(TMP1428);
	nimln(81, "babelcmd.nim");
	{
		nimln(81, "babelcmd.nim");
		if ((NU)(pos) > (NU)(dir->Sup.len)) raiseIndexError();
		if (!(((NU8)(dir->data[pos])) == ((NU8)(47)) || ((NU8)(dir->data[pos])) == ((NU8)(47)))) goto LA3;
		nimln(81, "babelcmd.nim");
		pos = addInt(pos, 1);
	}
	LA3: ;
	k_175252 = 0;
	p_175253 = 0;
	nimln(1262, "os.nim");
	d_175265 = opendir(dir->data);
	nimln(1263, "os.nim");
	{
		int LOC41;
		nimln(1263, "os.nim");
		nimln(1263, "os.nim");
		if (!!((d_175265 == NIM_NIL))) goto LA7;
		nimln(1264, "os.nim");
		while (1) {
			struct dirent* x_175267;
			NimStringDesc* y_175269;
			nimln(1265, "os.nim");
			x_175267 = readdir(d_175265);
			nimln(1266, "os.nim");
			{
				nimln(1266, "os.nim");
				if (!(x_175267 == NIM_NIL)) goto LA12;
				nimln(1266, "os.nim");
				goto LA9;
			}
			LA12: ;
			nimln(1267, "os.nim");
			nimln(1267, "os.nim");
			y_175269 = cstrToNimstr(((NCSTRING) ((*x_175267).d_name)));
			nimln(1268, "os.nim");
			{
				NIM_BOOL LOC16;
				struct stat s_175271;
				NU8 k_175273;
				nimln(1268, "os.nim");
				LOC16 = 0;
				nimln(1268, "os.nim");
				nimln(1268, "os.nim");
				LOC16 = !(eqStrings(y_175269, ((NimStringDesc*) &TMP1422)));
				if (!(LOC16)) goto LA17;
				nimln(1268, "os.nim");
				nimln(1268, "os.nim");
				LOC16 = !(eqStrings(y_175269, ((NimStringDesc*) &TMP1423)));
				LA17: ;
				if (!LOC16) goto LA18;
				memset((void*)&s_175271, 0, sizeof(s_175271));
				nimln(1270, "os.nim");
				y_175269 = HEX2F_109677(dir, y_175269);
				nimln(1271, "os.nim");
				{
					int LOC22;
					nimln(1271, "os.nim");
					nimln(1271, "os.nim");
					LOC22 = 0;
					LOC22 = lstat(y_175269->data, &s_175271);
					if (!(LOC22 < ((NI32) 0))) goto LA23;
					nimln(1271, "os.nim");
					goto LA9;
				}
				LA23: ;
				nimln(1272, "os.nim");
				k_175273 = ((NU8) 0);
				nimln(1273, "os.nim");
				{
					NIM_BOOL LOC27;
					nimln(1273, "os.nim");
					LOC27 = 0;
					LOC27 = S_ISDIR(s_175271.st_mode);
					if (!LOC27) goto LA28;
					nimln(1273, "os.nim");
					k_175273 = ((NU8) 2);
				}
				LA28: ;
				nimln(1274, "os.nim");
				{
					NIM_BOOL LOC32;
					nimln(1274, "os.nim");
					LOC32 = 0;
					LOC32 = S_ISLNK(s_175271.st_mode);
					if (!LOC32) goto LA33;
					nimln(1274, "os.nim");
					nimln(1274, "os.nim");
					k_175273 = addInt(k_175273, 1);
				}
				LA33: ;
				nimln(1272, "os.nim");
				k_175252 = k_175273;
				nimln(1267, "os.nim");
				p_175253 = y_175269;
				nimln(83, "babelcmd.nim");
				{
					NIM_BOOL LOC37;
					nimln(83, "babelcmd.nim");
					LOC37 = 0;
					nimln(83, "babelcmd.nim");
					LOC37 = (k_175252 == ((NU8) 2));
					if (!(LOC37)) goto LA38;
					nimln(83, "babelcmd.nim");
					nimln(83, "babelcmd.nim");
					if ((NU)(pos) > (NU)(p_175253->Sup.len)) raiseIndexError();
					LOC37 = !(((NU8)(p_175253->data[pos]) == (NU8)(46)));
					LA38: ;
					if (!LOC37) goto LA39;
					nimln(84, "babelcmd.nim");
					addpackage_175137(packages, p_175253);
				}
				LA39: ;
			}
			LA18: ;
		} LA9: ;
		nimln(1276, "os.nim");
		nimln(1276, "os.nim");
		LOC41 = 0;
		LOC41 = closedir(d_175265);
	}
	LA7: ;
	p_175263 = 0;
	key_175275 = 0;
	val_175277 = 0;
	h_175279 = 0;
	HEX3Atmp_175281 = 0;
	nimln(40, "strtabs.nim");
	nimln(40, "strtabs.nim");
	HEX3Atmp_175281 = ((*packages).Data->Sup.len-1);
	nimln(1458, "system.nim");
	res_175283 = 0;
	nimln(1459, "system.nim");
	while (1) {
		nimln(1459, "system.nim");
		if (!(res_175283 <= HEX3Atmp_175281)) goto LA42;
		nimln(1458, "system.nim");
		h_175279 = res_175283;
		nimln(41, "strtabs.nim");
		{
			NimStringDesc* res_175285;
			nimln(41, "strtabs.nim");
			nimln(41, "strtabs.nim");
			if ((NU)(h_175279) >= (NU)((*packages).Data->Sup.len)) raiseIndexError();
			if (!!((*packages).Data->data[h_175279].Field0 == 0)) goto LA45;
			nimln(42, "strtabs.nim");
			if ((NU)(h_175279) >= (NU)((*packages).Data->Sup.len)) raiseIndexError();
			key_175275 = (*packages).Data->data[h_175279].Field0;
			nimln(42, "strtabs.nim");
			if ((NU)(h_175279) >= (NU)((*packages).Data->Sup.len)) raiseIndexError();
			val_175277 = (*packages).Data->data[h_175279].Field1;
			nimln(58, "babelcmd.nim");
			nimln(58, "babelcmd.nim");
			{
				nimln(58, "babelcmd.nim");
				if (!eqStrings(val_175277, ((NimStringDesc*) &TMP1419))) goto LA49;
				res_175285 = key_175275;
			}
			goto LA47;
			LA49: ;
			{
				NimStringDesc* LOC52;
				nimln(58, "babelcmd.nim");
				LOC52 = 0;
				LOC52 = rawNewString(key_175275->Sup.len + val_175277->Sup.len + 1);
appendString(LOC52, key_175275);
appendChar(LOC52, 45);
appendString(LOC52, val_175277);
				res_175285 = LOC52;
			}
			LA47: ;
			nimln(58, "babelcmd.nim");
			p_175263 = res_175285;
			nimln(86, "babelcmd.nim");
			addbabelpath_175163(p_175263, info);
		}
		LA45: ;
		nimln(1461, "system.nim");
		res_175283 = addInt(res_175283, 1);
	} LA42: ;
	popFrame();
}

N_NIMCALL(void, babelpath_175290)(NimStringDesc* path, tlineinfo166527 info) {
	nimfr("babelPath", "babelcmd.nim")
	nimln(89, "babelcmd.nim");
	addpathrec_175216(path, info);
	nimln(90, "babelcmd.nim");
	addbabelpath_175163(path, info);
	popFrame();
}
N_NOINLINE(void, babelcmdInit)(void) {
	nimfr("babelcmd", "babelcmd.nim")
	popFrame();
}

N_NOINLINE(void, babelcmdDatInit)(void) {
}

