/* Generated by Nimrod Compiler v0.9.5 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tnode191813 tnode191813;
typedef struct tparsers224029 tparsers224029;
typedef struct tparser209203 tparser209203;
typedef struct tlexer183176 tlexer183176;
typedef struct tbaselexer181018 tbaselexer181018;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tllstream179204 tllstream179204;
typedef struct ttoken183174 ttoken183174;
typedef struct tident170019 tident170019;
typedef struct tidobj170013 tidobj170013;
typedef struct ttype191847 ttype191847;
typedef struct tlineinfo166527 tlineinfo166527;
typedef struct tsym191843 tsym191843;
typedef struct tnodeseq191807 tnodeseq191807;
typedef struct ttypeseq191845 ttypeseq191845;
typedef struct tloc191827 tloc191827;
typedef struct trope148007 trope148007;
typedef struct tscope191837 tscope191837;
typedef struct TY191943 TY191943;
typedef struct tinstantiation191833 tinstantiation191833;
typedef struct tstrtable191817 tstrtable191817;
typedef struct tsymseq191815 tsymseq191815;
typedef struct tlib191831 tlib191831;
typedef struct TY191932 TY191932;
typedef struct tlistentry119017 tlistentry119017;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NimStringDesc* TY224016[4];
typedef NimStringDesc* TY224022[4];
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
struct  tbaselexer181018  {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
tllstream179204* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct  tlexer183176  {
  tbaselexer181018 Sup;
NI32 Fileidx;
NI Indentahead;
NI Currlineindent;
NIM_BOOL Strongspaces;
};
struct  ttoken183174  {
NU8 Toktype;
NI Indent;
tident170019* Ident;
NI64 Inumber;
NF Fnumber;
NU8 Base;
NI8 Strongspacea;
NI8 Strongspaceb;
NimStringDesc* Literal;
NI Line;
NI Col;
};
struct  tparser209203  {
NI Currind;
NIM_BOOL Firsttok;
NIM_BOOL Strongspaces;
tlexer183176 Lex;
ttoken183174 Tok;
NI Inpragma;
NI Insemistmtlist;
};
struct  tparsers224029  {
NU8 Skin;
tparser209203 Parser;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct  tlineinfo166527  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
typedef NU8 TY192025[20];
typedef NimStringDesc* TY127662[1];
struct  tllstream179204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
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
struct  tstrtable191817  {
NI Counter;
tsymseq191815* Data;
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
struct  trope148007  {
  TNimObject Sup;
trope148007* Left;
trope148007* Right;
NI Length;
NimStringDesc* Data;
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
struct tnodeseq191807 {
  TGenericSeq Sup;
  tnode191813* data[SEQ_DECL_SIZE];
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
struct TY191932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(tnode191813*, parsefile_224033)(NI32 fileidx);
N_NIMCALL(void, objectInit)(void* dest, TNimType* typ);
N_NIMCALL(NimStringDesc*, tofullpath_167788)(NI32 fileidx);
N_NIMCALL(NIM_BOOL, open_10603)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(void, rawmessage_168386)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(tllstream179204*, llstreamopen_179222)(FILE** f);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(tnode191813*, parseall_224049)(tparsers224029* p);
N_NIMCALL(tnode191813*, parseall_209212)(tparser209203* p);
N_NIMCALL(tnode191813*, parseall_214006)(tparser209203* p);
N_NIMCALL(void, internalerror_168606)(NimStringDesc* errmsg);
N_NIMCALL(tnode191813*, parsetoplevelstmt_224054)(tparsers224029* p);
N_NIMCALL(tnode191813*, parsetoplevelstmt_209222)(tparser209203* p);
N_NIMCALL(tnode191813*, parsetoplevelstmt_214013)(tparser209203* p);
N_NIMCALL(NI, utf8bom_224094)(NimStringDesc* s);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NIM_BOOL, containsshebang_224100)(NimStringDesc* s, NI i);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(tnode191813*, parsepipe_224138)(NimStringDesc* filename, tllstream179204* inputstream);
N_NIMCALL(tllstream179204*, llstreamopen_179227)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, llstreamreadline_179248)(tllstream179204* s, NimStringDesc** line);
N_NIMCALL(void, openparser_209364)(tparser209203* p, NimStringDesc* filename, tllstream179204* inputstream, NIM_BOOL strongspaces);
N_NIMCALL(tllstream179204*, llstreamopen_179218)(NimStringDesc* data);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(void, closeparser_209217)(tparser209203* p);
N_NIMCALL(void, llstreamclose_179238)(tllstream179204* s);
N_NIMCALL(NU8, getfilter_224219)(tident170019* ident);
N_NIMCALL(NIM_BOOL, identeq_170469)(tident170019* id, NimStringDesc* name);
N_NIMCALL(NU8, getparser_224276)(tident170019* ident);
N_NIMCALL(tident170019*, getcallee_224333)(tnode191813* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, rendertree_215051)(tnode191813* n, NU8 renderflags);
N_NIMCALL(tllstream179204*, applyfilter_224426)(tparsers224029* p, tnode191813* n, NimStringDesc* filename, tllstream179204* stdin_224432);
N_NIMCALL(tllstream179204*, filtertmpl_223007)(tllstream179204* stdin_223009, NimStringDesc* filename, tnode191813* call);
N_NIMCALL(tllstream179204*, filterstrip_222008)(tllstream179204* stdin_222010, NimStringDesc* filename, tnode191813* call);
N_NIMCALL(tllstream179204*, filterreplace_222002)(tllstream179204* stdin_222004, NimStringDesc* filename, tnode191813* call);
N_NIMCALL(void, rawmessage_168292)(NU16 msg, NimStringDesc** args, NI argsLen0);
N_NIMCALL(void, msgwriteln_167937)(NimStringDesc* s);
N_NIMCALL(tllstream179204*, evalpipe_224461)(tparsers224029* p, tnode191813* n, NimStringDesc* filename, tllstream179204* start);
N_NIMCALL(void, openparsers_224037)(tparsers224029* p, NI32 fileidx, tllstream179204* inputstream);
N_NIMCALL(void, openparser_209353)(tparser209203* p, NI32 fileidx, tllstream179204* inputstream, NIM_BOOL strongspaces);
N_NIMCALL(void, closeparsers_224044)(tparsers224029* p);
STRING_LITERAL(TMP2685, "standard", 8);
STRING_LITERAL(TMP2686, "strongspaces", 12);
STRING_LITERAL(TMP2687, "braces", 6);
STRING_LITERAL(TMP2688, "endx", 4);
NIM_CONST TY224016 parsernames_224015 = {((NimStringDesc*) &TMP2685),
((NimStringDesc*) &TMP2686),
((NimStringDesc*) &TMP2687),
((NimStringDesc*) &TMP2688)}
;
STRING_LITERAL(TMP2689, "none", 4);
STRING_LITERAL(TMP2690, "stdtmpl", 7);
STRING_LITERAL(TMP2691, "replace", 7);
STRING_LITERAL(TMP2692, "strip", 5);
NIM_CONST TY224022 filternames_224021 = {((NimStringDesc*) &TMP2689),
((NimStringDesc*) &TMP2690),
((NimStringDesc*) &TMP2691),
((NimStringDesc*) &TMP2692)}
;
STRING_LITERAL(TMP2697, "parser to implement", 19);
static NIM_CONST TY192025 TMP2701 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP2702, "sons", 4);
static NIM_CONST TY192025 TMP2703 = {
0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP2704, "ident", 5);
STRING_LITERAL(TMP2705, "|", 1);
TNimType NTI224029; /* TParsers */
TNimType NTI224005; /* TParserKind */
extern TNimType NTI209203; /* TParser */
extern TFrame* frameptr_13438;
extern tnode191813* emptynode_192744;
extern NI gverbosity_138120;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13438;
	frameptr_13438 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13438 = (*frameptr_13438).prev;
}

N_NIMCALL(tnode191813*, parsefile_224033)(NI32 fileidx) {
	tnode191813* result;
	tparsers224029 p;
	FILE* f;
	NimStringDesc* filename;
	tllstream179204* LOC6;
	nimfr("parseFile", "syntaxes.nim")
	result = 0;
	memset((void*)&p, 0, sizeof(p));
	objectInit(&p, (&NTI224029));
	f = 0;
	nimln(48, "syntaxes.nim");
	filename = tofullpath_167788(fileidx);
	nimln(49, "syntaxes.nim");
	{
		NIM_BOOL LOC3;
		nimln(49, "syntaxes.nim");
		nimln(49, "syntaxes.nim");
		LOC3 = 0;
		LOC3 = open_10603(&f, filename, ((NU8) 0), -1);
		if (!!(LOC3)) goto LA4;
		nimln(50, "syntaxes.nim");
		rawmessage_168386(((NU16) 3), filename);
		nimln(51, "syntaxes.nim");
		goto BeforeRet;
	}
	LA4: ;
	nimln(52, "syntaxes.nim");
	nimln(52, "syntaxes.nim");
	LOC6 = 0;
	LOC6 = llstreamopen_179222(&f);
	openparsers_224037(&p, fileidx, LOC6);
	nimln(53, "syntaxes.nim");
	result = parseall_224049(&p);
	nimln(54, "syntaxes.nim");
	closeparsers_224044(&p);
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(tnode191813*, parseall_224049)(tparsers224029* p) {
	tnode191813* result;
	nimfr("parseAll", "syntaxes.nim")
	result = 0;
	nimln(57, "syntaxes.nim");
	switch ((*p).Skin) {
	case ((NU8) 0):
	case ((NU8) 1):
	{
		nimln(59, "syntaxes.nim");
		result = parseall_209212(&(*p).Parser);
	}
	break;
	case ((NU8) 2):
	{
		nimln(61, "syntaxes.nim");
		result = parseall_214006(&(*p).Parser);
	}
	break;
	case ((NU8) 3):
	{
		nimln(63, "syntaxes.nim");
		internalerror_168606(((NimStringDesc*) &TMP2697));
		nimln(64, "syntaxes.nim");
		result = emptynode_192744;
	}
	break;
	}
	popFrame();
	return result;
}

N_NIMCALL(tnode191813*, parsetoplevelstmt_224054)(tparsers224029* p) {
	tnode191813* result;
	nimfr("parseTopLevelStmt", "syntaxes.nim")
	result = 0;
	nimln(67, "syntaxes.nim");
	switch ((*p).Skin) {
	case ((NU8) 0):
	case ((NU8) 1):
	{
		nimln(69, "syntaxes.nim");
		result = parsetoplevelstmt_209222(&(*p).Parser);
	}
	break;
	case ((NU8) 2):
	{
		nimln(71, "syntaxes.nim");
		result = parsetoplevelstmt_214013(&(*p).Parser);
	}
	break;
	case ((NU8) 3):
	{
		nimln(73, "syntaxes.nim");
		internalerror_168606(((NimStringDesc*) &TMP2697));
		nimln(74, "syntaxes.nim");
		result = emptynode_192744;
	}
	break;
	}
	popFrame();
	return result;
}

N_NIMCALL(NI, utf8bom_224094)(NimStringDesc* s) {
	NI result;
	nimfr("utf8Bom", "syntaxes.nim")
	result = 0;
	nimln(77, "syntaxes.nim");
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		nimln(77, "syntaxes.nim");
		LOC3 = 0;
		nimln(77, "syntaxes.nim");
		LOC4 = 0;
		nimln(77, "syntaxes.nim");
		if ((NU)(0) > (NU)(s->Sup.len)) raiseIndexError();
		LOC4 = ((NU8)(s->data[0]) == (NU8)(239));
		if (!(LOC4)) goto LA5;
		nimln(77, "syntaxes.nim");
		if ((NU)(1) > (NU)(s->Sup.len)) raiseIndexError();
		LOC4 = ((NU8)(s->data[1]) == (NU8)(187));
		LA5: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA6;
		nimln(77, "syntaxes.nim");
		if ((NU)(2) > (NU)(s->Sup.len)) raiseIndexError();
		LOC3 = ((NU8)(s->data[2]) == (NU8)(191));
		LA6: ;
		if (!LOC3) goto LA7;
		nimln(78, "syntaxes.nim");
		result = 3;
	}
	goto LA1;
	LA7: ;
	{
		nimln(80, "syntaxes.nim");
		result = 0;
	}
	LA1: ;
	popFrame();
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

N_NIMCALL(NIM_BOOL, containsshebang_224100)(NimStringDesc* s, NI i) {
	NIM_BOOL result;
	nimfr("containsShebang", "syntaxes.nim")
	result = 0;
	nimln(83, "syntaxes.nim");
	{
		NIM_BOOL LOC3;
		NI TMP2698;
		NI j;
		NI TMP2699;
		nimln(83, "syntaxes.nim");
		LOC3 = 0;
		nimln(83, "syntaxes.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		LOC3 = ((NU8)(s->data[i]) == (NU8)(35));
		if (!(LOC3)) goto LA4;
		nimln(83, "syntaxes.nim");
		nimln(83, "syntaxes.nim");
		TMP2698 = addInt(i, 1);
		if ((NU)((NI32)(TMP2698)) > (NU)(s->Sup.len)) raiseIndexError();
		LOC3 = ((NU8)(s->data[(NI32)(TMP2698)]) == (NU8)(33));
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(84, "syntaxes.nim");
		nimln(84, "syntaxes.nim");
		TMP2699 = addInt(i, 2);
		j = (NI32)(TMP2699);
		nimln(85, "syntaxes.nim");
		while (1) {
			nimln(85, "syntaxes.nim");
			if ((NU)(j) > (NU)(s->Sup.len)) raiseIndexError();
			if (!(((NU8)(s->data[j])) == ((NU8)(32)) || ((NU8)(s->data[j])) == ((NU8)(9)) || ((NU8)(s->data[j])) == ((NU8)(11)) || ((NU8)(s->data[j])) == ((NU8)(13)) || ((NU8)(s->data[j])) == ((NU8)(10)) || ((NU8)(s->data[j])) == ((NU8)(12)))) goto LA7;
			nimln(85, "syntaxes.nim");
			j = addInt(j, 1);
		} LA7: ;
		nimln(86, "syntaxes.nim");
		nimln(86, "syntaxes.nim");
		if ((NU)(j) > (NU)(s->Sup.len)) raiseIndexError();
		result = ((NU8)(s->data[j]) == (NU8)(47));
	}
	LA5: ;
	popFrame();
	return result;
}

N_NIMCALL(tnode191813*, parsepipe_224138)(NimStringDesc* filename, tllstream179204* inputstream) {
	tnode191813* result;
	tllstream179204* s;
	nimfr("parsePipe", "syntaxes.nim")
	result = 0;
	nimln(89, "syntaxes.nim");
	result = emptynode_192744;
	nimln(90, "syntaxes.nim");
	s = llstreamopen_179227(filename, ((NU8) 0));
	nimln(91, "syntaxes.nim");
	{
		NimStringDesc* line;
		NIM_BOOL LOC5;
		NI i;
		nimln(91, "syntaxes.nim");
		nimln(91, "syntaxes.nim");
		if (!!((s == NIM_NIL))) goto LA3;
		nimln(92, "syntaxes.nim");
		nimln(92, "syntaxes.nim");
		line = rawNewString(80);
		nimln(93, "syntaxes.nim");
		nimln(93, "syntaxes.nim");
		LOC5 = 0;
		LOC5 = llstreamreadline_179248(s, &line);
		nimln(94, "syntaxes.nim");
		i = utf8bom_224094(line);
		nimln(95, "syntaxes.nim");
		{
			NIM_BOOL LOC8;
			NIM_BOOL LOC11;
			nimln(95, "syntaxes.nim");
			LOC8 = 0;
			LOC8 = containsshebang_224100(line, i);
			if (!LOC8) goto LA9;
			nimln(96, "syntaxes.nim");
			nimln(96, "syntaxes.nim");
			LOC11 = 0;
			LOC11 = llstreamreadline_179248(s, &line);
			nimln(97, "syntaxes.nim");
			i = 0;
		}
		LA9: ;
		nimln(98, "syntaxes.nim");
		{
			NIM_BOOL LOC14;
			NI TMP2700;
			tparser209203 q;
			NimStringDesc* LOC19;
			tllstream179204* LOC20;
			nimln(98, "syntaxes.nim");
			LOC14 = 0;
			nimln(98, "syntaxes.nim");
			if ((NU)(i) > (NU)(line->Sup.len)) raiseIndexError();
			LOC14 = ((NU8)(line->data[i]) == (NU8)(35));
			if (!(LOC14)) goto LA15;
			nimln(98, "syntaxes.nim");
			nimln(98, "syntaxes.nim");
			TMP2700 = addInt(i, 1);
			if ((NU)((NI32)(TMP2700)) > (NU)(line->Sup.len)) raiseIndexError();
			LOC14 = ((NU8)(line->data[(NI32)(TMP2700)]) == (NU8)(33));
			LA15: ;
			if (!LOC14) goto LA16;
			nimln(99, "syntaxes.nim");
			i = addInt(i, 2);
			nimln(100, "syntaxes.nim");
			while (1) {
				nimln(100, "syntaxes.nim");
				if ((NU)(i) > (NU)(line->Sup.len)) raiseIndexError();
				if (!(((NU8)(line->data[i])) == ((NU8)(32)) || ((NU8)(line->data[i])) == ((NU8)(9)) || ((NU8)(line->data[i])) == ((NU8)(11)) || ((NU8)(line->data[i])) == ((NU8)(13)) || ((NU8)(line->data[i])) == ((NU8)(10)) || ((NU8)(line->data[i])) == ((NU8)(12)))) goto LA18;
				nimln(100, "syntaxes.nim");
				i = addInt(i, 1);
			} LA18: ;
			memset((void*)&q, 0, sizeof(q));
			objectInit(&q, (&NTI209203));
			nimln(102, "syntaxes.nim");
			nimln(102, "syntaxes.nim");
			nimln(102, "syntaxes.nim");
			LOC19 = 0;
			LOC19 = copyStr(line, i);
			LOC20 = 0;
			LOC20 = llstreamopen_179218(LOC19);
			openparser_209364(&q, filename, LOC20, NIM_FALSE);
			nimln(103, "syntaxes.nim");
			result = parseall_209212(&q);
			nimln(104, "syntaxes.nim");
			closeparser_209217(&q);
		}
		LA16: ;
		nimln(105, "syntaxes.nim");
		llstreamclose_179238(s);
	}
	LA3: ;
	popFrame();
	return result;
}

N_NIMCALL(NU8, getfilter_224219)(tident170019* ident) {
	NU8 result;
	NU8 i_224267;
	NU8 res_224271;
	nimfr("getFilter", "syntaxes.nim")
	result = 0;
	i_224267 = 0;
	nimln(1451, "system.nim");
	res_224271 = ((NU8) 0);
	nimln(1452, "system.nim");
	while (1) {
		nimln(1452, "system.nim");
		if (!(res_224271 <= ((NU8) 3))) goto LA1;
		nimln(1451, "system.nim");
		i_224267 = res_224271;
		nimln(109, "syntaxes.nim");
		{
			NIM_BOOL LOC4;
			nimln(109, "syntaxes.nim");
			LOC4 = 0;
			LOC4 = identeq_170469(ident, filternames_224021[(i_224267)- 0]);
			if (!LOC4) goto LA5;
			nimln(110, "syntaxes.nim");
			nimln(110, "syntaxes.nim");
			result = i_224267;
			goto BeforeRet;
		}
		LA5: ;
		nimln(1454, "system.nim");
		res_224271 = addInt(res_224271, 1);
	} LA1: ;
	nimln(111, "syntaxes.nim");
	result = ((NU8) 0);
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NU8, getparser_224276)(tident170019* ident) {
	NU8 result;
	NU8 i_224324;
	NU8 res_224328;
	nimfr("getParser", "syntaxes.nim")
	result = 0;
	i_224324 = 0;
	nimln(1451, "system.nim");
	res_224328 = ((NU8) 0);
	nimln(1452, "system.nim");
	while (1) {
		nimln(1452, "system.nim");
		if (!(res_224328 <= ((NU8) 3))) goto LA1;
		nimln(1451, "system.nim");
		i_224324 = res_224328;
		nimln(115, "syntaxes.nim");
		{
			NIM_BOOL LOC4;
			nimln(115, "syntaxes.nim");
			LOC4 = 0;
			LOC4 = identeq_170469(ident, parsernames_224015[(i_224324)- 0]);
			if (!LOC4) goto LA5;
			nimln(116, "syntaxes.nim");
			nimln(116, "syntaxes.nim");
			result = i_224324;
			goto BeforeRet;
		}
		LA5: ;
		nimln(1454, "system.nim");
		res_224328 = addInt(res_224328, 1);
	} LA1: ;
	nimln(117, "syntaxes.nim");
	rawmessage_168386(((NU16) 30), (*ident).S);
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(tident170019*, getcallee_224333)(tnode191813* n) {
	tident170019* result;
	nimfr("getCallee", "syntaxes.nim")
	result = 0;
	nimln(120, "syntaxes.nim");
	{
		NIM_BOOL LOC3;
		nimln(120, "syntaxes.nim");
		LOC3 = 0;
		nimln(120, "syntaxes.nim");
		LOC3 = ((*n).Kind == ((NU8) 27) || (*n).Kind == ((NU8) 29) || (*n).Kind == ((NU8) 30) || (*n).Kind == ((NU8) 31) || (*n).Kind == ((NU8) 26) || (*n).Kind == ((NU8) 28) || (*n).Kind == ((NU8) 32));
		if (!(LOC3)) goto LA4;
		nimln(120, "syntaxes.nim");
		if (((TMP2701[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2702));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		LOC3 = ((*(*n).kindU.S6.Sons->data[0]).Kind == ((NU8) 2));
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(121, "syntaxes.nim");
		if (((TMP2701[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2702));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		if (!(((TMP2703[(*(*n).kindU.S6.Sons->data[0]).Kind/8] &(1<<((*(*n).kindU.S6.Sons->data[0]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2704));
		result = (*(*n).kindU.S6.Sons->data[0]).kindU.S5.Ident;
	}
	goto LA1;
	LA5: ;
	{
		nimln(122, "syntaxes.nim");
		if (!((*n).Kind == ((NU8) 2))) goto LA8;
		nimln(123, "syntaxes.nim");
		if (!(((TMP2703[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2704));
		result = (*n).kindU.S5.Ident;
	}
	goto LA1;
	LA8: ;
	{
		NimStringDesc* LOC11;
		nimln(125, "syntaxes.nim");
		nimln(125, "syntaxes.nim");
		LOC11 = 0;
		LOC11 = rendertree_215051(n, 0);
		rawmessage_168386(((NU16) 163), LOC11);
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(tllstream179204*, applyfilter_224426)(tparsers224029* p, tnode191813* n, NimStringDesc* filename, tllstream179204* stdin_224432) {
	tllstream179204* result;
	tident170019* ident;
	NU8 f;
	nimfr("applyFilter", "syntaxes.nim")
	result = 0;
	nimln(129, "syntaxes.nim");
	ident = getcallee_224333(n);
	nimln(130, "syntaxes.nim");
	f = getfilter_224219(ident);
	nimln(131, "syntaxes.nim");
	switch (f) {
	case ((NU8) 0):
	{
		nimln(133, "syntaxes.nim");
		(*p).Skin = getparser_224276(ident);
		nimln(134, "syntaxes.nim");
		result = stdin_224432;
	}
	break;
	case ((NU8) 1):
	{
		nimln(136, "syntaxes.nim");
		result = filtertmpl_223007(stdin_224432, filename, n);
	}
	break;
	case ((NU8) 3):
	{
		nimln(138, "syntaxes.nim");
		result = filterstrip_222008(stdin_224432, filename, n);
	}
	break;
	case ((NU8) 2):
	{
		nimln(140, "syntaxes.nim");
		result = filterreplace_222002(stdin_224432, filename, n);
	}
	break;
	}
	nimln(141, "syntaxes.nim");
	{
		nimln(141, "syntaxes.nim");
		nimln(141, "syntaxes.nim");
		if (!!((f == ((NU8) 0)))) goto LA7;
		nimln(142, "syntaxes.nim");
		{
			TY127662 LOC13;
			TY127662 LOC14;
			nimln(142, "syntaxes.nim");
			if (!(2 <= gverbosity_138120)) goto LA11;
			nimln(143, "syntaxes.nim");
			memset((void*)LOC13, 0, sizeof(LOC13));
			rawmessage_168292(((NU16) 266), LOC13, 0);
			nimln(144, "syntaxes.nim");
			msgwriteln_167937((*result).S);
			nimln(145, "syntaxes.nim");
			memset((void*)LOC14, 0, sizeof(LOC14));
			rawmessage_168292(((NU16) 267), LOC14, 0);
		}
		LA11: ;
	}
	LA7: ;
	popFrame();
	return result;
}

N_NIMCALL(tllstream179204*, evalpipe_224461)(tparsers224029* p, tnode191813* n, NimStringDesc* filename, tllstream179204* start) {
	tllstream179204* result;
	nimfr("evalPipe", "syntaxes.nim")
	result = 0;
	nimln(149, "syntaxes.nim");
	result = start;
	nimln(150, "syntaxes.nim");
	{
		nimln(150, "syntaxes.nim");
		if (!((*n).Kind == ((NU8) 1))) goto LA3;
		nimln(150, "syntaxes.nim");
		goto BeforeRet;
	}
	LA3: ;
	nimln(151, "syntaxes.nim");
	{
		NIM_BOOL LOC7;
		NIM_BOOL LOC8;
		NI i_224550;
		NI res_224626;
		nimln(151, "syntaxes.nim");
		LOC7 = 0;
		nimln(151, "syntaxes.nim");
		LOC8 = 0;
		nimln(151, "syntaxes.nim");
		LOC8 = ((*n).Kind == ((NU8) 29));
		if (!(LOC8)) goto LA9;
		nimln(151, "syntaxes.nim");
		if (((TMP2701[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2702));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		LOC8 = ((*(*n).kindU.S6.Sons->data[0]).Kind == ((NU8) 2));
		LA9: ;
		LOC7 = LOC8;
		if (!(LOC7)) goto LA10;
		nimln(152, "syntaxes.nim");
		if (((TMP2701[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2702));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		if (!(((TMP2703[(*(*n).kindU.S6.Sons->data[0]).Kind/8] &(1<<((*(*n).kindU.S6.Sons->data[0]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2704));
		LOC7 = identeq_170469((*(*n).kindU.S6.Sons->data[0]).kindU.S5.Ident, ((NimStringDesc*) &TMP2705));
		LA10: ;
		if (!LOC7) goto LA11;
		i_224550 = 0;
		nimln(1451, "system.nim");
		res_224626 = 1;
		nimln(1452, "system.nim");
		while (1) {
			nimln(1452, "system.nim");
			if (!(res_224626 <= 2)) goto LA13;
			nimln(1451, "system.nim");
			i_224550 = res_224626;
			nimln(154, "syntaxes.nim");
			{
				nimln(154, "syntaxes.nim");
				if (((TMP2701[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2702));
				if ((NU)(i_224550) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				if (!((*(*n).kindU.S6.Sons->data[i_224550]).Kind == ((NU8) 29))) goto LA16;
				nimln(155, "syntaxes.nim");
				if (((TMP2701[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2702));
				if ((NU)(i_224550) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				result = evalpipe_224461(p, (*n).kindU.S6.Sons->data[i_224550], filename, result);
			}
			goto LA14;
			LA16: ;
			{
				nimln(157, "syntaxes.nim");
				if (((TMP2701[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2702));
				if ((NU)(i_224550) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				result = applyfilter_224426(p, (*n).kindU.S6.Sons->data[i_224550], filename, result);
			}
			LA14: ;
			nimln(1454, "system.nim");
			res_224626 = addInt(res_224626, 1);
		} LA13: ;
	}
	goto LA5;
	LA11: ;
	{
		nimln(158, "syntaxes.nim");
		if (!((*n).Kind == ((NU8) 114))) goto LA20;
		nimln(159, "syntaxes.nim");
		if (((TMP2701[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2702));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		result = evalpipe_224461(p, (*n).kindU.S6.Sons->data[0], filename, result);
	}
	goto LA5;
	LA20: ;
	{
		nimln(161, "syntaxes.nim");
		result = applyfilter_224426(p, n, filename, result);
	}
	LA5: ;
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(void, openparsers_224037)(tparsers224029* p, NI32 fileidx, tllstream179204* inputstream) {
	tllstream179204* s;
	NimStringDesc* filename;
	tnode191813* pipe;
	nimfr("openParsers", "syntaxes.nim")
	s = 0;
	nimln(165, "syntaxes.nim");
	(*p).Skin = ((NU8) 0);
	nimln(166, "syntaxes.nim");
	filename = tofullpath_167788(fileidx);
	nimln(167, "syntaxes.nim");
	pipe = parsepipe_224138(filename, inputstream);
	nimln(168, "syntaxes.nim");
	{
		nimln(168, "syntaxes.nim");
		nimln(168, "syntaxes.nim");
		if (!!((pipe == NIM_NIL))) goto LA3;
		nimln(168, "syntaxes.nim");
		s = evalpipe_224461(p, pipe, filename, inputstream);
	}
	goto LA1;
	LA3: ;
	{
		nimln(169, "syntaxes.nim");
		s = inputstream;
	}
	LA1: ;
	nimln(170, "syntaxes.nim");
	switch ((*p).Skin) {
	case ((NU8) 0):
	case ((NU8) 2):
	case ((NU8) 3):
	{
		nimln(172, "syntaxes.nim");
		openparser_209353(&(*p).Parser, fileidx, s, NIM_FALSE);
	}
	break;
	case ((NU8) 1):
	{
		nimln(174, "syntaxes.nim");
		openparser_209353(&(*p).Parser, fileidx, s, NIM_TRUE);
	}
	break;
	}
	popFrame();
}

N_NIMCALL(void, closeparsers_224044)(tparsers224029* p) {
	nimfr("closeParsers", "syntaxes.nim")
	nimln(177, "syntaxes.nim");
	closeparser_209217(&(*p).Parser);
	popFrame();
}
N_NOINLINE(void, syntaxesInit)(void) {
	nimfr("syntaxes", "syntaxes.nim")
	popFrame();
}

N_NOINLINE(void, syntaxesDatInit)(void) {
static TNimNode* TMP2693[2];
static TNimNode* TMP2694[4];
NI TMP2696;
static char* NIM_CONST TMP2695[4] = {
"skinStandard", 
"skinStrongSpaces", 
"skinBraces", 
"skinEndX"};
static TNimNode TMP2278[8];
NTI224029.size = sizeof(tparsers224029);
NTI224029.kind = 18;
NTI224029.base = 0;
TMP2693[0] = &TMP2278[1];
NTI224005.size = sizeof(NU8);
NTI224005.kind = 14;
NTI224005.base = 0;
NTI224005.flags = 3;
for (TMP2696 = 0; TMP2696 < 4; TMP2696++) {
TMP2278[TMP2696+2].kind = 1;
TMP2278[TMP2696+2].offset = TMP2696;
TMP2278[TMP2696+2].name = TMP2695[TMP2696];
TMP2694[TMP2696] = &TMP2278[TMP2696+2];
}
TMP2278[6].len = 4; TMP2278[6].kind = 2; TMP2278[6].sons = &TMP2694[0];
NTI224005.node = &TMP2278[6];
TMP2278[1].kind = 1;
TMP2278[1].offset = offsetof(tparsers224029, Skin);
TMP2278[1].typ = (&NTI224005);
TMP2278[1].name = "skin";
TMP2693[1] = &TMP2278[7];
TMP2278[7].kind = 1;
TMP2278[7].offset = offsetof(tparsers224029, Parser);
TMP2278[7].typ = (&NTI209203);
TMP2278[7].name = "parser";
TMP2278[0].len = 2; TMP2278[0].kind = 2; TMP2278[0].sons = &TMP2693[0];
NTI224029.node = &TMP2278[0];
}

