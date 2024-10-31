#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    printf("Character \t--->\t ASCII Code\n");
    printf("----------------------------\n");

    for(i = 65; i <= 90; i++) {
        printf("%c\t--->\t%d\n", i, i);
    }

    for(i = 97; i <= 122; i++) {
        printf("%c\t--->\t%d\n", i, i);
    }

    return 0;
}
