/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct tnode208818 tnode208818;
typedef struct ttype208854 ttype208854;
typedef struct tlineinfo180340 tlineinfo180340;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsym208848 tsym208848;
typedef struct tident184021 tident184021;
typedef struct tnodeseq208812 tnodeseq208812;
typedef struct tidobj184015 tidobj184015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq208850 ttypeseq208850;
typedef struct tloc208832 tloc208832;
typedef struct trope177009 trope177009;
typedef struct tcell45348 tcell45348;
typedef struct tcellseq45364 tcellseq45364;
typedef struct tgcheap47616 tgcheap47616;
typedef struct tcellset45360 tcellset45360;
typedef struct tpagedesc45356 tpagedesc45356;
typedef struct tmemregion27610 tmemregion27610;
typedef struct tsmallchunk26840 tsmallchunk26840;
typedef struct tllchunk27604 tllchunk27604;
typedef struct tbigchunk26842 tbigchunk26842;
typedef struct tintset26817 tintset26817;
typedef struct ttrunk26813 ttrunk26813;
typedef struct tavlnode27608 tavlnode27608;
typedef struct tgcstat47614 tgcstat47614;
typedef struct tscope208842 tscope208842;
typedef struct TY208949 TY208949;
typedef struct tinstantiation208838 tinstantiation208838;
typedef struct tstrtable208822 tstrtable208822;
typedef struct tsymseq208820 tsymseq208820;
typedef struct tlib208836 tlib208836;
typedef struct tbasechunk26838 tbasechunk26838;
typedef struct tfreecell26830 tfreecell26830;
typedef struct TY208938 TY208938;
typedef struct tlistentry127022 tlistentry127022;
struct  tlineinfo180340  {
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
struct  tnode208818  {
ttype208854* Typ;
tlineinfo180340 Info;
NU16 Flags;
NU8 Kind;
union{
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym208848* Sym;
} S4;
struct {tident184021* Ident;
} S5;
struct {tnodeseq208812* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
typedef N_NIMCALL_PTR(void, TY3289) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  tidobj184015  {
  TNimObject Sup;
NI Id;
};
struct  tloc208832  {
NU8 K;
NU8 S;
NU16 Flags;
ttype208854* T;
trope177009* R;
trope177009* Heaproot;
};
struct  ttype208854  {
  tidobj184015 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq208850* Sons;
tnode208818* N;
tsym208848* Owner;
tsym208848* Sym;
tsym208848* Destructor;
tsym208848* Deepcopy;
NI64 Size;
NI16 Align;
NI16 Locklevel;
tloc208832 Loc;
};
struct  tcell45348  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq45364  {
NI Len;
NI Cap;
tcell45348** D;
};
struct  tcellset45360  {
NI Counter;
NI Max;
tpagedesc45356* Head;
tpagedesc45356** Data;
};
typedef tsmallchunk26840* TY27622[512];
typedef ttrunk26813* ttrunkbuckets26815[256];
struct  tintset26817  {
ttrunkbuckets26815 Data;
};
struct  tmemregion27610  {
NI Minlargeobj;
NI Maxlargeobj;
TY27622 Freesmallchunks;
tllchunk27604* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26842* Freechunkslist;
tintset26817 Chunkstarts;
tavlnode27608* Root;
tavlnode27608* Deleted;
tavlnode27608* Last;
tavlnode27608* Freeavlnodes;
};
struct  tgcstat47614  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap47616  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq45364 Zct;
tcellseq45364 Decstack;
tcellset45360 Cycleroots;
tcellseq45364 Tempstack;
NI Recgclock;
tmemregion27610 Region;
tgcstat47614 Stat;
};
struct  tstrtable208822  {
NI Counter;
tsymseq208820* Data;
};
struct  tsym208848  {
  tidobj184015 Sup;
NU8 Kind;
union{
struct {ttypeseq208850* Typeinstcache;
tscope208842* Typscope;
} S1;
struct {TY208949* Procinstcache;
tscope208842* Scope;
} S2;
struct {TY208949* Usedgenerics;
tstrtable208822 Tab;
} S3;
struct {tsym208848* Guard;
} S4;
} kindU;
NU16 Magic;
ttype208854* Typ;
tident184021* Name;
tlineinfo180340 Info;
tsym208848* Owner;
NU32 Flags;
tnode208818* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc208832 Loc;
tlib208836* Annex;
tnode208818* Constraint;
};
struct  tident184021  {
  tidobj184015 Sup;
NimStringDesc* S;
tident184021* Next;
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
struct  trope177009  {
  TNimObject Sup;
trope177009* Left;
trope177009* Right;
NI Length;
NimStringDesc* Data;
};
typedef NI TY26820[8];
struct  tpagedesc45356  {
tpagedesc45356* Next;
NI Key;
TY26820 Bits;
};
struct  tbasechunk26838  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26840  {
  tbasechunk26838 Sup;
tsmallchunk26840* Next;
tsmallchunk26840* Prev;
tfreecell26830* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27604  {
NI Size;
NI Acc;
tllchunk27604* Next;
};
struct  tbigchunk26842  {
  tbasechunk26838 Sup;
tbigchunk26842* Next;
tbigchunk26842* Prev;
NI Align;
NF Data;
};
struct  ttrunk26813  {
ttrunk26813* Next;
NI Key;
TY26820 Bits;
};
typedef tavlnode27608* TY27614[2];
struct  tavlnode27608  {
TY27614 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tscope208842  {
NI Depthlevel;
tstrtable208822 Symbols;
tnodeseq208812* Usingsyms;
tscope208842* Parent;
};
struct  tinstantiation208838  {
tsym208848* Sym;
ttypeseq208850* Concretetypes;
TY208938* Usedby;
};
struct  tlistentry127022  {
  TNimObject Sup;
tlistentry127022* Prev;
tlistentry127022* Next;
};
struct  tlib208836  {
  tlistentry127022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope177009* Name;
tnode208818* Path;
};
struct  tfreecell26830  {
tfreecell26830* Next;
NI Zerofield;
};
struct tnodeseq208812 {
  TGenericSeq Sup;
  tnode208818* data[SEQ_DECL_SIZE];
};
struct ttypeseq208850 {
  TGenericSeq Sup;
  ttype208854* data[SEQ_DECL_SIZE];
};
struct TY208949 {
  TGenericSeq Sup;
  tinstantiation208838* data[SEQ_DECL_SIZE];
};
struct tsymseq208820 {
  TGenericSeq Sup;
  tsym208848* data[SEQ_DECL_SIZE];
};
struct TY208938 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(ttype208854*, skiptypes_212980)(ttype208854* t, NU64 kinds);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell45348*, usrtocell_49246)(void* usr);
static N_INLINE(void, rtladdzct_50804)(tcell45348* c);
N_NOINLINE(void, addzct_49217)(tcellseq45364* s, tcell45348* c);
static N_INLINE(NI, len_209366)(tnode208818* n);
N_NIMCALL(tsym208848*, ithfield_431012)(tnode208818* n, NI field);
static N_INLINE(NI, sonslen_209251)(tnode208818* n);
N_NIMCALL(void, internalerror_182669)(tlineinfo180340 info, NimStringDesc* errmsg);
static N_INLINE(tnode208818*, lastson_209263)(tnode208818* n);
N_NIMCALL(void, globalerror_182627)(tlineinfo180340 info, NimStringDesc* arg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, annotatetype_431145)(tnode208818* n, ttype208854* t);
N_NIMCALL(NI, len_212805)(ttype208854* n);
N_NIMCALL(ttype208854*, elemtype_241566)(ttype208854* t);
STRING_LITERAL(TMP3178, "ithField", 8);
STRING_LITERAL(TMP3179, "ithField(record case branch)", 28);
STRING_LITERAL(TMP3180, "invalid field at index ", 23);
STRING_LITERAL(TMP3181, "() must have an object or tuple type", 36);
STRING_LITERAL(TMP3182, "[] must have some form of array type", 36);
STRING_LITERAL(TMP3183, "{} must have the set type", 25);
STRING_LITERAL(TMP3184, "float literal must have some float type", 39);
STRING_LITERAL(TMP3185, "integer literal must have some int type", 39);
STRING_LITERAL(TMP3186, "string literal must be of some string type", 42);
STRING_LITERAL(TMP3187, "nil literal must be of some pointer type", 40);
extern tgcheap47616 gch_47644;

static N_INLINE(tcell45348*, usrtocell_49246)(void* usr) {
	tcell45348* result;
	result = 0;
	result = ((tcell45348*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell45348))))));
	return result;
}

static N_INLINE(void, rtladdzct_50804)(tcell45348* c) {
	addzct_49217((&gch_47644.Zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell45348* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_49246(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell45348* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_49246((*dest));
		{
			(*c).Refcount -= 8;
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
			rtladdzct_50804(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

static N_INLINE(NI, len_209366)(tnode208818* n) {
	NI result;
	result = 0;
	{
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	return result;
}

static N_INLINE(NI, sonslen_209251)(tnode208818* n) {
	NI result;
	result = 0;
	{
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	return result;
}

static N_INLINE(tnode208818*, lastson_209263)(tnode208818* n) {
	tnode208818* result;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = sonslen_209251(n);
	result = (*n).kindU.S6.Sons->data[(NI64)(LOC1 - 1)];
	return result;
}

N_NIMCALL(tsym208848*, ithfield_431012)(tnode208818* n, NI field) {
	tsym208848* result;
{	result = 0;
	result = NIM_NIL;
	switch ((*n).Kind) {
	case ((NU8) 137):
	{
		{
			NI i_431029;
			NI HEX3Atmp_431110;
			NI LOC3;
			NI res_431113;
			i_431029 = 0;
			HEX3Atmp_431110 = 0;
			LOC3 = 0;
			LOC3 = sonslen_209251(n);
			HEX3Atmp_431110 = (NI64)(LOC3 - 1);
			res_431113 = 0;
			{
				while (1) {
					if (!(res_431113 <= HEX3Atmp_431110)) goto LA5;
					i_431029 = res_431113;
					result = ithfield_431012((*n).kindU.S6.Sons->data[i_431029], (NI64)(field - i_431029));
					{
						if (!!((result == NIM_NIL))) goto LA8;
						goto BeforeRet;
					}
					LA8: ;
					res_431113 += 1;
				} LA5: ;
			}
		}
	}
	break;
	case ((NU8) 138):
	{
		{
			if (!!(((*(*n).kindU.S6.Sons->data[0]).Kind == ((NU8) 3)))) goto LA13;
			internalerror_182669((*n).Info, ((NimStringDesc*) &TMP3178));
		}
		LA13: ;
		result = ithfield_431012((*n).kindU.S6.Sons->data[0], (NI64)(field - 1));
		{
			if (!!((result == NIM_NIL))) goto LA17;
			goto BeforeRet;
		}
		LA17: ;
		{
			NI i_431088;
			NI HEX3Atmp_431116;
			NI LOC20;
			NI res_431119;
			i_431088 = 0;
			HEX3Atmp_431116 = 0;
			LOC20 = 0;
			LOC20 = sonslen_209251(n);
			HEX3Atmp_431116 = (NI64)(LOC20 - 1);
			res_431119 = 1;
			{
				while (1) {
					if (!(res_431119 <= HEX3Atmp_431116)) goto LA22;
					i_431088 = res_431119;
					switch ((*(*n).kindU.S6.Sons->data[i_431088]).Kind) {
					case ((NU8) 85):
					case ((NU8) 88):
					{
						tnode208818* LOC24;
						LOC24 = 0;
						LOC24 = lastson_209263((*n).kindU.S6.Sons->data[i_431088]);
						result = ithfield_431012(LOC24, (NI64)(field - 1));
						{
							if (!!((result == NIM_NIL))) goto LA27;
							goto BeforeRet;
						}
						LA27: ;
					}
					break;
					default:
					{
						internalerror_182669((*n).Info, ((NimStringDesc*) &TMP3179));
					}
					break;
					}
					res_431119 += 1;
				} LA22: ;
			}
		}
	}
	break;
	case ((NU8) 3):
	{
		{
			if (!(field == 0)) goto LA33;
			result = (*n).kindU.S4.Sym;
		}
		LA33: ;
	}
	break;
	default:
	{
	}
	break;
	}
	}BeforeRet: ;
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, annotatetype_431145)(tnode208818* n, ttype208854* t) {
	ttype208854* x;
	x = skiptypes_212980(t, IL64(211106232576256));
	switch ((*n).Kind) {
	case ((NU8) 37):
	{
		{
			if (!((*x).Kind == ((NU8) 17))) goto LA4;
			asgnRefNoCycle((void**) (&(*n).Typ), t);
			{
				NI i_431181;
				NI HEX3Atmp_431335;
				NI LOC7;
				NI res_431338;
				i_431181 = 0;
				HEX3Atmp_431335 = 0;
				LOC7 = 0;
				LOC7 = len_209366(n);
				HEX3Atmp_431335 = (LOC7 - 1);
				res_431338 = 0;
				{
					while (1) {
						tsym208848* field;
						if (!(res_431338 <= HEX3Atmp_431335)) goto LA9;
						i_431181 = res_431338;
						field = ithfield_431012((*x).N, i_431181);
						{
							NimStringDesc* LOC14;
							NimStringDesc* LOC15;
							if (!field == 0) goto LA12;
							LOC14 = 0;
							LOC15 = 0;
							LOC15 = nimIntToStr(i_431181);
							LOC14 = rawNewString(LOC15->Sup.len + 23);
appendString(LOC14, ((NimStringDesc*) &TMP3180));
appendString(LOC14, LOC15);
							globalerror_182627((*n).Info, LOC14);
						}
						goto LA10;
						LA12: ;
						{
							annotatetype_431145((*n).kindU.S6.Sons->data[i_431181], (*field).Typ);
						}
						LA10: ;
						res_431338 += 1;
					} LA9: ;
				}
			}
		}
		goto LA2;
		LA4: ;
		{
			if (!((*x).Kind == ((NU8) 18))) goto LA18;
			asgnRefNoCycle((void**) (&(*n).Typ), t);
			{
				NI i_431229;
				NI HEX3Atmp_431341;
				NI LOC21;
				NI res_431344;
				i_431229 = 0;
				HEX3Atmp_431341 = 0;
				LOC21 = 0;
				LOC21 = len_209366(n);
				HEX3Atmp_431341 = (LOC21 - 1);
				res_431344 = 0;
				{
					while (1) {
						if (!(res_431344 <= HEX3Atmp_431341)) goto LA23;
						i_431229 = res_431344;
						{
							NI LOC26;
							NimStringDesc* LOC29;
							NimStringDesc* LOC30;
							LOC26 = 0;
							LOC26 = len_212805(x);
							if (!(LOC26 <= i_431229)) goto LA27;
							LOC29 = 0;
							LOC30 = 0;
							LOC30 = nimIntToStr(i_431229);
							LOC29 = rawNewString(LOC30->Sup.len + 23);
appendString(LOC29, ((NimStringDesc*) &TMP3180));
appendString(LOC29, LOC30);
							globalerror_182627((*n).Info, LOC29);
						}
						goto LA24;
						LA27: ;
						{
							annotatetype_431145((*n).kindU.S6.Sons->data[i_431229], (*x).Sons->data[i_431229]);
						}
						LA24: ;
						res_431344 += 1;
					} LA23: ;
				}
			}
		}
		goto LA2;
		LA18: ;
		{
			NIM_BOOL LOC33;
			LOC33 = 0;
			LOC33 = ((*x).Kind == ((NU8) 25));
			if (!(LOC33)) goto LA34;
			LOC33 = ((*x).Callconv == ((NU8) 8));
			LA34: ;
			if (!LOC33) goto LA35;
			asgnRefNoCycle((void**) (&(*n).Typ), t);
		}
		goto LA2;
		LA35: ;
		{
			globalerror_182627((*n).Info, ((NimStringDesc*) &TMP3181));
		}
		LA2: ;
	}
	break;
	case ((NU8) 41):
	{
		{
			if (!((151060496 &(IL64(1)<<(((*x).Kind)&IL64(63))))!=0)) goto LA41;
			asgnRefNoCycle((void**) (&(*n).Typ), t);
			{
				tnode208818* m_431263;
				m_431263 = 0;
				{
					NI i_431350;
					NI HEX3Atmp_431352;
					NI LOC45;
					NI res_431354;
					i_431350 = 0;
					HEX3Atmp_431352 = 0;
					LOC45 = 0;
					LOC45 = len_209366(n);
					HEX3Atmp_431352 = (LOC45 - 1);
					res_431354 = 0;
					{
						while (1) {
							ttype208854* LOC48;
							if (!(res_431354 <= HEX3Atmp_431352)) goto LA47;
							i_431350 = res_431354;
							m_431263 = (*n).kindU.S6.Sons->data[i_431350];
							LOC48 = 0;
							LOC48 = elemtype_241566(x);
							annotatetype_431145(m_431263, LOC48);
							res_431354 += 1;
						} LA47: ;
					}
				}
			}
		}
		goto LA39;
		LA41: ;
		{
			globalerror_182627((*n).Info, ((NimStringDesc*) &TMP3182));
		}
		LA39: ;
	}
	break;
	case ((NU8) 39):
	{
		{
			if (!((524288 &(IL64(1)<<(((*x).Kind)&IL64(63))))!=0)) goto LA53;
			asgnRefNoCycle((void**) (&(*n).Typ), t);
			{
				tnode208818* m_431278;
				m_431278 = 0;
				{
					NI i_431359;
					NI HEX3Atmp_431361;
					NI LOC57;
					NI res_431363;
					i_431359 = 0;
					HEX3Atmp_431361 = 0;
					LOC57 = 0;
					LOC57 = len_209366(n);
					HEX3Atmp_431361 = (LOC57 - 1);
					res_431363 = 0;
					{
						while (1) {
							ttype208854* LOC60;
							if (!(res_431363 <= HEX3Atmp_431361)) goto LA59;
							i_431359 = res_431363;
							m_431278 = (*n).kindU.S6.Sons->data[i_431359];
							LOC60 = 0;
							LOC60 = elemtype_241566(x);
							annotatetype_431145(m_431278, LOC60);
							res_431363 += 1;
						} LA59: ;
					}
				}
			}
		}
		goto LA51;
		LA53: ;
		{
			globalerror_182627((*n).Info, ((NimStringDesc*) &TMP3183));
		}
		LA51: ;
	}
	break;
	case ((NU8) 16) ... ((NU8) 19):
	{
		{
			if (!((IL64(1030792151040) &(IL64(1)<<(((*x).Kind)&IL64(63))))!=0)) goto LA65;
			asgnRefNoCycle((void**) (&(*n).Typ), t);
		}
		goto LA63;
		LA65: ;
		{
			globalerror_182627((*n).Info, ((NimStringDesc*) &TMP3184));
		}
		LA63: ;
	}
	break;
	case ((NU8) 5) ... ((NU8) 15):
	{
		{
			if (!((IL64(35182224621574) &(IL64(1)<<(((*x).Kind)&IL64(63))))!=0)) goto LA71;
			asgnRefNoCycle((void**) (&(*n).Typ), t);
		}
		goto LA69;
		LA71: ;
		{
			globalerror_182627((*n).Info, ((NimStringDesc*) &TMP3185));
		}
		LA69: ;
	}
	break;
	case ((NU8) 20) ... ((NU8) 22):
	{
		{
			if (!((805306368 &(IL64(1)<<(((*x).Kind)&IL64(63))))!=0)) goto LA77;
			asgnRefNoCycle((void**) (&(*n).Typ), t);
		}
		goto LA75;
		LA77: ;
		{
			globalerror_182627((*n).Info, ((NimStringDesc*) &TMP3186));
		}
		LA75: ;
	}
	break;
	case ((NU8) 23):
	{
		{
			if (!((IL64(1125900835880960) &(IL64(1)<<(((*x).Kind)&IL64(63))))!=0)) goto LA83;
			asgnRefNoCycle((void**) (&(*n).Typ), t);
		}
		goto LA81;
		LA83: ;
		{
			globalerror_182627((*n).Info, ((NimStringDesc*) &TMP3187));
		}
		LA81: ;
	}
	break;
	default:
	{
	}
	break;
	}
}
NIM_EXTERNC N_NOINLINE(void, compiler_semmacrosanityInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_semmacrosanityDatInit)(void) {
}
