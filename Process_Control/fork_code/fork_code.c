#include <apue.h>

// define global variables, will be copied over to child process in fork()
int glob = 6;
char buf[] = "a write to stdout\n";

int main() {
  int var;
  pid_t pid;
  
  var =86;

  if (write(STDOUT_FILENO, buf, sizeof(buf) - 1) != sizeof(buf) - 1) {
    err_sys("write to stdout err");
  }

  printf("before fork\n");
  if ((pid = fork()) < 0) {
    err_sys("fork error");
  } else if (pid == 0) {
    // child process
    glob++;
    var++;
  } else {
    sleep(2);
  }
  
  printf("pid = %d, glob = %d, var = %d\n", getpid(), glob, var);
  exit(0);
}
