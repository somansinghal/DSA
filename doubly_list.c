// practical 12 - doubly linked list (insertion )
#include <stdio.h>
#include <stdlib.h>
struct node {
  int data;
  struct node *prev, *next;
};
struct node *head = NULL;
void insert(int x) {
  struct node *n = malloc(sizeof(struct node)), *t = head;
  if (!n)
    return;
  n->data = x;
  n->next = NULL;
  if (!head) {
    n->prev = NULL;
    head = n;
  } else {
    while (t->next)
      t = t->next;
    t->next = n;
    n->prev = t;
  }
}
void traverse() {
  struct node *t = head;
  printf("Forward: ");
  while (t) {
    printf("%d ", t->data);
    if (!t->next)
      break;
    t = t->next;
  }
  printf("\nBackward: ");
  while (t) {
    printf("%d ", t->data);
    t = t->prev;
  }
  printf("\n");
}

int main() {
  int n, x, i;
  printf("Enter number of nodes: ");
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    printf("Enter data: ");
    scanf("%d", &x);
    insert(x);
  }
  traverse();
  return 0;
}