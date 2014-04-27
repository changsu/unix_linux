#include <apue.h>
#include <errno.h>
#include <sys/socket.h>

int initserver(int type, const struct sockaddr *addr, socklen_t alen,
	       int qlen) {
  int fd;
  int err = 0;
  // create socket
  if ((fd = socket(addr->sa_family, type, 0)) < 0) {
    return -1;
  }

  // associate address with socket
  if (bind(fd, addr, alen) < 0) {
    err = errno;
    goto errout;
  }

  // listen to the socket
  if (type == SOCK_STREAM || type == SOCK_SEQPACKET) {
    if (listen(fd, qlen) < 0) {
      err = errno;
      goto errout;
    }
  }

 errout:
  close(fd);
  errno = err;
  return -1;
}

int main() {
  err_sys("some error found %d",getpid());
  exit(0);
}
