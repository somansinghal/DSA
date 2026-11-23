// practical 14 - breath first search
#include <stdio.h>

int main() {
  int a[10][10], visited[10] = {0};
  int q[10], n, i, j, start, front = 0, rear = 0;
  
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
  
  visited[start] = 1;
  q[rear++] = start;
  
  printf("BFS Traversal: ");
  while (front < rear) {
    start = q[front++];
    printf("%d ", start);
  
    for (i = 0; i < n; i++) {
      if (a[start][i] && !visited[i]) {
        visited[i] = 1;
        q[rear++] = i;
      }
    }
  }
  
  printf("\n");
  return 0;
}