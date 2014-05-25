/* Generated by Nimrod Compiler v0.9.5 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct tinfoos145044 tinfoos145044;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tinfocpu145453 tinfocpu145453;
typedef struct tcell42090 tcell42090;
typedef struct TNimType TNimType;
typedef struct tcellseq42106 tcellseq42106;
typedef struct tgcheap44016 tgcheap44016;
typedef struct tcellset42102 tcellset42102;
typedef struct tpagedesc42098 tpagedesc42098;
typedef struct tmemregion24410 tmemregion24410;
typedef struct tsmallchunk23638 tsmallchunk23638;
typedef struct tllchunk24404 tllchunk24404;
typedef struct tbigchunk23640 tbigchunk23640;
typedef struct tintset23615 tintset23615;
typedef struct ttrunk23611 ttrunk23611;
typedef struct tavlnode24408 tavlnode24408;
typedef struct tgcstat44014 tgcstat44014;
typedef struct TNimNode TNimNode;
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
struct  tcell42090  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq42106  {
NI Len;
NI Cap;
tcell42090** D;
};
struct  tcellset42102  {
NI Counter;
NI Max;
tpagedesc42098* Head;
tpagedesc42098** Data;
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
tcellseq42106 Zct;
tcellseq42106 Decstack;
tcellset42102 Cycleroots;
tcellseq42106 Tempstack;
NI Recgclock;
tmemregion24410 Region;
tgcstat44014 Stat;
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
typedef NI TY23618[16];
struct  tpagedesc42098  {
tpagedesc42098* Next;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tfreecell23628  {
tfreecell23628* Next;
NI Zerofield;
};
N_NIMCALL(void, settarget_145599)(NU8 o, NU8 c);
N_NIMCALL(void, failedassertimpl_80621)(NimStringDesc* msg);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell42090*, usrtocell_45443)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_47002)(tcell42090* c);
N_NOINLINE(void, addzct_45418)(tcellseq42106* s, tcell42090* c);
N_NIMCALL(NU8, nametoos_145582)(NimStringDesc* name);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NU8, nametocpu_145586)(NimStringDesc* name);
STRING_LITERAL(TMP458, "DOS", 3);
STRING_LITERAL(TMP459, "..", 2);
STRING_LITERAL(TMP460, "$1.dll", 6);
STRING_LITERAL(TMP461, "/", 1);
STRING_LITERAL(TMP462, ".obj", 4);
STRING_LITERAL(TMP463, "\015\012", 2);
STRING_LITERAL(TMP464, ";", 1);
STRING_LITERAL(TMP465, "\\", 1);
STRING_LITERAL(TMP466, ".bat", 4);
STRING_LITERAL(TMP467, ".", 1);
STRING_LITERAL(TMP468, ".exe", 4);
STRING_LITERAL(TMP469, "Windows", 7);
STRING_LITERAL(TMP470, "OS2", 3);
STRING_LITERAL(TMP471, "Linux", 5);
STRING_LITERAL(TMP472, "lib$1.so", 8);
STRING_LITERAL(TMP473, ".o", 2);
STRING_LITERAL(TMP474, "\012", 1);
STRING_LITERAL(TMP475, ":", 1);
STRING_LITERAL(TMP476, ".sh", 3);
STRING_LITERAL(TMP477, "", 0);
STRING_LITERAL(TMP478, "MorphOS", 7);
STRING_LITERAL(TMP479, "SkyOS", 5);
STRING_LITERAL(TMP480, "Solaris", 7);
STRING_LITERAL(TMP481, "Irix", 4);
STRING_LITERAL(TMP482, "NetBSD", 6);
STRING_LITERAL(TMP483, "FreeBSD", 7);
STRING_LITERAL(TMP484, "OpenBSD", 7);
STRING_LITERAL(TMP485, "AIX", 3);
STRING_LITERAL(TMP486, "PalmOS", 6);
STRING_LITERAL(TMP487, "QNX", 3);
STRING_LITERAL(TMP488, "Amiga", 5);
STRING_LITERAL(TMP489, "$1.library", 10);
STRING_LITERAL(TMP490, "Atari", 5);
STRING_LITERAL(TMP491, ".tpp", 4);
STRING_LITERAL(TMP492, "Netware", 7);
STRING_LITERAL(TMP493, "$1.nlm", 6);
STRING_LITERAL(TMP494, ".nlm", 4);
STRING_LITERAL(TMP495, "MacOS", 5);
STRING_LITERAL(TMP496, "::", 2);
STRING_LITERAL(TMP497, "$1Lib", 5);
STRING_LITERAL(TMP498, "\015", 1);
STRING_LITERAL(TMP499, ",", 1);
STRING_LITERAL(TMP500, "MacOSX", 6);
STRING_LITERAL(TMP501, "lib$1.dylib", 11);
STRING_LITERAL(TMP502, "Haiku", 5);
STRING_LITERAL(TMP503, "JS", 2);
STRING_LITERAL(TMP504, "NimrodVM", 8);
STRING_LITERAL(TMP505, "Standalone", 10);
NIM_CONST TY145064 os_145063 = {{((NimStringDesc*) &TMP458),
((NimStringDesc*) &TMP459),
((NimStringDesc*) &TMP460),
((NimStringDesc*) &TMP461),
((NimStringDesc*) &TMP462),
((NimStringDesc*) &TMP463),
((NimStringDesc*) &TMP464),
((NimStringDesc*) &TMP465),
((NimStringDesc*) &TMP466),
((NimStringDesc*) &TMP467),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP467),
2}
,
{((NimStringDesc*) &TMP469),
((NimStringDesc*) &TMP459),
((NimStringDesc*) &TMP460),
((NimStringDesc*) &TMP461),
((NimStringDesc*) &TMP462),
((NimStringDesc*) &TMP463),
((NimStringDesc*) &TMP464),
((NimStringDesc*) &TMP465),
((NimStringDesc*) &TMP466),
((NimStringDesc*) &TMP467),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP467),
2}
,
{((NimStringDesc*) &TMP470),
((NimStringDesc*) &TMP459),
((NimStringDesc*) &TMP460),
((NimStringDesc*) &TMP461),
((NimStringDesc*) &TMP462),
((NimStringDesc*) &TMP463),
((NimStringDesc*) &TMP464),
((NimStringDesc*) &TMP465),
((NimStringDesc*) &TMP466),
((NimStringDesc*) &TMP467),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP467),
2}
,
{((NimStringDesc*) &TMP471),
((NimStringDesc*) &TMP459),
((NimStringDesc*) &TMP472),
((NimStringDesc*) &TMP461),
((NimStringDesc*) &TMP473),
((NimStringDesc*) &TMP474),
((NimStringDesc*) &TMP475),
((NimStringDesc*) &TMP461),
((NimStringDesc*) &TMP476),
((NimStringDesc*) &TMP467),
((NimStringDesc*) &TMP477),
((NimStringDesc*) &TMP467),
5}
,
{((NimStringDesc*) &TMP478),
((NimStringDesc*) &TMP459),
((NimStringDesc*) &TMP472),
((NimStringDesc*) &TMP461),
((NimStringDesc*) &TMP473),
((NimStringDesc*) &TMP474),
((NimStringDesc*) &TMP475),
((NimStringDesc*) &TMP461),
((NimStringDesc*) &TMP476),
((NimStringDesc*) &TMP467),
((NimStringDesc*) &TMP477),
((NimStringDesc*) &TMP467),
5}
,
{((NimStringDesc*) &TMP479),
((NimStringDesc*) &TMP459),
((NimStringDesc*) &TMP472),
((NimStringDesc*) &TMP461),
((NimStringDesc*) &TMP473),
((NimStringDesc*) &TMP474),
((NimStringDesc*) &TMP475),
((NimStringDesc*) &TMP461),
((NimStringDesc*) &TMP476),
((NimStringDesc*) &TMP467),
((NimStringDesc*) &TMP477),
((NimStringDesc*) &TMP467),
5}
,
{((NimStringDesc*) &TMP480),
((NimStringDesc*) &TMP459),
((NimStringDesc*) &TMP472),
((NimStringDesc*) &TMP461),
((NimStringDesc*) &TMP473),
((NimStringDesc*) &TMP474),
((NimStringDesc*) &TMP475),
((NimStringDesc*) &TMP461),
((NimStringDesc*) &TMP476),
((NimStringDesc*) &TMP467),
((NimStringDesc*) &TMP477),
((NimStringDesc*) &TMP467),
5}
,
{((NimStringDesc*) &TMP481),
((NimStringDesc*) &TMP459),
((NimStringDesc*) &TMP472),
((NimStringDesc*) &TMP461),
((NimStringDesc*) &TMP473),
((NimStringDesc*) &TMP474),
((NimStringDesc*) &TMP475),
((NimStringDesc*) &TMP461),
((NimStringDesc*) &TMP476),
((NimStringDesc*) &TMP467),
((NimStringDesc*) &TMP477),
((NimStringDesc*) &TMP467),
5}
,
{((NimStringDesc*) &TMP482),
((NimStringDesc*) &TMP459),
((NimStringDesc*) &TMP472),
((NimStringDesc*) &TMP461),
((NimStringDesc*) &TMP473),
((NimStringDesc*) &TMP474),
((NimStringDesc*) &TMP475),
((NimStringDesc*) &TMP461),
((NimStringDesc*) &TMP476),
((NimStringDesc*) &TMP467),
((NimStringDesc*) &TMP477),
((NimStringDesc*) &TMP467),
5}
,
{((NimStringDesc*) &TMP483),
((NimStringDesc*) &TMP459),
((NimStringDesc*) &TMP472),
((NimStringDesc*) &TMP461),
((NimStringDesc*) &TMP473),
((NimStringDesc*) &TMP474),
((NimStringDesc*) &TMP475),
((NimStringDesc*) &TMP461),
((NimStringDesc*) &TMP476),
((NimStringDesc*) &TMP467),
((NimStringDesc*) &TMP477),
((NimStringDesc*) &TMP467),
5}
,
{((NimStringDesc*) &TMP484),
((NimStringDesc*) &TMP459),
((NimStringDesc*) &TMP472),
((NimStringDesc*) &TMP461),
((NimStringDesc*) &TMP473),
((NimStringDesc*) &TMP474),
((NimStringDesc*) &TMP475),
((NimStringDesc*) &TMP461),
((NimStringDesc*) &TMP476),
((NimStringDesc*) &TMP467),
((NimStringDesc*) &TMP477),
((NimStringDesc*) &TMP467),
5}
,
{((NimStringDesc*) &TMP485),
((NimStringDesc*) &TMP459),
((NimStringDesc*) &TMP472),
((NimStringDesc*) &TMP461),
((NimStringDesc*) &TMP473),
((NimStringDesc*) &TMP474),
((NimStringDesc*) &TMP475),
((NimStringDesc*) &TMP461),
((NimStringDesc*) &TMP476),
((NimStringDesc*) &TMP467),
((NimStringDesc*) &TMP477),
((NimStringDesc*) &TMP467),
5}
,
{((NimStringDesc*) &TMP486),
((NimStringDesc*) &TMP459),
((NimStringDesc*) &TMP472),
((NimStringDesc*) &TMP461),
((NimStringDesc*) &TMP473),
((NimStringDesc*) &TMP474),
((NimStringDesc*) &TMP475),
((NimStringDesc*) &TMP461),
((NimStringDesc*) &TMP476),
((NimStringDesc*) &TMP467),
((NimStringDesc*) &TMP477),
((NimStringDesc*) &TMP467),
1}
,
{((NimStringDesc*) &TMP487),
((NimStringDesc*) &TMP459),
((NimStringDesc*) &TMP472),
((NimStringDesc*) &TMP461),
((NimStringDesc*) &TMP473),
((NimStringDesc*) &TMP474),
((NimStringDesc*) &TMP475),
((NimStringDesc*) &TMP461),
((NimStringDesc*) &TMP476),
((NimStringDesc*) &TMP467),
((NimStringDesc*) &TMP477),
((NimStringDesc*) &TMP467),
5}
,
{((NimStringDesc*) &TMP488),
((NimStringDesc*) &TMP459),
((NimStringDesc*) &TMP489),
((NimStringDesc*) &TMP461),
((NimStringDesc*) &TMP473),
((NimStringDesc*) &TMP474),
((NimStringDesc*) &TMP475),
((NimStringDesc*) &TMP461),
((NimStringDesc*) &TMP476),
((NimStringDesc*) &TMP467),
((NimStringDesc*) &TMP477),
((NimStringDesc*) &TMP467),
1}
,
{((NimStringDesc*) &TMP490),
((NimStringDesc*) &TMP459),
((NimStringDesc*) &TMP460),
((NimStringDesc*) &TMP461),
((NimStringDesc*) &TMP473),
((NimStringDesc*) &TMP474),
((NimStringDesc*) &TMP475),
((NimStringDesc*) &TMP461),
((NimStringDesc*) &TMP477),
((NimStringDesc*) &TMP467),
((NimStringDesc*) &TMP491),
((NimStringDesc*) &TMP467),
1}
,
{((NimStringDesc*) &TMP492),
((NimStringDesc*) &TMP459),
((NimStringDesc*) &TMP493),
((NimStringDesc*) &TMP461),
((NimStringDesc*) &TMP477),
((NimStringDesc*) &TMP463),
((NimStringDesc*) &TMP475),
((NimStringDesc*) &TMP461),
((NimStringDesc*) &TMP476),
((NimStringDesc*) &TMP467),
((NimStringDesc*) &TMP494),
((NimStringDesc*) &TMP467),
2}
,
{((NimStringDesc*) &TMP495),
((NimStringDesc*) &TMP496),
((NimStringDesc*) &TMP497),
((NimStringDesc*) &TMP475),
((NimStringDesc*) &TMP473),
((NimStringDesc*) &TMP498),
((NimStringDesc*) &TMP499),
((NimStringDesc*) &TMP475),
((NimStringDesc*) &TMP477),
((NimStringDesc*) &TMP475),
((NimStringDesc*) &TMP477),
((NimStringDesc*) &TMP467),
2}
,
{((NimStringDesc*) &TMP500),
((NimStringDesc*) &TMP459),
((NimStringDesc*) &TMP501),
((NimStringDesc*) &TMP475),
((NimStringDesc*) &TMP473),
((NimStringDesc*) &TMP474),
((NimStringDesc*) &TMP475),
((NimStringDesc*) &TMP461),
((NimStringDesc*) &TMP476),
((NimStringDesc*) &TMP467),
((NimStringDesc*) &TMP477),
((NimStringDesc*) &TMP467),
13}
,
{((NimStringDesc*) &TMP502),
((NimStringDesc*) &TMP459),
((NimStringDesc*) &TMP472),
((NimStringDesc*) &TMP475),
((NimStringDesc*) &TMP473),
((NimStringDesc*) &TMP474),
((NimStringDesc*) &TMP475),
((NimStringDesc*) &TMP461),
((NimStringDesc*) &TMP476),
((NimStringDesc*) &TMP467),
((NimStringDesc*) &TMP477),
((NimStringDesc*) &TMP467),
13}
,
{((NimStringDesc*) &TMP503),
((NimStringDesc*) &TMP459),
((NimStringDesc*) &TMP472),
((NimStringDesc*) &TMP461),
((NimStringDesc*) &TMP473),
((NimStringDesc*) &TMP474),
((NimStringDesc*) &TMP475),
((NimStringDesc*) &TMP461),
((NimStringDesc*) &TMP476),
((NimStringDesc*) &TMP467),
((NimStringDesc*) &TMP477),
((NimStringDesc*) &TMP467),
0}
,
{((NimStringDesc*) &TMP504),
((NimStringDesc*) &TMP459),
((NimStringDesc*) &TMP472),
((NimStringDesc*) &TMP461),
((NimStringDesc*) &TMP473),
((NimStringDesc*) &TMP474),
((NimStringDesc*) &TMP475),
((NimStringDesc*) &TMP461),
((NimStringDesc*) &TMP476),
((NimStringDesc*) &TMP467),
((NimStringDesc*) &TMP477),
((NimStringDesc*) &TMP467),
0}
,
{((NimStringDesc*) &TMP505),
((NimStringDesc*) &TMP459),
((NimStringDesc*) &TMP472),
((NimStringDesc*) &TMP461),
((NimStringDesc*) &TMP473),
((NimStringDesc*) &TMP474),
((NimStringDesc*) &TMP475),
((NimStringDesc*) &TMP461),
((NimStringDesc*) &TMP476),
((NimStringDesc*) &TMP467),
((NimStringDesc*) &TMP477),
((NimStringDesc*) &TMP467),
0}
}
;
STRING_LITERAL(TMP506, "littleEndian", 12);
STRING_LITERAL(TMP507, "bigEndian", 9);
NIM_CONST TY145463 endiantostr_145462 = {((NimStringDesc*) &TMP506),
((NimStringDesc*) &TMP507)}
;
STRING_LITERAL(TMP508, "i386", 4);
STRING_LITERAL(TMP509, "m68k", 4);
STRING_LITERAL(TMP510, "alpha", 5);
STRING_LITERAL(TMP511, "powerpc", 7);
STRING_LITERAL(TMP512, "powerpc64", 9);
STRING_LITERAL(TMP513, "sparc", 5);
STRING_LITERAL(TMP514, "vm", 2);
STRING_LITERAL(TMP515, "ia64", 4);
STRING_LITERAL(TMP516, "amd64", 5);
STRING_LITERAL(TMP517, "mips", 4);
STRING_LITERAL(TMP518, "arm", 3);
STRING_LITERAL(TMP519, "js", 2);
STRING_LITERAL(TMP520, "nimrodvm", 8);
STRING_LITERAL(TMP521, "avr", 3);
NIM_CONST TY145469 cpu_145468 = {{((NimStringDesc*) &TMP508),
32,
((NU8) 0),
64,
32}
,
{((NimStringDesc*) &TMP509),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP510),
64,
((NU8) 0),
64,
64}
,
{((NimStringDesc*) &TMP511),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP512),
64,
((NU8) 1),
64,
64}
,
{((NimStringDesc*) &TMP513),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP514),
32,
((NU8) 0),
64,
32}
,
{((NimStringDesc*) &TMP515),
64,
((NU8) 0),
64,
64}
,
{((NimStringDesc*) &TMP516),
64,
((NU8) 0),
64,
64}
,
{((NimStringDesc*) &TMP517),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP518),
32,
((NU8) 0),
64,
32}
,
{((NimStringDesc*) &TMP519),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP520),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP521),
16,
((NU8) 0),
32,
16}
}
;
STRING_LITERAL(TMP522, "c != cpuNone ", 13);
STRING_LITERAL(TMP523, "o != osNone ", 12);
STRING_LITERAL(TMP527, "macosx", 6);
NU8 targetcpu_145573;
NU8 hostcpu_145574;
NU8 targetos_145575;
NU8 hostos_145576;
NI intsize_145590;
NI floatsize_145591;
NI ptrsize_145592;
NimStringDesc* tnl_145593;
extern TFrame* frameptr_13438;
extern tgcheap44016 gch_44044;

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
	(*s).prev = frameptr_13438;
	frameptr_13438 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13438 = (*frameptr_13438).prev;
}

static N_INLINE(tcell42090*, usrtocell_45443)(void* usr) {
	tcell42090* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	result = ((tcell42090*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell42090))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_47002)(tcell42090* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_45418(&gch_44044.Zct, c);
	popFrame();
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell42090* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(233, "gc.nim");
	c = usrtocell_45443(p);
	nimln(235, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).Refcount -= 8;
		nimln(168, "gc.nim");
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		nimln(236, "gc.nim");
		rtladdzct_47002(c);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(void, settarget_145599)(NU8 o, NU8 c) {
	NI TMP524;
	NI TMP525;
	NI TMP526;
	NimStringDesc* LOC9;
	nimfr("setTarget", "platform.nim")
	nimln(198, "platform.nim");
	{
		nimln(198, "platform.nim");
		nimln(198, "platform.nim");
		nimln(198, "platform.nim");
		if (!!(!((c == ((NU8) 0))))) goto LA3;
		nimln(198, "platform.nim");
		failedassertimpl_80621(((NimStringDesc*) &TMP522));
	}
	LA3: ;
	nimln(199, "platform.nim");
	{
		nimln(199, "platform.nim");
		nimln(199, "platform.nim");
		nimln(199, "platform.nim");
		if (!!(!((o == ((NU8) 0))))) goto LA7;
		nimln(199, "platform.nim");
		failedassertimpl_80621(((NimStringDesc*) &TMP523));
	}
	LA7: ;
	nimln(201, "platform.nim");
	targetcpu_145573 = c;
	nimln(202, "platform.nim");
	targetos_145575 = o;
	nimln(203, "platform.nim");
	nimln(203, "platform.nim");
	if (c < 1 || c > 14) raiseIndexError();
	TMP524 = divInt(cpu_145468[(c)- 1].Field1, 8);
	intsize_145590 = (NI32)(TMP524);
	nimln(204, "platform.nim");
	nimln(204, "platform.nim");
	if (c < 1 || c > 14) raiseIndexError();
	TMP525 = divInt(cpu_145468[(c)- 1].Field3, 8);
	floatsize_145591 = (NI32)(TMP525);
	nimln(205, "platform.nim");
	nimln(205, "platform.nim");
	if (c < 1 || c > 14) raiseIndexError();
	TMP526 = divInt(cpu_145468[(c)- 1].Field4, 8);
	ptrsize_145592 = (NI32)(TMP526);
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
	hostcpu_145574 = nametocpu_145586(((NimStringDesc*) &TMP508));
	nimln(221, "platform.nim");
	hostos_145576 = nametoos_145582(((NimStringDesc*) &TMP527));
	nimln(223, "platform.nim");
	settarget_145599(hostos_145576, hostcpu_145574);
	popFrame();
}

N_NOINLINE(void, platformDatInit)(void) {
}

