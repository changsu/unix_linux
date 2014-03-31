#include <apue.h>
#include <dirent.h>
#include <limits.h>

#define FTW_F 1 /* file other then directory */
#define FTW_D 2 /* directory*/
#define FTW_DNR 3 /* directory that can not be read */
#define FTW_NS 4 /* file that we can't stat */

/* function pointer */
typedef int Myfunc(const char*, const struct stat*, int);
static Myfunc func; // defined laterw
static char *fullpath; /* full path for every file*/
// client function
static int myftw(char*, Myfunc*);
// recursive function
static int dopath(Myfunc*);

// store statistics
static long nreg, ndir, nblk, nchr, nfifo, nslink, nsock, ntot;

int main(int argc, char* argv[]) {
  int ret;
  if (argc != 2) {
    err_quit("usage: my_ftw <starting-pathname>");
  }
  ret = myftw(argv[1], func);
  delete fullpath;
  
  // print result
  ntot = nreg + ndir + nblk + nchr + nfifo + nslink + nsock;
  if (ntot == 0) {
    ntot = 1;
  }
  printf("regular files = %7ld, %5.2f %%\n", nreg,
	 nreg * 100.0 / ntot);
  printf("directories = %7ld, %5.2f %%\n", ndir,
	 ndir * 100.0 / ntot);
  printf("block special = %7ld, %5.2f %%\n", nblk,
	 nblk * 100.0 / ntot);
  printf("char special = %7ld, %5.2f %%\n", nchr,
	 nchr * 100.0 / ntot);
  printf("FIFOs = %7ld, %5.2f %%\n", nfifo,
	 nfifo * 100.0 / ntot);
  printf("symbolic linkes = %7ld, %5.2f %%\n", nslink,
	 nslink * 100.0 / ntot);
  printf("sockets = %7ld, %5.2f %%\n", nsock,
	 nsock * 100.0 / ntot);
  exit(ret);
}

static int myftw(char *pathname, Myfunc* myfunc) {
  int len = INT_MAX;
  fullpath = new char[len];
  strncpy(fullpath, pathname, len);
  fullpath[len - 1] = 0;
  return dopath(func);
}

/** descend through the hierarchy, starting at "fullpath".
 * if full path is anything other than a directory, we lstat() it
 * call func(), and return. For a directory, recursively call ourselves
 */
static int dopath(Myfunc* myfunc) {
  struct stat statbuf;
  struct dirent *dirp;
  DIR *dp;
  int ret;
  char *ptr;

  if (lstat(fullpath, &statbuf) < 0) {
    /* stat error */
    return (func(fullpath, &statbuf, FTW_NS));
  }
  if (S_ISDIR(statbuf.st_mode) == 0) {
    /* not a directory*/
    return (func(fullpath, &statbuf, FTW_F));
  }
  // it's a directory
  if ((ret = func(fullpath, &statbuf, FTW_D)) != 0) {
    return (ret);
  }

  ptr = fullpath + strlen(fullpath);
  *ptr++ = '/';
  *ptr = 0;

  if ((dp = opendir(fullpath)) == NULL)  {/* can not open directory */
    return (func(fullpath, &statbuf, FTW_DNR));
  }
  
  while ((dirp = readdir(dp)) != NULL) {
    if (strcmp(dirp->d_name, ".") == 0 ||
      strcmp(dirp->d_name, "..") == 0) {
      continue;
    }
    strcpy(ptr, dirp->d_name);
    if ((ret = dopath(func)) != 0) {
      break;
    }
  }

  ptr[-1] = 0; // clean everyting from slash onwards
  if(closedir(dp) < 0) {
    err_ret("can't close directory %s", fullpath);
  }
  return ret;
}

static int func(const char* pathname, const struct stat* statptr, int type) {
  switch(type) {
  case FTW_F:
    switch(statptr->st_mode & S_IFMT) {
    case S_IFREG:
      nreg++;
      break;
    case S_IFBLK:
      nblk++;
      break;
    case S_IFCHR:
      nchr++;
      break;
    case S_IFIFO:
      nfifo++;
      break;
    case S_IFLNK:
      nslink++;
      break;
    case S_IFSOCK:
      nsock++;
      break;
    case S_IFDIR:
      err_dump("for S_IFDIR for %s", pathname);
    }
    break;
  case FTW_D:
    ndir++;
    break;
  case FTW_DNR:
    err_ret("cant read directory %s", pathname);
  case FTW_NS:
    err_ret("stat error for %s", pathname);
  default:
    err_dump("unknown type %d for pathname %s", type, pathname);
  }
  return 0;
}
