#include <stdio.h>

int main() {
  int a[100], b[100], n, i, j, x, t;

  printf("Enter size of array: ");
  scanf("%d", &n);

  printf("Enter elements: ");
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
    b[i] = a[i];
  }

  // Insertion Sort Algorithm
  for (i = 1; i < n; i++) {
    x = a[i];
    j = i - 1;

    while (j >= 0 && a[j] > x) {
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = x;
  }

  printf("\nInsertion Sort: ");
  for (i = 0; i < n; i++)
    printf("%d ", a[i]);

  // Bubble Sort Algorithm
  for (i = 0; i < n - 1; i++) {
    for (j = 0; j < n - i - 1; j++) {
      if (b[j] > b[j + 1]) {
        t = b[j];
        b[j] = b[j + 1];
        b[j + 1] = t;
      }
    }
  }

  printf("\nBubble Sort: ");
  for (i = 0; i < n; i++)
    printf("%d ", b[i]);

  return 0;
}