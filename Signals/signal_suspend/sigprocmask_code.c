#include <apue.h>
#include <errno.h>

int main() {
  sigset_t sigset;
  int errno_save;
  
  errno_save = errno;
  if (sigprocmask(0, NULL, &sigset) < 0) {
    err_sys("sigprocmast error");
  }
  
  if (sigismember(&sigset, SIGINT)) {
    printf("SIGINT");
  }
  
  if (sigismember(&sigset, SIGQUIT)) {
    printf("SIGQUIT");
  }

  if (sigismember(&sigset, SIGUSR1)) {
    printf("SIGUSR1");
  }

  if (sigismember(&sigset, SIGALRM)) {
    printf("SIGALRM");
  }

  printf("\n");
  errno = errno_save;
  exit(0);
}
