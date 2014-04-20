#include <apue.h>
#include <stropts.h>

#define BUFSIZE 4096

int main() {
  int n, flag;
  char ctlbuf[BUFSIZE], datbuf[BUFSIZE];
  struct strbuf ctl, dat;
  
  ctl.buf = ctlbuf;
  ctl.maxlen = BUFSIZE;
  
  dat.buf = datbuf;
  dat.maxlen = BUFSIZE;

  for (;;) {
    flag = 0;
    if ((n = getmsg(STDIN_FILENO, &ctl, &dat, &flag)) < 0) {
      err_sys("get msg error");
    }
    fprintf(stderr, "flag = %d, ctl.len = %d, data.len = %d\n", 
	    flag, ctl.len, dat.len);
    if (dat.len == 0) {
      exit(0);
    } else if (dat.len > 0) {
      if (write(STDOUT_FILENO, dat.buf, dat.len) != dat.len) {
	err_sys("write error");
      }
    }
  }

  exit(0);
}
