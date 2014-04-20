#include <apue.h>
#include <stropts.h>
#include <string.h>

int main() {
  int fd, ret;
  char *ctrbuf = "This is a control part";
  char *databuf = "This is a data part";
  struct strbuf ctr;
  struct strbuf data;

  ctr.buf = ctrbuf;
  ctr.len = strlen(ctrbuf);

  data.buf = databuf;
  data.len = strlen(databuf);

  ret = putpmsg(fd, &ctr, &data, 0, MSG_HIPRI);
  err_sys("some error found %d",getpid());
  exit(0);
}
