/* Generated by Nim Compiler v0.19.9 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#include <setjmp.h>
#include <stdio.h>
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
typedef struct tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q;
typedef struct tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw;
typedef struct tyTuple_XOVT24GHXwqiEj5GCsEGCA tyTuple_XOVT24GHXwqiEj5GCsEGCA;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_Target_9abOl5DLX8suLujOaHSvGzw tyObject_Target_9abOl5DLX8suLujOaHSvGzw;
typedef struct tyObject_MsgConfig_kV7r8HWT0SqOYW2k2ukC6A tyObject_MsgConfig_kV7r8HWT0SqOYW2k2ukC6A;
typedef struct tySequence_tNFrR3kRuS1FSwuiLGoSSA tySequence_tNFrR3kRuS1FSwuiLGoSSA;
typedef struct tyObject_Table_Ab4q9c36aMR4mtkEOIBzdzA tyObject_Table_Ab4q9c36aMR4mtkEOIBzdzA;
typedef struct tySequence_7lEisrXlQEzwtUKW5pzRCw tySequence_7lEisrXlQEzwtUKW5pzRCw;
typedef struct tySequence_Zi9cGbCWofbtABoHJ5RbLNQ tySequence_Zi9cGbCWofbtABoHJ5RbLNQ;
typedef struct tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg;
typedef struct tySequence_4eRCaZmrYLLw2k30GPTiMw tySequence_4eRCaZmrYLLw2k30GPTiMw;
typedef struct tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg;
typedef struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ tySequence_sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct tySequence_pK3qSsBZwdXd6qyUMkd5Jw tySequence_pK3qSsBZwdXd6qyUMkd5Jw;
typedef struct tyObject_SuggestcolonObjectType__bkMuTTb2G70XfpzAiyNrnQ tyObject_SuggestcolonObjectType__bkMuTTb2G70XfpzAiyNrnQ;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct tySequence_uB9b75OUPRENsBAu4AnoePA tySequence_uB9b75OUPRENsBAu4AnoePA;
typedef struct TSafePoint TSafePoint;
typedef struct tyObject_ProcessObj_2rGNQnv9bU4hanI2g3svReg tyObject_ProcessObj_2rGNQnv9bU4hanI2g3svReg;
typedef struct tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ;
typedef struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack_7fytPA5bBsob6See21YMRA tyObject_GcStack_7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyTuple_ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg;
#  define nimfr_(proc, file) \
    TFrame FR_; \
    FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = 0; nimFrame(&FR_);

#  define nimfrs_(proc, file, slots, length) \
    struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename; NI len; VarSlot s[slots];} FR_; \
    FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = length; nimFrame((TFrame*)&FR_);

#  define nimln_(n, file) \
    FR_.line = n; FR_.filename = file;
typedef struct tyTuple_z822nu9bFF1AlQnLrHjdwpA tyTuple_z822nu9bFF1AlQnLrHjdwpA;
typedef struct tyTuple_xYhUhS7X82rKTqbT9bRfCnw tyTuple_xYhUhS7X82rKTqbT9bRfCnw;
typedef struct tyObject_TFileInfo_GE3hAakXKOEpch4ap3zXAw tyObject_TFileInfo_GE3hAakXKOEpch4ap3zXAw;
typedef struct tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA;
typedef struct tyTuple_QeWl6B6ffS4pU6WWrtcrDw tyTuple_QeWl6B6ffS4pU6WWrtcrDw;
typedef struct tyObject_Cfile_i9cKq1ZGd1wgagjUEHLVFtg tyObject_Cfile_i9cKq1ZGd1wgagjUEHLVFtg;
typedef struct tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q {
NU16 line;
NI16 col;
NI32 fileIndex;
};
struct tyTuple_XOVT24GHXwqiEj5GCsEGCA {
NimStringDesc* Field0;
NI Field1;
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
typedef NU8 tyArray_YtcvxHNKV4YiecPE9ap1mcA[20];
typedef NU8 tyEnum_TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag;
typedef NU8 tyEnum_TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ;
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
typedef NU32 tySet_tyEnum_TOption_WspMeQySXNP2XoTWR5MTgg;
typedef NU64 tySet_tyEnum_TGlobalOption_RAfAEZqjnKMDumgyKKc1qw;
typedef NU8 tySet_tyEnum_TErrorOutput_fBf8Teueoz9aAkO5cXaxrpA;
struct tyObject_Table_Ab4q9c36aMR4mtkEOIBzdzA {
tySequence_7lEisrXlQEzwtUKW5pzRCw* data;
NI counter;
};
struct tyObject_MsgConfig_kV7r8HWT0SqOYW2k2ukC6A {
tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q trackPos;
NIM_BOOL trackPosAttached;
tySet_tyEnum_TErrorOutput_fBf8Teueoz9aAkO5cXaxrpA errorOutputs;
tySequence_tNFrR3kRuS1FSwuiLGoSSA* msgContext;
tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q lastError;
tyObject_Table_Ab4q9c36aMR4mtkEOIBzdzA filenameToIndexTbl;
tySequence_Zi9cGbCWofbtABoHJ5RbLNQ* fileInfos;
NI32 systemFileIdx;
};
typedef NU8 tyEnum_TCommands_VH3ghgQVwLSg3krOAoXigw;
typedef NU8 tyEnum_TGCMode_tkz389aDYNd8ykeZszCuBSw;
typedef NU8 tyEnum_SymbolFilesOption_gBES9bqm1ru9ape8SeMRAFgQ;
struct tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg {
tySequence_4eRCaZmrYLLw2k30GPTiMw* data;
NI counter;
};
typedef NU16 tySet_tyEnum_Feature_01UoAKYz1MxZiuG1X2VhNQ;
typedef NU8 tyEnum_IdeCmd_1Ced39bl5eePmZ1PKMPXigQ;
typedef NU8 tyEnum_TSystemCC_1eWBJUonHMOnlBwsOvpFmA;
typedef NU64 tySet_tyEnum_TMsgKind_vuCAakv8v9aIe9a44eiR1GOg;
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (tyObject_SuggestcolonObjectType__bkMuTTb2G70XfpzAiyNrnQ* result, void* ClE_0);
void* ClE_0;
} tyProc_QYEVXrYc9beQ379crS3rzqRA;
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (NimStringDesc* output, void* ClE_0);
void* ClE_0;
} tyProc_Q1W5D85O9cNu3iq9cZ9alS9aWA;
typedef NU8 tyEnum_Severity_x5BWBPGAbIH9clm5pmNp5DA;
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* config, tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q info, NimStringDesc* msg, tyEnum_Severity_x5BWBPGAbIH9clm5pmNp5DA severity, void* ClE_0);
void* ClE_0;
} tyProc_22mgIiTBBoqNe1T0FSw9ahQ;
struct tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw {
tyObject_Target_9abOl5DLX8suLujOaHSvGzw target;
NI linesCompiled;
tySet_tyEnum_TOption_WspMeQySXNP2XoTWR5MTgg options;
tySet_tyEnum_TGlobalOption_RAfAEZqjnKMDumgyKKc1qw globalOptions;
tyObject_MsgConfig_kV7r8HWT0SqOYW2k2ukC6A m;
NI evalTemplateCounter;
NI evalMacroCounter;
NI8 exitcode;
tyEnum_TCommands_VH3ghgQVwLSg3krOAoXigw cmd;
tyEnum_TGCMode_tkz389aDYNd8ykeZszCuBSw selectedGC;
NI verbosity;
NI numberOfProcessors;
NimStringDesc* evalExpr;
NF lastCmdTime;
tyEnum_SymbolFilesOption_gBES9bqm1ru9ape8SeMRAFgQ symbolFiles;
tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg cppDefines;
NimStringDesc* headerFile;
tySet_tyEnum_Feature_01UoAKYz1MxZiuG1X2VhNQ features;
NimStringDesc* arguments;
NIM_BOOL helpWritten;
tyEnum_IdeCmd_1Ced39bl5eePmZ1PKMPXigQ ideCmd;
NIM_BOOL oldNewlines;
tyEnum_TSystemCC_1eWBJUonHMOnlBwsOvpFmA cCompiler;
tySet_tyEnum_TMsgKind_vuCAakv8v9aIe9a44eiR1GOg enableNotes;
tySet_tyEnum_TMsgKind_vuCAakv8v9aIe9a44eiR1GOg disableNotes;
tySet_tyEnum_TMsgKind_vuCAakv8v9aIe9a44eiR1GOg foreignPackageNotes;
tySet_tyEnum_TMsgKind_vuCAakv8v9aIe9a44eiR1GOg notes;
tySet_tyEnum_TMsgKind_vuCAakv8v9aIe9a44eiR1GOg mainPackageNotes;
NI mainPackageId;
NI errorCounter;
NI hintCounter;
NI warnCounter;
NI errorMax;
tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* configVars;
tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* symbols;
tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* packageCache;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* searchPaths;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* lazyPaths;
NimStringDesc* outFile;
NimStringDesc* prefixDir;
NimStringDesc* libpath;
NimStringDesc* nimcacheDir;
tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* dllOverrides;
tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* moduleOverrides;
NimStringDesc* projectName;
NimStringDesc* projectPath;
NimStringDesc* projectFull;
NIM_BOOL projectIsStdin;
NI32 projectMainIdx;
NimStringDesc* command;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* commandArgs;
NIM_BOOL keepComments;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* implicitImports;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* implicitIncludes;
NimStringDesc* docSeeSrcUrl;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* cIncludes;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* cLibs;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* cLinkedLibs;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* externalToLink;
NimStringDesc* linkOptionsCmd;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* compileOptionsCmd;
NimStringDesc* linkOptions;
NimStringDesc* compileOptions;
NimStringDesc* ccompilerpath;
tySequence_pK3qSsBZwdXd6qyUMkd5Jw* toCompile;
tyProc_QYEVXrYc9beQ379crS3rzqRA suggestionResultHook;
NI suggestVersion;
NI suggestMaxResults;
tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q lastLineInfo;
tyProc_Q1W5D85O9cNu3iq9cZ9alS9aWA writelnHook;
tyProc_22mgIiTBBoqNe1T0FSw9ahQ structuredErrorHook;
NimStringDesc* cppCustomNamespace;
};
typedef NU8 tyEnum_TGlobalOption_RAfAEZqjnKMDumgyKKc1qw;
typedef NU8 tyEnum_FileMode_ZJfK20XeZ9bv2j1pZjw9aswg;
struct RootObj {
TNimType* m_type;
};
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
tySequence_uB9b75OUPRENsBAu4AnoePA* trace;
NU raiseId;
Exception* up;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClP_0) (Exception* e, void* ClE_0);
void* ClE_0;
} tyProc_NT9bSe2DDkjdtx7j9aov2Z6g;
struct TSafePoint {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
tyProc_NT9bSe2DDkjdtx7j9aov2Z6g raiseAction;
};
typedef NU8 tySet_tyEnum_ProcessOption_bnU6W8LhTMnT4JaSWtGlSA;
typedef NimStringDesc* tyArray_8ZvwQIddfpj2THRVPsFzIQ[1];
struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
struct tyObject_GcStack_7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* tyArray_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef NU32 tyArray_BHbOSqU1t9b3Gt7K2c6fQig[24];
typedef tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* tyArray_N1u1nqOgmuJN9cSZrnMHgOQ[32];
typedef tyArray_N1u1nqOgmuJN9cSZrnMHgOQ tyArray_B6durA4ZCi1xjJvRtyYxMg[24];
typedef tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* tyArray_lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA {
tyArray_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* tyArray_0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw {
tyArray_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyArray_LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray_LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
NU32 flBitmap;
tyArray_BHbOSqU1t9b3Gt7K2c6fQig slBitmap;
tyArray_B6durA4ZCi1xjJvRtyYxMg matrix;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI occ;
NI lastSize;
tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
NI zctThreshold;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
NI gcThreadId;
};
struct tyTuple_z822nu9bFF1AlQnLrHjdwpA {
tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q Field0;
NimStringDesc* Field1;
};
struct tyTuple_xYhUhS7X82rKTqbT9bRfCnw {
NI Field0;
NimStringDesc* Field1;
NI32 Field2;
};
struct tyObject_TFileInfo_GE3hAakXKOEpch4ap3zXAw {
NimStringDesc* fullPath;
NimStringDesc* projPath;
NimStringDesc* shortName;
tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* quotedName;
tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* quotedFullName;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* lines;
NimStringDesc* dirtyfile;
NimStringDesc* hash;
NIM_BOOL dirty;
};
struct tyTuple_QeWl6B6ffS4pU6WWrtcrDw {
NI Field0;
NimStringDesc* Field1;
};
typedef NU8 tySet_tyEnum_CfileFlag_Vl9c9ayddDuXiWtnWTsEYGsA;
struct tyObject_Cfile_i9cKq1ZGd1wgagjUEHLVFtg {
NimStringDesc* cname;
NimStringDesc* obj;
tySet_tyEnum_CfileFlag_Vl9c9ayddDuXiWtnWTsEYGsA flags;
};
struct tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};
struct tySequence_tNFrR3kRuS1FSwuiLGoSSA {
  TGenericSeq Sup;
  tyTuple_z822nu9bFF1AlQnLrHjdwpA data[SEQ_DECL_SIZE];
};
struct tySequence_7lEisrXlQEzwtUKW5pzRCw {
  TGenericSeq Sup;
  tyTuple_xYhUhS7X82rKTqbT9bRfCnw data[SEQ_DECL_SIZE];
};
struct tySequence_Zi9cGbCWofbtABoHJ5RbLNQ {
  TGenericSeq Sup;
  tyObject_TFileInfo_GE3hAakXKOEpch4ap3zXAw data[SEQ_DECL_SIZE];
};
struct tySequence_4eRCaZmrYLLw2k30GPTiMw {
  TGenericSeq Sup;
  tyTuple_QeWl6B6ffS4pU6WWrtcrDw data[SEQ_DECL_SIZE];
};
struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct tySequence_pK3qSsBZwdXd6qyUMkd5Jw {
  TGenericSeq Sup;
  tyObject_Cfile_i9cKq1ZGd1wgagjUEHLVFtg data[SEQ_DECL_SIZE];
};
struct tySequence_uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, genericReset)(void* dest, TNimType* mt);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nosparentDir)(NimStringDesc* path);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, toFullPath_tdNdBP9cVqODPZCeXYb1GvA)(tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* conf, NI32 fileIdx);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem_2Mfumf6CnyNlShDWdIgobwsystem)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(void, secureHash_EXfqX32pW1lnNt34KrEaBg)(NimStringDesc* str, tyArray_YtcvxHNKV4YiecPE9ap1mcA Result);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_fPlwH3r9agN9aEHB6yCPMh0wsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, toGeneratedFile_9bcMIEimlTw8WtgU9crIa4Rg)(tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* conf, NimStringDesc* path, NimStringDesc* ext);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar__9cgKBrLNcxzFztdSZGMv5ZA)(tyArray_YtcvxHNKV4YiecPE9ap1mcA self);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, open_9bJmir28gOIZeFueZNVXx8A)(FILE** f, NimStringDesc* filename, tyEnum_FileMode_ZJfK20XeZ9bv2j1pZjw9aswg mode, NI bufSize);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, readAll_1d5KxLvDJHJhYZhTybrveg)(FILE* file);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_LIB_PRIVATE N_NIMCALL(void, close_Yruu81izRSfgSs1G6fzRxA_2)(FILE* f);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_LIB_PRIVATE N_NIMCALL(tyObject_ProcessObj_2rGNQnv9bU4hanI2g3svReg*, nospstartProcess)(NimStringDesc* command, NimStringDesc* workingDir, NimStringDesc** args, NI argsLen_0, tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* env, tySet_tyEnum_ProcessOption_bnU6W8LhTMnT4JaSWtGlSA options);
N_LIB_PRIVATE N_NIMCALL(void, write_ilJq6ezua9cBxEFehuCAG9bg)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s, NimStringDesc* x);
N_LIB_PRIVATE N_NIMCALL(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ*, nospinputStream)(tyObject_ProcessObj_2rGNQnv9bU4hanI2g3svReg* p);
N_LIB_PRIVATE N_NIMCALL(void, close_Xz3YiEzNrT9cUBndwi4hNjw)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s);
N_LIB_PRIVATE N_NIMCALL(void, readOutput_L39bfsU0iC6XDNIbeI5awjQ)(tyObject_ProcessObj_2rGNQnv9bU4hanI2g3svReg* p, tyTuple_XOVT24GHXwqiEj5GCsEGCA* Result);
N_LIB_PRIVATE N_NIMCALL(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ*, nospoutputStream)(tyObject_ProcessObj_2rGNQnv9bU4hanI2g3svReg* p);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, atEnd_5ebsEcBZaoqxCkfDcpzdgg)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, readLine_KN3I0OGVr9bF9acs3y6DWpiA)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_LIB_PRIVATE N_NIMCALL(NI, nospwaitForExit)(tyObject_ProcessObj_2rGNQnv9bU4hanI2g3svReg* p, NI timeout);
N_LIB_PRIVATE N_NIMCALL(void, writeFile_GICBsKQNBwuxEZi5V9aNhJw)(NimStringDesc* filename, NimStringDesc* content);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, getCurrentException)(void);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(void, reraiseException)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached_II46IjNZztN9bmbxUD8dt8g_2)(void);
TNimType NTI_XOVT24GHXwqiEj5GCsEGCA_;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg_;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA_;
extern TSafePoint* excHandler_rqLlY5bs9atDw2OXYqJEn5g;
extern TSafePoint* excHandler_rqLlY5bs9atDw2OXYqJEn5g;
extern TSafePoint* excHandler_rqLlY5bs9atDw2OXYqJEn5g;
extern TSafePoint* excHandler_rqLlY5bs9atDw2OXYqJEn5g;
extern TNimType NTI_iLZrPn9anoh9ad1MmO0RczFw_;
extern Exception* currException_9bVPeDJlYTi9bQApZpfH8wjg;
extern TNimType NTI_BeJgrOdDsczOwEWOZbRfKA_;
extern Exception* currException_9bVPeDJlYTi9bQApZpfH8wjg;
extern Exception* currException_9bVPeDJlYTi9bQApZpfH8wjg;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
STRING_LITERAL(TM_69a9b06YSkBJW7wqzuZfJ29aQ_3, "\011", 1);
STRING_LITERAL(TM_69a9b06YSkBJW7wqzuZfJ29aQ_4, "gorge_", 6);
STRING_LITERAL(TM_69a9b06YSkBJW7wqzuZfJ29aQ_5, "txt", 3);
STRING_LITERAL(TM_69a9b06YSkBJW7wqzuZfJ29aQ_7, "\012", 1);
NIM_CONST tyTuple_XOVT24GHXwqiEj5GCsEGCA TM_69a9b06YSkBJW7wqzuZfJ29aQ_8 = {((NimStringDesc*) NIM_NIL),
((NI) -1)}
;

static N_INLINE(void, nimSetMem_2Mfumf6CnyNlShDWdIgobwsystem)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
	(void)(T1_);
}

static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem_2Mfumf6CnyNlShDWdIgobwsystem(p, ((int) 0), size);
}

static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
	(void)(T1_);
}

static N_INLINE(void, copyMem_fPlwH3r9agN9aEHB6yCPMh0wsystem)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	{
		if (!!((src == NIM_NIL))) goto LA3_;
		copyMem_fPlwH3r9agN9aEHB6yCPMh0wsystem(((void*) ((&(*dest).data[(*dest).Sup.len]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = excHandler_rqLlY5bs9atDw2OXYqJEn5g;
	excHandler_rqLlY5bs9atDw2OXYqJEn5g = s;
}

N_LIB_PRIVATE N_NIMCALL(void, readOutput_L39bfsU0iC6XDNIbeI5awjQ)(tyObject_ProcessObj_2rGNQnv9bU4hanI2g3svReg* p, tyTuple_XOVT24GHXwqiEj5GCsEGCA* Result) {
	tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* output;
	genericReset((void*)Result, (&NTI_XOVT24GHXwqiEj5GCsEGCA_));
	unsureAsgnRef((void**) (&(*Result).Field0), ((NimStringDesc*) NIM_NIL));
	output = nospoutputStream(p);
	{
		while (1) {
			NIM_BOOL T3_;
			NimStringDesc* T4_;
			T3_ = (NIM_BOOL)0;
			T3_ = atEnd_5ebsEcBZaoqxCkfDcpzdgg(output);
			if (!!(T3_)) goto LA2;
			T4_ = (NimStringDesc*)0;
			T4_ = readLine_KN3I0OGVr9bF9acs3y6DWpiA(output);
			unsureAsgnRef((void**) (&(*Result).Field0), resizeString((*Result).Field0, (T4_ ? T4_->Sup.len : 0) + 0));
appendString((*Result).Field0, T4_);
			unsureAsgnRef((void**) (&(*Result).Field0), resizeString((*Result).Field0, 1));
appendString((*Result).Field0, ((NimStringDesc*) &TM_69a9b06YSkBJW7wqzuZfJ29aQ_7));
		} LA2: ;
	}
	{
		if (!(((NI) 0) < ((*Result).Field0 ? (*Result).Field0->Sup.len : 0))) goto LA7_;
		unsureAsgnRef((void**) (&(*Result).Field0), setLengthStr((*Result).Field0, ((NI) ((NI)(((*Result).Field0 ? (*Result).Field0->Sup.len : 0) - ((NI) 1))))));
	}
	LA7_: ;
	(*Result).Field1 = nospwaitForExit(p, ((NI) -1));
}

static N_INLINE(void, popSafePoint)(void) {
	excHandler_rqLlY5bs9atDw2OXYqJEn5g = (*excHandler_rqLlY5bs9atDw2OXYqJEn5g).prev;
}

static N_INLINE(Exception*, getCurrentException)(void) {
	Exception* result;
	result = (Exception*)0;
	result = currException_9bVPeDJlYTi9bQApZpfH8wjg;
	return result;
}

static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = (NI)((NU32)((*c).refcount) + (NU32)(((NI) 8)));
}

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU32)(((NI) (ptrdiff_t) (usr))) - (NU32)(((NI) 8)))));
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
}

static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = (NI)((NU32)((*c).refcount) - (NU32)(((NI) 8)));
	{
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3_;
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		incRef_9cAA5YuQAAC3MVbnGeV86swsystem(T5_);
	}
	LA3_: ;
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		decRef_MV4BBk6J1qu70IbBxwEn4wsystem(T10_);
	}
	LA8_: ;
	(*dest) = src;
}

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currException_9bVPeDJlYTi9bQApZpfH8wjg), (*currException_9bVPeDJlYTi9bQApZpfH8wjg).up);
}

N_LIB_PRIVATE N_NIMCALL(void, opGorge_BjvODCrbmWn89cyUmTGZz0A)(NimStringDesc* cmd, NimStringDesc* input, NimStringDesc* cache, tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q info, tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* conf, tyTuple_XOVT24GHXwqiEj5GCsEGCA* Result) {
	NimStringDesc* workingDir;
	NimStringDesc* T1_;
{	genericReset((void*)Result, (&NTI_XOVT24GHXwqiEj5GCsEGCA_));
	T1_ = (NimStringDesc*)0;
	T1_ = toFullPath_tdNdBP9cVqODPZCeXYb1GvA(conf, info.fileIndex);
	workingDir = nosparentDir(T1_);
	{
		tyArray_YtcvxHNKV4YiecPE9ap1mcA h;
		NimStringDesc* T6_;
		NimStringDesc* filename;
		NimStringDesc* T7_;
		NimStringDesc* T8_;
		FILE* f;
		NIM_BOOL volatile readSuccessful;
		TSafePoint TM_69a9b06YSkBJW7wqzuZfJ29aQ_6;
		if (!(((NI) 0) < (cache ? cache->Sup.len : 0))) goto LA4_;
		nimZeroMem((void*)h, sizeof(tyArray_YtcvxHNKV4YiecPE9ap1mcA));
		T6_ = (NimStringDesc*)0;
		T6_ = rawNewString((cmd ? cmd->Sup.len : 0) + (input ? input->Sup.len : 0) + (cache ? cache->Sup.len : 0) + 2);
appendString(T6_, cmd);
appendString(T6_, ((NimStringDesc*) &TM_69a9b06YSkBJW7wqzuZfJ29aQ_3));
appendString(T6_, input);
appendString(T6_, ((NimStringDesc*) &TM_69a9b06YSkBJW7wqzuZfJ29aQ_3));
appendString(T6_, cache);
		secureHash_EXfqX32pW1lnNt34KrEaBg(T6_, h);
		T7_ = (NimStringDesc*)0;
		T8_ = (NimStringDesc*)0;
		T8_ = dollar__9cgKBrLNcxzFztdSZGMv5ZA(h);
		T7_ = rawNewString((T8_ ? T8_->Sup.len : 0) + 6);
appendString(T7_, ((NimStringDesc*) &TM_69a9b06YSkBJW7wqzuZfJ29aQ_4));
appendString(T7_, T8_);
		filename = toGeneratedFile_9bcMIEimlTw8WtgU9crIa4Rg(conf, T7_, ((NimStringDesc*) &TM_69a9b06YSkBJW7wqzuZfJ29aQ_5));
		f = (FILE*)0;
		{
			NIM_BOOL T11_;
			T11_ = (NIM_BOOL)0;
			T11_ = !((((*conf).globalOptions &((NU64)1<<((NU)(((tyEnum_TGlobalOption_RAfAEZqjnKMDumgyKKc1qw) 1))&63U)))!=0));
			if (!(T11_)) goto LA12_;
			T11_ = open_9bJmir28gOIZeFueZNVXx8A(&f, filename, ((tyEnum_FileMode_ZJfK20XeZ9bv2j1pZjw9aswg) 0), ((NI) -1));
			LA12_: ;
			if (!T11_) goto LA13_;
			unsureAsgnRef((void**) (&(*Result).Field0), readAll_1d5KxLvDJHJhYZhTybrveg(f));
			(*Result).Field1 = ((NI) 0);
			close_Yruu81izRSfgSs1G6fzRxA_2(f);
			goto BeforeRet_;
		}
		LA13_: ;
		readSuccessful = NIM_FALSE;
		pushSafePoint(&TM_69a9b06YSkBJW7wqzuZfJ29aQ_6);
		TM_69a9b06YSkBJW7wqzuZfJ29aQ_6.status = setjmp(TM_69a9b06YSkBJW7wqzuZfJ29aQ_6.context);
		if (TM_69a9b06YSkBJW7wqzuZfJ29aQ_6.status == 0) {
			tyObject_ProcessObj_2rGNQnv9bU4hanI2g3svReg* p;
			tyArray_8ZvwQIddfpj2THRVPsFzIQ T16_;
			nimZeroMem((void*)T16_, sizeof(tyArray_8ZvwQIddfpj2THRVPsFzIQ));
			p = nospstartProcess(cmd, workingDir, T16_, 0, NIM_NIL, 12);
			{
				tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* T21_;
				tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* T22_;
				if (!!(((input ? input->Sup.len : 0) == ((NI) 0)))) goto LA19_;
				T21_ = (tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ*)0;
				T21_ = nospinputStream(p);
				write_ilJq6ezua9cBxEFehuCAG9bg(T21_, input);
				T22_ = (tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ*)0;
				T22_ = nospinputStream(p);
				close_Xz3YiEzNrT9cUBndwi4hNjw(T22_);
			}
			LA19_: ;
			readOutput_L39bfsU0iC6XDNIbeI5awjQ(p, Result);
			readSuccessful = NIM_TRUE;
			{
				if (!((*Result).Field1 == ((NI) 0))) goto LA25_;
				writeFile_GICBsKQNBwuxEZi5V9aNhJw(filename, (*Result).Field0);
			}
			LA25_: ;
			popSafePoint();
		}
		else {
			popSafePoint();
			if (isObj(getCurrentException()->Sup.m_type, (&NTI_iLZrPn9anoh9ad1MmO0RczFw_))||isObj(getCurrentException()->Sup.m_type, (&NTI_BeJgrOdDsczOwEWOZbRfKA_))) {
				TM_69a9b06YSkBJW7wqzuZfJ29aQ_6.status = 0;
				{
					if (!!(readSuccessful)) goto LA31_;
					unsureAsgnRef((void**) (&(*Result).Field0), copyString(TM_69a9b06YSkBJW7wqzuZfJ29aQ_8.Field0));
					(*Result).Field1 = TM_69a9b06YSkBJW7wqzuZfJ29aQ_8.Field1;
				}
				LA31_: ;
				popCurrentException();
			}
		}
		if (TM_69a9b06YSkBJW7wqzuZfJ29aQ_6.status != 0) reraiseException();
	}
	goto LA2_;
	LA4_: ;
	{
		TSafePoint TM_69a9b06YSkBJW7wqzuZfJ29aQ_9;
		pushSafePoint(&TM_69a9b06YSkBJW7wqzuZfJ29aQ_9);
		TM_69a9b06YSkBJW7wqzuZfJ29aQ_9.status = setjmp(TM_69a9b06YSkBJW7wqzuZfJ29aQ_9.context);
		if (TM_69a9b06YSkBJW7wqzuZfJ29aQ_9.status == 0) {
			tyObject_ProcessObj_2rGNQnv9bU4hanI2g3svReg* p_2;
			tyArray_8ZvwQIddfpj2THRVPsFzIQ T35_;
			nimZeroMem((void*)T35_, sizeof(tyArray_8ZvwQIddfpj2THRVPsFzIQ));
			p_2 = nospstartProcess(cmd, workingDir, T35_, 0, NIM_NIL, 12);
			{
				tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* T40_;
				tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* T41_;
				if (!!(((input ? input->Sup.len : 0) == ((NI) 0)))) goto LA38_;
				T40_ = (tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ*)0;
				T40_ = nospinputStream(p_2);
				write_ilJq6ezua9cBxEFehuCAG9bg(T40_, input);
				T41_ = (tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ*)0;
				T41_ = nospinputStream(p_2);
				close_Xz3YiEzNrT9cUBndwi4hNjw(T41_);
			}
			LA38_: ;
			readOutput_L39bfsU0iC6XDNIbeI5awjQ(p_2, Result);
			popSafePoint();
		}
		else {
			popSafePoint();
			if (isObj(getCurrentException()->Sup.m_type, (&NTI_iLZrPn9anoh9ad1MmO0RczFw_))||isObj(getCurrentException()->Sup.m_type, (&NTI_BeJgrOdDsczOwEWOZbRfKA_))) {
				TM_69a9b06YSkBJW7wqzuZfJ29aQ_9.status = 0;
				unsureAsgnRef((void**) (&(*Result).Field0), copyString(TM_69a9b06YSkBJW7wqzuZfJ29aQ_8.Field0));
				(*Result).Field1 = TM_69a9b06YSkBJW7wqzuZfJ29aQ_8.Field1;
				popCurrentException();
			}
		}
		if (TM_69a9b06YSkBJW7wqzuZfJ29aQ_9.status != 0) reraiseException();
	}
	LA2_: ;
	}BeforeRet_: ;
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
N_LIB_PRIVATE N_NIMCALL(void, compiler_gorgeimplDatInit000)(void) {
static TNimNode* TM_69a9b06YSkBJW7wqzuZfJ29aQ_2[2];
static TNimNode TM_69a9b06YSkBJW7wqzuZfJ29aQ_0[3];
NTI_XOVT24GHXwqiEj5GCsEGCA_.size = sizeof(tyTuple_XOVT24GHXwqiEj5GCsEGCA);
NTI_XOVT24GHXwqiEj5GCsEGCA_.kind = 18;
NTI_XOVT24GHXwqiEj5GCsEGCA_.base = 0;
NTI_XOVT24GHXwqiEj5GCsEGCA_.flags = 2;
TM_69a9b06YSkBJW7wqzuZfJ29aQ_2[0] = &TM_69a9b06YSkBJW7wqzuZfJ29aQ_0[1];
TM_69a9b06YSkBJW7wqzuZfJ29aQ_0[1].kind = 1;
TM_69a9b06YSkBJW7wqzuZfJ29aQ_0[1].offset = offsetof(tyTuple_XOVT24GHXwqiEj5GCsEGCA, Field0);
TM_69a9b06YSkBJW7wqzuZfJ29aQ_0[1].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_69a9b06YSkBJW7wqzuZfJ29aQ_0[1].name = "Field0";
TM_69a9b06YSkBJW7wqzuZfJ29aQ_2[1] = &TM_69a9b06YSkBJW7wqzuZfJ29aQ_0[2];
TM_69a9b06YSkBJW7wqzuZfJ29aQ_0[2].kind = 1;
TM_69a9b06YSkBJW7wqzuZfJ29aQ_0[2].offset = offsetof(tyTuple_XOVT24GHXwqiEj5GCsEGCA, Field1);
TM_69a9b06YSkBJW7wqzuZfJ29aQ_0[2].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_69a9b06YSkBJW7wqzuZfJ29aQ_0[2].name = "Field1";
TM_69a9b06YSkBJW7wqzuZfJ29aQ_0[0].len = 2; TM_69a9b06YSkBJW7wqzuZfJ29aQ_0[0].kind = 2; TM_69a9b06YSkBJW7wqzuZfJ29aQ_0[0].sons = &TM_69a9b06YSkBJW7wqzuZfJ29aQ_2[0];
NTI_XOVT24GHXwqiEj5GCsEGCA_.node = &TM_69a9b06YSkBJW7wqzuZfJ29aQ_0[0];
}

