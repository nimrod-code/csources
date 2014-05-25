/* Generated by Nimrod Compiler v0.9.5 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <errno.h>

#include <netdb.h>

#include <time.h>

#include <dlfcn.h>

#include <fcntl.h>

#include <fenv.h>

#include <fnmatch.h>

#include <ftw.h>

#include <glob.h>

#include <langinfo.h>

#include <locale.h>

#include <pthread.h>

#include <unistd.h>

#include <semaphore.h>

#include <sys/ipc.h>

#include <sys/stat.h>

#include <sys/statvfs.h>

#include <sys/mman.h>

#include <sys/wait.h>

#include <signal.h>

#include <nl_types.h>

#include <sched.h>

#include <sys/select.h>

#include <sys/socket.h>

#include <net/if.h>

#include <netinet/in.h>

#include <netinet/tcp.h>

#include <poll.h>

#include <sys/types.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
TNimType NTI98457; /* TPid */
extern TFrame* frameptr_13238;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13238;
	frameptr_13238 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13238 = (*frameptr_13238).prev;
}
N_NOINLINE(void, stdlibposixInit)(void) {
	nimfr("posix", "posix.nim")
	popFrame();
}

N_NOINLINE(void, stdlibposixDatInit)(void) {
NTI98457.size = sizeof(pid_t);
NTI98457.kind = 31;
NTI98457.base = 0;
NTI98457.flags = 3;
}

