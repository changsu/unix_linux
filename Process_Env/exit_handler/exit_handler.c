#include <apue.h>


static void my_exit1(void);
static void my_exit2(void);

int main(void) {
  if (atexit(my_exit2) != 0) {
    err_sys("cant register exit2");
  }
  if (atexit(my_exit1) != 0) {
    err_sys("cant regsiter exit1");
  }
  if (atexit(my_exit1) != 0) {
    err_sys("cant regsiter exit1");
  }
  printf("main is done\n");
  return (0);
}

void my_exit1(void) {
  printf("first exit handler\n");
}

void my_exit2(void) {
  printf("second exit handler\n");
}
