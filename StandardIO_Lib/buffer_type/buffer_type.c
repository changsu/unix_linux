#include <apue.h>
#include <stdio.h>

void pr_stdio(const char*, FILE*);

int main() {
  FILE* fp;
  fputs("enter any char you want\n", stdout);
  if (getchar() == EOF) {
    err_sys("get char error");
  }
  fputs("one line to std error", stderr);
  if ((fp = fopen("/etc/passwd", "r")) == NULL) {
    err_sys("file open error");
  }
  if (getc(fp) == EOF) {
    err_sys("getc error");
  }
  
  pr_stdio("stdin", stdin);
  pr_stdio("stdout", stdout);
  pr_stdio("stderr", stderr);
  
  exit(0);
}

void pr_stdio(const char* name, FILE* fp) {
  printf("stream = %s, ", name);
  
  if (fp->_IO_file_flags & _IO_UNBUFFERED) {
    printf("unbuffered");
  } else if (fp->_IO_file_flags & _IO_LINE_BUF) {
    printf("line buffered");
  } else {
    printf("fully buffered");
  }
  printf(", buffersize = %d\n", fp->_IO_buf_end - fp->_IO_buf_base);
}
