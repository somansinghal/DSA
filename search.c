#include <stdio.h>

int main() {
  int a[100], n, x, i, l, r, m, f = 0;

  printf("Enter size: ");
  scanf("%d", &n);

  printf("Enter sorted array: ");
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);

  printf("Enter element to search: ");
  scanf("%d", &x);

  // Linear Search
  for (i = 0; i < n; i++) {
    if (a[i] == x) {
      printf("Linear Search: Found at position %d\n", i + 1);
      f = 1;
      break;
    }
  }

  if (f == 0)
    printf("Linear Search: Not found\n");

  // Binary Search
  l = 0;
  r = n - 1;

  while (l <= r) {
    m = (l + r) / 2;

    if (a[m] == x) {
      printf("Binary Search: Found at position %d\n", m + 1);
      return 0;
    } else if (a[m] < x)
      l = m + 1;
    else
      r = m - 1;
  }

  printf("Binary Search: Not found\n");

  return 0;
}
