#include "average.h"
#include <stdio.h>

int main(int c, char** argv) {
    int    arr[5] = {1, 2, 3, 4, 5};
    double average = avg(arr, 5, NORMAL);
    printf("The average: %f\n", average);
    average = avg(arr, 5, SQUARED);
    printf("The average: %f\n", average);
    return EXIT_SUCCESS;
}