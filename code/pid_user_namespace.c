#define _GNU_SOURCE
#include <sched.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

#define CHILD_STACK (1048576)

int isolated(){
  printf("Child pid: %d\n", getpid());
  printf("Child uid: %d\n", getuid());
  return 0;
}

int main(){
  void *stack = malloc(CHILD_STACK);
  pid_t child_pid = clone( &isolated, stack + CHILD_STACK, CLONE_NEWPID, NULL);
  if (child_pid == -1) {
    fprintf(stderr, "clone() failed: %m\n");
    return 0;
  }
  printf("clone() = %ld\n", (long)child_pid);
  printf("Parent uid: %d\n", getuid());
  waitpid(child_pid, NULL, 0);
  free(stack);
  return 0;
}


