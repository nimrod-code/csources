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
typedef struct tyObject_TCtx_S3Av1Ng7MBWGEZZBhfDYCw tyObject_TCtx_S3Av1Ng7MBWGEZZBhfDYCw;
typedef struct tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw;
typedef struct tyObject_TPassContext_Hb6rFM0ecvtlLf2kv9aU75w tyObject_TPassContext_Hb6rFM0ecvtlLf2kv9aU75w;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence_9bAGqSvkAaFL9bWjsEPslrFA tySequence_9bAGqSvkAaFL9bWjsEPslrFA;
typedef struct tySequence_PJMRIt5QxCm6bRaVyQ5CGA tySequence_PJMRIt5QxCm6bRaVyQ5CGA;
typedef struct tySequence_Ef05srmQTDulnBdXR4Ja6Q tySequence_Ef05srmQTDulnBdXR4Ja6Q;
typedef struct tyObject_PProccolonObjectType__VFEBuxrDHC6kHPzc1TWaRQ tyObject_PProccolonObjectType__VFEBuxrDHC6kHPzc1TWaRQ;
typedef struct tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w;
typedef struct tySequence_RsxI3z4wK8jTuZiO0576gQ tySequence_RsxI3z4wK8jTuZiO0576gQ;
typedef struct tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw;
typedef struct tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw;
typedef struct tyObject_ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ tyObject_ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ;
typedef struct tySequence_DfgJFJEYoj4YBAHLZPl5lQ tySequence_DfgJFJEYoj4YBAHLZPl5lQ;
typedef struct tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA;
typedef struct tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg;
typedef struct tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ;
typedef struct tySequence_9brg1xNurxcus33lU4IE1Dw tySequence_9brg1xNurxcus33lU4IE1Dw;
typedef struct tyObject_Table_e2Ciu0s1q49aVQ7ULXy7l9bQ tyObject_Table_e2Ciu0s1q49aVQ7ULXy7l9bQ;
typedef struct tySequence_kxu4GK0onha2t9bo86mdVAg tySequence_kxu4GK0onha2t9bo86mdVAg;
typedef struct tySequence_48JTohSgTy339bRxHzUD8KA tySequence_48JTohSgTy339bRxHzUD8KA;
typedef struct tySequence_bWZXqEvLFwhLvAqSRoFNgQ tySequence_bWZXqEvLFwhLvAqSRoFNgQ;
typedef struct tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ;
typedef struct tyObject_IncrementalCtx_sdH7TnbKACuAzE7DBabnCA tyObject_IncrementalCtx_sdH7TnbKACuAzE7DBabnCA;
typedef struct tyObject_Table_0Y2brGGKD9bV6GJLXT9aUDgA tyObject_Table_0Y2brGGKD9bV6GJLXT9aUDgA;
typedef struct tySequence_23SMqauuRsbDANhthj9bWlA tySequence_23SMqauuRsbDANhthj9bWlA;
typedef struct tyObject_Table_NttoEzoiq5CiphZe81oadg tyObject_Table_NttoEzoiq5CiphZe81oadg;
typedef struct tySequence_squ9b9bUH4OLHf6cEMrt6hVA tySequence_squ9b9bUH4OLHf6cEMrt6hVA;
typedef struct tyObject_Table_nagDFX4QHx0s6Fvma9blmSg tyObject_Table_nagDFX4QHx0s6Fvma9blmSg;
typedef struct tySequence_pHNq3oXj9av2sEUdqaqeZjw tySequence_pHNq3oXj9av2sEUdqaqeZjw;
typedef struct tySequence_PzqTLBFNawCGiqTk0UORYw tySequence_PzqTLBFNawCGiqTk0UORYw;
#  define nimfr_(proc, file) \
    TFrame FR_; \
    FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = 0; nimFrame(&FR_);

#  define nimfrs_(proc, file, slots, length) \
    struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename; NI len; VarSlot s[slots];} FR_; \
    FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = length; nimFrame((TFrame*)&FR_);

#  define nimln_(n, file) \
    FR_.line = n; FR_.filename = file;
typedef struct tyTuple_UCrBsiykDha2x4hr9aWPwKA tyTuple_UCrBsiykDha2x4hr9aWPwKA;
typedef struct tyObject_VmArgs_0UUl6e5CNNQfMon2xW2bVA tyObject_VmArgs_0UUl6e5CNNQfMon2xW2bVA;
typedef struct tyTuple_xDU9bZmv1ZbZkJDaATBekIQ tyTuple_xDU9bZmv1ZbZkJDaATBekIQ;
typedef struct tyTuple_quA39a2QdEQU9cSEIUSibApQ tyTuple_quA39a2QdEQU9cSEIUSibApQ;
typedef struct tyTuple_2SGm9aGCXuo7XSQ9bqD29axXw tyTuple_2SGm9aGCXuo7XSQ9bqD29axXw;
typedef struct tyTuple_F3gkSrMB1qp2Tvf9bixVXwg tyTuple_F3gkSrMB1qp2Tvf9bixVXwg;
typedef struct tyTuple_wcNatyuf8WOqAhGLhSvgiw tyTuple_wcNatyuf8WOqAhGLhSvgiw;
typedef struct tyObject_BTree_VZdzO0Tlflp7WMN4gS8oPg tyObject_BTree_VZdzO0Tlflp7WMN4gS8oPg;
typedef struct tyObject_NodecolonObjectType__dNELmBSmY7nthjhZupWO6g tyObject_NodecolonObjectType__dNELmBSmY7nthjhZupWO6g;
typedef struct tyTuple_euPCXX9bc3XzndEhYlqNS7g tyTuple_euPCXX9bc3XzndEhYlqNS7g;
struct tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q {
NU16 line;
NI16 col;
NI32 fileIndex;
};
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw;
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
struct RootObj {
TNimType* m_type;
};
struct tyObject_TPassContext_Hb6rFM0ecvtlLf2kv9aU75w {
  RootObj Sup;
};
typedef NU8 tyEnum_TEvalMode_UbrbHUpo4hYFr1DbYzJgRQ;
typedef NU8 tySet_tyEnum_TSandboxFlag_JyPEhkAmDAldmLHNNrLR0A;
struct tyObject_TCtx_S3Av1Ng7MBWGEZZBhfDYCw {
  tyObject_TPassContext_Hb6rFM0ecvtlLf2kv9aU75w Sup;
tySequence_9bAGqSvkAaFL9bWjsEPslrFA* code;
tySequence_PJMRIt5QxCm6bRaVyQ5CGA* debug;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* globals;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* constants;
tySequence_Ef05srmQTDulnBdXR4Ja6Q* types;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* currentExceptionA;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* currentExceptionB;
NI exceptionInstr;
tyObject_PProccolonObjectType__VFEBuxrDHC6kHPzc1TWaRQ* prc;
tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* module;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* callsite;
tyEnum_TEvalMode_UbrbHUpo4hYFr1DbYzJgRQ mode;
tySet_tyEnum_TSandboxFlag_JyPEhkAmDAldmLHNNrLR0A features;
NIM_BOOL traceActive;
NI loopIterations;
tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q comesFromHeuristic;
tySequence_RsxI3z4wK8jTuZiO0576gQ* callbacks;
NimStringDesc* errorFlag;
tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw* cache;
tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* config;
tyObject_ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ* graph;
NI oldErrorCount;
};
struct tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA {
NI counter;
tySequence_DfgJFJEYoj4YBAHLZPl5lQ* data;
};
typedef NI tyArray_emiAJ8okywrJw7ZHLzlXbQ[34];
struct tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg {
NI elems;
NI counter;
NI max;
tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ* head;
tySequence_9brg1xNurxcus33lU4IE1Dw* data;
tyArray_emiAJ8okywrJw7ZHLzlXbQ a;
};
struct tyObject_Table_e2Ciu0s1q49aVQ7ULXy7l9bQ {
tySequence_kxu4GK0onha2t9bo86mdVAg* data;
NI counter;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClP_0) (void* ClE_0);
void* ClE_0;
} tyProc_xdLb0cyzx3FuM6Q4NnRTpQ;
typedef tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* tyArray_OLX364rHC66WkzRbMp49aQg[64];
typedef tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* tyArray_6GDJmNRiFxkWAAdMgUie8g[70];
struct tyObject_IncrementalCtx_sdH7TnbKACuAzE7DBabnCA {
char dummy;
};
typedef N_NIMCALL_PTR(tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w*, tyProc_c6vdo1yHyj19b9bS17tijS2w) (tyObject_ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ* graph, tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* m, NI32 fileIdx);
typedef N_NIMCALL_PTR(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, tyProc_d5yEkT9aXkAtHvVerr7IeCQ) (tyObject_ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ* graph, tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* m, NI32 fileIdx);
typedef N_NIMCALL_PTR(void, tyProc_sP1I7TbCn358eLy9bX4IphA) (tyObject_ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ* graph, tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* m, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
struct tyObject_Table_0Y2brGGKD9bV6GJLXT9aUDgA {
tySequence_23SMqauuRsbDANhthj9bWlA* data;
NI counter;
};
struct tyObject_Table_NttoEzoiq5CiphZe81oadg {
tySequence_squ9b9bUH4OLHf6cEMrt6hVA* data;
NI counter;
};
struct tyObject_Table_nagDFX4QHx0s6Fvma9blmSg {
tySequence_pHNq3oXj9av2sEUdqaqeZjw* data;
NI counter;
};
typedef N_NIMCALL_PTR(void, tyProc_R9aa9aO9cNhvWgTGK9bAAvuSRA) (tyObject_ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ* graph, tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* s, tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q info);
struct tyObject_ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ {
tySequence_DfgJFJEYoj4YBAHLZPl5lQ* modules;
tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA packageSyms;
tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg deps;
NIM_BOOL suggestMode;
NIM_BOOL invalidTransitiveClosure;
tyObject_Table_e2Ciu0s1q49aVQ7ULXy7l9bQ inclToMod;
tySequence_48JTohSgTy339bRxHzUD8KA* importStack;
RootObj* backend;
tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* config;
tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw* cache;
RootObj* vm;
tyProc_xdLb0cyzx3FuM6Q4NnRTpQ doStopCompile;
tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* usageSym;
tySequence_DfgJFJEYoj4YBAHLZPl5lQ* owners;
tySequence_bWZXqEvLFwhLvAqSRoFNgQ* methods;
tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* systemModule;
tyArray_OLX364rHC66WkzRbMp49aQg sysTypes;
tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA compilerprocs;
tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA exposed;
tyArray_6GDJmNRiFxkWAAdMgUie8g intTypeCache;
tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* opContains;
tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* opNot;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* emptyNode;
tyObject_IncrementalCtx_sdH7TnbKACuAzE7DBabnCA incr;
tyProc_c6vdo1yHyj19b9bS17tijS2w importModuleCallback;
tyProc_d5yEkT9aXkAtHvVerr7IeCQ includeFileCallback;
tyProc_sP1I7TbCn358eLy9bX4IphA recordStmt;
tyObject_Table_0Y2brGGKD9bV6GJLXT9aUDgA cacheSeqs;
tyObject_Table_NttoEzoiq5CiphZe81oadg cacheCounters;
tyObject_Table_nagDFX4QHx0s6Fvma9blmSg cacheTables;
tySequence_PzqTLBFNawCGiqTk0UORYw* passes;
tyProc_R9aa9aO9cNhvWgTGK9bAAvuSRA onDefinition;
tyProc_R9aa9aO9cNhvWgTGK9bAAvuSRA onDefinitionResolveForward;
tyProc_R9aa9aO9cNhvWgTGK9bAAvuSRA onUsage;
};
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (tyObject_VmArgs_0UUl6e5CNNQfMon2xW2bVA* args, void* ClE_0);
void* ClE_0;
} tyProc_S09bPfanQx9bEvdh4862x8zw;
struct tyTuple_UCrBsiykDha2x4hr9aWPwKA {
NimStringDesc* Field0;
tyProc_S09bPfanQx9bEvdh4862x8zw Field1;
};
struct tyTuple_xDU9bZmv1ZbZkJDaATBekIQ {
NI Field0;
NI32 Field1;
NI32 Field2;
};
struct tyTuple_quA39a2QdEQU9cSEIUSibApQ {
tySequence_DfgJFJEYoj4YBAHLZPl5lQ* Field0;
tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* Field1;
};
struct tyTuple_2SGm9aGCXuo7XSQ9bqD29axXw {
NI Field0;
NimStringDesc* Field1;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* Field2;
};
struct tyTuple_F3gkSrMB1qp2Tvf9bixVXwg {
NI Field0;
NimStringDesc* Field1;
NI64 Field2;
};
struct tyObject_BTree_VZdzO0Tlflp7WMN4gS8oPg {
tyObject_NodecolonObjectType__dNELmBSmY7nthjhZupWO6g* root;
NI entries;
};
struct tyTuple_wcNatyuf8WOqAhGLhSvgiw {
NI Field0;
NimStringDesc* Field1;
tyObject_BTree_VZdzO0Tlflp7WMN4gS8oPg Field2;
};
typedef N_NIMCALL_PTR(tyObject_TPassContext_Hb6rFM0ecvtlLf2kv9aU75w*, tyProc_8ooe5vdoqmvpHnfXV29bP3w) (tyObject_ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ* graph, tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* module);
typedef N_NIMCALL_PTR(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, tyProc_A7Sdoem70tRxSEmKrf9cmyg) (tyObject_TPassContext_Hb6rFM0ecvtlLf2kv9aU75w* p, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* topLevelStmt);
typedef N_NIMCALL_PTR(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, tyProc_EAEKmBUgKFg29agoUGtzDEQ) (tyObject_ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ* graph, tyObject_TPassContext_Hb6rFM0ecvtlLf2kv9aU75w* p, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
struct tyTuple_euPCXX9bc3XzndEhYlqNS7g {
tyProc_8ooe5vdoqmvpHnfXV29bP3w Field0;
tyProc_A7Sdoem70tRxSEmKrf9cmyg Field1;
tyProc_EAEKmBUgKFg29agoUGtzDEQ Field2;
NIM_BOOL Field3;
};
struct tyObject_VmArgs_0UUl6e5CNNQfMon2xW2bVA {
NI ra;
NI rb;
NI rc;
void* slots;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* currentException;
tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q currentLineInfo;
};
struct tySequence_9bAGqSvkAaFL9bWjsEPslrFA {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct tySequence_PJMRIt5QxCm6bRaVyQ5CGA {
  TGenericSeq Sup;
  tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q data[SEQ_DECL_SIZE];
};
struct tySequence_Ef05srmQTDulnBdXR4Ja6Q {
  TGenericSeq Sup;
  tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* data[SEQ_DECL_SIZE];
};
struct tySequence_RsxI3z4wK8jTuZiO0576gQ {
  TGenericSeq Sup;
  tyTuple_UCrBsiykDha2x4hr9aWPwKA data[SEQ_DECL_SIZE];
};
struct tySequence_DfgJFJEYoj4YBAHLZPl5lQ {
  TGenericSeq Sup;
  tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* data[SEQ_DECL_SIZE];
};
struct tySequence_9brg1xNurxcus33lU4IE1Dw {
  TGenericSeq Sup;
  tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ* data[SEQ_DECL_SIZE];
};
struct tySequence_kxu4GK0onha2t9bo86mdVAg {
  TGenericSeq Sup;
  tyTuple_xDU9bZmv1ZbZkJDaATBekIQ data[SEQ_DECL_SIZE];
};
struct tySequence_48JTohSgTy339bRxHzUD8KA {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct tySequence_bWZXqEvLFwhLvAqSRoFNgQ {
  TGenericSeq Sup;
  tyTuple_quA39a2QdEQU9cSEIUSibApQ data[SEQ_DECL_SIZE];
};
struct tySequence_23SMqauuRsbDANhthj9bWlA {
  TGenericSeq Sup;
  tyTuple_2SGm9aGCXuo7XSQ9bqD29axXw data[SEQ_DECL_SIZE];
};
struct tySequence_squ9b9bUH4OLHf6cEMrt6hVA {
  TGenericSeq Sup;
  tyTuple_F3gkSrMB1qp2Tvf9bixVXwg data[SEQ_DECL_SIZE];
};
struct tySequence_pHNq3oXj9av2sEUdqaqeZjw {
  TGenericSeq Sup;
  tyTuple_wcNatyuf8WOqAhGLhSvgiw data[SEQ_DECL_SIZE];
};
struct tySequence_PzqTLBFNawCGiqTk0UORYw {
  TGenericSeq Sup;
  tyTuple_euPCXX9bc3XzndEhYlqNS7g data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, newNodeI_I7fH85CUcZMasoPRKxPsPg)(tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw kind, tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q info);
N_LIB_PRIVATE N_NIMCALL(void, add_gCCf68XrWL79bKes6htzFjQ)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* father, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* son);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, newStrNode_jT2DaoUk9bJQCQjzsxw3YtQ)(NimStringDesc* strVal, tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q info);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, newIntNode_v2VGJAZNfKPVngZCqEXQtA)(tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw kind, NI64 intVal);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, copyTree_lz8T1F9c0YwEOpUnrAUYgjg_2)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* src);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached_II46IjNZztN9bmbxUD8dt8g_2)(void);
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
STRING_LITERAL(TM_HpV7Go5mo9cm54tY2JkX3mg_2, "inc", 3);
STRING_LITERAL(TM_HpV7Go5mo9cm54tY2JkX3mg_3, "add", 3);
STRING_LITERAL(TM_HpV7Go5mo9cm54tY2JkX3mg_4, "incl", 4);
STRING_LITERAL(TM_HpV7Go5mo9cm54tY2JkX3mg_5, "put", 3);

N_LIB_PRIVATE N_NIMCALL(void, recordInc_VHefWp8qmJc2dMJurRIZ9aA)(tyObject_TCtx_S3Av1Ng7MBWGEZZBhfDYCw* c, tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q info, NimStringDesc* key, NI64 by) {
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* recorded;
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* T1_;
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* T2_;
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* T3_;
	recorded = newNodeI_I7fH85CUcZMasoPRKxPsPg(((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 125), info);
	T1_ = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	T1_ = newStrNode_jT2DaoUk9bJQCQjzsxw3YtQ(((NimStringDesc*) &TM_HpV7Go5mo9cm54tY2JkX3mg_2), info);
	add_gCCf68XrWL79bKes6htzFjQ(recorded, T1_);
	T2_ = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	T2_ = newStrNode_jT2DaoUk9bJQCQjzsxw3YtQ(key, info);
	add_gCCf68XrWL79bKes6htzFjQ(recorded, T2_);
	T3_ = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	T3_ = newIntNode_v2VGJAZNfKPVngZCqEXQtA(((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 6), by);
	add_gCCf68XrWL79bKes6htzFjQ(recorded, T3_);
	(*(*c).graph).recordStmt((*c).graph, (*c).module, recorded);
}

N_LIB_PRIVATE N_NIMCALL(void, recordAdd_ZOBfTa0YR3qZEtyE135JLA)(tyObject_TCtx_S3Av1Ng7MBWGEZZBhfDYCw* c, tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q info, NimStringDesc* key, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* val) {
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* recorded;
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* T1_;
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* T2_;
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* T3_;
	recorded = newNodeI_I7fH85CUcZMasoPRKxPsPg(((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 125), info);
	T1_ = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	T1_ = newStrNode_jT2DaoUk9bJQCQjzsxw3YtQ(((NimStringDesc*) &TM_HpV7Go5mo9cm54tY2JkX3mg_3), info);
	add_gCCf68XrWL79bKes6htzFjQ(recorded, T1_);
	T2_ = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	T2_ = newStrNode_jT2DaoUk9bJQCQjzsxw3YtQ(key, info);
	add_gCCf68XrWL79bKes6htzFjQ(recorded, T2_);
	T3_ = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	T3_ = copyTree_lz8T1F9c0YwEOpUnrAUYgjg_2(val);
	add_gCCf68XrWL79bKes6htzFjQ(recorded, T3_);
	(*(*c).graph).recordStmt((*c).graph, (*c).module, recorded);
}

N_LIB_PRIVATE N_NIMCALL(void, recordIncl_ZOBfTa0YR3qZEtyE135JLA_2)(tyObject_TCtx_S3Av1Ng7MBWGEZZBhfDYCw* c, tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q info, NimStringDesc* key, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* val) {
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* recorded;
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* T1_;
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* T2_;
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* T3_;
	recorded = newNodeI_I7fH85CUcZMasoPRKxPsPg(((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 125), info);
	T1_ = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	T1_ = newStrNode_jT2DaoUk9bJQCQjzsxw3YtQ(((NimStringDesc*) &TM_HpV7Go5mo9cm54tY2JkX3mg_4), info);
	add_gCCf68XrWL79bKes6htzFjQ(recorded, T1_);
	T2_ = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	T2_ = newStrNode_jT2DaoUk9bJQCQjzsxw3YtQ(key, info);
	add_gCCf68XrWL79bKes6htzFjQ(recorded, T2_);
	T3_ = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	T3_ = copyTree_lz8T1F9c0YwEOpUnrAUYgjg_2(val);
	add_gCCf68XrWL79bKes6htzFjQ(recorded, T3_);
	(*(*c).graph).recordStmt((*c).graph, (*c).module, recorded);
}

N_LIB_PRIVATE N_NIMCALL(void, recordPut_s05mKt0GQyLQMt9btXlmleQ)(tyObject_TCtx_S3Av1Ng7MBWGEZZBhfDYCw* c, tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q info, NimStringDesc* key, NimStringDesc* k, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* val) {
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* recorded;
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* T1_;
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* T2_;
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* T3_;
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* T4_;
	recorded = newNodeI_I7fH85CUcZMasoPRKxPsPg(((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 125), info);
	T1_ = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	T1_ = newStrNode_jT2DaoUk9bJQCQjzsxw3YtQ(((NimStringDesc*) &TM_HpV7Go5mo9cm54tY2JkX3mg_5), info);
	add_gCCf68XrWL79bKes6htzFjQ(recorded, T1_);
	T2_ = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	T2_ = newStrNode_jT2DaoUk9bJQCQjzsxw3YtQ(key, info);
	add_gCCf68XrWL79bKes6htzFjQ(recorded, T2_);
	T3_ = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	T3_ = newStrNode_jT2DaoUk9bJQCQjzsxw3YtQ(k, info);
	add_gCCf68XrWL79bKes6htzFjQ(recorded, T3_);
	T4_ = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	T4_ = copyTree_lz8T1F9c0YwEOpUnrAUYgjg_2(val);
	add_gCCf68XrWL79bKes6htzFjQ(recorded, T4_);
	(*(*c).graph).recordStmt((*c).graph, (*c).module, recorded);
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
