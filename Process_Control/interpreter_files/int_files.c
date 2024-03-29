#include <apue.h>
#include <sys/wait.h>

int main() {
  pid_t pid;
  if ((pid = fork()) < 0) {
    err_sys("fork error");
  } else if (pid == 0) {
    if (execl("/Users/chang/Documents/Self_Learning/unix_linux/Process_Control/interpreter_files/testinterp",
	      "testinterp", "args1", "myarg", (char*)0) < 0) {
      err_sys("execl error");
    }
  }

  if (waitpid(pid, NULL, 0) < 0) {
    err_sys("waitpid error");
  }
  exit(0);
}
