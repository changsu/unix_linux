#include <apue.h>
#include <netdb.h>
#include <errno.h>
#include <syslog.h>
#include <sys/socket.h>

#define BUFLEN 128
#define MAXADDRLEN 256

#ifndef HOST_NAME_MAX
#define HOST_NAME_MAX 256
#endif

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

  return fd;

 errout:
  close(fd);
  errno = err;
  return -1;
}

void serve(int sockfd) {
  int n;
  socklen_t alen;
  FILE *fp;
  char buf[BUFLEN];
  char abuf[MAXADDRLEN];

  for (;;) {
    alen = MAXADDRLEN;
    // recvfrom and save client address
    if ((n = recvfrom(sockfd, buf, BUFLEN, 0,
		      (struct sockaddr *)abuf, &alen)) < 0) {
      syslog(LOG_ERR, "ruptimed: recvfrom error: %s", strerror(errno));
      exit(1);
    }

    if ((fp = popen("/usr/bin/uptime", "r")) == NULL) {
      sprintf(buf, "error: %s\n", strerror(errno));
      sendto(sockfd, buf, strlen(buf), 0,
	     (struct sockaddr *)abuf, alen);
    } else {
      if (fgets(buf, BUFLEN, fp) != NULL) {
	sendto(sockfd, buf, strlen(buf), 0, 
	       (struct sockaddr *)abuf, alen);
      }
      pclose(fp);
    }
  }
}

int main(int argc, char *argv[]) {
  struct addrinfo* ailist, *aip;
  struct addrinfo hint;
  int sockfd, err, n;
  char *host;
  
  if (argc != 1) {
    err_quit("usage: ruptimed");
  }

  n = HOST_NAME_MAX;
  host = (char *)malloc(n);
  // good sanity check after malloc
  if (host == NULL) {
    err_sys("malloc error");
  }

  // the server needs to find the host which is running on
  if (gethostname(host, n) < 0) {
    err_sys("get host name error");
  }
  
  daemonize("ruptimed");

  // look up address for the ruptime service
  hint.ai_flags = AI_CANONNAME;
  hint.ai_family = 0;
  hint.ai_socktype = SOCK_DGRAM;
  hint.ai_protocol = 0;
  hint.ai_addrlen = 0;
  hint.ai_canonname = NULL;
  hint.ai_addr = NULL;
  hint.ai_next = NULL;
  
  if ((err = getaddrinfo(host, "ruptime", &hint, &ailist)) != 0) {
    syslog(LOG_ERR, "ruptimed: getaddrinfo error : %s", gai_strerror(err));
    exit(1);
  }

  for (aip = ailist; aip != NULL; aip = aip->ai_next) {
    if ((sockfd = initserver(SOCK_STREAM, aip->ai_addr, aip->ai_addrlen, 0)) >= 0) {
      serve(sockfd);
      exit(0);
    }
  }
  
  exit(1);
}
