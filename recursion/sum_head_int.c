#include <stdio.h>

int main() {
    int number = 0;

    printf("Type a number:\n");
    scanf("%d", &number);

    int result = sumHead(number);
    printf("The sum of the first %d integers is %d.\n", number, result);
}

int sumHead (int number) {
    if (number == 1) {
        return 1;
    }

    return number + sumHead(number-1);
}
