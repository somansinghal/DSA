#include <stdio.h>

int main() {
    int a[100];
    int n, x, i;
    int l = 0, r, m;

    printf("Enter size of sorted array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element: ");
    scanf("%d", &x);

    r = n - 1;
    while (l <= r) {
        m = (l + r) / 2;
        if (a[m] == x) {
            printf("Found at position %d\n", m + 1);
            return 0;
        }
        if (a[m] < x) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }

    printf("Not found\n");
    return 0;
}
