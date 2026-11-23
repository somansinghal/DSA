// practical 15 - Depth First Search 
#include <stdio.h>

int a[10][10], visited[10], n;

void dfs(int v) {
  int i;

  printf("%d ", v);
  visited[v] = 1;

  for (i = 0; i < n; i++)
    if (a[v][i] && !visited[i])
      dfs(i);
}

int main() {
  int i, j, start;

  printf("Enter number of vertices: ");
  scanf("%d", &n);

  printf("Enter adjacency matrix:\n");
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
      scanf("%d", &a[i][j]);

  printf("Enter starting vertex (0 to %d): ", n - 1);
  scanf("%d", &start);

  if (start < 0 || start >= n) {
    printf("Invalid starting vertex\n");
    return 1;
  }

  printf("DFS Traversal: ");
  dfs(start);
  printf("\n");

  return 0;
}