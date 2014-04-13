#include <apue.h>

static void sig_quit(int);

int main() {
  sigset_t newmask, oldmask, pendmask;
  
  if (signal(SIGQUIT, sig_quit) == SIG_ERR) {
    err_sys("can't catch SIGQUIT");
  }

  // block SIGQUIT and save current signal mask
  sigemptyset(&newmask);
  sigaddset(&newmask, SIGQUIT);

  if (sigprocmask(SIG_BLOCK, &newmask, &oldmask) < 0) {
    err_sys("SIG_BLOCK error");
  }

  sleep(5); // SIGQUIT here will remain pending, sleep w/o hearing quit signal

  if (sigpending(&pendmask) < 0) {
    err_sys("sigpending error");
  }
  if (sigismember(&pendmask, SIGQUIT)) {
    printf("\nSIGQUIT pending\n");
  }

  // reset signal mask which unblocks SIGQUIT
  if (sigprocmask(SIG_SETMASK, &oldmask, NULL) < 0) {
    err_sys("SIGMASK error");
  }
  printf("SIGQUIT unblocked\n");
  sleep(5);
  exit(0);
}

void sig_quit(int signo) {
  printf("caught SIGQUIT\n");
  if (signal(SIGQUIT, SIG_DFL) == SIG_ERR) {
    err_sys("can't reset SIGQUIT");
  }
}
