#include <apue.h>
#include <sys/socket.h>

static void sig_pipe(int);
int s_pipe(int fd[2]) {
  return(socketpair(AF_UNIX, SOCK_STREAM, 0, fd));
}

int main() {
  int n;
  int fd[2]; // full-duplex stream-based pipe
  pid_t pid;
  char line[MAXLINE];

  if (signal(SIGPIPE, sig_pipe) == SIG_ERR) {
    err_sys("signal error");
  }

  if (s_pipe(fd) < 0) {
    err_sys("pipe error");
  }

  if ((pid = fork()) < 0) {
    err_sys("fork error");
  } else if (pid > 0) {
    // parent use fd[0] for read and write
    close(fd[1]);
    while (fgets(line, MAXLINE, stdin) != NULL) {
      n = strlen(line);
      if (write(fd[0], line, n) != n) {
	err_sys("write error to pipe");
      }

      if ((n = read(fd[0], line, MAXLINE)) < 0) {
	err_sys("read error from pipe");
      }

      if (n == 0) {
	err_sys("child close pipe");
	break;
      }
      
      line[n] = 0;
      if (fputs(line, stdout) == EOF) {
	err_sys("fputs error");
      }
    }
    if (ferror(stdin)) {
      err_sys("fgets error on stdin");
    }
    exit(0);
  } else {
    // child use fd[1] for read and write
    close(fd[0]);
    if (fd[1] != STDIN_FILENO &&
	dup2(fd[1], STDIN_FILENO) != STDIN_FILENO) {
      err_sys("dup2 error to stdin");
    }

    if (fd[1] != STDOUT_FILENO &&
	dup2(fd[1], STDOUT_FILENO) != STDOUT_FILENO) {
      err_sys("dup2 error to stdout");
    }

    if (execl("./add_coprocess", "add_coprocess", (char*)0) < 0) {
      err_sys("execl error");
    }
  }
  exit(0);
}

static void
sig_pipe(int signo) {
  printf("SIGPIPE caught\n");
  exit(1);
}
