#include <stdio.h>

int main() {
    int a[100];
    int n, i;

    printf("Enter number of queue elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Queue: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
