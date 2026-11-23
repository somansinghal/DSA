#include <stdio.h>

void add(int a[10][10], int b[10][10], int r, int c) {
  int i, j;
  printf("\nAddition:\n");
  for (i = 0; i < r; i++) {
    for (j = 0; j < c; j++)
      printf("%d ", a[i][j] + b[i][j]);
    printf("\n");
  }
}

void sub(int a[10][10], int b[10][10], int r, int c) {
  int i, j;
  printf("\nSubtraction:\n");
  for (i = 0; i < r; i++) {
    for (j = 0; j < c; j++)
      printf("%d ", a[i][j] - b[i][j]);
    printf("\n");
  }
}

void mul(int a[10][10], int b[10][10], int r, int c) {
  int i, j, k, s;
  printf("\nMultiplication:\n");
  for (i = 0; i < r; i++) {
    for (j = 0; j < c; j++) {
      s = 0;
      for (k = 0; k < c; k++)
        s += a[i][k] * b[k][j];
      printf("%d ", s);
    }
    printf("\n");
  }
}

void trans(int a[10][10], int r, int c) {
  int i, j;
  printf("\nTranspose of First Matrix:\n");
  for (i = 0; i < c; i++) {
    for (j = 0; j < r; j++)
      printf("%d ", a[j][i]);
    printf("\n");
  }
}

int main() {
  int a[10][10], b[10][10], r, c, i, j;

  printf("Enter rows and columns: ");
  scanf("%d%d", &r, &c);

  printf("Enter first matrix:\n");
  for (i = 0; i < r; i++)
    for (j = 0; j < c; j++)
      scanf("%d", &a[i][j]);

  printf("Enter second matrix:\n");
  for (i = 0; i < r; i++)
    for (j = 0; j < c; j++)
      scanf("%d", &b[i][j]);

  add(a, b, r, c);
  sub(a, b, r, c);

  if (r == c)
    mul(a, b, r, c);
  else
    printf("\nMultiplication requires compatible dimensions.\n");

  trans(a, r, c);

  return 0;
}