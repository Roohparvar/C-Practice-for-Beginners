#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, f1 = 0, f2 = 1, f3;

    printf("Enter the number of Fibonacci terms to display: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            printf("%d ", f1);
            continue;
        }
        if (i == 2)
        {
            printf("%d ", f2);
            continue;
        }

        f3 = f1 + f2;
        printf("%d ", f3);
        f1 = f2;
        f2 = f3;
    }

    printf("\n");
    return 0;
}
