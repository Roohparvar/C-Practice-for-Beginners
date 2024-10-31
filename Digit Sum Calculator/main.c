#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, sum = 0;
    printf("Give me your number (enter -1 to exit):\n");
    scanf("%d", &a);

    if (a >= 0)
    {
        while (a != -1)
        {
            sum = 0;
            while (a > 0)
            {
                sum += a % 10;
                a = a / 10;
            }
            printf("Sum of digits: %d\n", sum);
            printf("Give me your number (enter -1 to exit):\n");
            scanf("%d", &a);
        }
    }
    return 0;
}
