#include <stdio.h>
#include <stdlib.h>

int isPrime(int num) {
    if (num <= 1) return 0;
    int i;
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    printf("Enter the position of the prime number you want: ");
    scanf("%d", &n);

    int *primes = (int *)malloc(n * sizeof(int));
    if (primes == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    int count = 0;
    int num = 2;

    while (count < n) {
        if (isPrime(num)) {
            primes[count] = num;
            count++;
        }
        num++;
    }

    printf("The %dth prime number is: %d\n", n, primes[n - 1]);

    free(primes);
    return 0;
}
