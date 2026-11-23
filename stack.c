#include <stdio.h>
#define MAX 100
int stack[MAX], top = -1;

void display() {
  int i;

  if (top == -1) {
    printf("Stack is empty\n");
    return;
  }
  printf("Stack array: ");

  for (i = 0; i <= top; i++) {
    printf("%d ", stack[i]);
  }
  printf("\n");
}

void push() {
  int x;

  if (top == MAX - 1) {
    printf("Stack Overflow\n");
    return;
  }

  printf("Enter element: ");
  scanf("%d", &x);

  stack[++top] = x;
  display();
}

void pop() {
  if (top == -1) {
    printf("Stack Underflow\n");
    return;
  }

  printf("Deleted element: %d\n", stack[top--]);
  display();
}

void traverse() {
  int i;

  if (top == -1) {
    printf("Stack is empty\n");
    return;
  }
  printf("Stack elements (top to bottom): ");

  for (i = top; i >= 0; i--) {
    printf("%d ", stack[i]);
  }
  printf("\n");
}

int main() {
  int ch;

  do {
    printf("\n1. Push\n");
    printf("2. Pop\n");
    printf("3. Traverse\n");
    printf("4. Exit\n");

    printf("Enter choice: ");
    scanf("%d", &ch);

    switch (ch) {
    case 1:
      push();
      break;

    case 2:
      pop();
      break;

    case 3:
      traverse();
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