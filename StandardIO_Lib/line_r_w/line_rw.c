#include <apue.h>
#include <stdio.h>

#define BUF_SIZE 100
int main() {
  FILE* fp;
  char buf[BUF_SIZE];

  fp = fopen("file.txt", "r");
  if (fp == NULL) {
    perror("Error opening file");
  } else {
    if (fgets(buf, BUF_SIZE, fp) != NULL) {
      fputs(buf, stdout);
      // puts(buf) not recommended
    }
    fclose(fp);
  }

  exit(0);
}
