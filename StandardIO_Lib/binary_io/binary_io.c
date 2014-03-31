#include <apue.h>
#include <stdio.h>

int main() {
  FILE* fp;
  char c[] = "This is a test tutorial.";
  char buf[50];
  
  fp = fopen("file.txt", "w+");
  if (fwrite(c, strlen(c) + 1, 1, fp) != 1) {
    perror("Error in writing");
  }
  
  fseek(fp, SEEK_SET, 0);
  fread(buf, strlen(c) + 1, 1, fp);
  printf("%s\n", buf);
  exit(0);
}
