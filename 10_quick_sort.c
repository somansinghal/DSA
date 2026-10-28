#include <stdio.h>

void quick(int a[], int l, int r) {
    int i = l;
    int j = r;
    int p = a[(l + r) / 2];
    int t;

    while (i <= j) {
        while (a[i] < p) {
            i++;
        }
        while (a[j] > p) {
            j--;
        }
        if (i <= j) {
            t = a[i];
            a[i] = a[j];
            a[j] = t;
            i++;
            j--;
        }
    }

    if (l < j) {
        quick(a, l, j);
    }
    if (i < r) {
        quick(a, i, r);
    }
}

int main() {
    int a[100];
    int n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    if (n > 0) {
        quick(a, 0, n - 1);
    }

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
