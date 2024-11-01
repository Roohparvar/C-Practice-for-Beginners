#include <stdio.h>

int isValidParentheses(char expression[]) {
    int balance = 0;

    int i;
    for (i = 0; expression[i] != '\0'; i++) {
        if (expression[i] == '(') {
            balance++;
        }
        else if (expression[i] == ')') {
            balance--;
            if (balance < 0) {
                return 0;
            }
        }
    }

    return balance == 0;
}

int main() {
    char expression[100];

    printf("Enter an expression with parentheses: ");
    scanf("%s", expression);

    if (isValidParentheses(expression)) {
        printf("The parentheses are balanced.\n");
    } else {
        printf("The parentheses are not balanced.\n");
    }

    return 0;
}
