#include <apue.h>
#include <sys/wait.h>

void pr_exit(int status);
int my_system(const char* cmdstring);

int main() {
  int status;
  
  if ((status = my_system("date")) < 0) {
    err_sys("system() error");
  }
  
  pr_exit(status);

  if ((status = my_system("no such command")) < 0) {
    err_sys("system() error");
  } 
  pr_exit(status);

  if ((status = my_system("who; exit 44")) < 0) {
    err_sys("system() error");
  }
  pr_exit(status);

  exit(0);
}

int my_system(const char* cmdstring) {
  pid_t pid;
  int status;
  if (cmdstring == NULL) {
    return(1); // always a command processor with UNIX
  }

  if ((pid == fork()) < 0) {
    status = -1;
  } else if (pid == 0) {
    execl("/bin/bash", "bash", "-c", cmdstring, (char *)0);
    _exit(127);
  } else {
    while (waitpid(pid, &status, 0) < 0) {
      if (errno != EINTR) {
	status = -1;
	break;
      }
    }
  }
  return status;
}

void pr_exit(int status) {
  if (WIFEXITED(status)) {
    printf("normal termination, exit status = %d\n", 
	   WEXITSTATUS(status));
  } else if (WIFSIGNALED(status)) {
    printf("abnormal termination, signal number = %d\n",
	   WTERMSIG(status));
  } else if (WIFSTOPPED(status)) {
    printf("child stopped, signal number = %d\n",
	   WSTOPSIG(status));
  }
}
