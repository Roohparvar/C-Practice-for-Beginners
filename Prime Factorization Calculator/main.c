#include <stdio.h>
#include <stdlib.h>

int isPrime(int num) {
    int i;
    if (num <= 1) return 0;
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int number, i;

    printf("Enter a number to find its prime factors: ");
    scanf("%d", &number);

    printf("Prime factors of %d are: ", number);
    for(i = 2; i <= number; i++) {
        if(number % i == 0 && isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
