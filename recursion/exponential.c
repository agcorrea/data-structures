#include <stdio.h>

void exp (int base, int exponential, int *result) {
    if (exponential == 0) {
        *result = 1;
        return;
    }

    exp(base, exponential - 1, result);

    *result = base * *result;
}

int main() {
    int base = 0, exponential = 0, result = 0;

    printf("Base:\n");
    scanf("%d", &base);

    printf("Exponential:\n");
    scanf("%d", &exponential);

    exp(base, exponential, &result);
    printf("%d ^ %d = %d.\n", base, exponential, result);
}
