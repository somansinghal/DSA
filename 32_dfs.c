#include <stdio.h>
int a[10][10], v[10], n;
void dfs(int s) {
  int i;
  printf("%d ", s);
  v[s] = 1;
  for (i = 0; i < n; i++) {
    if (a[s][i] && !v[i]) {
      dfs(i);
    }
  }
}
int main() {
  int i, j, s;
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
  printf("DFS: ");
  dfs(s);
  return 0;
}
