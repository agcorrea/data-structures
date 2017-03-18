#include <stdio.h>

void printIntVector(int vector[], int vectorSize) {
    for (int i = 0; i < vectorSize; i++) {
        printf("%d\t", vector[i]);
    }

    printf("\n");
}
