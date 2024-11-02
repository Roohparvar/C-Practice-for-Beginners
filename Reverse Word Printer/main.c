#include <stdio.h>
#include <stdlib.h>

#define MAX_WORDS 100
#define MAX_LENGTH 100

int main() {
    char ch;
    char words[MAX_WORDS][MAX_LENGTH];
    int wordCount = 0;
    int index = 0;

    printf("Enter a sentence (end with a dot '.'): ");

    while (1) {
        scanf("%c", &ch);
        if (ch == '.')
            break;

        if (ch != ' ') {
            words[wordCount][index++] = ch;
        } else if (index > 0) {
            words[wordCount][index] = '\0';
            wordCount++;
            index = 0;
        }
    }

    if (index > 0) {
        words[wordCount][index] = '\0';
        wordCount++;
    }

    printf("Words in reverse order:\n");
    int i;
    for (i = wordCount - 1; i >= 0; i--) {
        printf("%s\n", words[i]);
    }

    return 0;
}
