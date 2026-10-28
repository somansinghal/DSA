#include <stdio.h>

int main() {
    int a[100];
    int n, i, x;

    printf("Enter current number of elements (0-99): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    if (n == 100) {
        printf("Stack overflow\n");
    } else {
        printf("Enter value to push: ");
        scanf("%d", &x);

        a[n++] = x;

        printf("Stack: ");
        for (i = n - 1; i >= 0; i--) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}
