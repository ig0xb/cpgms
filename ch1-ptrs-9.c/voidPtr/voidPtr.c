#include <stdio.h>

void printBytes(void* data, size_t len) {
    char           delim = ' ';
    unsigned char* ptr = data;

    for (size_t i = 0; i < len; i++) {
        printf("%c 0x%x", delim, *ptr);
        delim = ',';
        ptr++;
    }
    printf("\n");
}

int main(int argc, char** argv) {
    int    a = 42;
    double b = 9.9;
    printBytes(&a, sizeof(int));
    printBytes(&b, sizeof(double));

    return 0;
}