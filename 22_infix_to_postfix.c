#include <stdio.h>
#include <ctype.h>

char st[100];
int top = -1;

int prec(char x) {
    if (x == '^') {
        return 3;
    }
    if (x == '*' || x == '/') {
        return 2;
    }
    if (x == '+' || x == '-') {
        return 1;
    }
    return 0;
}

int main() {
    char a[100], x;
    int i;

    printf("Enter infix (no spaces): ");
    scanf("%99s", a);

    for (i = 0; a[i]; i++) {
        x = a[i];

        if (isalnum((unsigned char)x)) {
            printf("%c", x);
        } else if (x == '(') {
            st[++top] = x;
        } else if (x == ')') {
            while (top >= 0 && st[top] != '(') {
                printf("%c", st[top--]);
            }
            if (top >= 0) {
                top--;
            }
        } else {
            while (top >= 0 && st[top] != '(' &&
                   (prec(st[top]) > prec(x) || (prec(st[top]) == prec(x) && x != '^'))) {
                printf("%c", st[top--]);
            }
            st[++top] = x;
        }
    }

    while (top >= 0) {
        printf("%c", st[top--]);
    }
    printf("\n");

    return 0;
}
