/* Generated by Nim Compiler v0.20.0 */
/*   (c) 2019 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <sys/types.h>
#include <unistd.h>
#include <sys/syscall.h>
#include <signal.h>
#include <time.h>
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
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NOINLINE(void, raiseOverflow)(void);
TNimType NTI_r9bTMVI8f19ah9b11jMgY4kPg_;

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
		T7_ = (a == ((NI) (-2147483647 -1)));
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

N_LIB_PRIVATE N_NIMCALL(int, sigtimedwait_rfmeg1U9coJfbpyxllm3vWQ)(sigset_t* a1, siginfo_t* a2, struct timespec* a3) {
	int result;
	NI TM_mJPr4mHlDfNAl9asG6X7NFA_2;
	long T1_;
	result = (int)0;
	TM_mJPr4mHlDfNAl9asG6X7NFA_2 = divInt(NSIG, ((NI) 8));
	T1_ = (long)0;
	T1_ = syscall(__NR_rt_sigtimedwait, a1, a2, a3, (NI)(TM_mJPr4mHlDfNAl9asG6X7NFA_2));
	result = ((int) (T1_));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_posixDatInit000)(void) {
NTI_r9bTMVI8f19ah9b11jMgY4kPg_.size = sizeof(pid_t);
NTI_r9bTMVI8f19ah9b11jMgY4kPg_.kind = 34;
NTI_r9bTMVI8f19ah9b11jMgY4kPg_.base = 0;
NTI_r9bTMVI8f19ah9b11jMgY4kPg_.flags = 3;
}

