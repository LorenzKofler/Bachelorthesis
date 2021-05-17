#include <stdio.h>
#include <unistd.h>
#include "seccomp-bpf.h"

static int install_filter(void) {
  struct sock_filter filter[] = {
      VALIDATE_ARCHITECTURE,
      EXAMINE_SYSCALL,
      ALLOW_SYSCALL(write),
      ALLOW_SYSCALL(exit_group),
      KILL_PROCESS,
  };
  struct sock_fprog prog = {
      .len = (unsigned short)(sizeof(filter) / sizeof(filter[0])),
      .filter = filter,
  };
  if (prctl(PR_SET_NO_NEW_PRIVS, 1, 0, 0, 0)) {
    perror("prctl(NO_NEW_PRIVS)");
    return 1;
  }
  if (prctl(PR_SET_SECCOMP, SECCOMP_MODE_FILTER, &prog)) {
    perror("prctl(PR_SET_SECCOMP)");
    return 1;
  }
  return 0;
}

int main() {
  printf("1. Uneingeschraenkt\n");
  install_filter();
  printf("2. write() Systecall ist erlaubt\n");
  FILE *fp;
  fp = fopen("/etc/passwd", "r");
  fclose(fp);
  printf("3. openat() Systecall ist nicht erlaubt\n");
  return 0;
}
