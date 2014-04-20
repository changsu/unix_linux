#include <apue.h>
#include "macro_define.h"
#include "../../apue.2e/lib/tellwait.c"

int lock_reg(int fd, int cmd, int type, off_t offset, int whence, off_t len) {
  struct flock lock;

  lock.l_type = type;
  lock.l_start = offset;
  lock.l_whence = whence;
  lock.l_len = len;

  return (fcntl(fd, cmd, &lock));
}

static void 
lockabyte(const char* name, int fd, off_t offset) {
  if (write_lock(fd, offset, SEEK_SET, 1) < 0) {
    err_sys("%s: write_lock error", name);
  }
  printf("%s: got the lock ,byte %ld\n", name, offset);
}

int main() {
  int fd;
  pid_t pid;
  
  if ((fd = creat("templock", FILE_MODE)) < 0) {
    err_sys("create error");
  }
  if (write(fd, "ab", 2) != 2) {
    err_sys("write error");
  }

  TELL_WAIT();

  if (pid = fork() < 0) {
    err_sys("fork error");
  } else if (pid == 0) {
    lockabyte("child", fd, 0);
    TELL_PARENT(getpid());
    WAIT_PARENT();
    lockabyte("child", fd, 1);
  } else {
    lockabyte("parent", fd, 1);
    TELL_CHILD(pid);
    WAIT_CHILD();
    lockabyte("parent", fd, 0);
  }
  

  exit(0);
}
