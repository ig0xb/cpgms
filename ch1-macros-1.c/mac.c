#include <stdio.h>
#define ABC 5

int main(int argc, char **argv) {
  int x = 2;
  int y = ABC;

  int z = x + y;
  printf("%d + %d = %d\n", x, y, z);
  return 0;
}