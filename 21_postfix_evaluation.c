#include <stdio.h>
#include <ctype.h>

int main() {
    int s[100];
    int top = -1;
    int i, a, b;
    char e[100];

    printf("Enter postfix (single-digit operands, no spaces): ");
    scanf("%99s", e);

    for (i = 0; e[i]; i++) {
        if (isdigit((unsigned char)e[i])) {
            s[++top] = e[i] - '0';
        } else {
            if (top < 1) {
                printf("Invalid expression\n");
                return 0;
            }

            b = s[top--];
            a = s[top--];

            switch (e[i]) {
                case '+':
                    s[++top] = a + b;
                    break;
                case '-':
                    s[++top] = a - b;
                    break;
                case '*':
                    s[++top] = a * b;
                    break;
                case '/':
                    if (b == 0) {
                        printf("Division by zero\n");
                        return 0;
                    }
                    s[++top] = a / b;
                    break;
                default:
                    printf("Unsupported operator\n");
                    return 0;
            }
        }
    }

    if (top == 0) {
        printf("Result = %d\n", s[top]);
    } else {
        printf("Invalid expression\n");
    }

    return 0;
}
