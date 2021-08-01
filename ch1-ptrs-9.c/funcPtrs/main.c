#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}
int sub(int a, int b) {
    return a - b;
}

int main(int argc, char** argv) {
    int (*funPtr)(int, int) = &sum;
    int a = 41;
    int b = 1;
    printf("sum of %d + %d = %d\n", a, b, funPtr(a, b));
    funPtr = &sub;
    printf("sub of %d - %d = %d\n", a, b, funPtr(a, b));
    return 0;
}