#include <apue.h>
#include <fcntl.h>
#include <utime.h>

// this function open the file w/o changing there access and modifiction time
// cover sth!! cool!
int main(int argc, char* argv[]) {
  int i, fd;
  struct stat statbuf;
  struct utimbuf timebuf;
  for (i = 1; i < argc; i++) {
    // fetch original times
    if (stat(argv[i], &statbuf) < 0) {
      err_ret("%s: stat error", argv[i]);
      continue;
    }

    // open the file with and truncates files to zero length
    if ((fd = open(argv[i], O_RDWR | O_TRUNC)) < 0) {
      err_ret("%s: open error", argv[i]);
      continue;
    }
    close(fd);
    
    //  reset times
    timebuf.actime = statbuf.st_atime;
    timebuf.modtime = statbuf.st_mtime;
    if (utime(argv[i], &timebuf) < 0) {
      err_ret("%s: utime error", argv[i]);
      continue;
    }
  }
  exit(0);
}
