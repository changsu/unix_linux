#include <apue.h>
#include <sys/wait.h>

char *env_init[] = { "USER=unknown", "PATH=/tmp:/Users/chang/Documents/Self_Learning/unix_linux/Process_Control/exec_code", NULL };

int main() {
  pid_t pid;
  if ((pid = fork()) < 0) {
    err_sys("fork error");
  } else if (pid == 0) {
    if (execle("/Users/chang/Documents/Self_Learning/unix_linux/Process_Control/exec_code/echoall",
	       "sdf", "echoall", "chagn", "asdfsdf", (char*)0, env_init) < 0) {
      err_sys("execle error");
    }
  }

  if (waitpid(pid, NULL, 0) < 0) {
    err_sys("wait error");
  }

  if ((pid = fork()) < 0) {
    err_sys("fork error");
  } else if (pid == 0) {
    if (execlp("echoall", "echoall", "only 1 arg", (char*)0) < 0) {
      err_sys("execlp error");
    }
  }
  
  exit(0);
}
