#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL;
    struct node *p;
    struct node *q;
    int n, i;

    printf("How many initial nodes? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        p = malloc(sizeof(struct node));
        scanf("%d", &p->data);
        p->next = head;
        head = p;
    }

    p = malloc(sizeof(struct node));
    printf("Value to insert: ");
    scanf("%d", &p->data);
    p->next = head;
    head = p;

    for (q = head; q; q = q->next) {
        printf("%d ", q->data);
    }

    return 0;
}
