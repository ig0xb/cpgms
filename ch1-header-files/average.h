#ifndef EXAMPLE_HEADER
#define EXAMPLE_HEADER
#include <stdlib.h>
typedef enum {
    NONE,
    NORMAL,
    SQUARED,
} average_t;

double avg(int* arr, int, average_t);

#endif