/* Generated by Nim Compiler v0.20.0 */
/*   (c) 2019 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix
#define nimfr_(x, y)
#define nimln_(x, y)
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
static N_INLINE(NI, emarkamp__Bho3MSI0G3qbEZZcjdigaQhashes)(NI h, NI val);
static N_INLINE(NI, hash_vdFwh27LxBfkbtXYqAwMgwhashes)(NIM_CHAR x);
static N_INLINE(NI, emarkdollar__1VtZEcAzbCzFoJje5ex9aKwhashes)(NI h);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);

static N_INLINE(NI, divInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	{
		if (!(b == ((NI) 0))) goto LA3_;
		raiseDivByZero();
	}
	LA3_: ;
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = (a == ((NI) (IL64(-9223372036854775807) - IL64(1))));
		if (!(T7_)) goto LA8_;
		T7_ = (b == ((NI) -1));
		LA8_: ;
		if (!T7_) goto LA9_;
		raiseOverflow();
	}
	LA9_: ;
	result = (NI)(a / b);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ b));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, emarkamp__Bho3MSI0G3qbEZZcjdigaQhashes)(NI h, NI val) {
	NI result;
	NU h_2;
	NU val_2;
	NU res;
	result = (NI)0;
	h_2 = ((NU) (h));
	val_2 = ((NU) (val));
	res = (NU)((NU64)(h_2) + (NU64)(val_2));
	res = (NU)((NU64)(res) + (NU64)((NU)((NU64)(res) << (NU64)(((NI) 10)))));
	res = (NU)(res ^ (NU)((NU64)(res) >> (NU64)(((NI) 6))));
	result = ((NI) (res));
	return result;
}

static N_INLINE(NI, hash_vdFwh27LxBfkbtXYqAwMgwhashes)(NIM_CHAR x) {
	NI result;
	result = (NI)0;
	result = ((NU8)(x));
	return result;
}

static N_INLINE(NI, emarkdollar__1VtZEcAzbCzFoJje5ex9aKwhashes)(NI h) {
	NI result;
	NU h_2;
	NU res;
	result = (NI)0;
	h_2 = ((NU) (h));
	res = (NU)((NU64)(h_2) + (NU64)((NU)((NU64)(h_2) << (NU64)(((NI) 3)))));
	res = (NU)(res ^ (NU)((NU64)(res) >> (NU64)(((NI) 11))));
	res = (NU)((NU64)(res) + (NU64)((NU)((NU64)(res) << (NU64)(((NI) 15)))));
	result = ((NI) (res));
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI, hash_6PCYkKlCNhq9cnRLnqWKkwQ)(NimStringDesc* x) {
	NI result;
	NI elementSize;
	NI stepSize;
	NI TM_7tkD9cFJSchVDwHuwaY9bP9bA_2;
	NI i;
	result = (NI)0;
	elementSize = ((NI) 1);
	TM_7tkD9cFJSchVDwHuwaY9bP9bA_2 = divInt(((NI) 8), elementSize);
	stepSize = (NI)(TM_7tkD9cFJSchVDwHuwaY9bP9bA_2);
	i = ((NI) 0);
	{
		while (1) {
			NI TM_7tkD9cFJSchVDwHuwaY9bP9bA_3;
			NI TM_7tkD9cFJSchVDwHuwaY9bP9bA_4;
			NI n;
			NI TM_7tkD9cFJSchVDwHuwaY9bP9bA_5;
			TM_7tkD9cFJSchVDwHuwaY9bP9bA_3 = addInt(((x ? x->Sup.len : 0)-1), ((NI) 1));
			TM_7tkD9cFJSchVDwHuwaY9bP9bA_4 = subInt((NI)(TM_7tkD9cFJSchVDwHuwaY9bP9bA_3), stepSize);
			if (!(i <= (NI)(TM_7tkD9cFJSchVDwHuwaY9bP9bA_4))) goto LA2;
			n = ((NI) 0);
			if ((NU)(i) >= (NU)(x ? x->Sup.len : 0)) raiseIndexError2(i,(x ? x->Sup.len : 0)-1);
			n = (*((NI*) ((&x->data[i]))));
			result = emarkamp__Bho3MSI0G3qbEZZcjdigaQhashes(result, n);
			TM_7tkD9cFJSchVDwHuwaY9bP9bA_5 = addInt(i, stepSize);
			i = (NI)(TM_7tkD9cFJSchVDwHuwaY9bP9bA_5);
		} LA2: ;
	}
	{
		NI i_2;
		NI colontmp_;
		NI res;
		i_2 = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = ((x ? x->Sup.len : 0)-1);
		res = i;
		{
			while (1) {
				NI T6_;
				NI TM_7tkD9cFJSchVDwHuwaY9bP9bA_6;
				if (!(res <= colontmp_)) goto LA5;
				i_2 = res;
				if ((NU)(i_2) >= (NU)(x ? x->Sup.len : 0)) raiseIndexError2(i_2,(x ? x->Sup.len : 0)-1);
				T6_ = (NI)0;
				T6_ = hash_vdFwh27LxBfkbtXYqAwMgwhashes(x->data[i_2]);
				result = emarkamp__Bho3MSI0G3qbEZZcjdigaQhashes(result, T6_);
				TM_7tkD9cFJSchVDwHuwaY9bP9bA_6 = addInt(res, ((NI) 1));
				res = (NI)(TM_7tkD9cFJSchVDwHuwaY9bP9bA_6);
			} LA5: ;
		}
	}
	result = emarkdollar__1VtZEcAzbCzFoJje5ex9aKwhashes(result);
	return result;
}

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
{	result = (NI)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (a <= i);
		if (!(T3_)) goto LA4_;
		T3_ = (i <= b);
		LA4_: ;
		if (!T3_) goto LA5_;
		result = i;
		goto BeforeRet_;
	}
	goto LA1_;
	LA5_: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI, hashIgnoreCase_6PCYkKlCNhq9cnRLnqWKkwQ_2)(NimStringDesc* x) {
	NI result;
	NI h;
	result = (NI)0;
	h = ((NI) 0);
	{
		NI i;
		NI colontmp_;
		NI TM_7tkD9cFJSchVDwHuwaY9bP9bA_7;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		TM_7tkD9cFJSchVDwHuwaY9bP9bA_7 = subInt((x ? x->Sup.len : 0), ((NI) 1));
		colontmp_ = (NI)(TM_7tkD9cFJSchVDwHuwaY9bP9bA_7);
		res = ((NI) 0);
		{
			while (1) {
				NIM_CHAR c;
				NI TM_7tkD9cFJSchVDwHuwaY9bP9bA_9;
				if (!(res <= colontmp_)) goto LA3;
				i = res;
				if ((NU)(i) >= (NU)(x ? x->Sup.len : 0)) raiseIndexError2(i,(x ? x->Sup.len : 0)-1);
				c = x->data[i];
				{
					NI TM_7tkD9cFJSchVDwHuwaY9bP9bA_8;
					if (!(((NU8)(c)) >= ((NU8)(65)) && ((NU8)(c)) <= ((NU8)(90)))) goto LA6_;
					TM_7tkD9cFJSchVDwHuwaY9bP9bA_8 = addInt(((NU8)(c)), ((NI) 32));
					c = ((NIM_CHAR) (((NI)chckRange((NI)(TM_7tkD9cFJSchVDwHuwaY9bP9bA_8), ((NI) 0), ((NI) 255)))));
				}
				LA6_: ;
				h = emarkamp__Bho3MSI0G3qbEZZcjdigaQhashes(h, ((NU8)(c)));
				TM_7tkD9cFJSchVDwHuwaY9bP9bA_9 = addInt(res, ((NI) 1));
				res = (NI)(TM_7tkD9cFJSchVDwHuwaY9bP9bA_9);
			} LA3: ;
		}
	}
	result = emarkdollar__1VtZEcAzbCzFoJje5ex9aKwhashes(h);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI, hashIgnoreStyle_6PCYkKlCNhq9cnRLnqWKkwQ_3)(NimStringDesc* x) {
	NI result;
	NI h;
	NI i;
	NI xLen;
	result = (NI)0;
	h = ((NI) 0);
	i = ((NI) 0);
	xLen = (x ? x->Sup.len : 0);
	{
		while (1) {
			NIM_CHAR c;
			if (!(i < xLen)) goto LA2;
			if ((NU)(i) >= (NU)(x ? x->Sup.len : 0)) raiseIndexError2(i,(x ? x->Sup.len : 0)-1);
			c = x->data[i];
			{
				NI TM_7tkD9cFJSchVDwHuwaY9bP9bA_10;
				if (!((NU8)(c) == (NU8)(95))) goto LA5_;
				TM_7tkD9cFJSchVDwHuwaY9bP9bA_10 = addInt(i, ((NI) 1));
				i = (NI)(TM_7tkD9cFJSchVDwHuwaY9bP9bA_10);
			}
			goto LA3_;
			LA5_: ;
			{
				NI TM_7tkD9cFJSchVDwHuwaY9bP9bA_12;
				{
					NI TM_7tkD9cFJSchVDwHuwaY9bP9bA_11;
					if (!(((NU8)(c)) >= ((NU8)(65)) && ((NU8)(c)) <= ((NU8)(90)))) goto LA10_;
					TM_7tkD9cFJSchVDwHuwaY9bP9bA_11 = addInt(((NU8)(c)), ((NI) 32));
					c = ((NIM_CHAR) (((NI)chckRange((NI)(TM_7tkD9cFJSchVDwHuwaY9bP9bA_11), ((NI) 0), ((NI) 255)))));
				}
				LA10_: ;
				h = emarkamp__Bho3MSI0G3qbEZZcjdigaQhashes(h, ((NU8)(c)));
				TM_7tkD9cFJSchVDwHuwaY9bP9bA_12 = addInt(i, ((NI) 1));
				i = (NI)(TM_7tkD9cFJSchVDwHuwaY9bP9bA_12);
			}
			LA3_: ;
		} LA2: ;
	}
	result = emarkdollar__1VtZEcAzbCzFoJje5ex9aKwhashes(h);
	return result;
}
