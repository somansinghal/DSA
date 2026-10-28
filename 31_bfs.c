#include <stdio.h>
int main() {
  int a[10][10], q[10], v[10] = {0}, n, i, j, f = 0, r = 0, s;

  printf("Number of vertices (max 10): ");
  scanf("%d", &n);

  printf("Enter adjacency matrix:\n");
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &a[i][j]);
    }
  }

  printf("Starting vertex (0 to %d): ", n - 1);
  scanf("%d", &s);

  q[r] = s;
  v[s] = 1;
  printf("BFS: ");

  while (f <= r) {
    s = q[f++];
    printf("%d ", s);
    for (i = 0; i < n; i++) {
      if (a[s][i] && !v[i]) {
        q[++r] = i;
        v[i] = 1;
      }
    }
  }
  return 0;
}
