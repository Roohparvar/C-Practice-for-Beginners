#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    int uppercaseCount = 0, lowercaseCount = 0;

    printf("Enter a sentence (end with a period): ");

    while ((ch = getchar()) != '.') {
        if (ch >= 'A' && ch <= 'Z') {
            uppercaseCount++;
        }
        else if (ch >= 'a' && ch <= 'z') {
            lowercaseCount++;
        }
    }

    printf("Number of uppercase letters: %d\n", uppercaseCount);
    printf("Number of lowercase letters: %d\n", lowercaseCount);

    return 0;
}
