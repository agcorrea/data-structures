#include <stdio.h>

int sumCountMirror (int number, int control) {
    int result = 0;

    printf("%d ", number);

    if (control > 1) {
        result = sumCountMirror(number - 1, control - 1);
    }

    printf("%d ", number);

    return (number * 2) + result;
}

int main() {
    int number = 0;

    printf("Type a number:\n");
    scanf("%d", &number);

    int result = sumCountMirror(number, 10);
    printf("\nThe sum of the printed sequence is %d. \n", result);
}
