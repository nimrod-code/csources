/* Generated by Nim Compiler v0.20.0 */
/*   (c) 2019 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

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
typedef NimStringDesc* tyArray_p8A0M9cPpD6FjwfsCYXLQtA[275];
N_LIB_PRIVATE N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_3, "addr", 4);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_4, "and", 3);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_5, "as", 2);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_6, "asm", 3);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_7, "bind", 4);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_8, "block", 5);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_9, "break", 5);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_10, "case", 4);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_11, "cast", 4);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_12, "concept", 7);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_13, "const", 5);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_14, "continue", 8);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_15, "converter", 9);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_16, "defer", 5);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_17, "discard", 7);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_18, "distinct", 8);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_19, "div", 3);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_20, "do", 2);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_21, "elif", 4);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_22, "else", 4);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_23, "end", 3);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_24, "enum", 4);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_25, "except", 6);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_26, "export", 6);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_27, "finally", 7);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_28, "for", 3);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_29, "from", 4);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_30, "func", 4);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_31, "if", 2);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_32, "import", 6);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_33, "in", 2);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_34, "include", 7);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_35, "interface", 9);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_36, "is", 2);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_37, "isnot", 5);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_38, "iterator", 8);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_39, "let", 3);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_40, "macro", 5);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_41, "method", 6);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_42, "mixin", 5);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_43, "mod", 3);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_44, "nil", 3);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_45, "not", 3);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_46, "notin", 5);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_47, "object", 6);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_48, "of", 2);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_49, "or", 2);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_50, "out", 3);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_51, "proc", 4);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_52, "ptr", 3);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_53, "raise", 5);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_54, "ref", 3);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_55, "return", 6);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_56, "shl", 3);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_57, "shr", 3);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_58, "static", 6);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_59, "template", 8);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_60, "try", 3);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_61, "tuple", 5);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_62, "type", 4);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_63, "using", 5);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_64, "var", 3);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_65, "when", 4);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_66, "while", 5);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_67, "xor", 3);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_68, "yield", 5);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_69, ":", 1);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_70, "::", 2);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_71, "=", 1);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_72, ".", 1);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_73, "..", 2);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_74, "*", 1);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_75, "-", 1);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_76, "magic", 5);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_77, "thread", 6);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_78, "final", 5);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_79, "profiler", 8);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_80, "memtracker", 10);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_81, "objchecks", 9);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_82, "intdefine", 9);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_83, "strdefine", 9);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_84, "booldefine", 10);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_85, "cursor", 6);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_86, "immediate", 9);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_87, "constructor", 11);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_88, "destructor", 10);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_89, "delegator", 9);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_90, "override", 8);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_91, "importcpp", 9);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_92, "importobjc", 10);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_93, "importcompilerproc", 18);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_94, "importc", 7);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_95, "exportc", 7);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_96, "exportnims", 10);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_97, "incompletestruct", 16);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_98, "requiresinit", 12);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_99, "align", 5);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_100, "nodecl", 6);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_101, "pure", 4);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_102, "sideeffect", 10);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_103, "header", 6);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_104, "nosideeffect", 12);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_105, "gcsafe", 6);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_106, "noreturn", 8);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_107, "merge", 5);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_108, "lib", 3);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_109, "dynlib", 6);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_110, "compilerproc", 12);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_111, "core", 4);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_112, "procvar", 7);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_113, "base", 4);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_114, "used", 4);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_115, "fatal", 5);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_116, "error", 5);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_117, "warning", 7);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_118, "hint", 4);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_119, "line", 4);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_120, "push", 4);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_121, "pop", 3);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_122, "define", 6);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_123, "undef", 5);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_124, "linedir", 7);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_125, "stacktrace", 10);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_126, "linetrace", 9);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_127, "link", 4);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_128, "compile", 7);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_129, "linksys", 7);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_130, "deprecated", 10);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_131, "varargs", 7);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_132, "callconv", 8);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_133, "breakpoint", 10);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_134, "debugger", 8);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_135, "nimcall", 7);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_136, "stdcall", 7);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_137, "cdecl", 5);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_138, "safecall", 8);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_139, "syscall", 7);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_140, "inline", 6);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_141, "noinline", 8);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_142, "fastcall", 8);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_143, "closure", 7);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_144, "noconv", 6);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_145, "on", 2);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_146, "off", 3);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_147, "checks", 6);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_148, "rangechecks", 11);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_149, "boundchecks", 11);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_150, "overflowchecks", 14);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_151, "nilchecks", 9);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_152, "floatchecks", 11);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_153, "nanchecks", 9);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_154, "infchecks", 9);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_155, "movechecks", 10);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_156, "nonreloadable", 13);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_157, "executeonreload", 15);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_158, "assertions", 10);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_159, "patterns", 8);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_160, "trmacros", 8);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_161, "warnings", 8);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_162, "hints", 5);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_163, "optimization", 12);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_164, "raises", 6);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_165, "writes", 6);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_166, "reads", 5);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_167, "size", 4);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_168, "effects", 7);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_169, "tags", 4);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_170, "deadcodeelim", 12);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_171, "safecode", 8);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_172, "package", 7);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_173, "noforward", 9);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_174, "reorder", 7);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_175, "norewrite", 9);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_176, "pragma", 6);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_177, "compiletime", 11);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_178, "noinit", 6);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_179, "passc", 5);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_180, "passl", 5);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_181, "borrow", 6);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_182, "discardable", 11);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_183, "fieldchecks", 11);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_184, "watchpoint", 10);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_185, "subschar", 8);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_186, "acyclic", 7);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_187, "shallow", 7);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_188, "unroll", 6);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_189, "linearscanend", 13);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_190, "computedgoto", 12);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_191, "injectstmt", 10);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_192, "experimental", 12);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_193, "write", 5);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_194, "gensym", 6);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_195, "inject", 6);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_196, "dirty", 5);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_197, "inheritable", 11);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_198, "threadvar", 9);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_199, "emit", 4);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_200, "asmnostackframe", 15);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_201, "implicitstatic", 14);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_202, "global", 6);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_203, "codegendecl", 11);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_204, "unchecked", 9);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_205, "guard", 5);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_206, "locks", 5);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_207, "partial", 7);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_208, "explain", 7);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_209, "liftlocals", 10);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_210, "auto", 4);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_211, "bool", 4);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_212, "catch", 5);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_213, "char", 4);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_214, "class", 5);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_215, "compl", 5);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_216, "const_cast", 10);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_217, "default", 7);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_218, "delete", 6);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_219, "double", 6);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_220, "dynamic_cast", 12);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_221, "explicit", 8);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_222, "extern", 6);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_223, "false", 5);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_224, "float", 5);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_225, "friend", 6);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_226, "goto", 4);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_227, "int", 3);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_228, "long", 4);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_229, "mutable", 7);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_230, "namespace", 9);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_231, "new", 3);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_232, "operator", 8);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_233, "private", 7);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_234, "protected", 9);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_235, "public", 6);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_236, "register", 8);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_237, "reinterpret_cast", 16);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_238, "restrict", 8);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_239, "short", 5);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_240, "signed", 6);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_241, "sizeof", 6);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_242, "static_cast", 11);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_243, "struct", 6);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_244, "switch", 6);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_245, "this", 4);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_246, "throw", 5);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_247, "true", 4);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_248, "typedef", 7);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_249, "typeid", 6);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_250, "typeof", 6);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_251, "typename", 8);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_252, "union", 5);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_253, "packed", 6);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_254, "unsigned", 8);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_255, "virtual", 7);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_256, "void", 4);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_257, "volatile", 8);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_258, "wchar_t", 7);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_259, "alignas", 7);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_260, "alignof", 7);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_261, "constexpr", 9);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_262, "decltype", 8);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_263, "nullptr", 7);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_264, "noexcept", 8);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_265, "thread_local", 12);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_266, "static_assert", 13);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_267, "char16_t", 8);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_268, "char32_t", 8);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_269, "stdin", 5);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_270, "stdout", 6);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_271, "stderr", 6);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_272, "inout", 5);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_273, "bycopy", 6);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_274, "byref", 5);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_275, "oneway", 6);
STRING_LITERAL(TM_U2GgQs2n1Q2Wng1z9ci28MQ_276, "bitsize", 7);
NIM_CONST tyArray_p8A0M9cPpD6FjwfsCYXLQtA specialWords_jS3I1dUcvbZAEuApBSUHng = {((NimStringDesc*) NIM_NIL),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_3),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_4),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_5),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_6),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_7),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_8),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_9),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_10),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_11),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_12),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_13),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_14),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_15),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_16),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_17),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_18),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_19),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_20),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_21),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_22),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_23),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_24),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_25),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_26),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_27),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_28),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_29),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_30),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_31),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_32),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_33),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_34),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_35),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_36),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_37),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_38),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_39),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_40),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_41),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_42),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_43),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_44),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_45),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_46),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_47),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_48),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_49),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_50),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_51),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_52),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_53),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_54),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_55),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_56),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_57),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_58),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_59),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_60),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_61),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_62),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_63),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_64),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_65),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_66),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_67),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_68),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_69),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_70),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_71),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_72),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_73),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_74),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_75),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_76),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_77),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_78),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_79),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_80),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_81),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_82),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_83),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_84),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_85),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_86),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_87),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_88),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_89),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_90),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_91),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_92),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_93),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_94),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_95),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_96),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_97),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_98),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_99),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_100),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_101),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_102),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_103),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_104),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_105),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_106),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_107),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_108),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_109),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_110),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_111),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_112),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_113),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_114),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_115),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_116),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_117),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_118),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_119),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_120),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_121),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_122),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_123),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_124),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_125),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_126),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_127),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_128),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_129),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_130),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_131),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_132),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_133),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_134),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_135),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_136),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_137),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_138),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_139),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_140),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_141),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_142),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_143),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_144),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_145),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_146),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_147),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_148),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_149),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_150),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_151),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_152),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_153),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_154),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_155),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_156),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_157),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_158),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_159),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_160),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_161),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_162),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_163),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_164),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_165),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_166),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_167),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_168),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_169),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_170),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_171),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_172),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_173),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_174),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_175),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_176),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_177),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_178),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_179),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_180),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_181),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_182),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_183),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_184),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_185),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_186),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_187),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_188),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_189),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_190),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_191),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_192),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_193),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_194),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_195),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_196),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_197),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_198),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_199),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_200),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_201),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_202),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_203),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_204),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_205),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_206),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_207),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_208),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_209),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_210),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_211),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_212),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_213),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_214),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_215),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_216),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_217),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_218),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_219),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_220),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_221),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_222),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_223),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_224),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_225),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_226),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_227),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_228),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_229),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_230),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_231),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_232),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_233),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_234),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_235),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_236),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_237),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_238),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_239),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_240),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_241),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_242),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_243),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_244),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_245),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_246),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_247),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_248),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_249),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_250),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_251),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_252),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_253),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_254),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_255),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_256),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_257),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_258),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_259),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_260),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_261),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_262),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_263),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_264),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_265),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_266),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_267),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_268),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_269),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_270),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_271),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_272),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_273),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_274),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_275),
((NimStringDesc*) &TM_U2GgQs2n1Q2Wng1z9ci28MQ_276)}
;

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

N_LIB_PRIVATE N_NIMCALL(NI, findStr_hEgkiaE9aR30m0sTnaIzc5w)(NimStringDesc** a, NI aLen_0, NimStringDesc* s) {
	NI result;
{	result = (NI)0;
	{
		NI i;
		NI colontmp_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = (aLen_0-1);
		res = ((NI) 0);
		{
			while (1) {
				NI TM_U2GgQs2n1Q2Wng1z9ci28MQ_2;
				if (!(res <= colontmp_)) goto LA3;
				i = res;
				{
					NI T6_;
					if ((NU)(i) >= (NU)(aLen_0)) raiseIndexError2(i,aLen_0-1);
					T6_ = (NI)0;
					T6_ = nsuCmpIgnoreStyle(a[i], s);
					if (!(T6_ == ((NI) 0))) goto LA7_;
					result = i;
					goto BeforeRet_;
				}
				LA7_: ;
				TM_U2GgQs2n1Q2Wng1z9ci28MQ_2 = addInt(res, ((NI) 1));
				res = (NI)(TM_U2GgQs2n1Q2Wng1z9ci28MQ_2);
			} LA3: ;
		}
	}
	result = ((NI) -1);
	}BeforeRet_: ;
	return result;
}
