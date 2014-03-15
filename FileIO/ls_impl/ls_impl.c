#include <apue.h>
#include <dirent.h>

int main(int argc, char *argv[]) {
  DIR *dp; // directory pointer
  struct dirent *dirp; // directory entry pointer
  if (argc != 2) {
    err_quit("usage: ls directory_name");
  } 
  
  // opendir, readdir, closedir

  if ((dp = opendir(argv[1])) == NULL) {
    err_sys("can't open %s", argv[1]);
  }

  while((dirp = readdir(dp)) != NULL) {
    printf("%s\n", dirp->d_name);
  }
  
  closedir(dp);
  // 0 means OK , 1 to 255 means that error occured
  exit(0);
}
