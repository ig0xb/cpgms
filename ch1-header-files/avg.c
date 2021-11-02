#include "average.h"
#include <math.h>
double avg(int* arr, int len, average_t type) {
    if (len <= 0 || type == NONE) {
        return 0;
    }
    double sum = 0.0;
    for (size_t i = 0; i < len; i++) {
        if (type == NORMAL) {
            sum += arr[i];
        } else if (type == SQUARED) {
            sum += pow(arr[i], 2);
        }
    }

    return sum / len;
}