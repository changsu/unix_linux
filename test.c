#include <apue.h>

int main() {
  err_sys("some error found %d",getpid());
  exit(0);
}
