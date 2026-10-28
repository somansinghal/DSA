#include <stdio.h>

int main() {
    int a[100];
    int n, i, x;

    printf("Enter current queue size (0-99): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    if (n >= 100) {
        printf("Queue overflow\n");
    } else {
        printf("Enter value to insert: ");
        scanf("%d", &x);

        a[n++] = x;

        printf("Queue: ");
        for (i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}
