/* Generated by Nimrod Compiler v0.9.5 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tnode190813 tnode190813;
typedef struct ttype190847 ttype190847;
typedef struct tintset187047 tintset187047;
typedef struct tlineinfo165527 tlineinfo165527;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsym190843 tsym190843;
typedef struct tident169019 tident169019;
typedef struct tnodeseq190807 tnodeseq190807;
typedef struct tidobj169013 tidobj169013;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq190845 ttypeseq190845;
typedef struct tscope190837 tscope190837;
typedef struct TY190943 TY190943;
typedef struct tinstantiation190833 tinstantiation190833;
typedef struct tstrtable190817 tstrtable190817;
typedef struct tsymseq190815 tsymseq190815;
typedef struct tloc190827 tloc190827;
typedef struct trope147007 trope147007;
typedef struct tlib190831 tlib190831;
typedef struct ttrunk187043 ttrunk187043;
typedef struct ttrunkseq187045 ttrunkseq187045;
typedef struct TY190932 TY190932;
typedef struct tlistentry118017 tlistentry118017;
struct  tlineinfo165527  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tnode190813  {
ttype190847* Typ;
tlineinfo165527 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym190843* Sym;
} S4;
struct {tident169019* Ident;
} S5;
struct {tnodeseq190807* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
typedef NU8 TY191025[20];
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
struct  tstrtable190817  {
NI Counter;
tsymseq190815* Data;
};
struct  tloc190827  {
NU8 K;
NU8 S;
NU8 Flags;
ttype190847* T;
trope147007* R;
trope147007* Heaproot;
NI A;
};
struct  tsym190843  {
  tidobj169013 Sup;
NU8 Kind;
union {
struct {ttypeseq190845* Typeinstcache;
tscope190837* Typscope;
} S1;
struct {TY190943* Procinstcache;
tscope190837* Scope;
} S2;
struct {TY190943* Usedgenerics;
tstrtable190817 Tab;
} S3;
} kindU;
NU16 Magic;
ttype190847* Typ;
tident169019* Name;
tlineinfo165527 Info;
tsym190843* Owner;
NU32 Flags;
tnode190813* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc190827 Loc;
tlib190831* Annex;
tnode190813* Constraint;
};
struct  ttype190847  {
  tidobj169013 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq190845* Sons;
tnode190813* N;
tsym190843* Destructor;
tsym190843* Owner;
tsym190843* Sym;
NI64 Size;
NI Align;
tloc190827 Loc;
};
struct  tintset187047  {
NI Counter;
NI Max;
ttrunk187043* Head;
ttrunkseq187045* Data;
};
struct  tident169019  {
  tidobj169013 Sup;
NimStringDesc* S;
tident169019* Next;
NI H;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tscope190837  {
NI Depthlevel;
tstrtable190817 Symbols;
tnodeseq190807* Usingsyms;
tscope190837* Parent;
};
struct  tinstantiation190833  {
tsym190843* Sym;
ttypeseq190845* Concretetypes;
TY190932* Usedby;
};
struct  trope147007  {
  TNimObject Sup;
trope147007* Left;
trope147007* Right;
NI Length;
NimStringDesc* Data;
};
struct  tlistentry118017  {
  TNimObject Sup;
tlistentry118017* Prev;
tlistentry118017* Next;
};
struct  tlib190831  {
  tlistentry118017 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope147007* Name;
tnode190813* Path;
};
typedef NI TY23418[16];
struct  ttrunk187043  {
ttrunk187043* Next;
NI Key;
TY23418 Bits;
};
struct tnodeseq190807 {
  TGenericSeq Sup;
  tnode190813* data[SEQ_DECL_SIZE];
};
struct ttypeseq190845 {
  TGenericSeq Sup;
  ttype190847* data[SEQ_DECL_SIZE];
};
struct TY190943 {
  TGenericSeq Sup;
  tinstantiation190833* data[SEQ_DECL_SIZE];
};
struct tsymseq190815 {
  TGenericSeq Sup;
  tsym190843* data[SEQ_DECL_SIZE];
};
struct ttrunkseq187045 {
  TGenericSeq Sup;
  ttrunk187043* data[SEQ_DECL_SIZE];
};
struct TY190932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NU8, ispartofaux_415020)(tnode190813* n, ttype190847* b, tintset187047* marker);
static N_INLINE(NI, sonslen_191191)(tnode190813* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, failedassertimpl_80421)(NimStringDesc* msg);
static N_INLINE(tnode190813*, lastson_191199)(tnode190813* n);
N_NIMCALL(void, internalerror_167606)(NimStringDesc* errmsg);
N_NIMCALL(void, internalerror_167591)(tlineinfo165527 info, NimStringDesc* errmsg);
N_NIMCALL(NU8, ispartofaux_415013)(ttype190847* a, ttype190847* b, tintset187047* marker);
N_NIMCALL(NIM_BOOL, containsorincl_187905)(tintset187047* s, NI key);
N_NIMCALL(NIM_BOOL, comparetypes_233564)(ttype190847* x, ttype190847* y, NU8 cmp, NU8 flags);
static N_INLINE(ttype190847*, lastson_191203)(ttype190847* n);
static N_INLINE(NI, sonslen_191195)(ttype190847* n);
N_NIMCALL(NU8, ispartof_415402)(ttype190847* a, ttype190847* b);
N_NIMCALL(void, initintset_187935)(tintset187047* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(NU8, ispartof_415411)(tnode190813* a, tnode190813* b);
static N_INLINE(tnode190813*, HEX5BHEX5D_191711)(tnode190813* n, NI i);
static N_INLINE(NI, len_191274)(tnode190813* n);
N_NIMCALL(NIM_BOOL, isdeepconstexpr_224876)(tnode190813* n);
N_NIMCALL(NIM_BOOL, samevalue_199271)(tnode190813* a, tnode190813* b);
static NIM_CONST TY191025 TMP5617 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP5618, "sons", 4);
STRING_LITERAL(TMP5620, "n.sons[0].kind == nkSym ", 24);
STRING_LITERAL(TMP5623, "isPartOfAux(record case branch)", 31);
static NIM_CONST TY191025 TMP5624 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP5625, "sym", 3);
STRING_LITERAL(TMP5626, "isPartOfAux()", 13);
NIM_CONST NU32 varkinds_415425 = 4384;
NIM_CONST TY191025 ix0kinds_415648 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00,
0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
NIM_CONST TY191025 ix1kinds_415650 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
NIM_CONST TY191025 derefkinds_415652 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00,
0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
extern TFrame* frameptr_13238;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13238;
	frameptr_13238 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13238 = (*frameptr_13238).prev;
}

static N_INLINE(NI, sonslen_191191)(tnode190813* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1300, "ast.nim");
	{
		nimln(1300, "ast.nim");
		if (((TMP5617[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5618));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1300, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(1301, "ast.nim");
		nimln(1301, "ast.nim");
		if (((TMP5617[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5618));
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	popFrame();
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

static N_INLINE(tnode190813*, lastson_191199)(tnode190813* n) {
	tnode190813* result;
	NI LOC1;
	NI TMP5622;
	nimfr("lastSon", "ast.nim")
	result = 0;
	nimln(1420, "ast.nim");
	if (((TMP5617[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5618));
	nimln(1420, "ast.nim");
	nimln(1420, "ast.nim");
	LOC1 = 0;
	LOC1 = sonslen_191191(n);
	TMP5622 = subInt(LOC1, 1);
	if ((NU)((NI32)(TMP5622)) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
	result = (*n).kindU.S6.Sons->data[(NI32)(TMP5622)];
	popFrame();
	return result;
}

N_NIMCALL(NU8, ispartofaux_415020)(tnode190813* n, ttype190847* b, tintset187047* marker) {
	NU8 result;
	nimfr("isPartOfAux", "aliases.nim")
	result = 0;
	nimln(22, "aliases.nim");
	result = ((NU8) 0);
	nimln(23, "aliases.nim");
	switch ((*n).Kind) {
	case ((NU8) 136):
	{
		NI i_415039;
		NI HEX3Atmp_415311;
		NI LOC2;
		NI TMP5619;
		NI res_415313;
		i_415039 = 0;
		HEX3Atmp_415311 = 0;
		nimln(25, "aliases.nim");
		nimln(25, "aliases.nim");
		nimln(25, "aliases.nim");
		LOC2 = 0;
		LOC2 = sonslen_191191(n);
		TMP5619 = subInt(LOC2, 1);
		HEX3Atmp_415311 = (NI32)(TMP5619);
		nimln(1451, "system.nim");
		res_415313 = 0;
		nimln(1452, "system.nim");
		while (1) {
			nimln(1452, "system.nim");
			if (!(res_415313 <= HEX3Atmp_415311)) goto LA3;
			nimln(1451, "system.nim");
			i_415039 = res_415313;
			nimln(26, "aliases.nim");
			if (((TMP5617[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5618));
			if ((NU)(i_415039) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			result = ispartofaux_415020((*n).kindU.S6.Sons->data[i_415039], b, marker);
			nimln(27, "aliases.nim");
			{
				nimln(27, "aliases.nim");
				if (!(result == ((NU8) 2))) goto LA6;
				nimln(27, "aliases.nim");
				goto BeforeRet;
			}
			LA6: ;
			nimln(1454, "system.nim");
			res_415313 = addInt(res_415313, 1);
		} LA3: ;
	}
	break;
	case ((NU8) 137):
	{
		NI i_415259;
		NI HEX3Atmp_415315;
		NI LOC17;
		NI TMP5621;
		NI res_415317;
		nimln(29, "aliases.nim");
		{
			nimln(29, "aliases.nim");
			nimln(29, "aliases.nim");
			if (((TMP5617[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5618));
			if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			if (!!(((*(*n).kindU.S6.Sons->data[0]).Kind == ((NU8) 3)))) goto LA11;
			nimln(29, "aliases.nim");
			failedassertimpl_80421(((NimStringDesc*) &TMP5620));
		}
		LA11: ;
		nimln(30, "aliases.nim");
		if (((TMP5617[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5618));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		result = ispartofaux_415020((*n).kindU.S6.Sons->data[0], b, marker);
		nimln(31, "aliases.nim");
		{
			nimln(31, "aliases.nim");
			if (!(result == ((NU8) 2))) goto LA15;
			nimln(31, "aliases.nim");
			goto BeforeRet;
		}
		LA15: ;
		i_415259 = 0;
		HEX3Atmp_415315 = 0;
		nimln(32, "aliases.nim");
		nimln(32, "aliases.nim");
		nimln(32, "aliases.nim");
		LOC17 = 0;
		LOC17 = sonslen_191191(n);
		TMP5621 = subInt(LOC17, 1);
		HEX3Atmp_415315 = (NI32)(TMP5621);
		nimln(1451, "system.nim");
		res_415317 = 1;
		nimln(1452, "system.nim");
		while (1) {
			nimln(1452, "system.nim");
			if (!(res_415317 <= HEX3Atmp_415315)) goto LA18;
			nimln(1451, "system.nim");
			i_415259 = res_415317;
			nimln(33, "aliases.nim");
			if (((TMP5617[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5618));
			if ((NU)(i_415259) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			switch ((*(*n).kindU.S6.Sons->data[i_415259]).Kind) {
			case ((NU8) 85):
			case ((NU8) 88):
			{
				tnode190813* LOC20;
				nimln(35, "aliases.nim");
				nimln(35, "aliases.nim");
				if (((TMP5617[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5618));
				if ((NU)(i_415259) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				LOC20 = 0;
				LOC20 = lastson_191199((*n).kindU.S6.Sons->data[i_415259]);
				result = ispartofaux_415020(LOC20, b, marker);
				nimln(36, "aliases.nim");
				{
					nimln(36, "aliases.nim");
					if (!(result == ((NU8) 2))) goto LA23;
					nimln(36, "aliases.nim");
					goto BeforeRet;
				}
				LA23: ;
			}
			break;
			default:
			{
				nimln(37, "aliases.nim");
				internalerror_167606(((NimStringDesc*) &TMP5623));
			}
			break;
			}
			nimln(1454, "system.nim");
			res_415317 = addInt(res_415317, 1);
		} LA18: ;
	}
	break;
	case ((NU8) 3):
	{
		nimln(39, "aliases.nim");
		if (!(((TMP5624[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP5625));
		result = ispartofaux_415013((*(*n).kindU.S4.Sym).Typ, b, marker);
	}
	break;
	default:
	{
		nimln(40, "aliases.nim");
		internalerror_167591((*n).Info, ((NimStringDesc*) &TMP5626));
	}
	break;
	}
	BeforeRet: ;
	popFrame();
	return result;
}

static N_INLINE(NI, sonslen_191195)(ttype190847* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1286, "ast.nim");
	{
		nimln(1286, "ast.nim");
		if (!(*n).Sons == 0) goto LA3;
		nimln(1286, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(1287, "ast.nim");
		nimln(1287, "ast.nim");
		result = (*n).Sons->Sup.len;
	}
	LA1: ;
	popFrame();
	return result;
}

static N_INLINE(ttype190847*, lastson_191203)(ttype190847* n) {
	ttype190847* result;
	NI LOC1;
	NI TMP5627;
	nimfr("lastSon", "ast.nim")
	result = 0;
	nimln(1423, "ast.nim");
	nimln(1423, "ast.nim");
	nimln(1423, "ast.nim");
	LOC1 = 0;
	LOC1 = sonslen_191195(n);
	TMP5627 = subInt(LOC1, 1);
	if ((NU)((NI32)(TMP5627)) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
	result = (*n).Sons->data[(NI32)(TMP5627)];
	popFrame();
	return result;
}

N_NIMCALL(NU8, ispartofaux_415013)(ttype190847* a, ttype190847* b, tintset187047* marker) {
	NU8 result;
	nimfr("isPartOfAux", "aliases.nim")
	result = 0;
	nimln(43, "aliases.nim");
	result = ((NU8) 0);
	nimln(44, "aliases.nim");
	{
		NIM_BOOL LOC3;
		nimln(44, "aliases.nim");
		LOC3 = 0;
		nimln(44, "aliases.nim");
		LOC3 = (a == NIM_NIL);
		if (LOC3) goto LA4;
		nimln(44, "aliases.nim");
		LOC3 = (b == NIM_NIL);
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(44, "aliases.nim");
		goto BeforeRet;
	}
	LA5: ;
	nimln(45, "aliases.nim");
	{
		NIM_BOOL LOC9;
		nimln(45, "aliases.nim");
		LOC9 = 0;
		LOC9 = containsorincl_187905(marker, (*a).Sup.Id);
		if (!LOC9) goto LA10;
		nimln(45, "aliases.nim");
		goto BeforeRet;
	}
	LA10: ;
	nimln(46, "aliases.nim");
	{
		NIM_BOOL LOC14;
		nimln(46, "aliases.nim");
		LOC14 = 0;
		LOC14 = comparetypes_233564(a, b, ((NU8) 1), 0);
		if (!LOC14) goto LA15;
		nimln(46, "aliases.nim");
		nimln(46, "aliases.nim");
		result = ((NU8) 2);
		goto BeforeRet;
	}
	LA15: ;
	nimln(47, "aliases.nim");
	switch ((*a).Kind) {
	case ((NU8) 17):
	{
		nimln(49, "aliases.nim");
		if ((NU)(0) >= (NU)((*a).Sons->Sup.len)) raiseIndexError();
		result = ispartofaux_415013((*a).Sons->data[0], b, marker);
		nimln(50, "aliases.nim");
		{
			nimln(50, "aliases.nim");
			if (!(result == ((NU8) 0))) goto LA20;
			nimln(50, "aliases.nim");
			result = ispartofaux_415020((*a).N, b, marker);
		}
		LA20: ;
	}
	break;
	case ((NU8) 11):
	case ((NU8) 13):
	{
		ttype190847* LOC23;
		nimln(52, "aliases.nim");
		nimln(52, "aliases.nim");
		LOC23 = 0;
		LOC23 = lastson_191203(a);
		result = ispartofaux_415013(LOC23, b, marker);
	}
	break;
	case ((NU8) 16):
	case ((NU8) 4):
	case ((NU8) 19):
	case ((NU8) 18):
	{
		NI i_415385;
		NI HEX3Atmp_415395;
		NI LOC25;
		NI TMP5628;
		NI res_415397;
		i_415385 = 0;
		HEX3Atmp_415395 = 0;
		nimln(54, "aliases.nim");
		nimln(54, "aliases.nim");
		nimln(54, "aliases.nim");
		LOC25 = 0;
		LOC25 = sonslen_191195(a);
		TMP5628 = subInt(LOC25, 1);
		HEX3Atmp_415395 = (NI32)(TMP5628);
		nimln(1451, "system.nim");
		res_415397 = 0;
		nimln(1452, "system.nim");
		while (1) {
			nimln(1452, "system.nim");
			if (!(res_415397 <= HEX3Atmp_415395)) goto LA26;
			nimln(1451, "system.nim");
			i_415385 = res_415397;
			nimln(55, "aliases.nim");
			if ((NU)(i_415385) >= (NU)((*a).Sons->Sup.len)) raiseIndexError();
			result = ispartofaux_415013((*a).Sons->data[i_415385], b, marker);
			nimln(56, "aliases.nim");
			{
				nimln(56, "aliases.nim");
				if (!(result == ((NU8) 2))) goto LA29;
				nimln(56, "aliases.nim");
				goto BeforeRet;
			}
			LA29: ;
			nimln(1454, "system.nim");
			res_415397 = addInt(res_415397, 1);
		} LA26: ;
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

N_NIMCALL(NU8, ispartof_415402)(ttype190847* a, ttype190847* b) {
	NU8 result;
	tintset187047 marker;
	nimfr("isPartOf", "aliases.nim")
	result = 0;
	nimln(61, "aliases.nim");
	chckNil((void*)&marker);
	memset((void*)&marker, 0, sizeof(marker));
	initintset_187935(&marker);
	nimln(63, "aliases.nim");
	result = ispartofaux_415013(b, a, &marker);
	popFrame();
	return result;
}

static N_INLINE(tnode190813*, HEX5BHEX5D_191711)(tnode190813* n, NI i) {
	tnode190813* result;
	nimfr("[]", "ast.nim")
	result = 0;
	nimln(971, "ast.nim");
	if (((TMP5617[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5618));
	if ((NU)(i) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
	result = (*n).kindU.S6.Sons->data[i];
	popFrame();
	return result;
}

static N_INLINE(NI, len_191274)(tnode190813* n) {
	NI result;
	nimfr("len", "ast.nim")
	result = 0;
	nimln(957, "ast.nim");
	{
		nimln(957, "ast.nim");
		if (((TMP5617[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5618));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(957, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(958, "ast.nim");
		nimln(958, "ast.nim");
		if (((TMP5617[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5618));
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(NU8, ispartof_415411)(tnode190813* a, tnode190813* b) {
	NU8 result;
	nimfr("isPartOf", "aliases.nim")
	result = 0;
	nimln(94, "aliases.nim");
	{
		nimln(94, "aliases.nim");
		if (!((*a).Kind == (*b).Kind)) goto LA3;
		nimln(95, "aliases.nim");
		switch ((*a).Kind) {
		case ((NU8) 3):
		{
			nimln(99, "aliases.nim");
			{
				nimln(99, "aliases.nim");
				if (!(((TMP5624[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP5625));
				if (!(((TMP5624[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP5625));
				if (!((*(*a).kindU.S4.Sym).Sup.Id == (*(*b).kindU.S4.Sym).Sup.Id)) goto LA8;
				nimln(99, "aliases.nim");
				result = ((NU8) 2);
			}
			goto LA6;
			LA8: ;
			{
				NIM_BOOL LOC11;
				nimln(100, "aliases.nim");
				LOC11 = 0;
				nimln(100, "aliases.nim");
				if (!(((TMP5624[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP5625));
				LOC11 = ((4384 &(1<<(((*(*a).kindU.S4.Sym).Kind)&31)))!=0);
				if (LOC11) goto LA12;
				nimln(100, "aliases.nim");
				if (!(((TMP5624[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP5625));
				LOC11 = ((4384 &(1<<(((*(*b).kindU.S4.Sym).Kind)&31)))!=0);
				LA12: ;
				if (!LOC11) goto LA13;
				nimln(103, "aliases.nim");
				result = ((NU8) 0);
			}
			goto LA6;
			LA13: ;
			{
				nimln(106, "aliases.nim");
				{
					NU8 LOC18;
					nimln(106, "aliases.nim");
					nimln(106, "aliases.nim");
					nimln(106, "aliases.nim");
					if (!(((TMP5624[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP5625));
					if (!(((TMP5624[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP5625));
					LOC18 = 0;
					LOC18 = ispartof_415402((*(*a).kindU.S4.Sym).Typ, (*(*b).kindU.S4.Sym).Typ);
					if (!!((LOC18 == ((NU8) 0)))) goto LA19;
					nimln(107, "aliases.nim");
					result = ((NU8) 1);
				}
				LA19: ;
			}
			LA6: ;
		}
		break;
		case ((NU8) 42):
		{
			tnode190813* LOC22;
			tnode190813* LOC23;
			nimln(109, "aliases.nim");
			nimln(109, "aliases.nim");
			LOC22 = 0;
			LOC22 = HEX5BHEX5D_191711(a, 0);
			nimln(109, "aliases.nim");
			LOC23 = 0;
			LOC23 = HEX5BHEX5D_191711(b, 0);
			result = ispartof_415411(LOC22, LOC23);
			nimln(110, "aliases.nim");
			{
				NIM_BOOL LOC26;
				NI LOC27;
				NI LOC29;
				nimln(110, "aliases.nim");
				LOC26 = 0;
				nimln(110, "aliases.nim");
				nimln(110, "aliases.nim");
				LOC27 = 0;
				LOC27 = len_191274(a);
				LOC26 = (2 <= LOC27);
				if (!(LOC26)) goto LA28;
				nimln(110, "aliases.nim");
				nimln(110, "aliases.nim");
				LOC29 = 0;
				LOC29 = len_191274(b);
				LOC26 = (2 <= LOC29);
				LA28: ;
				if (!LOC26) goto LA30;
				nimln(112, "aliases.nim");
				{
					NIM_BOOL LOC34;
					NIM_BOOL LOC35;
					tnode190813* LOC37;
					tnode190813* LOC39;
					tnode190813* x;
					tnode190813* y;
					nimln(112, "aliases.nim");
					LOC34 = 0;
					nimln(112, "aliases.nim");
					LOC35 = 0;
					nimln(112, "aliases.nim");
					LOC35 = (result == ((NU8) 2));
					if (!(LOC35)) goto LA36;
					nimln(112, "aliases.nim");
					nimln(112, "aliases.nim");
					LOC37 = 0;
					LOC37 = HEX5BHEX5D_191711(a, 1);
					LOC35 = isdeepconstexpr_224876(LOC37);
					LA36: ;
					LOC34 = LOC35;
					if (!(LOC34)) goto LA38;
					nimln(112, "aliases.nim");
					nimln(112, "aliases.nim");
					LOC39 = 0;
					LOC39 = HEX5BHEX5D_191711(b, 1);
					LOC34 = isdeepconstexpr_224876(LOC39);
					LA38: ;
					if (!LOC34) goto LA40;
					nimln(115, "aliases.nim");
					nimln(115, "aliases.nim");
					{
						tnode190813* LOC44;
						tnode190813* LOC47;
						nimln(115, "aliases.nim");
						nimln(115, "aliases.nim");
						LOC44 = 0;
						LOC44 = HEX5BHEX5D_191711(a, 1);
						if (!((*LOC44).Kind == ((NU8) 58))) goto LA45;
						nimln(115, "aliases.nim");
						nimln(115, "aliases.nim");
						LOC47 = 0;
						LOC47 = HEX5BHEX5D_191711(a, 1);
						x = HEX5BHEX5D_191711(LOC47, 1);
					}
					goto LA42;
					LA45: ;
					{
						nimln(115, "aliases.nim");
						x = HEX5BHEX5D_191711(a, 1);
					}
					LA42: ;
					nimln(116, "aliases.nim");
					nimln(116, "aliases.nim");
					{
						tnode190813* LOC51;
						tnode190813* LOC54;
						nimln(116, "aliases.nim");
						nimln(116, "aliases.nim");
						LOC51 = 0;
						LOC51 = HEX5BHEX5D_191711(b, 1);
						if (!((*LOC51).Kind == ((NU8) 58))) goto LA52;
						nimln(116, "aliases.nim");
						nimln(116, "aliases.nim");
						LOC54 = 0;
						LOC54 = HEX5BHEX5D_191711(b, 1);
						y = HEX5BHEX5D_191711(LOC54, 1);
					}
					goto LA49;
					LA52: ;
					{
						nimln(116, "aliases.nim");
						y = HEX5BHEX5D_191711(b, 1);
					}
					LA49: ;
					nimln(118, "aliases.nim");
					{
						NIM_BOOL LOC58;
						nimln(118, "aliases.nim");
						LOC58 = 0;
						LOC58 = samevalue_199271(x, y);
						if (!LOC58) goto LA59;
						nimln(118, "aliases.nim");
						result = ((NU8) 2);
					}
					goto LA56;
					LA59: ;
					{
						nimln(119, "aliases.nim");
						result = ((NU8) 0);
					}
					LA56: ;
				}
				LA40: ;
			}
			goto LA24;
			LA30: ;
			{
				nimln(123, "aliases.nim");
				{
					nimln(123, "aliases.nim");
					nimln(123, "aliases.nim");
					if (!!((result == ((NU8) 2)))) goto LA65;
					nimln(124, "aliases.nim");
					{
						NU8 LOC69;
						nimln(124, "aliases.nim");
						nimln(124, "aliases.nim");
						nimln(124, "aliases.nim");
						LOC69 = 0;
						LOC69 = ispartof_415402((*a).Typ, (*b).Typ);
						if (!!((LOC69 == ((NU8) 0)))) goto LA70;
						nimln(124, "aliases.nim");
						result = ((NU8) 1);
					}
					LA70: ;
				}
				LA65: ;
			}
			LA24: ;
		}
		break;
		case ((NU8) 45):
		{
			tnode190813* LOC73;
			tnode190813* LOC74;
			nimln(127, "aliases.nim");
			nimln(127, "aliases.nim");
			LOC73 = 0;
			LOC73 = HEX5BHEX5D_191711(a, 0);
			nimln(127, "aliases.nim");
			LOC74 = 0;
			LOC74 = HEX5BHEX5D_191711(b, 0);
			result = ispartof_415411(LOC73, LOC74);
			nimln(128, "aliases.nim");
			{
				nimln(128, "aliases.nim");
				nimln(128, "aliases.nim");
				if (!!((result == ((NU8) 0)))) goto LA77;
				nimln(130, "aliases.nim");
				{
					tnode190813* LOC81;
					tnode190813* LOC82;
					nimln(130, "aliases.nim");
					nimln(130, "aliases.nim");
					nimln(130, "aliases.nim");
					LOC81 = 0;
					LOC81 = HEX5BHEX5D_191711(a, 1);
					if (!(((TMP5624[(*LOC81).Kind/8] &(1<<((*LOC81).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP5625));
					nimln(130, "aliases.nim");
					LOC82 = 0;
					LOC82 = HEX5BHEX5D_191711(b, 1);
					if (!(((TMP5624[(*LOC82).Kind/8] &(1<<((*LOC82).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP5625));
					if (!!(((*(*LOC81).kindU.S4.Sym).Sup.Id == (*(*LOC82).kindU.S4.Sym).Sup.Id))) goto LA83;
					nimln(131, "aliases.nim");
					result = ((NU8) 0);
				}
				LA83: ;
			}
			LA77: ;
		}
		break;
		case ((NU8) 65):
		case ((NU8) 47):
		{
			tnode190813* LOC86;
			tnode190813* LOC87;
			nimln(134, "aliases.nim");
			nimln(134, "aliases.nim");
			LOC86 = 0;
			LOC86 = HEX5BHEX5D_191711(a, 0);
			nimln(134, "aliases.nim");
			LOC87 = 0;
			LOC87 = HEX5BHEX5D_191711(b, 0);
			result = ispartof_415411(LOC86, LOC87);
			nimln(136, "aliases.nim");
			{
				nimln(136, "aliases.nim");
				nimln(136, "aliases.nim");
				if (!!((result == ((NU8) 2)))) goto LA90;
				nimln(137, "aliases.nim");
				{
					NU8 LOC94;
					nimln(137, "aliases.nim");
					nimln(137, "aliases.nim");
					nimln(137, "aliases.nim");
					LOC94 = 0;
					LOC94 = ispartof_415402((*a).Typ, (*b).Typ);
					if (!!((LOC94 == ((NU8) 0)))) goto LA95;
					nimln(137, "aliases.nim");
					result = ((NU8) 1);
				}
				LA95: ;
			}
			LA90: ;
		}
		break;
		case ((NU8) 58):
		case ((NU8) 59):
		case ((NU8) 60):
		{
			tnode190813* LOC98;
			tnode190813* LOC99;
			nimln(140, "aliases.nim");
			nimln(140, "aliases.nim");
			LOC98 = 0;
			LOC98 = HEX5BHEX5D_191711(a, 1);
			nimln(140, "aliases.nim");
			LOC99 = 0;
			LOC99 = HEX5BHEX5D_191711(b, 1);
			result = ispartof_415411(LOC98, LOC99);
		}
		break;
		case ((NU8) 67):
		case ((NU8) 66):
		case ((NU8) 46):
		{
			tnode190813* LOC101;
			tnode190813* LOC102;
			nimln(142, "aliases.nim");
			nimln(142, "aliases.nim");
			LOC101 = 0;
			LOC101 = HEX5BHEX5D_191711(a, 0);
			nimln(142, "aliases.nim");
			LOC102 = 0;
			LOC102 = HEX5BHEX5D_191711(b, 0);
			result = ispartof_415411(LOC101, LOC102);
		}
		break;
		default:
		{
		}
		break;
		}
	}
	goto LA1;
	LA3: ;
	{
		nimln(152, "aliases.nim");
		switch ((*b).Kind) {
		case ((NU8) 45):
		case ((NU8) 42):
		case ((NU8) 67):
		case ((NU8) 66):
		case ((NU8) 46):
		{
			tnode190813* LOC106;
			nimln(155, "aliases.nim");
			nimln(155, "aliases.nim");
			LOC106 = 0;
			LOC106 = HEX5BHEX5D_191711(b, 0);
			result = ispartof_415411(a, LOC106);
		}
		break;
		case ((NU8) 65):
		case ((NU8) 47):
		{
			nimln(159, "aliases.nim");
			{
				NU8 LOC110;
				tnode190813* LOC113;
				nimln(159, "aliases.nim");
				nimln(159, "aliases.nim");
				nimln(159, "aliases.nim");
				LOC110 = 0;
				LOC110 = ispartof_415402((*a).Typ, (*b).Typ);
				if (!!((LOC110 == ((NU8) 0)))) goto LA111;
				nimln(160, "aliases.nim");
				nimln(160, "aliases.nim");
				LOC113 = 0;
				LOC113 = HEX5BHEX5D_191711(b, 0);
				result = ispartof_415411(a, LOC113);
				nimln(161, "aliases.nim");
				{
					nimln(161, "aliases.nim");
					if (!(result == ((NU8) 0))) goto LA116;
					nimln(161, "aliases.nim");
					result = ((NU8) 1);
				}
				LA116: ;
			}
			LA111: ;
		}
		break;
		case ((NU8) 58):
		case ((NU8) 59):
		case ((NU8) 60):
		{
			tnode190813* LOC119;
			nimln(165, "aliases.nim");
			nimln(165, "aliases.nim");
			LOC119 = 0;
			LOC119 = HEX5BHEX5D_191711(b, 1);
			result = ispartof_415411(a, LOC119);
		}
		break;
		case ((NU8) 3):
		{
			nimln(169, "aliases.nim");
			switch ((*a).Kind) {
			case ((NU8) 45):
			case ((NU8) 42):
			case ((NU8) 67):
			case ((NU8) 66):
			case ((NU8) 46):
			{
				tnode190813* LOC122;
				nimln(172, "aliases.nim");
				nimln(172, "aliases.nim");
				LOC122 = 0;
				LOC122 = HEX5BHEX5D_191711(a, 0);
				result = ispartof_415411(LOC122, b);
			}
			break;
			case ((NU8) 58):
			case ((NU8) 59):
			case ((NU8) 60):
			{
				tnode190813* LOC124;
				nimln(174, "aliases.nim");
				nimln(174, "aliases.nim");
				LOC124 = 0;
				LOC124 = HEX5BHEX5D_191711(a, 1);
				result = ispartof_415411(LOC124, b);
			}
			break;
			case ((NU8) 65):
			case ((NU8) 47):
			{
				nimln(177, "aliases.nim");
				{
					NU8 LOC128;
					tnode190813* LOC131;
					nimln(177, "aliases.nim");
					nimln(177, "aliases.nim");
					nimln(177, "aliases.nim");
					LOC128 = 0;
					LOC128 = ispartof_415402((*a).Typ, (*b).Typ);
					if (!!((LOC128 == ((NU8) 0)))) goto LA129;
					nimln(178, "aliases.nim");
					nimln(178, "aliases.nim");
					LOC131 = 0;
					LOC131 = HEX5BHEX5D_191711(a, 0);
					result = ispartof_415411(LOC131, b);
					nimln(179, "aliases.nim");
					{
						nimln(179, "aliases.nim");
						if (!(result == ((NU8) 0))) goto LA134;
						nimln(179, "aliases.nim");
						result = ((NU8) 1);
					}
					LA134: ;
				}
				LA129: ;
			}
			break;
			default:
			{
			}
			break;
			}
		}
		break;
		default:
		{
		}
		break;
		}
	}
	LA1: ;
	popFrame();
	return result;
}
N_NOINLINE(void, aliasesInit)(void) {
	nimfr("aliases", "aliases.nim")
	popFrame();
}

N_NOINLINE(void, aliasesDatInit)(void) {
}

