#include <apue.h>

#define SIZE 100

int main() {
  char ptr[SIZE];
  if (chdir("/Users/chang/Documents/Self_Learning/unix_linux/FilesAndDirectories/utime") < 0) {
    err_sys("chdir failed");
  }

  if (getcwd(ptr, SIZE) == NULL) {
    err_sys("getcwd failed");
  }
  printf("cwd = %s\n", ptr);
  exit(0);
}
