#include <stdio.h>

int main(int argc, char **argv) {
  int var = 100;
  int *ptr = NULL;
  ptr = &var;
  printf("%d\n", *ptr);
  return 0;
}