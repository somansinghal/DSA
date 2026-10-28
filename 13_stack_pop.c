#include <stdio.h>

int main() {
    int a[100];
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    if (n == 0) {
        printf("Stack underflow\n");
    } else {
        printf("Popped element: %d\n", a[n - 1]);
        printf("Remaining stack: ");
        for (i = n - 2; i >= 0; i--) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}
