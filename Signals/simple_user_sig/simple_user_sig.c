#include <apue.h>
static void sig_user(int signo);

int main() {
  if (signal(SIGUSR1, sig_user) == SIG_ERR) {
    err_sys("can't catch SIGUSER1\n");
  }
  if (signal(SIGUSR2, sig_user) == SIG_ERR) {
    err_sys("can't catch SIGUSER2\n");
  }
  for(;;) {
    pause();
  }
}

void sig_user(int signo) {
  if (signo == SIGUSR1) {
    printf("receive SIGUSER1\n");
  } else if (signo == SIGUSR2) {
    printf("receive SIGUSER2\n");
  } else {
    err_dump("receive signal %d\n", signo);
  }
}
