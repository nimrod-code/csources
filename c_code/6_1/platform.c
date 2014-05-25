/* Generated by Nimrod Compiler v0.9.5 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct tinfoos145044 tinfoos145044;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tinfocpu145453 tinfocpu145453;
typedef struct tcell41890 tcell41890;
typedef struct TNimType TNimType;
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
typedef struct TNimNode TNimNode;
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
typedef NimStringDesc* TY145463[2];
struct tinfocpu145453 {
NimStringDesc* Field0;
NI Field1;
NU8 Field2;
NI Field3;
NI Field4;
};
typedef tinfocpu145453 TY145469[14];
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
typedef NI TY23418[16];
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tfreecell23428  {
tfreecell23428* Next;
NI Zerofield;
};
N_NIMCALL(void, settarget_145599)(NU8 o, NU8 c);
N_NIMCALL(void, failedassertimpl_80421)(NimStringDesc* msg);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell41890*, usrtocell_45243)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_46802)(tcell41890* c);
N_NOINLINE(void, addzct_45218)(tcellseq41906* s, tcell41890* c);
N_NIMCALL(NU8, nametoos_145582)(NimStringDesc* name);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NU8, nametocpu_145586)(NimStringDesc* name);
STRING_LITERAL(TMP465, "DOS", 3);
STRING_LITERAL(TMP466, "..", 2);
STRING_LITERAL(TMP467, "$1.dll", 6);
STRING_LITERAL(TMP468, "/", 1);
STRING_LITERAL(TMP469, ".obj", 4);
STRING_LITERAL(TMP470, "\015\012", 2);
STRING_LITERAL(TMP471, ";", 1);
STRING_LITERAL(TMP472, "\\", 1);
STRING_LITERAL(TMP473, ".bat", 4);
STRING_LITERAL(TMP474, ".", 1);
STRING_LITERAL(TMP475, ".exe", 4);
STRING_LITERAL(TMP476, "Windows", 7);
STRING_LITERAL(TMP477, "OS2", 3);
STRING_LITERAL(TMP478, "Linux", 5);
STRING_LITERAL(TMP479, "lib$1.so", 8);
STRING_LITERAL(TMP480, ".o", 2);
STRING_LITERAL(TMP481, "\012", 1);
STRING_LITERAL(TMP482, ":", 1);
STRING_LITERAL(TMP483, ".sh", 3);
STRING_LITERAL(TMP484, "", 0);
STRING_LITERAL(TMP485, "MorphOS", 7);
STRING_LITERAL(TMP486, "SkyOS", 5);
STRING_LITERAL(TMP487, "Solaris", 7);
STRING_LITERAL(TMP488, "Irix", 4);
STRING_LITERAL(TMP489, "NetBSD", 6);
STRING_LITERAL(TMP490, "FreeBSD", 7);
STRING_LITERAL(TMP491, "OpenBSD", 7);
STRING_LITERAL(TMP492, "AIX", 3);
STRING_LITERAL(TMP493, "PalmOS", 6);
STRING_LITERAL(TMP494, "QNX", 3);
STRING_LITERAL(TMP495, "Amiga", 5);
STRING_LITERAL(TMP496, "$1.library", 10);
STRING_LITERAL(TMP497, "Atari", 5);
STRING_LITERAL(TMP498, ".tpp", 4);
STRING_LITERAL(TMP499, "Netware", 7);
STRING_LITERAL(TMP500, "$1.nlm", 6);
STRING_LITERAL(TMP501, ".nlm", 4);
STRING_LITERAL(TMP502, "MacOS", 5);
STRING_LITERAL(TMP503, "::", 2);
STRING_LITERAL(TMP504, "$1Lib", 5);
STRING_LITERAL(TMP505, "\015", 1);
STRING_LITERAL(TMP506, ",", 1);
STRING_LITERAL(TMP507, "MacOSX", 6);
STRING_LITERAL(TMP508, "lib$1.dylib", 11);
STRING_LITERAL(TMP509, "Haiku", 5);
STRING_LITERAL(TMP510, "JS", 2);
STRING_LITERAL(TMP511, "NimrodVM", 8);
STRING_LITERAL(TMP512, "Standalone", 10);
NIM_CONST TY145064 os_145063 = {{((NimStringDesc*) &TMP465),
((NimStringDesc*) &TMP466),
((NimStringDesc*) &TMP467),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP469),
((NimStringDesc*) &TMP470),
((NimStringDesc*) &TMP471),
((NimStringDesc*) &TMP472),
((NimStringDesc*) &TMP473),
((NimStringDesc*) &TMP474),
((NimStringDesc*) &TMP475),
((NimStringDesc*) &TMP474),
2}
,
{((NimStringDesc*) &TMP476),
((NimStringDesc*) &TMP466),
((NimStringDesc*) &TMP467),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP469),
((NimStringDesc*) &TMP470),
((NimStringDesc*) &TMP471),
((NimStringDesc*) &TMP472),
((NimStringDesc*) &TMP473),
((NimStringDesc*) &TMP474),
((NimStringDesc*) &TMP475),
((NimStringDesc*) &TMP474),
2}
,
{((NimStringDesc*) &TMP477),
((NimStringDesc*) &TMP466),
((NimStringDesc*) &TMP467),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP469),
((NimStringDesc*) &TMP470),
((NimStringDesc*) &TMP471),
((NimStringDesc*) &TMP472),
((NimStringDesc*) &TMP473),
((NimStringDesc*) &TMP474),
((NimStringDesc*) &TMP475),
((NimStringDesc*) &TMP474),
2}
,
{((NimStringDesc*) &TMP478),
((NimStringDesc*) &TMP466),
((NimStringDesc*) &TMP479),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP480),
((NimStringDesc*) &TMP481),
((NimStringDesc*) &TMP482),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP483),
((NimStringDesc*) &TMP474),
((NimStringDesc*) &TMP484),
((NimStringDesc*) &TMP474),
5}
,
{((NimStringDesc*) &TMP485),
((NimStringDesc*) &TMP466),
((NimStringDesc*) &TMP479),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP480),
((NimStringDesc*) &TMP481),
((NimStringDesc*) &TMP482),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP483),
((NimStringDesc*) &TMP474),
((NimStringDesc*) &TMP484),
((NimStringDesc*) &TMP474),
5}
,
{((NimStringDesc*) &TMP486),
((NimStringDesc*) &TMP466),
((NimStringDesc*) &TMP479),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP480),
((NimStringDesc*) &TMP481),
((NimStringDesc*) &TMP482),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP483),
((NimStringDesc*) &TMP474),
((NimStringDesc*) &TMP484),
((NimStringDesc*) &TMP474),
5}
,
{((NimStringDesc*) &TMP487),
((NimStringDesc*) &TMP466),
((NimStringDesc*) &TMP479),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP480),
((NimStringDesc*) &TMP481),
((NimStringDesc*) &TMP482),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP483),
((NimStringDesc*) &TMP474),
((NimStringDesc*) &TMP484),
((NimStringDesc*) &TMP474),
5}
,
{((NimStringDesc*) &TMP488),
((NimStringDesc*) &TMP466),
((NimStringDesc*) &TMP479),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP480),
((NimStringDesc*) &TMP481),
((NimStringDesc*) &TMP482),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP483),
((NimStringDesc*) &TMP474),
((NimStringDesc*) &TMP484),
((NimStringDesc*) &TMP474),
5}
,
{((NimStringDesc*) &TMP489),
((NimStringDesc*) &TMP466),
((NimStringDesc*) &TMP479),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP480),
((NimStringDesc*) &TMP481),
((NimStringDesc*) &TMP482),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP483),
((NimStringDesc*) &TMP474),
((NimStringDesc*) &TMP484),
((NimStringDesc*) &TMP474),
5}
,
{((NimStringDesc*) &TMP490),
((NimStringDesc*) &TMP466),
((NimStringDesc*) &TMP479),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP480),
((NimStringDesc*) &TMP481),
((NimStringDesc*) &TMP482),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP483),
((NimStringDesc*) &TMP474),
((NimStringDesc*) &TMP484),
((NimStringDesc*) &TMP474),
5}
,
{((NimStringDesc*) &TMP491),
((NimStringDesc*) &TMP466),
((NimStringDesc*) &TMP479),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP480),
((NimStringDesc*) &TMP481),
((NimStringDesc*) &TMP482),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP483),
((NimStringDesc*) &TMP474),
((NimStringDesc*) &TMP484),
((NimStringDesc*) &TMP474),
5}
,
{((NimStringDesc*) &TMP492),
((NimStringDesc*) &TMP466),
((NimStringDesc*) &TMP479),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP480),
((NimStringDesc*) &TMP481),
((NimStringDesc*) &TMP482),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP483),
((NimStringDesc*) &TMP474),
((NimStringDesc*) &TMP484),
((NimStringDesc*) &TMP474),
5}
,
{((NimStringDesc*) &TMP493),
((NimStringDesc*) &TMP466),
((NimStringDesc*) &TMP479),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP480),
((NimStringDesc*) &TMP481),
((NimStringDesc*) &TMP482),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP483),
((NimStringDesc*) &TMP474),
((NimStringDesc*) &TMP484),
((NimStringDesc*) &TMP474),
1}
,
{((NimStringDesc*) &TMP494),
((NimStringDesc*) &TMP466),
((NimStringDesc*) &TMP479),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP480),
((NimStringDesc*) &TMP481),
((NimStringDesc*) &TMP482),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP483),
((NimStringDesc*) &TMP474),
((NimStringDesc*) &TMP484),
((NimStringDesc*) &TMP474),
5}
,
{((NimStringDesc*) &TMP495),
((NimStringDesc*) &TMP466),
((NimStringDesc*) &TMP496),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP480),
((NimStringDesc*) &TMP481),
((NimStringDesc*) &TMP482),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP483),
((NimStringDesc*) &TMP474),
((NimStringDesc*) &TMP484),
((NimStringDesc*) &TMP474),
1}
,
{((NimStringDesc*) &TMP497),
((NimStringDesc*) &TMP466),
((NimStringDesc*) &TMP467),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP480),
((NimStringDesc*) &TMP481),
((NimStringDesc*) &TMP482),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP484),
((NimStringDesc*) &TMP474),
((NimStringDesc*) &TMP498),
((NimStringDesc*) &TMP474),
1}
,
{((NimStringDesc*) &TMP499),
((NimStringDesc*) &TMP466),
((NimStringDesc*) &TMP500),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP484),
((NimStringDesc*) &TMP470),
((NimStringDesc*) &TMP482),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP483),
((NimStringDesc*) &TMP474),
((NimStringDesc*) &TMP501),
((NimStringDesc*) &TMP474),
2}
,
{((NimStringDesc*) &TMP502),
((NimStringDesc*) &TMP503),
((NimStringDesc*) &TMP504),
((NimStringDesc*) &TMP482),
((NimStringDesc*) &TMP480),
((NimStringDesc*) &TMP505),
((NimStringDesc*) &TMP506),
((NimStringDesc*) &TMP482),
((NimStringDesc*) &TMP484),
((NimStringDesc*) &TMP482),
((NimStringDesc*) &TMP484),
((NimStringDesc*) &TMP474),
2}
,
{((NimStringDesc*) &TMP507),
((NimStringDesc*) &TMP466),
((NimStringDesc*) &TMP508),
((NimStringDesc*) &TMP482),
((NimStringDesc*) &TMP480),
((NimStringDesc*) &TMP481),
((NimStringDesc*) &TMP482),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP483),
((NimStringDesc*) &TMP474),
((NimStringDesc*) &TMP484),
((NimStringDesc*) &TMP474),
13}
,
{((NimStringDesc*) &TMP509),
((NimStringDesc*) &TMP466),
((NimStringDesc*) &TMP479),
((NimStringDesc*) &TMP482),
((NimStringDesc*) &TMP480),
((NimStringDesc*) &TMP481),
((NimStringDesc*) &TMP482),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP483),
((NimStringDesc*) &TMP474),
((NimStringDesc*) &TMP484),
((NimStringDesc*) &TMP474),
13}
,
{((NimStringDesc*) &TMP510),
((NimStringDesc*) &TMP466),
((NimStringDesc*) &TMP479),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP480),
((NimStringDesc*) &TMP481),
((NimStringDesc*) &TMP482),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP483),
((NimStringDesc*) &TMP474),
((NimStringDesc*) &TMP484),
((NimStringDesc*) &TMP474),
0}
,
{((NimStringDesc*) &TMP511),
((NimStringDesc*) &TMP466),
((NimStringDesc*) &TMP479),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP480),
((NimStringDesc*) &TMP481),
((NimStringDesc*) &TMP482),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP483),
((NimStringDesc*) &TMP474),
((NimStringDesc*) &TMP484),
((NimStringDesc*) &TMP474),
0}
,
{((NimStringDesc*) &TMP512),
((NimStringDesc*) &TMP466),
((NimStringDesc*) &TMP479),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP480),
((NimStringDesc*) &TMP481),
((NimStringDesc*) &TMP482),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP483),
((NimStringDesc*) &TMP474),
((NimStringDesc*) &TMP484),
((NimStringDesc*) &TMP474),
0}
}
;
STRING_LITERAL(TMP513, "littleEndian", 12);
STRING_LITERAL(TMP514, "bigEndian", 9);
NIM_CONST TY145463 endiantostr_145462 = {((NimStringDesc*) &TMP513),
((NimStringDesc*) &TMP514)}
;
STRING_LITERAL(TMP515, "i386", 4);
STRING_LITERAL(TMP516, "m68k", 4);
STRING_LITERAL(TMP517, "alpha", 5);
STRING_LITERAL(TMP518, "powerpc", 7);
STRING_LITERAL(TMP519, "powerpc64", 9);
STRING_LITERAL(TMP520, "sparc", 5);
STRING_LITERAL(TMP521, "vm", 2);
STRING_LITERAL(TMP522, "ia64", 4);
STRING_LITERAL(TMP523, "amd64", 5);
STRING_LITERAL(TMP524, "mips", 4);
STRING_LITERAL(TMP525, "arm", 3);
STRING_LITERAL(TMP526, "js", 2);
STRING_LITERAL(TMP527, "nimrodvm", 8);
STRING_LITERAL(TMP528, "avr", 3);
NIM_CONST TY145469 cpu_145468 = {{((NimStringDesc*) &TMP515),
32,
((NU8) 0),
64,
32}
,
{((NimStringDesc*) &TMP516),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP517),
64,
((NU8) 0),
64,
64}
,
{((NimStringDesc*) &TMP518),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP519),
64,
((NU8) 1),
64,
64}
,
{((NimStringDesc*) &TMP520),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP521),
32,
((NU8) 0),
64,
32}
,
{((NimStringDesc*) &TMP522),
64,
((NU8) 0),
64,
64}
,
{((NimStringDesc*) &TMP523),
64,
((NU8) 0),
64,
64}
,
{((NimStringDesc*) &TMP524),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP525),
32,
((NU8) 0),
64,
32}
,
{((NimStringDesc*) &TMP526),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP527),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP528),
16,
((NU8) 0),
32,
16}
}
;
STRING_LITERAL(TMP529, "c != cpuNone ", 13);
STRING_LITERAL(TMP530, "o != osNone ", 12);
STRING_LITERAL(TMP534, "netbsd", 6);
NU8 targetcpu_145573;
NU8 hostcpu_145574;
NU8 targetos_145575;
NU8 hostos_145576;
NI intsize_145590;
NI floatsize_145591;
NI ptrsize_145592;
NimStringDesc* tnl_145593;
extern TFrame* frameptr_13238;
extern tgcheap43816 gch_43844;

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
		LOC7 = (a == (-2147483647 -1));
		if (!(LOC7)) goto LA8;
		LOC7 = (b == -1);
		LA8: ;
		if (!LOC7) goto LA9;
		raiseOverflow();
	}
	LA9: ;
	result = (NI32)(a / b);
	goto BeforeRet;
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
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		nimln(236, "gc.nim");
		rtladdzct_46802(c);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(void, settarget_145599)(NU8 o, NU8 c) {
	NI TMP531;
	NI TMP532;
	NI TMP533;
	NimStringDesc* LOC9;
	nimfr("setTarget", "platform.nim")
	nimln(198, "platform.nim");
	{
		nimln(198, "platform.nim");
		nimln(198, "platform.nim");
		nimln(198, "platform.nim");
		if (!!(!((c == ((NU8) 0))))) goto LA3;
		nimln(198, "platform.nim");
		failedassertimpl_80421(((NimStringDesc*) &TMP529));
	}
	LA3: ;
	nimln(199, "platform.nim");
	{
		nimln(199, "platform.nim");
		nimln(199, "platform.nim");
		nimln(199, "platform.nim");
		if (!!(!((o == ((NU8) 0))))) goto LA7;
		nimln(199, "platform.nim");
		failedassertimpl_80421(((NimStringDesc*) &TMP530));
	}
	LA7: ;
	nimln(201, "platform.nim");
	targetcpu_145573 = c;
	nimln(202, "platform.nim");
	targetos_145575 = o;
	nimln(203, "platform.nim");
	nimln(203, "platform.nim");
	if (c < 1 || c > 14) raiseIndexError();
	TMP531 = divInt(cpu_145468[(c)- 1].Field1, 8);
	intsize_145590 = (NI32)(TMP531);
	nimln(204, "platform.nim");
	nimln(204, "platform.nim");
	if (c < 1 || c > 14) raiseIndexError();
	TMP532 = divInt(cpu_145468[(c)- 1].Field3, 8);
	floatsize_145591 = (NI32)(TMP532);
	nimln(205, "platform.nim");
	nimln(205, "platform.nim");
	if (c < 1 || c > 14) raiseIndexError();
	TMP533 = divInt(cpu_145468[(c)- 1].Field4, 8);
	ptrsize_145592 = (NI32)(TMP533);
	nimln(206, "platform.nim");
	if (o < 1 || o > 23) raiseIndexError();
	LOC9 = 0;
	LOC9 = tnl_145593; tnl_145593 = copyStringRC1(os_145063[(o)- 1].Field5);
	if (LOC9) nimGCunrefNoCycle(LOC9);
	popFrame();
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

N_NIMCALL(NU8, nametoos_145582)(NimStringDesc* name) {
	NU8 result;
	NU8 i_146072;
	NU8 res_146075;
	nimfr("nameToOS", "platform.nim")
	result = 0;
	i_146072 = 0;
	nimln(1451, "system.nim");
	res_146075 = ((NU8) 1);
	nimln(1452, "system.nim");
	while (1) {
		nimln(1452, "system.nim");
		if (!(res_146075 <= ((NU8) 23))) goto LA1;
		nimln(1451, "system.nim");
		i_146072 = res_146075;
		nimln(210, "platform.nim");
		{
			NI LOC4;
			nimln(210, "platform.nim");
			nimln(210, "platform.nim");
			if (i_146072 < 1 || i_146072 > 23) raiseIndexError();
			LOC4 = 0;
			LOC4 = nsuCmpIgnoreStyle(name, os_145063[(i_146072)- 1].Field0);
			if (!(LOC4 == 0)) goto LA5;
			nimln(211, "platform.nim");
			nimln(211, "platform.nim");
			result = i_146072;
			goto BeforeRet;
		}
		LA5: ;
		nimln(1454, "system.nim");
		res_146075 = addInt(res_146075, 1);
	} LA1: ;
	nimln(212, "platform.nim");
	result = ((NU8) 0);
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NU8, nametocpu_145586)(NimStringDesc* name) {
	NU8 result;
	NU8 i_146140;
	NU8 res_146143;
	nimfr("nameToCPU", "platform.nim")
	result = 0;
	i_146140 = 0;
	nimln(1451, "system.nim");
	res_146143 = ((NU8) 1);
	nimln(1452, "system.nim");
	while (1) {
		nimln(1452, "system.nim");
		if (!(res_146143 <= ((NU8) 14))) goto LA1;
		nimln(1451, "system.nim");
		i_146140 = res_146143;
		nimln(216, "platform.nim");
		{
			NI LOC4;
			nimln(216, "platform.nim");
			nimln(216, "platform.nim");
			if (i_146140 < 1 || i_146140 > 14) raiseIndexError();
			LOC4 = 0;
			LOC4 = nsuCmpIgnoreStyle(name, cpu_145468[(i_146140)- 1].Field0);
			if (!(LOC4 == 0)) goto LA5;
			nimln(217, "platform.nim");
			nimln(217, "platform.nim");
			result = i_146140;
			goto BeforeRet;
		}
		LA5: ;
		nimln(1454, "system.nim");
		res_146143 = addInt(res_146143, 1);
	} LA1: ;
	nimln(218, "platform.nim");
	result = ((NU8) 0);
	BeforeRet: ;
	popFrame();
	return result;
}
N_NOINLINE(void, platformInit)(void) {
	nimfr("platform", "platform.nim")
	nimln(220, "platform.nim");
	hostcpu_145574 = nametocpu_145586(((NimStringDesc*) &TMP515));
	nimln(221, "platform.nim");
	hostos_145576 = nametoos_145582(((NimStringDesc*) &TMP534));
	nimln(223, "platform.nim");
	settarget_145599(hostos_145576, hostcpu_145574);
	popFrame();
}

N_NOINLINE(void, platformDatInit)(void) {
}

