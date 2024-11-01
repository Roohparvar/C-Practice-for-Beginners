#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i, a, b, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    for (i = a; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
            break;
        }
    }


    lcm = (a * b) / gcd;

    printf("Greatest common divisor = %d, Least common multiple = %d\n", gcd, lcm);
    return 0;
}
