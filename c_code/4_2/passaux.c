/* Generated by Nimrod Compiler v0.9.5 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct tpasscontext250003 tpasscontext250003;
typedef struct tsym191843 tsym191843;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tidobj170013 tidobj170013;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq191845 ttypeseq191845;
typedef struct ttype191847 ttype191847;
typedef struct tscope191837 tscope191837;
typedef struct TY191943 TY191943;
typedef struct tinstantiation191833 tinstantiation191833;
typedef struct tstrtable191817 tstrtable191817;
typedef struct tsymseq191815 tsymseq191815;
typedef struct tident170019 tident170019;
typedef struct tlineinfo166527 tlineinfo166527;
typedef struct tnode191813 tnode191813;
typedef struct tloc191827 tloc191827;
typedef struct trope148007 trope148007;
typedef struct tlib191831 tlib191831;
typedef struct tnodeseq191807 tnodeseq191807;
typedef struct tpass250015 tpass250015;
typedef struct trodreader240024 trodreader240024;
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
typedef struct TY191932 TY191932;
typedef struct tlistentry119017 tlistentry119017;
typedef struct tindex240022 tindex240022;
typedef struct tiitable200207 tiitable200207;
typedef struct tiipairseq200205 tiipairseq200205;
typedef struct tiipair200203 tiipair200203;
typedef struct tidtable191859 tidtable191859;
typedef struct tidpairseq191857 tidpairseq191857;
typedef struct tidpair191855 tidpair191855;
typedef struct tmemfile238204 tmemfile238204;
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
struct  tidobj170013  {
  TNimObject Sup;
NI Id;
};
struct  tstrtable191817  {
NI Counter;
tsymseq191815* Data;
};
struct  tlineinfo166527  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  tloc191827  {
NU8 K;
NU8 S;
NU8 Flags;
ttype191847* T;
trope148007* R;
trope148007* Heaproot;
NI A;
};
struct  tsym191843  {
  tidobj170013 Sup;
NU8 Kind;
union {
struct {ttypeseq191845* Typeinstcache;
tscope191837* Typscope;
} S1;
struct {TY191943* Procinstcache;
tscope191837* Scope;
} S2;
struct {TY191943* Usedgenerics;
tstrtable191817 Tab;
} S3;
} kindU;
NU16 Magic;
ttype191847* Typ;
tident170019* Name;
tlineinfo166527 Info;
tsym191843* Owner;
NU32 Flags;
tnode191813* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc191827 Loc;
tlib191831* Annex;
tnode191813* Constraint;
};
struct  tident170019  {
  tidobj170013 Sup;
NimStringDesc* S;
tident170019* Next;
NI H;
};
struct  tnode191813  {
ttype191847* Typ;
tlineinfo166527 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym191843* Sym;
} S4;
struct {tident170019* Ident;
} S5;
struct {tnodeseq191807* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
typedef N_NIMCALL_PTR(tpasscontext250003*, tpassopen250007) (tsym191843* module);
typedef N_NIMCALL_PTR(tpasscontext250003*, tpassopencached250009) (tsym191843* module, trodreader240024* rd);
typedef N_NIMCALL_PTR(tnode191813*, tpassprocess250013) (tpasscontext250003* p, tnode191813* toplevelstmt);
typedef N_NIMCALL_PTR(tnode191813*, tpassclose250011) (tpasscontext250003* p, tnode191813* n);
struct tpass250015 {
tpassopen250007 Field0;
tpassopencached250009 Field1;
tpassprocess250013 Field2;
tpassclose250011 Field3;
};
typedef NU8 TY192025[20];
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
struct  tpasscontext250003  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  ttype191847  {
  tidobj170013 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq191845* Sons;
tnode191813* N;
tsym191843* Destructor;
tsym191843* Owner;
tsym191843* Sym;
NI64 Size;
NI Align;
tloc191827 Loc;
};
struct  tscope191837  {
NI Depthlevel;
tstrtable191817 Symbols;
tnodeseq191807* Usingsyms;
tscope191837* Parent;
};
struct  tinstantiation191833  {
tsym191843* Sym;
ttypeseq191845* Concretetypes;
TY191932* Usedby;
};
struct  trope148007  {
  TNimObject Sup;
trope148007* Left;
trope148007* Right;
NI Length;
NimStringDesc* Data;
};
struct  tlistentry119017  {
  TNimObject Sup;
tlistentry119017* Prev;
tlistentry119017* Next;
};
struct  tlib191831  {
  tlistentry119017 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope148007* Name;
tnode191813* Path;
};
struct  tiipair200203  {
NI Key;
NI Val;
};
struct  tiitable200207  {
NI Counter;
tiipairseq200205* Data;
};
struct  tindex240022  {
NI Lastidxkey;
NI Lastidxval;
tiitable200207 Tab;
NimStringDesc* R;
NI Offset;
};
struct  tidpair191855  {
tidobj170013* Key;
TNimObject* Val;
};
struct  tidtable191859  {
NI Counter;
tidpairseq191857* Data;
};
struct  tmemfile238204  {
void* Mem;
NI Size;
int Handle;
};
struct  trodreader240024  {
  TNimObject Sup;
NI Pos;
NCSTRING S;
NU32 Options;
NU8 Reason;
TY191932* Moddeps;
TY191932* Files;
NI Dataidx;
NI Convertersidx;
NI Initidx;
NI Interfidx;
NI Compilerprocsidx;
NI Methodsidx;
NimStringDesc* Filename;
tindex240022 Index;
tindex240022 Imports;
NI Readerindex;
NI Line;
NI Moduleid;
tidtable191859 Syms;
tmemfile238204 Memfile;
tsymseq191815* Methods;
NimStringDesc* Origfile;
NIM_BOOL Inviewmode;
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
struct ttypeseq191845 {
  TGenericSeq Sup;
  ttype191847* data[SEQ_DECL_SIZE];
};
struct TY191943 {
  TGenericSeq Sup;
  tinstantiation191833* data[SEQ_DECL_SIZE];
};
struct tsymseq191815 {
  TGenericSeq Sup;
  tsym191843* data[SEQ_DECL_SIZE];
};
struct tnodeseq191807 {
  TGenericSeq Sup;
  tnode191813* data[SEQ_DECL_SIZE];
};
struct TY191932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct tiipairseq200205 {
  TGenericSeq Sup;
  tiipair200203 data[SEQ_DECL_SIZE];
};
struct tidpairseq191857 {
  TGenericSeq Sup;
  tidpair191855 data[SEQ_DECL_SIZE];
};
N_NIMCALL(tpasscontext250003*, verboseopen_524007)(tsym191843* s);
N_NIMCALL(void, rawmessage_168386)(NU16 msg, NimStringDesc* arg);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(tnode191813*, verboseprocess_524014)(tpasscontext250003* context, tnode191813* n);
N_NIMCALL(void, internalerror_168606)(NimStringDesc* errmsg);
N_NIMCALL(void, message_168584)(tlineinfo166527 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(tnode191813*, cleanup_524056)(tpasscontext250003* c, tnode191813* n);
static N_INLINE(NI, sonslen_192191)(tnode191813* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(tsym191843*, getmodule_200183)(tsym191843* s);
N_NIMCALL(NIM_BOOL, astneeded_250081)(tsym191843* s);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell41890*, usrtocell_45243)(void* usr);
static N_INLINE(void, rtladdzct_46802)(tcell41890* c);
N_NOINLINE(void, addzct_45218)(tcellseq41906* s, tcell41890* c);
STRING_LITERAL(TMP7603, "logpass: context is not nil", 27);
NIM_CONST tpass250015 verbosepass_524054 = {verboseopen_524007,
NIM_NIL,
verboseprocess_524014,
NIM_NIL}
;
static NIM_CONST TY192025 TMP7604 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP7605, "sons", 4);
static NIM_CONST TY192025 TMP7607 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP7608, "sym", 3);
NIM_CONST tpass250015 cleanuppass_524204 = {NIM_NIL,
NIM_NIL,
cleanup_524056,
cleanup_524056}
;
extern NI gverbosity_138120;
extern TFrame* frameptr_13238;
extern NU64 gnotes_167178;
extern NI gbackendid_190008;
extern NU32 gglobaloptions_138111;
extern tnode191813* emptynode_192744;
extern tgcheap43816 gch_43844;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13238;
	frameptr_13238 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13238 = (*frameptr_13238).prev;
}

N_NIMCALL(tpasscontext250003*, verboseopen_524007)(tsym191843* s) {
	tpasscontext250003* result;
	nimfr("verboseOpen", "passaux.nim")
	result = 0;
	nimln(17, "passaux.nim");
	result = NIM_NIL;
	nimln(18, "passaux.nim");
	{
		nimln(18, "passaux.nim");
		if (!(0 < gverbosity_138120)) goto LA3;
		nimln(18, "passaux.nim");
		rawmessage_168386(((NU16) 265), (*(*s).Name).S);
	}
	LA3: ;
	popFrame();
	return result;
}

N_NIMCALL(tnode191813*, verboseprocess_524014)(tpasscontext250003* context, tnode191813* n) {
	tnode191813* result;
	nimfr("verboseProcess", "passaux.nim")
	result = 0;
	nimln(21, "passaux.nim");
	result = n;
	nimln(22, "passaux.nim");
	{
		nimln(22, "passaux.nim");
		nimln(22, "passaux.nim");
		if (!!((context == NIM_NIL))) goto LA3;
		nimln(22, "passaux.nim");
		internalerror_168606(((NimStringDesc*) &TMP7603));
	}
	LA3: ;
	nimln(23, "passaux.nim");
	{
		NimStringDesc* LOC9;
		nimln(23, "passaux.nim");
		if (!(gverbosity_138120 == 3)) goto LA7;
		nimln(26, "passaux.nim");
		gnotes_167178 |=((NI64)(1)<<(((((NU16) 265)- 230))%(sizeof(NI64)*8)));
		nimln(27, "passaux.nim");
		nimln(27, "passaux.nim");
		LOC9 = 0;
		LOC9 = nimIntToStr(gbackendid_190008);
		message_168584((*n).Info, ((NU16) 265), LOC9);
	}
	LA7: ;
	popFrame();
	return result;
}

static N_INLINE(NI, sonslen_192191)(tnode191813* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1300, "ast.nim");
	{
		nimln(1300, "ast.nim");
		if (((TMP7604[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7605));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1300, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(1301, "ast.nim");
		nimln(1301, "ast.nim");
		if (((TMP7604[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7605));
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	popFrame();
	return result;
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

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(251, "gc.nim");
	{
		tcell41890* c;
		nimln(251, "gc.nim");
		nimln(251, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(252, "gc.nim");
		c = usrtocell_45243(src);
		nimln(169, "gc.nim");
		(*c).Refcount += 8;
	}
	LA3: ;
	nimln(254, "gc.nim");
	{
		tcell41890* c;
		nimln(254, "gc.nim");
		nimln(254, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		nimln(255, "gc.nim");
		c = usrtocell_45243((*dest));
		nimln(256, "gc.nim");
		{
			nimln(167, "gc.nim");
			(*c).Refcount -= 8;
			nimln(168, "gc.nim");
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
			nimln(257, "gc.nim");
			rtladdzct_46802(c);
		}
		LA11: ;
	}
	LA7: ;
	nimln(258, "gc.nim");
	(*dest) = src;
	popFrame();
}

N_NIMCALL(tnode191813*, cleanup_524056)(tpasscontext250003* c, tnode191813* n) {
	tnode191813* result;
	nimfr("cleanUp", "passaux.nim")
	result = 0;
	nimln(32, "passaux.nim");
	result = n;
	nimln(34, "passaux.nim");
	{
		NIM_BOOL LOC3;
		nimln(34, "passaux.nim");
		LOC3 = 0;
		nimln(34, "passaux.nim");
		LOC3 = ((gglobaloptions_138111 &(1<<((((NU8) 2))&31)))!=0);
		if (LOC3) goto LA4;
		nimln(34, "passaux.nim");
		LOC3 = (n == NIM_NIL);
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(34, "passaux.nim");
		goto BeforeRet;
	}
	LA5: ;
	nimln(35, "passaux.nim");
	switch ((*n).Kind) {
	case ((NU8) 114):
	{
		NI i_524103;
		NI HEX3Atmp_524197;
		NI LOC8;
		NI TMP7606;
		NI res_524199;
		i_524103 = 0;
		HEX3Atmp_524197 = 0;
		nimln(37, "passaux.nim");
		nimln(37, "passaux.nim");
		nimln(37, "passaux.nim");
		LOC8 = 0;
		LOC8 = sonslen_192191(n);
		TMP7606 = subInt(LOC8, 1);
		HEX3Atmp_524197 = (NI64)(TMP7606);
		nimln(1451, "system.nim");
		res_524199 = 0;
		nimln(1452, "system.nim");
		while (1) {
			tnode191813* LOC10;
			nimln(1452, "system.nim");
			if (!(res_524199 <= HEX3Atmp_524197)) goto LA9;
			nimln(1451, "system.nim");
			i_524103 = res_524199;
			nimln(37, "passaux.nim");
			nimln(37, "passaux.nim");
			if (((TMP7604[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7605));
			if ((NU)(i_524103) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			LOC10 = 0;
			LOC10 = cleanup_524056(c, (*n).kindU.S6.Sons->data[i_524103]);
			nimln(1454, "system.nim");
			res_524199 = addInt(res_524199, 1);
		} LA9: ;
	}
	break;
	case ((NU8) 79):
	case ((NU8) 80):
	{
		nimln(39, "passaux.nim");
		{
			tsym191843* s;
			nimln(39, "passaux.nim");
			if (((TMP7604[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7605));
			if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			if (!((*(*n).kindU.S6.Sons->data[0]).Kind == ((NU8) 3))) goto LA14;
			nimln(40, "passaux.nim");
			if (((TMP7604[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7605));
			if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			if (!(((TMP7607[(*(*n).kindU.S6.Sons->data[0]).Kind/8] &(1<<((*(*n).kindU.S6.Sons->data[0]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP7608));
			s = (*(*n).kindU.S6.Sons->data[0]).kindU.S4.Sym;
			nimln(41, "passaux.nim");
			{
				NIM_BOOL LOC18;
				tsym191843* LOC19;
				NIM_BOOL LOC21;
				nimln(41, "passaux.nim");
				LOC18 = 0;
				nimln(41, "passaux.nim");
				nimln(41, "passaux.nim");
				nimln(41, "passaux.nim");
				LOC19 = 0;
				LOC19 = getmodule_200183(s);
				LOC18 = !((((*LOC19).Flags &(1<<((((NU8) 25))&31)))!=0));
				if (!(LOC18)) goto LA20;
				nimln(41, "passaux.nim");
				nimln(41, "passaux.nim");
				LOC21 = 0;
				LOC21 = astneeded_250081(s);
				LOC18 = !(LOC21);
				LA20: ;
				if (!LOC18) goto LA22;
				nimln(42, "passaux.nim");
				if (((TMP7604[(*(*s).Ast).Kind/8] &(1<<((*(*s).Ast).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7605));
				if ((NU)(6) >= (NU)((*(*s).Ast).kindU.S6.Sons->Sup.len)) raiseIndexError();
				asgnRefNoCycle((void**) &(*(*s).Ast).kindU.S6.Sons->data[6], emptynode_192744);
			}
			LA22: ;
		}
		LA14: ;
	}
	break;
	default:
	{
	}
	break;
	}
	BeforeRet: ;
	popFrame();
	return result;
}
N_NOINLINE(void, passauxInit)(void) {
	nimfr("passaux", "passaux.nim")
	popFrame();
}

N_NOINLINE(void, passauxDatInit)(void) {
}

