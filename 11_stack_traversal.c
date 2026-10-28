#include <stdio.h>

int main() {
    int a[100];
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter stack elements from bottom to top:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Stack from top to bottom: ");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }

    return 0;
}
