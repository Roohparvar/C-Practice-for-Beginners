#include <stdio.h>
#include <stdlib.h>

int main()
{
    double d;

    printf("Enter a number in scientific notation (e.g., 2e+7): ");
    scanf("%le", &d);

    printf("The result is: %lf\n", d);
    return 0;
}
