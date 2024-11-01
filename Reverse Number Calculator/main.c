#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, digit = 0;

    printf("Enter an integer to find its reverse: ");
    scanf("%d", &num);

    printf("The reverse of the number is: ");

    do {
        digit = num % 10;
        printf("%d", digit);
        num /= 10;
    } while (num != 0);

    printf("\n");
    return 0;
}
