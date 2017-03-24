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

    for (int i = 0; i < SIZE; i++) {
        if (chosenOne == numbers[i]) {
            found = 1;
            break;
        }
    }

    if (found == 1) {
        printf("I found it!\n");
    } else {
        printf("I'm sorry, the number %i is not on the array.\n", chosenOne);
    }

    printIntVector(numbers, SIZE);
}
