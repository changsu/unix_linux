#include <apue.h>

#define BUFF_SIZE 4096

int main(int argc, char *argv[]) {
  int n;
  char buf[BUFF_SIZE];

  // read, write
  while ((n = read(STDIN_FILENO, buf, BUFF_SIZE)) > 0) {
    if (write(STDOUT_FILENO, buf, n) != n) {
      err_sys("write_error");
    }
  }

  if (n < 0) {
    err_sys("read error");
  }

  exit(0);
}
