#include <stdio.h>

// Factorial using Recursion
int factorial(int n) {
  if (n <= 1)
    return 1;

  return n * factorial(n - 1);
}

// Tower of Hanoi using Recursion
void hanoi(int n, char source, char auxiliary, char destination) {
  if (n == 1) {
    printf("Move disk 1 from %c to %c\n", source, destination);
    return;
  }

  hanoi(n - 1, source, destination, auxiliary);

  printf("Move disk %d from %c to %c\n", n, source, destination);

  hanoi(n - 1, auxiliary, source, destination);
}

// Fibonacci Series using Recursion
int fibonacci(int n) {
  if (n <= 1)
    return n;

  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
  int ch, n, i;

  do {
    printf("\n1. Factorial\n");
    printf("2. Tower of Hanoi\n");
    printf("3. Fibonacci Series\n");
    printf("4. Exit\n");

    printf("Enter choice: ");
    scanf("%d", &ch);

    switch (ch) {
    case 1:
      printf("Enter a non-negative number: ");
      scanf("%d", &n);

      if (n < 0 || n > 12) {
        printf("Enter a number between 0 and 12.\n");
        break;
      }

      printf("Factorial = %d\n", factorial(n));
      break;

    case 2:
      printf("Enter number of disks (1-10): ");
      scanf("%d", &n);

      if (n < 1 || n > 10) {
        printf("Enter a number between 1 and 10.\n");
        break;
      }

      hanoi(n, 'A', 'B', 'C');
      break;

    case 3:
      printf("Enter number of terms (1-40): ");
      scanf("%d", &n);

      if (n < 1 || n > 40) {
        printf("Enter a number between 1 and 40.\n");
        break;
      }

      printf("Fibonacci Series: ");

      for (i = 0; i < n; i++)
        printf("%d ", fibonacci(i));

      printf("\n");
      break;

    case 4:
      printf("Exit\n");
      break;

    default:
      printf("Invalid choice\n");
    }

  } while (ch != 4);

  return 0;
}