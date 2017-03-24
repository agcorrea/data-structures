#include <stdio.h>
#include "../commons/print-vector.c"

#define SIZE 10

int main () {
    int numbers[SIZE];
    int chosenOne = -1;
    int found = 0;

    printf("Type 10 numbers:\n");
    for (int i = 0; i< SIZE; i++) {
        scanf("%i", &numbers[i]);
    }

    printf("Choose a number and I'll say if it's on the array: ");
    scanf("%i", &chosenOne);

    if (linearSearch(numbers, SIZE, chosenOne) == 1) {
        printf("I found it!\n");
    } else {
        printf("I'm sorry, the number %i is not on the array.\n", chosenOne);
    }

    printIntVector(numbers, SIZE);
}

int linearSearch (int vector[], int vectorSize, int value) {
    for (int i = 0; i < vectorSize; i++) {
        if (value == vector[i]) {
            return 1;
        }
    }

    return 0;
}
