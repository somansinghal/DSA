#include <stdio.h>

int a[100], b[100], n;

// Merge Sort: Merge two sorted parts
void merge(int a[], int l, int m, int r) {
  int i = l, j = m + 1, k = l, temp[100];

  while (i <= m && j <= r) {
    if (a[i] < a[j])
      temp[k++] = a[i++];
    else
      temp[k++] = a[j++];
  }

  while (i <= m)
    temp[k++] = a[i++];

  while (j <= r)
    temp[k++] = a[j++];

  for (i = l; i <= r; i++)
    a[i] = temp[i];
}

// Merge Sort Algorithm
void mergeSort(int a[], int l, int r) {
  if (l < r) {
    int m = (l + r) / 2;
    mergeSort(a, l, m);
    mergeSort(a, m + 1, r);
    merge(a, l, m, r);
  }
}

int main() {
  int i, j, min, t;

  printf("Enter size of array: ");
  scanf("%d", &n);

  printf("Enter elements: ");
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
    b[i] = a[i];
  }

  // Selection Sort Algorithm
  for (i = 0; i < n - 1; i++) {
    min = i;

    for (j = i + 1; j < n; j++)
      if (b[j] < b[min])
        min = j;

    t = b[i];
    b[i] = b[min];
    b[min] = t;
  }

  printf("\nSelection Sort: ");
  for (i = 0; i < n; i++)
    printf("%d ", b[i]);

  // Merge Sort Algorithm
  mergeSort(a, 0, n - 1);

  printf("\nMerge Sort: ");
  for (i = 0; i < n; i++)
    printf("%d ", a[i]);

  return 0;
}