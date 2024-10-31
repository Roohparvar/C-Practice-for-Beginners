#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    int totalCount = 0;
    int nonSpaceCount = 0;

    printf("Enter a string (end with a dot '.'): ");

    while (1) {
        scanf("%c", &ch);
        if (ch == '.')
            break;

        totalCount++;

        if (ch != ' ') {
            nonSpaceCount++;
        }
    }

    printf("Total number of characters (including spaces): %d\n", totalCount);
    printf("Total number of characters (excluding spaces): %d\n", nonSpaceCount);

    return 0;
}
