#include <stdio.h>

int main(int argv, char** argc) {
    int var = 1;

    int* intPtr = &var;

    char* charPtr = (char*)&var;

    printf("Before pointer airthmetic\nInt Ptr: %u\tChar Ptr: %u\n", (unsigned int)intPtr, (unsigned int)charPtr);
    intPtr++;  // Arithmetic step is usually 4 bytes
    charPtr++; // Arithmetic step in 1 byte
    printf("After pointer airthmetic\nInt Ptr: %u\tChar Ptr: %u\n", (unsigned int)intPtr, (unsigned int)charPtr);
    return 0;
}