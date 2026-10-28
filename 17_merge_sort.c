#include <stdio.h>

int b[100];

void merge(int a[], int l, int m, int r) {
    int i = l;
    int j = m + 1;
    int k = l;

    while (i <= m && j <= r) {
        b[k++] = (a[i] < a[j]) ? a[i++] : a[j++];
    }

    while (i <= m) {
        b[k++] = a[i++];
    }

    while (j <= r) {
        b[k++] = a[j++];
    }

    for (i = l; i <= r; i++) {
        a[i] = b[i];
    }
}

void sort(int a[], int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;
        sort(a, l, m);
        sort(a, m + 1, r);
        merge(a, l, m, r);
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
        sort(a, 0, n - 1);
    }

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
