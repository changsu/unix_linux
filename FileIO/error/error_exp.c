#include <apue.h>
#include <errno.h>

int main(int argc, char *argv[]) {
  // strerror map errnum to error msg string
  fprintf(stderr, "EACCES: %s\n", strerror(EACCES));
  errno = ENOENT;
  // produce error message on the standard error based on the
  // current value of errno, output the string pointed to by argument
  // following by colon and the error msg
  perror(argv[0]);
  exit(0);
}
