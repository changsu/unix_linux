#include <apue.h>

void pr_mask(const char* str);
static void sig_int(int signo);

int main() {
  sigset_t newmask, oldmask, waitmask;
  pr_mask("program start: ");

  if (signal(SIGINT, sig_int) == SIG_ERR) {
    err_sys("signal SIGINT error");
  }

  sigemptyset(&waitmask);
  sigaddset(&waitmask, SIGUSR1);
  sigemptyset(&newmask);
  sigaddset(&newmask, SIGINT);

  // block sigint and save current signal mask
  if (sigprocmask(SIG_BLOCK, &newmask, &oldmask) < 0) {
    err_sys("SIG_BLOCK error");
  }

  // critical region of code
  pr_mask("in critical region: ");
  sleep(5);

  // pause, allowing all signals except SIGUSR1
  if (sigsuspend(&waitmask) != -1) {
    err_sys("sigsuspend error");
  }

  pr_mask("after return from sigsuspend: ");

  // reset signal mask which unblocks sigint;
  if (sigprocmask(SIG_SETMASK, &oldmask, NULL) < 0) {
    err_sys("SIG_SETMASK error");
  }

  // and continue processing ...
  pr_mask("program exit: ");
  exit(0);
}

void pr_mask(const char* str) {
  sigset_t sigset;
  int errno_save;

  printf(str);

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
}

void sig_int(int signo) {
  pr_mask("\n in sig_int: ");
}
