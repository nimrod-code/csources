/* Generated by Nim Compiler v0.19.9 */
/*   (c) 2018 Andreas Rumpf */
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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
#  define nimfr_(proc, file) \
    TFrame FR_; \
    FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = 0; nimFrame(&FR_);

#  define nimfrs_(proc, file, slots, length) \
    struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename; NI len; VarSlot s[slots];} FR_; \
    FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = length; nimFrame((TFrame*)&FR_);

#  define nimln_(n, file) \
    FR_.line = n; FR_.filename = file;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
static N_INLINE(NI, emarkamp__6dtCP6C39bxOkT4wrIPJwKghashes)(NI h, NI val);
static N_INLINE(NI, emarkdollar__zs9byUtT9cNi2e9clB27b2cUAhashes)(NI h);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached_II46IjNZztN9bmbxUD8dt8g_2)(void);
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;

static N_INLINE(NI, emarkamp__6dtCP6C39bxOkT4wrIPJwKghashes)(NI h, NI val) {
	NI result;
	result = (NI)0;
	result = (NI)((NU64)(h) + (NU64)(val));
	result = (NI)((NU64)(result) + (NU64)((NI)((NU64)(result) << (NU64)(((NI) 10)))));
	result = (NI)(result ^ (NI)((NU64)(result) >> (NU64)(((NI) 6))));
	return result;
}

static N_INLINE(NI, emarkdollar__zs9byUtT9cNi2e9clB27b2cUAhashes)(NI h) {
	NI result;
	result = (NI)0;
	result = (NI)((NU64)(h) + (NU64)((NI)((NU64)(h) << (NU64)(((NI) 3)))));
	result = (NI)(result ^ (NI)((NU64)(result) >> (NU64)(((NI) 11))));
	result = (NI)((NU64)(result) + (NU64)((NI)((NU64)(result) << (NU64)(((NI) 15)))));
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI, hash_uBstFm5SYVQeOL3j9c9bc58A)(NimStringDesc* x) {
	NI result;
	NI h;
	result = (NI)0;
	h = ((NI) 0);
	{
		NI i;
		NI colontmp_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = (NI)((x ? x->Sup.len : 0) - ((NI) 1));
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA3;
				i = res;
				h = emarkamp__6dtCP6C39bxOkT4wrIPJwKghashes(h, ((NU8)(x->data[i])));
				res += ((NI) 1);
			} LA3: ;
		}
	}
	result = emarkdollar__zs9byUtT9cNi2e9clB27b2cUAhashes(h);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI, hashIgnoreCase_uBstFm5SYVQeOL3j9c9bc58A_2)(NimStringDesc* x) {
	NI result;
	NI h;
	result = (NI)0;
	h = ((NI) 0);
	{
		NI i;
		NI colontmp_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = (NI)((x ? x->Sup.len : 0) - ((NI) 1));
		res = ((NI) 0);
		{
			while (1) {
				NIM_CHAR c;
				if (!(res <= colontmp_)) goto LA3;
				i = res;
				c = x->data[i];
				{
					if (!(((NU8)(c)) >= ((NU8)(65)) && ((NU8)(c)) <= ((NU8)(90)))) goto LA6_;
					c = ((NIM_CHAR) (((NI) ((NI)(((NU8)(c)) + ((NI) 32))))));
				}
				LA6_: ;
				h = emarkamp__6dtCP6C39bxOkT4wrIPJwKghashes(h, ((NU8)(c)));
				res += ((NI) 1);
			} LA3: ;
		}
	}
	result = emarkdollar__zs9byUtT9cNi2e9clB27b2cUAhashes(h);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI, hashIgnoreStyle_uBstFm5SYVQeOL3j9c9bc58A_3)(NimStringDesc* x) {
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
			c = x->data[i];
			{
				if (!((NU8)(c) == (NU8)(95))) goto LA5_;
				i += ((NI) 1);
			}
			goto LA3_;
			LA5_: ;
			{
				{
					if (!(((NU8)(c)) >= ((NU8)(65)) && ((NU8)(c)) <= ((NU8)(90)))) goto LA10_;
					c = ((NIM_CHAR) (((NI) ((NI)(((NU8)(c)) + ((NI) 32))))));
				}
				LA10_: ;
				h = emarkamp__6dtCP6C39bxOkT4wrIPJwKghashes(h, ((NU8)(c)));
				i += ((NI) 1);
			}
			LA3_: ;
		} LA2: ;
	}
	result = emarkdollar__zs9byUtT9cNi2e9clB27b2cUAhashes(h);
	return result;
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
	T1_ = (NI)0;
	{
		if (!(framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;
		T1_ = ((NI) 0);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) ((NI16)((*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2_: ;
	(*s).calldepth = ((NI16) (T1_));
	(*s).prev = framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) (((NI) 2000))))) goto LA9_;
		callDepthLimitReached_II46IjNZztN9bmbxUD8dt8g_2();
	}
	LA9_: ;
}
