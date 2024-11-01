#include <stdio.h>
#include <stdlib.h>

int factorial(int i);

int main() {
    double sum = 0;
    int n, i;

    printf("Enter the value of n to calculate Euler's number (up to n!): ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++) {
        sum += (1.0 / factorial(i));
    }

    printf("Euler's number (up to %d!) is: %lf\n", n, sum);
    return 0;
}

int factorial(int i) {
    int j, result = 1;
    for (j = 1; j <= i; j++) {
        result *= j;
    }
    return result;
}
