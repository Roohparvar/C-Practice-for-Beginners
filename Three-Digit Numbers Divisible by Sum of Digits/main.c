#include <stdio.h>

int main() {
    int i, sum, digit1, digit2, digit3;

    printf("Three-digit numbers divisible by the sum of their digits:\n\n");

    for (i = 100; i < 1000; i++) {
        digit1 = i / 100;
        digit2 = (i / 10) % 10;
        digit3 = i % 10;

        sum = digit1 + digit2 + digit3;

        if (i % sum == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
