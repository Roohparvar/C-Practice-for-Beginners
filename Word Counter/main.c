#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    int wordCount = 0;
    int inWord = 0;

    printf("Enter a sentence (end with a dot '.'): ");

    while (1) {
        scanf("%c", &ch);

        if (ch == '.')
            break;

        if (ch == ' ' && inWord) {
            inWord = 0;
        } else if (ch != ' ' && !inWord) {
            inWord = 1;
            wordCount++;
        }
    }

    printf("Total number of words: %d\n", wordCount);
    return 0;
}
