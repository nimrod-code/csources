/* Generated by Nim Compiler v0.20.0 */
/*   (c) 2019 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
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
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_MD5Context_oMciKUdSdCaIeMtcxbiPOw tyObject_MD5Context_oMciKUdSdCaIeMtcxbiPOw;
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NU8 tyArray_qtqsWM5aXmcpMIVmvq3kAA[16];
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU32 tyArray_FleBT9cC2nxhgiXmSYYnEKA[4];
typedef NU32 tyArray_JlnxiR65D9cjJpwi6uBZRtA[2];
typedef NU8 tyArray_w5VB8h5K8DB3oWrO5U2wqg[64];
struct tyObject_MD5Context_oMciKUdSdCaIeMtcxbiPOw {
tyArray_FleBT9cC2nxhgiXmSYYnEKA state;
tyArray_JlnxiR65D9cjJpwi6uBZRtA count;
tyArray_w5VB8h5K8DB3oWrO5U2wqg buffer;
};
typedef NU32 tyArray_U0SiHM0pVagA9c71oWelQMA[16];
typedef NU8 tyArray_cdsir9aPB24hAk6k77P9b9bCA[8];
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem_JE6t4x7Z3v2iVz27Nx0MRAmemory)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(void, md5Init_aFJbJ6Fb5boL1UBjNazO4A)(tyObject_MD5Context_oMciKUdSdCaIeMtcxbiPOw* c);
static N_INLINE(void, zeroMem_9cLyRtoQz0YlIMEd4qW7Hdgsystem)(void* p, NI size);
N_LIB_PRIVATE N_NIMCALL(void, md5Update_3dyWcdKqKqoei9csU09cRuCA)(tyObject_MD5Context_oMciKUdSdCaIeMtcxbiPOw* c, NCSTRING input, NI len);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(NU64, chckRangeU)(NU64 i, NU64 a, NU64 b);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, copyMem_M04YC71iJg1N7gBF3HZTngsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
N_LIB_PRIVATE N_NIMCALL(void, transform_FpyLDebN7eBB2pkKKmjXJg)(void* buffer, NU32* state);
N_LIB_PRIVATE N_NIMCALL(void, encode_3XCrKZ0CpOjKYafeeVPnyw)(NU32* dest, NCSTRING src);
static N_INLINE(NI, addInt)(NI a, NI b);
N_LIB_PRIVATE N_NIMCALL(void, FF_ShdGhVqwUZX4yDCc7A6Q6Q)(NU32* a, NU32 b, NU32 c, NU32 d, NU32 x, NU8 s, NU32 ac);
static N_INLINE(NU32, F_junZWnvhBQX0olNRUg769cgmd5)(NU32 x, NU32 y, NU32 z);
static N_INLINE(void, rot_E0YQh9cqfeV9b80YVg57S1mAmd5)(NU32* x, NU8 n);
N_LIB_PRIVATE N_NIMCALL(void, GG_ShdGhVqwUZX4yDCc7A6Q6Q_2)(NU32* a, NU32 b, NU32 c, NU32 d, NU32 x, NU8 s, NU32 ac);
static N_INLINE(NU32, G_junZWnvhBQX0olNRUg769cg_2md5)(NU32 x, NU32 y, NU32 z);
N_LIB_PRIVATE N_NIMCALL(void, HH_ShdGhVqwUZX4yDCc7A6Q6Q_3)(NU32* a, NU32 b, NU32 c, NU32 d, NU32 x, NU8 s, NU32 ac);
static N_INLINE(NU32, H_junZWnvhBQX0olNRUg769cg_3md5)(NU32 x, NU32 y, NU32 z);
N_LIB_PRIVATE N_NIMCALL(void, II_ShdGhVqwUZX4yDCc7A6Q6Q_4)(NU32* a, NU32 b, NU32 c, NU32 d, NU32 x, NU8 s, NU32 ac);
static N_INLINE(NU32, I_junZWnvhBQX0olNRUg769cg_4md5)(NU32 x, NU32 y, NU32 z);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(void, md5Final_CQoglTaDBxWEuKEO9ah9bXuQ)(tyObject_MD5Context_oMciKUdSdCaIeMtcxbiPOw* c, NU8* digest);
N_LIB_PRIVATE N_NIMCALL(void, decode_qtGCMfOlZdT3LJ4HIRsaNA)(NU8* dest, NI destLen_0, NU32* src, NI srcLen_0);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar__bUodBpefvLgLc2LbngPSqw)(tyArray_qtqsWM5aXmcpMIVmvq3kAA d);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
extern TNimType NTI_k3HXouOuhqAKq0dx450lXQ_;
TNimType NTI_qtqsWM5aXmcpMIVmvq3kAA_;
STRING_LITERAL(TM_evv4Z8qaB9aehA3eX73W1Cw_18, "0123456789abcdef", 16);

static N_INLINE(void, nimSetMem_JE6t4x7Z3v2iVz27Nx0MRAmemory)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}

static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem_JE6t4x7Z3v2iVz27Nx0MRAmemory(p, ((int) 0), size);
}

static N_INLINE(void, zeroMem_9cLyRtoQz0YlIMEd4qW7Hdgsystem)(void* p, NI size) {
	nimZeroMem(p, size);
}

N_LIB_PRIVATE N_NIMCALL(void, md5Init_aFJbJ6Fb5boL1UBjNazO4A)(tyObject_MD5Context_oMciKUdSdCaIeMtcxbiPOw* c) {
	(*c).state[(((NI) 0))- 0] = ((NU32) 1732584193);
	(*c).state[(((NI) 1))- 0] = ((NU32) IL64(4023233417));
	(*c).state[(((NI) 2))- 0] = ((NU32) IL64(2562383102));
	(*c).state[(((NI) 3))- 0] = ((NU32) 271733878);
	(*c).count[(((NI) 0))- 0] = ((NU32) 0);
	(*c).count[(((NI) 1))- 0] = ((NU32) 0);
	zeroMem_9cLyRtoQz0YlIMEd4qW7Hdgsystem(((void*) ((*c).buffer)), ((NI) 64));
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

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU32)(a) - (NU32)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ (NI)((NU32) ~(b))));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, copyMem_M04YC71iJg1N7gBF3HZTngsystem)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU32)(a) + (NU32)(b));
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

N_LIB_PRIVATE N_NIMCALL(void, encode_3XCrKZ0CpOjKYafeeVPnyw)(NU32* dest, NCSTRING src) {
	NI j;
	j = ((NI) 0);
	{
		NI i;
		NI res;
		i = (NI)0;
		res = ((NI) 0);
		{
			while (1) {
				NI TM_evv4Z8qaB9aehA3eX73W1Cw_3;
				NI TM_evv4Z8qaB9aehA3eX73W1Cw_4;
				NI TM_evv4Z8qaB9aehA3eX73W1Cw_5;
				NI TM_evv4Z8qaB9aehA3eX73W1Cw_6;
				NI TM_evv4Z8qaB9aehA3eX73W1Cw_7;
				if (!(res <= ((NI) 15))) goto LA3;
				i = res;
				if ((NU)(i) > (NU)(15)) raiseIndexError2(i, 15);
				TM_evv4Z8qaB9aehA3eX73W1Cw_3 = addInt(j, ((NI) 1));
				TM_evv4Z8qaB9aehA3eX73W1Cw_4 = addInt(j, ((NI) 2));
				TM_evv4Z8qaB9aehA3eX73W1Cw_5 = addInt(j, ((NI) 3));
				dest[(i)- 0] = (NU32)((NU32)((NU32)(((NU32)chckRangeU(((NU8)(src[j])), ((NU32) 0), ((NU32) IL64(4294967295)))) | (NU32)((NU32)(((NU32)chckRangeU(((NU8)(src[(NI)(TM_evv4Z8qaB9aehA3eX73W1Cw_3)])), ((NU32) 0), ((NU32) IL64(4294967295))))) << (NU32)(((NI) 8)))) | (NU32)((NU32)(((NU32)chckRangeU(((NU8)(src[(NI)(TM_evv4Z8qaB9aehA3eX73W1Cw_4)])), ((NU32) 0), ((NU32) IL64(4294967295))))) << (NU32)(((NI) 16)))) | (NU32)((NU32)(((NU32)chckRangeU(((NU8)(src[(NI)(TM_evv4Z8qaB9aehA3eX73W1Cw_5)])), ((NU32) 0), ((NU32) IL64(4294967295))))) << (NU32)(((NI) 24))));
				TM_evv4Z8qaB9aehA3eX73W1Cw_6 = addInt(j, ((NI) 4));
				j = (NI)(TM_evv4Z8qaB9aehA3eX73W1Cw_6);
				TM_evv4Z8qaB9aehA3eX73W1Cw_7 = addInt(res, ((NI) 1));
				res = (NI)(TM_evv4Z8qaB9aehA3eX73W1Cw_7);
			} LA3: ;
		}
	}
}

static N_INLINE(NU32, F_junZWnvhBQX0olNRUg769cgmd5)(NU32 x, NU32 y, NU32 z) {
	NU32 result;
	result = (NU32)0;
	result = (NU32)((NU32)(x & y) | (NU32)((NU32)((NU32) ~(x)) & z));
	return result;
}

static N_INLINE(void, rot_E0YQh9cqfeV9b80YVg57S1mAmd5)(NU32* x, NU8 n) {
	(*x) = (NU32)((NU32)((NU32)((*x)) << (NU32)(n)) | (NU32)((NU32)((*x)) >> (NU32)((NU32)((NU32)(((NU32) 32)) - (NU32)(((NU32) (n)))))));
}

N_LIB_PRIVATE N_NIMCALL(void, FF_ShdGhVqwUZX4yDCc7A6Q6Q)(NU32* a, NU32 b, NU32 c, NU32 d, NU32 x, NU8 s, NU32 ac) {
	NU32 T1_;
	T1_ = (NU32)0;
	T1_ = F_junZWnvhBQX0olNRUg769cgmd5(b, c, d);
	(*a) = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((*a)) + (NU32)(T1_))) + (NU32)(x))) + (NU32)(ac));
	rot_E0YQh9cqfeV9b80YVg57S1mAmd5(a, s);
	(*a) = (NU32)((NU32)((*a)) + (NU32)(b));
}

static N_INLINE(NU32, G_junZWnvhBQX0olNRUg769cg_2md5)(NU32 x, NU32 y, NU32 z) {
	NU32 result;
	result = (NU32)0;
	result = (NU32)((NU32)(x & z) | (NU32)(y & (NU32)((NU32) ~(z))));
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, GG_ShdGhVqwUZX4yDCc7A6Q6Q_2)(NU32* a, NU32 b, NU32 c, NU32 d, NU32 x, NU8 s, NU32 ac) {
	NU32 T1_;
	T1_ = (NU32)0;
	T1_ = G_junZWnvhBQX0olNRUg769cg_2md5(b, c, d);
	(*a) = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((*a)) + (NU32)(T1_))) + (NU32)(x))) + (NU32)(ac));
	rot_E0YQh9cqfeV9b80YVg57S1mAmd5(a, s);
	(*a) = (NU32)((NU32)((*a)) + (NU32)(b));
}

static N_INLINE(NU32, H_junZWnvhBQX0olNRUg769cg_3md5)(NU32 x, NU32 y, NU32 z) {
	NU32 result;
	result = (NU32)0;
	result = (NU32)((NU32)(x ^ y) ^ z);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, HH_ShdGhVqwUZX4yDCc7A6Q6Q_3)(NU32* a, NU32 b, NU32 c, NU32 d, NU32 x, NU8 s, NU32 ac) {
	NU32 T1_;
	T1_ = (NU32)0;
	T1_ = H_junZWnvhBQX0olNRUg769cg_3md5(b, c, d);
	(*a) = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((*a)) + (NU32)(T1_))) + (NU32)(x))) + (NU32)(ac));
	rot_E0YQh9cqfeV9b80YVg57S1mAmd5(a, s);
	(*a) = (NU32)((NU32)((*a)) + (NU32)(b));
}

static N_INLINE(NU32, I_junZWnvhBQX0olNRUg769cg_4md5)(NU32 x, NU32 y, NU32 z) {
	NU32 result;
	result = (NU32)0;
	result = (NU32)(y ^ (NU32)(x | (NU32)((NU32) ~(z))));
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, II_ShdGhVqwUZX4yDCc7A6Q6Q_4)(NU32* a, NU32 b, NU32 c, NU32 d, NU32 x, NU8 s, NU32 ac) {
	NU32 T1_;
	T1_ = (NU32)0;
	T1_ = I_junZWnvhBQX0olNRUg769cg_4md5(b, c, d);
	(*a) = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((*a)) + (NU32)(T1_))) + (NU32)(x))) + (NU32)(ac));
	rot_E0YQh9cqfeV9b80YVg57S1mAmd5(a, s);
	(*a) = (NU32)((NU32)((*a)) + (NU32)(b));
}

N_LIB_PRIVATE N_NIMCALL(void, transform_FpyLDebN7eBB2pkKKmjXJg)(void* buffer, NU32* state) {
	tyArray_U0SiHM0pVagA9c71oWelQMA myBlock;
	NU32 a;
	NU32 b;
	NU32 c;
	NU32 d;
	nimZeroMem((void*)myBlock, sizeof(tyArray_U0SiHM0pVagA9c71oWelQMA));
	encode_3XCrKZ0CpOjKYafeeVPnyw(myBlock, ((NCSTRING) (buffer)));
	a = state[(((NI) 0))- 0];
	b = state[(((NI) 1))- 0];
	c = state[(((NI) 2))- 0];
	d = state[(((NI) 3))- 0];
	FF_ShdGhVqwUZX4yDCc7A6Q6Q((&a), b, c, d, myBlock[(((NI) 0))- 0], ((NU8) 7), ((NU32) IL64(3614090360)));
	FF_ShdGhVqwUZX4yDCc7A6Q6Q((&d), a, b, c, myBlock[(((NI) 1))- 0], ((NU8) 12), ((NU32) IL64(3905402710)));
	FF_ShdGhVqwUZX4yDCc7A6Q6Q((&c), d, a, b, myBlock[(((NI) 2))- 0], ((NU8) 17), ((NU32) 606105819));
	FF_ShdGhVqwUZX4yDCc7A6Q6Q((&b), c, d, a, myBlock[(((NI) 3))- 0], ((NU8) 22), ((NU32) IL64(3250441966)));
	FF_ShdGhVqwUZX4yDCc7A6Q6Q((&a), b, c, d, myBlock[(((NI) 4))- 0], ((NU8) 7), ((NU32) IL64(4118548399)));
	FF_ShdGhVqwUZX4yDCc7A6Q6Q((&d), a, b, c, myBlock[(((NI) 5))- 0], ((NU8) 12), ((NU32) 1200080426));
	FF_ShdGhVqwUZX4yDCc7A6Q6Q((&c), d, a, b, myBlock[(((NI) 6))- 0], ((NU8) 17), ((NU32) IL64(2821735955)));
	FF_ShdGhVqwUZX4yDCc7A6Q6Q((&b), c, d, a, myBlock[(((NI) 7))- 0], ((NU8) 22), ((NU32) IL64(4249261313)));
	FF_ShdGhVqwUZX4yDCc7A6Q6Q((&a), b, c, d, myBlock[(((NI) 8))- 0], ((NU8) 7), ((NU32) 1770035416));
	FF_ShdGhVqwUZX4yDCc7A6Q6Q((&d), a, b, c, myBlock[(((NI) 9))- 0], ((NU8) 12), ((NU32) IL64(2336552879)));
	FF_ShdGhVqwUZX4yDCc7A6Q6Q((&c), d, a, b, myBlock[(((NI) 10))- 0], ((NU8) 17), ((NU32) IL64(4294925233)));
	FF_ShdGhVqwUZX4yDCc7A6Q6Q((&b), c, d, a, myBlock[(((NI) 11))- 0], ((NU8) 22), ((NU32) IL64(2304563134)));
	FF_ShdGhVqwUZX4yDCc7A6Q6Q((&a), b, c, d, myBlock[(((NI) 12))- 0], ((NU8) 7), ((NU32) 1804603682));
	FF_ShdGhVqwUZX4yDCc7A6Q6Q((&d), a, b, c, myBlock[(((NI) 13))- 0], ((NU8) 12), ((NU32) IL64(4254626195)));
	FF_ShdGhVqwUZX4yDCc7A6Q6Q((&c), d, a, b, myBlock[(((NI) 14))- 0], ((NU8) 17), ((NU32) IL64(2792965006)));
	FF_ShdGhVqwUZX4yDCc7A6Q6Q((&b), c, d, a, myBlock[(((NI) 15))- 0], ((NU8) 22), ((NU32) 1236535329));
	GG_ShdGhVqwUZX4yDCc7A6Q6Q_2((&a), b, c, d, myBlock[(((NI) 1))- 0], ((NU8) 5), ((NU32) IL64(4129170786)));
	GG_ShdGhVqwUZX4yDCc7A6Q6Q_2((&d), a, b, c, myBlock[(((NI) 6))- 0], ((NU8) 9), ((NU32) IL64(3225465664)));
	GG_ShdGhVqwUZX4yDCc7A6Q6Q_2((&c), d, a, b, myBlock[(((NI) 11))- 0], ((NU8) 14), ((NU32) 643717713));
	GG_ShdGhVqwUZX4yDCc7A6Q6Q_2((&b), c, d, a, myBlock[(((NI) 0))- 0], ((NU8) 20), ((NU32) IL64(3921069994)));
	GG_ShdGhVqwUZX4yDCc7A6Q6Q_2((&a), b, c, d, myBlock[(((NI) 5))- 0], ((NU8) 5), ((NU32) IL64(3593408605)));
	GG_ShdGhVqwUZX4yDCc7A6Q6Q_2((&d), a, b, c, myBlock[(((NI) 10))- 0], ((NU8) 9), ((NU32) 38016083));
	GG_ShdGhVqwUZX4yDCc7A6Q6Q_2((&c), d, a, b, myBlock[(((NI) 15))- 0], ((NU8) 14), ((NU32) IL64(3634488961)));
	GG_ShdGhVqwUZX4yDCc7A6Q6Q_2((&b), c, d, a, myBlock[(((NI) 4))- 0], ((NU8) 20), ((NU32) IL64(3889429448)));
	GG_ShdGhVqwUZX4yDCc7A6Q6Q_2((&a), b, c, d, myBlock[(((NI) 9))- 0], ((NU8) 5), ((NU32) 568446438));
	GG_ShdGhVqwUZX4yDCc7A6Q6Q_2((&d), a, b, c, myBlock[(((NI) 14))- 0], ((NU8) 9), ((NU32) IL64(3275163606)));
	GG_ShdGhVqwUZX4yDCc7A6Q6Q_2((&c), d, a, b, myBlock[(((NI) 3))- 0], ((NU8) 14), ((NU32) IL64(4107603335)));
	GG_ShdGhVqwUZX4yDCc7A6Q6Q_2((&b), c, d, a, myBlock[(((NI) 8))- 0], ((NU8) 20), ((NU32) 1163531501));
	GG_ShdGhVqwUZX4yDCc7A6Q6Q_2((&a), b, c, d, myBlock[(((NI) 13))- 0], ((NU8) 5), ((NU32) IL64(2850285829)));
	GG_ShdGhVqwUZX4yDCc7A6Q6Q_2((&d), a, b, c, myBlock[(((NI) 2))- 0], ((NU8) 9), ((NU32) IL64(4243563512)));
	GG_ShdGhVqwUZX4yDCc7A6Q6Q_2((&c), d, a, b, myBlock[(((NI) 7))- 0], ((NU8) 14), ((NU32) 1735328473));
	GG_ShdGhVqwUZX4yDCc7A6Q6Q_2((&b), c, d, a, myBlock[(((NI) 12))- 0], ((NU8) 20), ((NU32) IL64(2368359562)));
	HH_ShdGhVqwUZX4yDCc7A6Q6Q_3((&a), b, c, d, myBlock[(((NI) 5))- 0], ((NU8) 4), ((NU32) IL64(4294588738)));
	HH_ShdGhVqwUZX4yDCc7A6Q6Q_3((&d), a, b, c, myBlock[(((NI) 8))- 0], ((NU8) 11), ((NU32) IL64(2272392833)));
	HH_ShdGhVqwUZX4yDCc7A6Q6Q_3((&c), d, a, b, myBlock[(((NI) 11))- 0], ((NU8) 16), ((NU32) 1839030562));
	HH_ShdGhVqwUZX4yDCc7A6Q6Q_3((&b), c, d, a, myBlock[(((NI) 14))- 0], ((NU8) 23), ((NU32) IL64(4259657740)));
	HH_ShdGhVqwUZX4yDCc7A6Q6Q_3((&a), b, c, d, myBlock[(((NI) 1))- 0], ((NU8) 4), ((NU32) IL64(2763975236)));
	HH_ShdGhVqwUZX4yDCc7A6Q6Q_3((&d), a, b, c, myBlock[(((NI) 4))- 0], ((NU8) 11), ((NU32) 1272893353));
	HH_ShdGhVqwUZX4yDCc7A6Q6Q_3((&c), d, a, b, myBlock[(((NI) 7))- 0], ((NU8) 16), ((NU32) IL64(4139469664)));
	HH_ShdGhVqwUZX4yDCc7A6Q6Q_3((&b), c, d, a, myBlock[(((NI) 10))- 0], ((NU8) 23), ((NU32) IL64(3200236656)));
	HH_ShdGhVqwUZX4yDCc7A6Q6Q_3((&a), b, c, d, myBlock[(((NI) 13))- 0], ((NU8) 4), ((NU32) 681279174));
	HH_ShdGhVqwUZX4yDCc7A6Q6Q_3((&d), a, b, c, myBlock[(((NI) 0))- 0], ((NU8) 11), ((NU32) IL64(3936430074)));
	HH_ShdGhVqwUZX4yDCc7A6Q6Q_3((&c), d, a, b, myBlock[(((NI) 3))- 0], ((NU8) 16), ((NU32) IL64(3572445317)));
	HH_ShdGhVqwUZX4yDCc7A6Q6Q_3((&b), c, d, a, myBlock[(((NI) 6))- 0], ((NU8) 23), ((NU32) 76029189));
	HH_ShdGhVqwUZX4yDCc7A6Q6Q_3((&a), b, c, d, myBlock[(((NI) 9))- 0], ((NU8) 4), ((NU32) IL64(3654602809)));
	HH_ShdGhVqwUZX4yDCc7A6Q6Q_3((&d), a, b, c, myBlock[(((NI) 12))- 0], ((NU8) 11), ((NU32) IL64(3873151461)));
	HH_ShdGhVqwUZX4yDCc7A6Q6Q_3((&c), d, a, b, myBlock[(((NI) 15))- 0], ((NU8) 16), ((NU32) 530742520));
	HH_ShdGhVqwUZX4yDCc7A6Q6Q_3((&b), c, d, a, myBlock[(((NI) 2))- 0], ((NU8) 23), ((NU32) IL64(3299628645)));
	II_ShdGhVqwUZX4yDCc7A6Q6Q_4((&a), b, c, d, myBlock[(((NI) 0))- 0], ((NU8) 6), ((NU32) IL64(4096336452)));
	II_ShdGhVqwUZX4yDCc7A6Q6Q_4((&d), a, b, c, myBlock[(((NI) 7))- 0], ((NU8) 10), ((NU32) 1126891415));
	II_ShdGhVqwUZX4yDCc7A6Q6Q_4((&c), d, a, b, myBlock[(((NI) 14))- 0], ((NU8) 15), ((NU32) IL64(2878612391)));
	II_ShdGhVqwUZX4yDCc7A6Q6Q_4((&b), c, d, a, myBlock[(((NI) 5))- 0], ((NU8) 21), ((NU32) IL64(4237533241)));
	II_ShdGhVqwUZX4yDCc7A6Q6Q_4((&a), b, c, d, myBlock[(((NI) 12))- 0], ((NU8) 6), ((NU32) 1700485571));
	II_ShdGhVqwUZX4yDCc7A6Q6Q_4((&d), a, b, c, myBlock[(((NI) 3))- 0], ((NU8) 10), ((NU32) IL64(2399980690)));
	II_ShdGhVqwUZX4yDCc7A6Q6Q_4((&c), d, a, b, myBlock[(((NI) 10))- 0], ((NU8) 15), ((NU32) IL64(4293915773)));
	II_ShdGhVqwUZX4yDCc7A6Q6Q_4((&b), c, d, a, myBlock[(((NI) 1))- 0], ((NU8) 21), ((NU32) IL64(2240044497)));
	II_ShdGhVqwUZX4yDCc7A6Q6Q_4((&a), b, c, d, myBlock[(((NI) 8))- 0], ((NU8) 6), ((NU32) 1873313359));
	II_ShdGhVqwUZX4yDCc7A6Q6Q_4((&d), a, b, c, myBlock[(((NI) 15))- 0], ((NU8) 10), ((NU32) IL64(4264355552)));
	II_ShdGhVqwUZX4yDCc7A6Q6Q_4((&c), d, a, b, myBlock[(((NI) 6))- 0], ((NU8) 15), ((NU32) IL64(2734768916)));
	II_ShdGhVqwUZX4yDCc7A6Q6Q_4((&b), c, d, a, myBlock[(((NI) 13))- 0], ((NU8) 21), ((NU32) 1309151649));
	II_ShdGhVqwUZX4yDCc7A6Q6Q_4((&a), b, c, d, myBlock[(((NI) 4))- 0], ((NU8) 6), ((NU32) IL64(4149444226)));
	II_ShdGhVqwUZX4yDCc7A6Q6Q_4((&d), a, b, c, myBlock[(((NI) 11))- 0], ((NU8) 10), ((NU32) IL64(3174756917)));
	II_ShdGhVqwUZX4yDCc7A6Q6Q_4((&c), d, a, b, myBlock[(((NI) 2))- 0], ((NU8) 15), ((NU32) 718787259));
	II_ShdGhVqwUZX4yDCc7A6Q6Q_4((&b), c, d, a, myBlock[(((NI) 9))- 0], ((NU8) 21), ((NU32) IL64(3951481745)));
	state[(((NI) 0))- 0] = (NU32)((NU32)(state[(((NI) 0))- 0]) + (NU32)(a));
	state[(((NI) 1))- 0] = (NU32)((NU32)(state[(((NI) 1))- 0]) + (NU32)(b));
	state[(((NI) 2))- 0] = (NU32)((NU32)(state[(((NI) 2))- 0]) + (NU32)(c));
	state[(((NI) 3))- 0] = (NU32)((NU32)(state[(((NI) 3))- 0]) + (NU32)(d));
}

N_LIB_PRIVATE N_NIMCALL(void, md5Update_3dyWcdKqKqoei9csU09cRuCA)(tyObject_MD5Context_oMciKUdSdCaIeMtcxbiPOw* c, NCSTRING input, NI len) {
	NCSTRING input_2;
	NI Index;
	NI PartLen;
	NI TM_evv4Z8qaB9aehA3eX73W1Cw_2;
	input_2 = input;
	Index = ((NI)chckRange((NU32)((NU32)((NU32)((*c).count[(((NI) 0))- 0]) >> (NU32)(((NI) 3))) & ((NI) 63)), ((NI) (-2147483647 -1)), ((NI) 2147483647)));
	(*c).count[(((NI) 0))- 0] = (NU32)((NU32)((*c).count[(((NI) 0))- 0]) + (NU32)((NU32)((NU32)(((NU32)chckRangeU(len, ((NU32) 0), ((NU32) IL64(4294967295))))) << (NU32)(((NI) 3)))));
	{
		if (!((NU32)((*c).count[(((NI) 0))- 0]) < (NU32)((NU32)((NU32)(((NU32)chckRangeU(len, ((NU32) 0), ((NU32) IL64(4294967295))))) << (NU32)(((NI) 3)))))) goto LA3_;
		(*c).count[(((NI) 1))- 0] = (NU32)((NU32)((*c).count[(((NI) 1))- 0]) + (NU32)(((NU32) 1)));
	}
	LA3_: ;
	(*c).count[(((NI) 1))- 0] = (NU32)((NU32)((*c).count[(((NI) 1))- 0]) + (NU32)((NU32)((NU32)(((NU32)chckRangeU(len, ((NU32) 0), ((NU32) IL64(4294967295))))) >> (NU32)(((NI) 29)))));
	TM_evv4Z8qaB9aehA3eX73W1Cw_2 = subInt(((NI) 64), Index);
	PartLen = (NI)(TM_evv4Z8qaB9aehA3eX73W1Cw_2);
	{
		NI i;
		NI TM_evv4Z8qaB9aehA3eX73W1Cw_10;
		if (!(PartLen <= len)) goto LA7_;
		if ((NU)(Index) > (NU)(63)) raiseIndexError2(Index, 63);
		copyMem_M04YC71iJg1N7gBF3HZTngsystem(((void*) ((&(*c).buffer[(Index)- 0]))), ((void*) (input_2)), ((NI)chckRange(PartLen, ((NI) 0), ((NI) 2147483647))));
		transform_FpyLDebN7eBB2pkKKmjXJg(((void*) ((*c).buffer)), (*c).state);
		i = PartLen;
		{
			while (1) {
				NI TM_evv4Z8qaB9aehA3eX73W1Cw_8;
				NI TM_evv4Z8qaB9aehA3eX73W1Cw_9;
				TM_evv4Z8qaB9aehA3eX73W1Cw_8 = addInt(i, ((NI) 63));
				if (!((NI)(TM_evv4Z8qaB9aehA3eX73W1Cw_8) < len)) goto LA10;
				transform_FpyLDebN7eBB2pkKKmjXJg(((void*) ((&input_2[i]))), (*c).state);
				TM_evv4Z8qaB9aehA3eX73W1Cw_9 = addInt(i, ((NI) 64));
				i = (NI)(TM_evv4Z8qaB9aehA3eX73W1Cw_9);
			} LA10: ;
		}
		TM_evv4Z8qaB9aehA3eX73W1Cw_10 = subInt(len, i);
		copyMem_M04YC71iJg1N7gBF3HZTngsystem(((void*) ((&(*c).buffer[(((NI) 0))- 0]))), ((void*) ((&input_2[i]))), ((NI)chckRange((NI)(TM_evv4Z8qaB9aehA3eX73W1Cw_10), ((NI) 0), ((NI) 2147483647))));
	}
	goto LA5_;
	LA7_: ;
	{
		if ((NU)(Index) > (NU)(63)) raiseIndexError2(Index, 63);
		copyMem_M04YC71iJg1N7gBF3HZTngsystem(((void*) ((&(*c).buffer[(Index)- 0]))), ((void*) ((&input_2[((NI) 0)]))), ((NI)chckRange(len, ((NI) 0), ((NI) 2147483647))));
	}
	LA5_: ;
}

static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s) {
	NCSTRING result;
	result = (NCSTRING)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (s == NIM_NIL);
		if (T3_) goto LA4_;
		T3_ = ((*s).Sup.len == ((NI) 0));
		LA4_: ;
		if (!T3_) goto LA5_;
		result = "";
	}
	goto LA1_;
	LA5_: ;
	{
		result = ((NCSTRING) ((*s).data));
	}
	LA1_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, decode_qtGCMfOlZdT3LJ4HIRsaNA)(NU8* dest, NI destLen_0, NU32* src, NI srcLen_0) {
	NI i;
	i = ((NI) 0);
	{
		NI j;
		NI colontmp_;
		NI res;
		j = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = (srcLen_0-1);
		res = ((NI) 0);
		{
			while (1) {
				NI TM_evv4Z8qaB9aehA3eX73W1Cw_11;
				NI TM_evv4Z8qaB9aehA3eX73W1Cw_12;
				NI TM_evv4Z8qaB9aehA3eX73W1Cw_13;
				NI TM_evv4Z8qaB9aehA3eX73W1Cw_14;
				NI TM_evv4Z8qaB9aehA3eX73W1Cw_15;
				if (!(res <= colontmp_)) goto LA3;
				j = res;
				if ((NU)(i) >= (NU)(destLen_0)) raiseIndexError2(i,destLen_0-1);
				if ((NU)(j) >= (NU)(srcLen_0)) raiseIndexError2(j,srcLen_0-1);
				dest[i] = ((NU8)chckRange((NU32)(src[j] & ((NU32) 255)), ((NU8) 0), ((NU8) 255)));
				TM_evv4Z8qaB9aehA3eX73W1Cw_11 = addInt(i, ((NI) 1));
				if ((NU)((NI)(TM_evv4Z8qaB9aehA3eX73W1Cw_11)) >= (NU)(destLen_0)) raiseIndexError2((NI)(TM_evv4Z8qaB9aehA3eX73W1Cw_11),destLen_0-1);
				if ((NU)(j) >= (NU)(srcLen_0)) raiseIndexError2(j,srcLen_0-1);
				dest[(NI)(TM_evv4Z8qaB9aehA3eX73W1Cw_11)] = ((NU8)chckRange((NU32)((NU32)((NU32)(src[j]) >> (NU32)(((NI) 8))) & ((NU32) 255)), ((NU8) 0), ((NU8) 255)));
				TM_evv4Z8qaB9aehA3eX73W1Cw_12 = addInt(i, ((NI) 2));
				if ((NU)((NI)(TM_evv4Z8qaB9aehA3eX73W1Cw_12)) >= (NU)(destLen_0)) raiseIndexError2((NI)(TM_evv4Z8qaB9aehA3eX73W1Cw_12),destLen_0-1);
				if ((NU)(j) >= (NU)(srcLen_0)) raiseIndexError2(j,srcLen_0-1);
				dest[(NI)(TM_evv4Z8qaB9aehA3eX73W1Cw_12)] = ((NU8)chckRange((NU32)((NU32)((NU32)(src[j]) >> (NU32)(((NI) 16))) & ((NU32) 255)), ((NU8) 0), ((NU8) 255)));
				TM_evv4Z8qaB9aehA3eX73W1Cw_13 = addInt(i, ((NI) 3));
				if ((NU)((NI)(TM_evv4Z8qaB9aehA3eX73W1Cw_13)) >= (NU)(destLen_0)) raiseIndexError2((NI)(TM_evv4Z8qaB9aehA3eX73W1Cw_13),destLen_0-1);
				if ((NU)(j) >= (NU)(srcLen_0)) raiseIndexError2(j,srcLen_0-1);
				dest[(NI)(TM_evv4Z8qaB9aehA3eX73W1Cw_13)] = ((NU8)chckRange((NU32)((NU32)((NU32)(src[j]) >> (NU32)(((NI) 24))) & ((NU32) 255)), ((NU8) 0), ((NU8) 255)));
				TM_evv4Z8qaB9aehA3eX73W1Cw_14 = addInt(i, ((NI) 4));
				i = (NI)(TM_evv4Z8qaB9aehA3eX73W1Cw_14);
				TM_evv4Z8qaB9aehA3eX73W1Cw_15 = addInt(res, ((NI) 1));
				res = (NI)(TM_evv4Z8qaB9aehA3eX73W1Cw_15);
			} LA3: ;
		}
	}
}

N_LIB_PRIVATE N_NIMCALL(void, md5Final_CQoglTaDBxWEuKEO9ah9bXuQ)(tyObject_MD5Context_oMciKUdSdCaIeMtcxbiPOw* c, NU8* digest) {
	tyArray_cdsir9aPB24hAk6k77P9b9bCA Bits;
	NI PadLen;
	NI Index;
	nimZeroMem((void*)Bits, sizeof(tyArray_cdsir9aPB24hAk6k77P9b9bCA));
	PadLen = (NI)0;
	decode_qtGCMfOlZdT3LJ4HIRsaNA(Bits, 8, (*c).count, 2);
	Index = ((NI)chckRange((NU32)((NU32)((NU32)((*c).count[(((NI) 0))- 0]) >> (NU32)(((NI) 3))) & ((NI) 63)), ((NI) (-2147483647 -1)), ((NI) 2147483647)));
	{
		NI TM_evv4Z8qaB9aehA3eX73W1Cw_16;
		if (!(Index < ((NI) 56))) goto LA3_;
		TM_evv4Z8qaB9aehA3eX73W1Cw_16 = subInt(((NI) 56), Index);
		PadLen = (NI)(TM_evv4Z8qaB9aehA3eX73W1Cw_16);
	}
	goto LA1_;
	LA3_: ;
	{
		NI TM_evv4Z8qaB9aehA3eX73W1Cw_17;
		TM_evv4Z8qaB9aehA3eX73W1Cw_17 = subInt(((NI) 120), Index);
		PadLen = (NI)(TM_evv4Z8qaB9aehA3eX73W1Cw_17);
	}
	LA1_: ;
	md5Update_3dyWcdKqKqoei9csU09cRuCA(c, "\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
"\000", PadLen);
	md5Update_3dyWcdKqKqoei9csU09cRuCA(c, ((NCSTRING) (Bits)), ((NI) 8));
	decode_qtGCMfOlZdT3LJ4HIRsaNA(digest, 16, (*c).state, 4);
	zeroMem_9cLyRtoQz0YlIMEd4qW7Hdgsystem(((void*) (c)), ((NI) 88));
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar__bUodBpefvLgLc2LbngPSqw)(tyArray_qtqsWM5aXmcpMIVmvq3kAA d) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = ((NimStringDesc*) NIM_NIL);
	{
		NI i;
		NI res;
		i = (NI)0;
		res = ((NI) 0);
		{
			while (1) {
				NI TM_evv4Z8qaB9aehA3eX73W1Cw_19;
				if (!(res <= ((NI) 15))) goto LA3;
				i = res;
				if ((NU)(i) > (NU)(15)) raiseIndexError2(i, 15);
				if ((NU)((NI)((NI)((NI32)(((NI) (d[(i)- 0]))) >> (NU32)(((NI) 4))) & ((NI) 15))) >= (NU)(((NimStringDesc*) &TM_evv4Z8qaB9aehA3eX73W1Cw_18) ? ((NimStringDesc*) &TM_evv4Z8qaB9aehA3eX73W1Cw_18)->Sup.len : 0)) raiseIndexError2((NI)((NI)((NI32)(((NI) (d[(i)- 0]))) >> (NU32)(((NI) 4))) & ((NI) 15)),(((NimStringDesc*) &TM_evv4Z8qaB9aehA3eX73W1Cw_18) ? ((NimStringDesc*) &TM_evv4Z8qaB9aehA3eX73W1Cw_18)->Sup.len : 0)-1);
				result = addChar(result, ((NimStringDesc*) &TM_evv4Z8qaB9aehA3eX73W1Cw_18)->data[(NI)((NI)((NI32)(((NI) (d[(i)- 0]))) >> (NU32)(((NI) 4))) & ((NI) 15))]);
				if ((NU)(i) > (NU)(15)) raiseIndexError2(i, 15);
				if ((NU)((NI)(((NI) (d[(i)- 0])) & ((NI) 15))) >= (NU)(((NimStringDesc*) &TM_evv4Z8qaB9aehA3eX73W1Cw_18) ? ((NimStringDesc*) &TM_evv4Z8qaB9aehA3eX73W1Cw_18)->Sup.len : 0)) raiseIndexError2((NI)(((NI) (d[(i)- 0])) & ((NI) 15)),(((NimStringDesc*) &TM_evv4Z8qaB9aehA3eX73W1Cw_18) ? ((NimStringDesc*) &TM_evv4Z8qaB9aehA3eX73W1Cw_18)->Sup.len : 0)-1);
				result = addChar(result, ((NimStringDesc*) &TM_evv4Z8qaB9aehA3eX73W1Cw_18)->data[(NI)(((NI) (d[(i)- 0])) & ((NI) 15))]);
				TM_evv4Z8qaB9aehA3eX73W1Cw_19 = addInt(res, ((NI) 1));
				res = (NI)(TM_evv4Z8qaB9aehA3eX73W1Cw_19);
			} LA3: ;
		}
	}
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, getMD5_kEzF9cC2zt4kZNszZVUnKEA)(NimStringDesc* s) {
	NimStringDesc* result;
	tyObject_MD5Context_oMciKUdSdCaIeMtcxbiPOw c;
	tyArray_qtqsWM5aXmcpMIVmvq3kAA d;
	result = (NimStringDesc*)0;
	nimZeroMem((void*)(&c), sizeof(tyObject_MD5Context_oMciKUdSdCaIeMtcxbiPOw));
	nimZeroMem((void*)d, sizeof(tyArray_qtqsWM5aXmcpMIVmvq3kAA));
	md5Init_aFJbJ6Fb5boL1UBjNazO4A((&c));
	md5Update_3dyWcdKqKqoei9csU09cRuCA((&c), nimToCStringConv(s), (s ? s->Sup.len : 0));
	md5Final_CQoglTaDBxWEuKEO9ah9bXuQ((&c), d);
	result = dollar__bUodBpefvLgLc2LbngPSqw(d);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_md5DatInit000)(void) {
NTI_qtqsWM5aXmcpMIVmvq3kAA_.size = sizeof(tyArray_qtqsWM5aXmcpMIVmvq3kAA);
NTI_qtqsWM5aXmcpMIVmvq3kAA_.kind = 16;
NTI_qtqsWM5aXmcpMIVmvq3kAA_.base = (&NTI_k3HXouOuhqAKq0dx450lXQ_);
NTI_qtqsWM5aXmcpMIVmvq3kAA_.flags = 3;
}

