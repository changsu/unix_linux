#include <apue.h>
#include <pwd.h>
#include <stddef.h>
#include <string.h>

int main() {
  struct passwd *ptr;
  setpwent();
  while ((ptr = getpwent()) != NULL) {
    printf("passwd name %s\n", ptr->pw_name);
  }
  endpwent();
  exit(0);
}
