#include <apue.h>
#include <pthread.h>

pthread_t ntid;
static void printids(const char *s);

void* thr_fn(void *arg) {
  printids("new thread: ");
  return ((void*)0);
}

int main() {
  int err;
  err = pthread_create(&ntid, NULL, thr_fn, NULL);
  if (err != 0) {
    err_quit("can't creat thread: %s\n", strerror(err));
  }
  printids("main thread:");
  sleep(1);
  exit(0);
}

void printids(const char *s) {
  pid_t pid;
  pthread_t tid;
  pid = getpid();
  tid = pthread_self();
  printf("%s pid % u tid %d \n", s, (unsigned int)pid, tid);
}
