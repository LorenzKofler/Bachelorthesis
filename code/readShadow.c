#include <stdio.h>

int main() {
  FILE *fp;
  char ch;
  fp = fopen("/etc/shadow", "r");
  while((ch = fgetc(fp)) != EOF)
    printf("%c", ch);
  fclose(fp);
}
