/* Generated by Nim Compiler v0.19.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
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
typedef struct tyObject_Target_9abOl5DLX8suLujOaHSvGzw tyObject_Target_9abOl5DLX8suLujOaHSvGzw;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyTuple_5L3fCt9bX0gyEcO30ervPLw tyTuple_5L3fCt9bX0gyEcO30ervPLw;
typedef struct tyTuple_UpiOGlu5Ux6DLM73wSrdpg tyTuple_UpiOGlu5Ux6DLM73wSrdpg;
typedef NU8 tyEnum_TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag;
typedef NU8 tyEnum_TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_Target_9abOl5DLX8suLujOaHSvGzw {
tyEnum_TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag targetCPU;
tyEnum_TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag hostCPU;
tyEnum_TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ targetOS;
tyEnum_TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ hostOS;
NI intSize;
NI floatSize;
NI ptrSize;
NimStringDesc* tnl;
};
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
typedef NU8 tySet_tyEnum_TInfoOSProp_thetQwB9agpeQ13qFmAcWhg;
struct tyTuple_5L3fCt9bX0gyEcO30ervPLw {
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
tySet_tyEnum_TInfoOSProp_thetQwB9agpeQ13qFmAcWhg Field12;
};
typedef tyTuple_5L3fCt9bX0gyEcO30ervPLw tyArray_AvOd9bOqQkvZ6R9aJoQwnnEg[28];
typedef NU8 tyEnum_TEndian_bQ3yFYQJojZPNYsZnS7Zjg;
struct tyTuple_UpiOGlu5Ux6DLM73wSrdpg {
NimStringDesc* Field0;
NI Field1;
tyEnum_TEndian_bQ3yFYQJojZPNYsZnS7Zjg Field2;
NI Field3;
NI Field4;
};
typedef tyTuple_UpiOGlu5Ux6DLM73wSrdpg tyArray_2EeRc2Lr9cCM9aL82QsBOFXA[22];
N_LIB_PRIVATE N_NIMCALL(tyEnum_TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ, nameToOS_G9aqbBV7MHYHy8iWiblt9c6w)(NimStringDesc* name);
N_LIB_PRIVATE N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
N_LIB_PRIVATE N_NIMCALL(tyEnum_TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag, nameToCPU_JQ5BAe9a4dm5IfbYpemguNA)(NimStringDesc* name);
N_LIB_PRIVATE N_NIMCALL(void, setTarget_mWjcPmfhjMDEM14Os7YzCg)(tyObject_Target_9abOl5DLX8suLujOaHSvGzw* t, tyEnum_TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ o, tyEnum_TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag c);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
TNimType NTI_9abOl5DLX8suLujOaHSvGzw_;
TNimType NTI_XYDt7D1G3qcClFyZy1Ky9ag_;
TNimType NTI_s7Mlr1t66SUqP6BKJMXLaQ_;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA_;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg_;
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_9, "DOS", 3);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_10, "..", 2);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_11, "$1.dll", 6);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_12, "/", 1);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_13, ".obj", 4);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_14, "\015\012", 2);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_15, ";", 1);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_16, "\\", 1);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_17, ".bat", 4);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_18, ".", 1);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_19, ".exe", 4);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_20, "Windows", 7);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_21, "OS2", 3);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_22, "Linux", 5);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_23, "lib$1.so", 8);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_24, ".o", 2);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_25, "\012", 1);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_26, ":", 1);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_27, ".sh", 3);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_28, "MorphOS", 7);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_29, "SkyOS", 5);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_30, "Solaris", 7);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_31, "Irix", 4);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_32, "NetBSD", 6);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_33, "FreeBSD", 7);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_34, "OpenBSD", 7);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_35, "DragonFly", 9);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_36, "AIX", 3);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_37, "PalmOS", 6);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_38, "QNX", 3);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_39, "Amiga", 5);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_40, "$1.library", 10);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_41, "Atari", 5);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_42, ".tpp", 4);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_43, "Netware", 7);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_44, "$1.nlm", 6);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_45, ".nlm", 4);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_46, "MacOS", 5);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_47, "::", 2);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_48, "$1Lib", 5);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_49, "\015", 1);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_50, ",", 1);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_51, "MacOSX", 6);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_52, "lib$1.dylib", 11);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_53, "Haiku", 5);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_54, "Android", 7);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_55, "VxWorks", 7);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_56, ".vxe", 4);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_57, "Genode", 6);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_58, "$1.lib.so", 9);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_59, "JS", 2);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_60, "NimVM", 5);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_61, "Standalone", 10);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_62, "NintendoSwitch", 14);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_63, ".elf", 4);
NIM_CONST tyArray_AvOd9bOqQkvZ6R9aJoQwnnEg OS_Jx0qy9c9bSo4fGkMxUfUaAaw = {{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_9),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_10),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_11),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_13),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_14),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_15),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_16),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_17),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_19),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
2}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_20),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_10),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_11),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_13),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_14),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_15),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_16),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_17),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_19),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
2}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_21),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_10),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_11),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_13),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_14),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_15),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_16),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_17),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_19),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
2}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_22),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_10),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_24),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_26),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_27),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
((NimStringDesc*) NIM_NIL),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
5}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_28),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_10),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_24),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_26),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_27),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
((NimStringDesc*) NIM_NIL),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
5}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_29),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_10),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_24),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_26),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_27),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
((NimStringDesc*) NIM_NIL),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
5}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_30),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_10),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_24),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_26),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_27),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
((NimStringDesc*) NIM_NIL),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
5}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_10),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_24),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_26),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_27),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
((NimStringDesc*) NIM_NIL),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
5}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_32),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_10),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_24),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_26),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_27),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
((NimStringDesc*) NIM_NIL),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
5}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_33),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_10),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_24),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_26),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_27),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
((NimStringDesc*) NIM_NIL),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
5}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_34),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_10),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_24),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_26),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_27),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
((NimStringDesc*) NIM_NIL),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
5}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_35),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_10),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_24),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_26),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_27),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
((NimStringDesc*) NIM_NIL),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
5}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_36),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_10),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_24),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_26),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_27),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
((NimStringDesc*) NIM_NIL),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
5}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_37),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_10),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_24),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_26),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_27),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
((NimStringDesc*) NIM_NIL),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
1}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_38),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_10),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_24),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_26),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_27),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
((NimStringDesc*) NIM_NIL),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
5}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_10),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_40),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_24),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_26),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_27),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
((NimStringDesc*) NIM_NIL),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
1}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_41),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_10),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_11),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_24),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_26),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) NIM_NIL),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_42),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
1}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_43),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_10),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_44),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) NIM_NIL),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_14),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_26),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_27),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_45),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
2}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_46),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_47),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_48),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_26),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_24),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_49),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_50),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_26),
((NimStringDesc*) NIM_NIL),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_26),
((NimStringDesc*) NIM_NIL),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
2}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_51),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_10),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_52),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_26),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_24),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_26),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_27),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
((NimStringDesc*) NIM_NIL),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
13}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_53),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_10),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_26),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_24),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_26),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_27),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
((NimStringDesc*) NIM_NIL),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
13}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_54),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_10),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_24),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_26),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_27),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
((NimStringDesc*) NIM_NIL),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
5}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_55),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_10),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_24),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_15),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_16),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_27),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_56),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
13}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_57),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_10),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_58),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_24),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_26),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) NIM_NIL),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) NIM_NIL),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
9}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_59),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_10),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_24),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_26),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_27),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
((NimStringDesc*) NIM_NIL),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
0}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_60),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_10),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_24),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_26),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_27),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
((NimStringDesc*) NIM_NIL),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
0}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_61),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_10),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_24),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_26),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_27),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
((NimStringDesc*) NIM_NIL),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
0}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_62),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_10),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_24),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_26),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_27),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_63),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
5}
}
;
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_64, "linux", 5);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_65, "i386", 4);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_66, "m68k", 4);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_67, "alpha", 5);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_68, "powerpc", 7);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_69, "powerpc64", 9);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_70, "powerpc64el", 11);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_71, "sparc", 5);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_72, "vm", 2);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_73, "ia64", 4);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_74, "amd64", 5);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_75, "mips", 4);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_76, "mipsel", 6);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_77, "arm", 3);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_78, "arm64", 5);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_79, "js", 2);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_80, "nimvm", 5);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_81, "avr", 3);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_82, "msp430", 6);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_83, "sparc64", 7);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_84, "mips64", 6);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_85, "mips64el", 8);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_86, "riscv64", 7);
NIM_CONST tyArray_2EeRc2Lr9cCM9aL82QsBOFXA CPU_uYXopJX8pM87pQDCtmgWfQ = {{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_65),
((NI) 32),
((tyEnum_TEndian_bQ3yFYQJojZPNYsZnS7Zjg) 0),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_66),
((NI) 32),
((tyEnum_TEndian_bQ3yFYQJojZPNYsZnS7Zjg) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_67),
((NI) 64),
((tyEnum_TEndian_bQ3yFYQJojZPNYsZnS7Zjg) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_68),
((NI) 32),
((tyEnum_TEndian_bQ3yFYQJojZPNYsZnS7Zjg) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_69),
((NI) 64),
((tyEnum_TEndian_bQ3yFYQJojZPNYsZnS7Zjg) 1),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_70),
((NI) 64),
((tyEnum_TEndian_bQ3yFYQJojZPNYsZnS7Zjg) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_71),
((NI) 32),
((tyEnum_TEndian_bQ3yFYQJojZPNYsZnS7Zjg) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_72),
((NI) 32),
((tyEnum_TEndian_bQ3yFYQJojZPNYsZnS7Zjg) 0),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_73),
((NI) 64),
((tyEnum_TEndian_bQ3yFYQJojZPNYsZnS7Zjg) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_74),
((NI) 64),
((tyEnum_TEndian_bQ3yFYQJojZPNYsZnS7Zjg) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_75),
((NI) 32),
((tyEnum_TEndian_bQ3yFYQJojZPNYsZnS7Zjg) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_76),
((NI) 32),
((tyEnum_TEndian_bQ3yFYQJojZPNYsZnS7Zjg) 0),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_77),
((NI) 32),
((tyEnum_TEndian_bQ3yFYQJojZPNYsZnS7Zjg) 0),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_78),
((NI) 64),
((tyEnum_TEndian_bQ3yFYQJojZPNYsZnS7Zjg) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_79),
((NI) 32),
((tyEnum_TEndian_bQ3yFYQJojZPNYsZnS7Zjg) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_80),
((NI) 32),
((tyEnum_TEndian_bQ3yFYQJojZPNYsZnS7Zjg) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_81),
((NI) 16),
((tyEnum_TEndian_bQ3yFYQJojZPNYsZnS7Zjg) 0),
((NI) 32),
((NI) 16)}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_82),
((NI) 16),
((tyEnum_TEndian_bQ3yFYQJojZPNYsZnS7Zjg) 0),
((NI) 32),
((NI) 16)}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_83),
((NI) 64),
((tyEnum_TEndian_bQ3yFYQJojZPNYsZnS7Zjg) 1),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_84),
((NI) 64),
((tyEnum_TEndian_bQ3yFYQJojZPNYsZnS7Zjg) 1),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_85),
((NI) 64),
((tyEnum_TEndian_bQ3yFYQJojZPNYsZnS7Zjg) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_86),
((NI) 64),
((tyEnum_TEndian_bQ3yFYQJojZPNYsZnS7Zjg) 0),
((NI) 64),
((NI) 64)}
}
;

N_LIB_PRIVATE N_NIMCALL(tyEnum_TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ, nameToOS_G9aqbBV7MHYHy8iWiblt9c6w)(NimStringDesc* name) {
	tyEnum_TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ result;
{	result = (tyEnum_TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ)0;
	{
		tyEnum_TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ i;
		NI res;
		i = (tyEnum_TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ)0;
		res = ((NI) 1);
		{
			while (1) {
				if (!(res <= ((NI) 28))) goto LA3;
				i = ((tyEnum_TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ) (res));
				{
					NI T6_;
					T6_ = (NI)0;
					T6_ = nsuCmpIgnoreStyle(name, OS_Jx0qy9c9bSo4fGkMxUfUaAaw[(i)- 1].Field0);
					if (!(T6_ == ((NI) 0))) goto LA7_;
					result = i;
					goto BeforeRet_;
				}
				LA7_: ;
				res += ((NI) 1);
			} LA3: ;
		}
	}
	result = ((tyEnum_TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ) 0);
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyEnum_TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag, nameToCPU_JQ5BAe9a4dm5IfbYpemguNA)(NimStringDesc* name) {
	tyEnum_TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag result;
{	result = (tyEnum_TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag)0;
	{
		tyEnum_TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag i;
		NI res;
		i = (tyEnum_TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag)0;
		res = ((NI) 1);
		{
			while (1) {
				if (!(res <= ((NI) 22))) goto LA3;
				i = ((tyEnum_TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag) (res));
				{
					NI T6_;
					T6_ = (NI)0;
					T6_ = nsuCmpIgnoreStyle(name, CPU_uYXopJX8pM87pQDCtmgWfQ[(i)- 1].Field0);
					if (!(T6_ == ((NI) 0))) goto LA7_;
					result = i;
					goto BeforeRet_;
				}
				LA7_: ;
				res += ((NI) 1);
			} LA3: ;
		}
	}
	result = ((tyEnum_TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag) 0);
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, setTarget_mWjcPmfhjMDEM14Os7YzCg)(tyObject_Target_9abOl5DLX8suLujOaHSvGzw* t, tyEnum_TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ o, tyEnum_TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag c) {
	(*t).targetCPU = c;
	(*t).targetOS = o;
	(*t).intSize = (NI)(CPU_uYXopJX8pM87pQDCtmgWfQ[(c)- 1].Field1 / ((NI) 8));
	(*t).floatSize = (NI)(CPU_uYXopJX8pM87pQDCtmgWfQ[(c)- 1].Field3 / ((NI) 8));
	(*t).ptrSize = (NI)(CPU_uYXopJX8pM87pQDCtmgWfQ[(c)- 1].Field4 / ((NI) 8));
	unsureAsgnRef((void**) (&(*t).tnl), copyString(OS_Jx0qy9c9bSo4fGkMxUfUaAaw[(o)- 1].Field5));
}

N_LIB_PRIVATE N_NIMCALL(void, setTargetFromSystem_iZooSBzZIOR00RkBIPinTg)(tyObject_Target_9abOl5DLX8suLujOaHSvGzw* t) {
	(*t).hostOS = nameToOS_G9aqbBV7MHYHy8iWiblt9c6w(((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_64));
	(*t).hostCPU = nameToCPU_JQ5BAe9a4dm5IfbYpemguNA(((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_69));
	setTarget_mWjcPmfhjMDEM14Os7YzCg(t, (*t).hostOS, (*t).hostCPU);
}
N_LIB_PRIVATE N_NIMCALL(void, compiler_platformInit000)(void) {
{
	TFrame FR_; FR_.len = 0;
}
}

N_LIB_PRIVATE N_NIMCALL(void, compiler_platformDatInit000)(void) {
static TNimNode* TM_LEa0rTUoGHqcCT74IoUuTg_2[8];
static TNimNode* TM_LEa0rTUoGHqcCT74IoUuTg_3[23];
NI TM_LEa0rTUoGHqcCT74IoUuTg_5;
static char* NIM_CONST TM_LEa0rTUoGHqcCT74IoUuTg_4[23] = {
"cpuNone", 
"cpuI386", 
"cpuM68k", 
"cpuAlpha", 
"cpuPowerpc", 
"cpuPowerpc64", 
"cpuPowerpc64el", 
"cpuSparc", 
"cpuVm", 
"cpuIa64", 
"cpuAmd64", 
"cpuMips", 
"cpuMipsel", 
"cpuArm", 
"cpuArm64", 
"cpuJS", 
"cpuNimVM", 
"cpuAVR", 
"cpuMSP430", 
"cpuSparc64", 
"cpuMips64", 
"cpuMips64el", 
"cpuRiscV64"};
static TNimNode* TM_LEa0rTUoGHqcCT74IoUuTg_6[29];
NI TM_LEa0rTUoGHqcCT74IoUuTg_8;
static char* NIM_CONST TM_LEa0rTUoGHqcCT74IoUuTg_7[29] = {
"osNone", 
"osDos", 
"osWindows", 
"osOs2", 
"osLinux", 
"osMorphos", 
"osSkyos", 
"osSolaris", 
"osIrix", 
"osNetbsd", 
"osFreebsd", 
"osOpenbsd", 
"osDragonfly", 
"osAix", 
"osPalmos", 
"osQnx", 
"osAmiga", 
"osAtari", 
"osNetware", 
"osMacos", 
"osMacosx", 
"osHaiku", 
"osAndroid", 
"osVxworks", 
"osGenode", 
"osJS", 
"osNimVM", 
"osStandalone", 
"osNintendoSwitch"};
static TNimNode TM_LEa0rTUoGHqcCT74IoUuTg_0[63];
NTI_9abOl5DLX8suLujOaHSvGzw_.size = sizeof(tyObject_Target_9abOl5DLX8suLujOaHSvGzw);
NTI_9abOl5DLX8suLujOaHSvGzw_.kind = 18;
NTI_9abOl5DLX8suLujOaHSvGzw_.base = 0;
NTI_9abOl5DLX8suLujOaHSvGzw_.flags = 2;
TM_LEa0rTUoGHqcCT74IoUuTg_2[0] = &TM_LEa0rTUoGHqcCT74IoUuTg_0[1];
NTI_XYDt7D1G3qcClFyZy1Ky9ag_.size = sizeof(tyEnum_TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag);
NTI_XYDt7D1G3qcClFyZy1Ky9ag_.kind = 14;
NTI_XYDt7D1G3qcClFyZy1Ky9ag_.base = 0;
NTI_XYDt7D1G3qcClFyZy1Ky9ag_.flags = 3;
for (TM_LEa0rTUoGHqcCT74IoUuTg_5 = 0; TM_LEa0rTUoGHqcCT74IoUuTg_5 < 23; TM_LEa0rTUoGHqcCT74IoUuTg_5++) {
TM_LEa0rTUoGHqcCT74IoUuTg_0[TM_LEa0rTUoGHqcCT74IoUuTg_5+2].kind = 1;
TM_LEa0rTUoGHqcCT74IoUuTg_0[TM_LEa0rTUoGHqcCT74IoUuTg_5+2].offset = TM_LEa0rTUoGHqcCT74IoUuTg_5;
TM_LEa0rTUoGHqcCT74IoUuTg_0[TM_LEa0rTUoGHqcCT74IoUuTg_5+2].name = TM_LEa0rTUoGHqcCT74IoUuTg_4[TM_LEa0rTUoGHqcCT74IoUuTg_5];
TM_LEa0rTUoGHqcCT74IoUuTg_3[TM_LEa0rTUoGHqcCT74IoUuTg_5] = &TM_LEa0rTUoGHqcCT74IoUuTg_0[TM_LEa0rTUoGHqcCT74IoUuTg_5+2];
}
TM_LEa0rTUoGHqcCT74IoUuTg_0[25].len = 23; TM_LEa0rTUoGHqcCT74IoUuTg_0[25].kind = 2; TM_LEa0rTUoGHqcCT74IoUuTg_0[25].sons = &TM_LEa0rTUoGHqcCT74IoUuTg_3[0];
NTI_XYDt7D1G3qcClFyZy1Ky9ag_.node = &TM_LEa0rTUoGHqcCT74IoUuTg_0[25];
TM_LEa0rTUoGHqcCT74IoUuTg_0[1].kind = 1;
TM_LEa0rTUoGHqcCT74IoUuTg_0[1].offset = offsetof(tyObject_Target_9abOl5DLX8suLujOaHSvGzw, targetCPU);
TM_LEa0rTUoGHqcCT74IoUuTg_0[1].typ = (&NTI_XYDt7D1G3qcClFyZy1Ky9ag_);
TM_LEa0rTUoGHqcCT74IoUuTg_0[1].name = "targetCPU";
TM_LEa0rTUoGHqcCT74IoUuTg_2[1] = &TM_LEa0rTUoGHqcCT74IoUuTg_0[26];
TM_LEa0rTUoGHqcCT74IoUuTg_0[26].kind = 1;
TM_LEa0rTUoGHqcCT74IoUuTg_0[26].offset = offsetof(tyObject_Target_9abOl5DLX8suLujOaHSvGzw, hostCPU);
TM_LEa0rTUoGHqcCT74IoUuTg_0[26].typ = (&NTI_XYDt7D1G3qcClFyZy1Ky9ag_);
TM_LEa0rTUoGHqcCT74IoUuTg_0[26].name = "hostCPU";
TM_LEa0rTUoGHqcCT74IoUuTg_2[2] = &TM_LEa0rTUoGHqcCT74IoUuTg_0[27];
NTI_s7Mlr1t66SUqP6BKJMXLaQ_.size = sizeof(tyEnum_TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ);
NTI_s7Mlr1t66SUqP6BKJMXLaQ_.kind = 14;
NTI_s7Mlr1t66SUqP6BKJMXLaQ_.base = 0;
NTI_s7Mlr1t66SUqP6BKJMXLaQ_.flags = 3;
for (TM_LEa0rTUoGHqcCT74IoUuTg_8 = 0; TM_LEa0rTUoGHqcCT74IoUuTg_8 < 29; TM_LEa0rTUoGHqcCT74IoUuTg_8++) {
TM_LEa0rTUoGHqcCT74IoUuTg_0[TM_LEa0rTUoGHqcCT74IoUuTg_8+28].kind = 1;
TM_LEa0rTUoGHqcCT74IoUuTg_0[TM_LEa0rTUoGHqcCT74IoUuTg_8+28].offset = TM_LEa0rTUoGHqcCT74IoUuTg_8;
TM_LEa0rTUoGHqcCT74IoUuTg_0[TM_LEa0rTUoGHqcCT74IoUuTg_8+28].name = TM_LEa0rTUoGHqcCT74IoUuTg_7[TM_LEa0rTUoGHqcCT74IoUuTg_8];
TM_LEa0rTUoGHqcCT74IoUuTg_6[TM_LEa0rTUoGHqcCT74IoUuTg_8] = &TM_LEa0rTUoGHqcCT74IoUuTg_0[TM_LEa0rTUoGHqcCT74IoUuTg_8+28];
}
TM_LEa0rTUoGHqcCT74IoUuTg_0[57].len = 29; TM_LEa0rTUoGHqcCT74IoUuTg_0[57].kind = 2; TM_LEa0rTUoGHqcCT74IoUuTg_0[57].sons = &TM_LEa0rTUoGHqcCT74IoUuTg_6[0];
NTI_s7Mlr1t66SUqP6BKJMXLaQ_.node = &TM_LEa0rTUoGHqcCT74IoUuTg_0[57];
TM_LEa0rTUoGHqcCT74IoUuTg_0[27].kind = 1;
TM_LEa0rTUoGHqcCT74IoUuTg_0[27].offset = offsetof(tyObject_Target_9abOl5DLX8suLujOaHSvGzw, targetOS);
TM_LEa0rTUoGHqcCT74IoUuTg_0[27].typ = (&NTI_s7Mlr1t66SUqP6BKJMXLaQ_);
TM_LEa0rTUoGHqcCT74IoUuTg_0[27].name = "targetOS";
TM_LEa0rTUoGHqcCT74IoUuTg_2[3] = &TM_LEa0rTUoGHqcCT74IoUuTg_0[58];
TM_LEa0rTUoGHqcCT74IoUuTg_0[58].kind = 1;
TM_LEa0rTUoGHqcCT74IoUuTg_0[58].offset = offsetof(tyObject_Target_9abOl5DLX8suLujOaHSvGzw, hostOS);
TM_LEa0rTUoGHqcCT74IoUuTg_0[58].typ = (&NTI_s7Mlr1t66SUqP6BKJMXLaQ_);
TM_LEa0rTUoGHqcCT74IoUuTg_0[58].name = "hostOS";
TM_LEa0rTUoGHqcCT74IoUuTg_2[4] = &TM_LEa0rTUoGHqcCT74IoUuTg_0[59];
TM_LEa0rTUoGHqcCT74IoUuTg_0[59].kind = 1;
TM_LEa0rTUoGHqcCT74IoUuTg_0[59].offset = offsetof(tyObject_Target_9abOl5DLX8suLujOaHSvGzw, intSize);
TM_LEa0rTUoGHqcCT74IoUuTg_0[59].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_LEa0rTUoGHqcCT74IoUuTg_0[59].name = "intSize";
TM_LEa0rTUoGHqcCT74IoUuTg_2[5] = &TM_LEa0rTUoGHqcCT74IoUuTg_0[60];
TM_LEa0rTUoGHqcCT74IoUuTg_0[60].kind = 1;
TM_LEa0rTUoGHqcCT74IoUuTg_0[60].offset = offsetof(tyObject_Target_9abOl5DLX8suLujOaHSvGzw, floatSize);
TM_LEa0rTUoGHqcCT74IoUuTg_0[60].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_LEa0rTUoGHqcCT74IoUuTg_0[60].name = "floatSize";
TM_LEa0rTUoGHqcCT74IoUuTg_2[6] = &TM_LEa0rTUoGHqcCT74IoUuTg_0[61];
TM_LEa0rTUoGHqcCT74IoUuTg_0[61].kind = 1;
TM_LEa0rTUoGHqcCT74IoUuTg_0[61].offset = offsetof(tyObject_Target_9abOl5DLX8suLujOaHSvGzw, ptrSize);
TM_LEa0rTUoGHqcCT74IoUuTg_0[61].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_LEa0rTUoGHqcCT74IoUuTg_0[61].name = "ptrSize";
TM_LEa0rTUoGHqcCT74IoUuTg_2[7] = &TM_LEa0rTUoGHqcCT74IoUuTg_0[62];
TM_LEa0rTUoGHqcCT74IoUuTg_0[62].kind = 1;
TM_LEa0rTUoGHqcCT74IoUuTg_0[62].offset = offsetof(tyObject_Target_9abOl5DLX8suLujOaHSvGzw, tnl);
TM_LEa0rTUoGHqcCT74IoUuTg_0[62].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_LEa0rTUoGHqcCT74IoUuTg_0[62].name = "tnl";
TM_LEa0rTUoGHqcCT74IoUuTg_0[0].len = 8; TM_LEa0rTUoGHqcCT74IoUuTg_0[0].kind = 2; TM_LEa0rTUoGHqcCT74IoUuTg_0[0].sons = &TM_LEa0rTUoGHqcCT74IoUuTg_2[0];
NTI_9abOl5DLX8suLujOaHSvGzw_.node = &TM_LEa0rTUoGHqcCT74IoUuTg_0[0];
}

