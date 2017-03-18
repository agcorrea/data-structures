#include <stdio.h>

int main() {
    int number = 0;

    printf("Type a number:\n");
    scanf("%d", &number);

    int result = fibonacci(number);
    printf("The number %d of Fibonacci sequence is %d.\n", number, result);
}

int fibonacci (int number) {
    if (number == 0) {
        return 0;
    }

    if (number == 1) {
        return 1;
    }

    return fibonacci(number - 1) + fibonacci(number - 2);
}
