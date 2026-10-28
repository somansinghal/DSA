#include <stdio.h>

int main() {
    int a[100];
    int n, x, i;

    printf("Enter size: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++) {
        if (a[i] == x) {
            printf("Found at position %d\n", i + 1);
            return 0;
        }
    }

    printf("Not found\n");
    return 0;
}
