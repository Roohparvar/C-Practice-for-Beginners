#include <stdio.h>

int main() {
    int i, sum, digit1, digit2;

    printf("Two-digit numbers divisible by the sum of their digits:\n\n");

    for (i = 10; i < 100; i++) {

        digit1 = i / 10;
        digit2 = i % 10;

        sum = digit1 + digit2;

        if (i % sum == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
