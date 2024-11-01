#include <stdio.h>

int main() {
    char ch, mostFrequentChar;
    int freq[256] = {0};
    int maxFreq = 0;

    printf("Enter a sentence (end with a dot '.'): ");

    while (1) {
        scanf("%c", &ch);
        if (ch == '.') {
            break;
        }

        freq[(int)ch]++;

        if (freq[(int)ch] > maxFreq) {
            maxFreq = freq[(int)ch];
            mostFrequentChar = ch;
        }
    }

    printf("The most frequent character is '%c' with %d occurrences.\n", mostFrequentChar, maxFreq);

    return 0;
}
