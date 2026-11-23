// program 13 - deletion of doubly linked list

#include <stdio.h>
#define MAX 100

int q[MAX], front = -1, rear = -1;
void insert() {
  int x;
  if (rear == MAX - 1) {
    printf("Queue Overflow\n");
    return;
  }

  printf("Enter element: ");
  scanf("%d", &x);

  if (front == -1)
    front = 0;
  q[++rear] = x;
}

void delete() {
  if (front == -1 || front > rear) {
    printf("Queue Underflow\n");
    return;
  }

  printf("Deleted: %d\n", q[front++]);
  if (front > rear)
    front = rear = -1;
}

void traverse() {
  int i;
  if (front == -1) {
    printf("Queue is empty\n");
    return;
  }

  printf("Queue: ");
  for (i = front; i <= rear; i++)
    printf("%d ", q[i]);
  printf("\n");
}

int main() {
  int ch;
  do {
    printf("\n1. Insertion\n2. Deletion\n");
    printf("3. Traversal\n4. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &ch);

    switch (ch) {
    case 1:
      insert();
      traverse();
      break;
    case 2:
      delete ();
      traverse();
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