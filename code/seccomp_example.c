#include <stdio.h>
#include <sys/prctl.h>  
#include <linux/seccomp.h>
#include <unistd.h>      

int main() {
  printf("1. Uneingeschränkt\n");
  prctl(PR_SET_SECCOMP, SECCOMP_MODE_STRICT);
  printf("2. SECCOMP_MODE_STRICT aktiv\n");
  fork();
  printf("3. Programm ist schon beendet\n");
  return 0; 
}
