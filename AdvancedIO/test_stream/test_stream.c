#include <apue.h>
#include <fcntl.h>

int main(int argc, char* argv[]) {
  int i, fd;
  for (i = 1; i < argc; i++) {
    if ((fd = open(argv[i], O_RDONLY)) < 0) {
      err_sys("can't open %s", argv[i]);
    }
    if (isastream(fd) == 0) {
      err_ret("%s: is not a stream", argv[i]);
    } else {
      err_msg("%s: is a stream device", argv[i]);
    }
  }
  exit(0);
}
