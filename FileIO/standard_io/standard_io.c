 #include <apue.h>

/* stdin, stdout defined in <stdio.h> */
int main(void) {
  int c;
  while ((c = getc(stdin)) != EOF) {
    if (putc(c, stdout) == EOF) {
      err_sys("output_error");
    }
  }
  
  if (ferror(stdin)) {
    err_sys("input_error");
  }
  
  exit(0);
}
