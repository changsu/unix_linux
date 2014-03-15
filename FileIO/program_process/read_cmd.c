#include <apue.h>
#include <sys/wait.h>

int main() {
  char buf[MAXLINE];
  pid_t pid;
  int status;
  
  printf("%% ");
  while (fgets(buf, MAXLINE, stdin) != NULL) {
    if (buf[strlen(buf) - 1] == '\n') {
      buf[strlen(buf) - 1] = 0;
    }

    if ((pid = fork()) < 0) {
      err_sys("fork error");
    } else if (pid == 0) { /* child */
      // newly forked process return 0 to child process
      // but return >= 0 value to parent
      execlp(buf, buf, (char*)0);
      err_ret("couldn't sexecute: %s", buf);
      exit(127);
    }

    /* parent */
    // the pid in the argument is the process ID of the child
    // waitpit return status of child process, we don't use here
    if ((pid = waitpid(pid, &status, 0)) < 0) {
      err_sys("waitpid error");
    }
    printf("%% ");
  }
  exit(0);
}
