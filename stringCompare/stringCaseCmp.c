#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
int main(int argc, char** argv) {

    const char phrase[] = "zzyzx";

    for (size_t i = 0; i < strlen(phrase); i++) {
        for (size_t j = i + 1; j < strlen(phrase); j++) {
            // printf("%c, %c\n", phrase[i], phrase[j]);
            if (tolower(phrase[i]) == tolower(phrase[j])) {
                printf("%c, %c\n", phrase[i], phrase[j]);
                return 1;
            }
        }
    }
    return 0;
}