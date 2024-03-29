#include <apue.h>
#include <sys/socket.h>

#define MAXSLEEP 128

// exponential bakeoff algorithm
int connect_retry(int sockfd, const struct sockaddr *addr, socklen_t alen) {
  int nsec;
  for (nsec = 1; nsec <= MAXSLEEP; nsec <<= 1) {
    if (connect(sockfd, addr, alen) == 0) {
      return 0;
    }
    if (nsec <= MAXSLEEP / 2) {
      sleep(nsec);
    }
  }
  return -1;
}

int main() {
  err_sys("some error found %d",getpid());
  exit(0);
}
