#include <stdio.h>
#include "print-vector.c"

#define SIZE 10

void selectionSort (int *vector, int vectorSize);

int main () {
    int vector[SIZE] = { 6, 5, 7, 4, 8, 3, 9, 2, 0, 1};

    selectionSort(vector, SIZE);
    printIntVector(vector, SIZE);
}

void selectionSort (int *vector, int vectorSize) {
    for (int i = 0; i < vectorSize; i++) {
        int lower = vector[i];
        int lowerIndex = i;

        for (int j = i + 1; j < vectorSize; j++) {
            if (vector[j] < lower) {
                lower = vector[j];
                lowerIndex = j;
            }
        }

        if (lowerIndex != i) {
            int auxiliar = vector[i];
            vector[i] = lower;
            vector[lowerIndex] = auxiliar;
        }
    }
}
