#include <apue.h>
#include <fcntl.h>

#define RWRWRW (S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH)

int main() {
  umask(0); // allow permission across all categories, user, group, other
  if (creat("foo", RWRWRW) < 0) {
    err_sys("create error for foo");
  }
  umask(S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH); // turn off group and other access
  if (creat("bar", RWRWRW) < 0) {
    err_sys("create error for bar");
  }
  exit(0);
}
