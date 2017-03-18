#include <stdio.h>

void countMirror (int number, int control) {
    printf("%d ", number);

    if (control > 1) {
        countMirror(number - 1, control - 1);
    }

    printf("%d ", number);
}

int main() {
    int number = 0;

    printf("Type a number:\n");
    scanf("%d", &number);

    countMirror(number, 10);
    printf("\n");
}
