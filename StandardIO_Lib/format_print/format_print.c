#include <apue.h>
#include <stdio.h>

int main() {
  printf("Charactors %c %c\n", 'a', 65);
  printf("Decimal %d %ld\n", 1977, 65000L);
  printf("Preceding with blanks %10d\n", 1977);
  printf("Preceding with zeros %010d\n", 1977);
  printf("Differenct %d %x %o %#x %#o\n", 100, 100, 100, 100, 100);
  printf("floats: %4.2f %+.0e %E\n", 3.1416, 3.1416, 3.1416);
  printf("string %s\n", "hello world");

  // fprintf
  FILE* pfile;
  int n;
  char name[100];
  pfile = fopen("myfile.txt", "w");
  for (n = 0; n < 3; n++) {
    puts("please give a name");
    gets(name);
    fprintf(pfile, "Name %d [%-10.10s]\n", n, name);
  }
  fclose(pfile);

  // scanf
  char str[100];
  int i;
  printf("Enter your name: \n");
  scanf("%s", str);
  printf("Enter you age: \n");
  scanf("%d", &i);
  printf("you name is %s and age %d", str, i);
  exit(0);
}
