#include <stdio.h>

void countDoubleMirror (int number) {
    printf("%d ", number);

    if (number > 1) {
        countDoubleMirror(number - 1);
    }

    printf("%d ", number * 2);
}

int main() {
    int number = 0;

    printf("Type a number:\n");
    scanf("%d", &number);

    countDoubleMirror(number);
    printf("\n");
}
