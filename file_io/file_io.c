#include <apue.h>

// the <unistd.h> header, two constants STDIN_FILENO, STDOUT_FILENO
// are part of the POSIX standard. In this header, read and write functions

// usage: copy file ./file_io < Makefile > Makefile_new

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
