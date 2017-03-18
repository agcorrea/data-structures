#include <stdio.h>

int main() {
    int number = 0;

    printf("Type a number:\n");
    scanf("%d", &number);

    int result = factorial(number);
    printf("Factorial of %d is %d.\n", number, result);
}

int factorial (int number) {
    if (number <= 1) {
        return 1;
    }

    return number * factorial(number-1);
}
