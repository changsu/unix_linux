#include <apue.h>
#include <stdio.h>

int main() {
  FILE* fp;
  int c;
  fpos_t pos;

  fp = fopen("file.txt", "r");
  if (fp == NULL) {
    perror("Error in opening file");
  } else {
    c = fgetc(fp);
    printf("1st char is %c\n", c);
    fgetpos(fp, &pos);
    for (int i = 0; i < 3; i++) {
      fsetpos(fp, &pos);
      c = fgetc(fp);
      printf("2nd char is %c\n", c);
    }
    fclose(fp);
  }

  exit(0);
}
