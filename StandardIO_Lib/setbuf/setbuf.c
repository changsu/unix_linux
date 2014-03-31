#include <apue.h>
#include <stdio.h>

int main() {
  char buf[BUFSIZ];
  setbuf(stdout, buf);
  puts("This is buffered IO");
  fflush(stdout);
  exit(0);
}
