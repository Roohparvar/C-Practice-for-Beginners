#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void func(int, int, int);

int main() {
    int a, b, c;

    printf("Enter coefficients a, b, and c for the quadratic equation (ax^2 + bx + c):\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    printf("\nThe quadratic equation is: %dx^2 + %dx + %d\n\n", a, b, c);
    func(a, b, c);

    return 0;
}

void func(int a, int b, int c) {
    double x1, x2, x;
    int delta;

    delta = ((b * b) - (4 * (a * c)));
    printf("Delta = %d\n\n", delta);

    if (delta > 0) {
        printf("The equation has two distinct real roots:\n");
        x1 = ((-b) + (sqrt(delta))) / (2 * a);
        x2 = ((-b) - (sqrt(delta))) / (2 * a);
        printf("x1 = %lf\t\tx2 = %lf\n", x1, x2);
    }
    else if (delta == 0) {
        printf("The equation has one real root:\n");
        x = (-b) / (2 * a);
        printf("x = %lf\n", x);
    }
    else {
        printf("The equation has no real roots.\n");
    }
}
