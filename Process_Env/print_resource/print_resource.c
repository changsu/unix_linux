#include <apue.h>
#include <sys/time.h>
#include <sys/resource.h>

#define FMT "%10d   "
// # sign show name of a variable in macro
#define doit(name) pr_limits(#name, name) 

// private function
static void pr_limits(char *name, int resource);

int main() {
#ifdef RLIMIT_AS
  doit(RLIMIT_AS);
#endif
  doit(RLIMIT_CORE);
  doit(RLIMIT_CPU); // max cpu time in seconds
  doit(RLIMIT_DATA);
  doit(RLIMIT_FSIZE);
#ifdef RLIMIT_LOCKS
  doit(RLIMIT_LOCKS);
#endif
  doit(RLIMIT_NOFILE); // # of files
#ifdef RLIMIT_NPROC
  doit(RLIMIT_NPROC); // # of child process
#endif
  doit(RLIMIT_STACK);
  // more here
  exit(0);
}

void pr_limits(char* name, int resource) {
  struct rlimit limit;
  if (getrlimit(resource, &limit) < 0) {
    err_sys("get rlimit error for %s", name);
  } else {
    printf("%-14s   ", name);
  }

  if (limit.rlim_cur == RLIM_INFINITY) {
    printf("(infinite)   ");
  } else {
    printf(FMT, limit.rlim_cur);
  }
  
  if (limit.rlim_max == RLIM_INFINITY) {
    printf("(inifinite)   ");
  } else {
    printf(FMT, limit.rlim_max);
  }

  putchar((int)'\n');
}
