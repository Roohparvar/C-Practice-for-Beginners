#include <stdio.h>

int main() {
    int n1, n2;

    printf("Enter the number of elements in the first list: ");
    scanf("%d", &n1);

    printf("Enter the number of elements in the second list: ");
    scanf("%d", &n2);

    int list1[n1], list2[n2];


    printf("Enter elements of the first list:\n");
    int i;
    for (i = 0; i < n1; i++) {
        scanf("%d", &list1[i]);
    }


    printf("Enter elements of the second list:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &list2[i]);
    }


    printf("Common elements are: ");
    for (i = 0; i < n1; i++) {
        int j;
        for (j = 0; j < n2; j++) {
            if (list1[i] == list2[j]) {
                printf("%d ", list1[i]);
                break;
            }
        }
    }

    return 0;
}
