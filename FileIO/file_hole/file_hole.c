#include <apue.h>
#include <fcntl.h>

#define OFFSET 16384

char buf1[] = "abcdefghij";
char buf2[] = "ABCDEFGHIJ";

int main() {
  int fd;
  if ((fd = creat("file.hole", FILE_MODE)) < 0) {
    err_sys("create error");
  }

  if (write(fd, buf1, 10) != 10) {
    err_sys("buf1 write error");
  }
  // offset now 10

  if (lseek(fd, OFFSET, SEEK_SET) == -1) {
    err_sys("lseek error");
  }

  // offset now 16384

  if (write(fd, buf2, 10) != 10) {
    err_sys("buf2 write error");
  }
  // offset now 16394
  exit(0);
}
