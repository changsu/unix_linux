#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("uid = %d, gid = %d\n", getuid(), getgid());
  exit(0);
}
