#include <stdio.h>
#include <stdlib.h>
struct node {
  int data;
  struct node *prev, *next;
};
int main() {
  struct node *head = NULL, *p, *q;
  int n, i;

  printf("Number of nodes: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    p = malloc(sizeof(struct node));
    scanf("%d", &p->data);
    p->prev = NULL;
    p->next = head;
    if (head)
      head->prev = p;
    head = p;
  }

  printf("Forward: ");
  for (q = head; q; q = q->next)
    printf("%d ", q->data);
  printf("\nBackward: ");
  if (head) {
    q = head;
    while (q->next)
      q = q->next;
    for (; q; q = q->prev)
      printf("%d ", q->data);
  }
  return 0;
}