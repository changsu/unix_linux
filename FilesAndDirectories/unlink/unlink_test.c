#include <apue.h>
#include <fcntl.h>

int main(void) {
  if (open("tempfile", O_RDWR) < 0)  {
    err_sys("open error");
  }
  // link count +1 after function above
  if (unlink("tempfile") < 0) {
    err_sys("unlink error");
  }
  // link count -1 after function above
  // also can not refer to the file
  printf("file unlinked\n");
  // file still not deleted b/c it's open by current process
  sleep(15);
  printf("done\n");
  // after process exit, file fully deleted
  exit(0);
}
