#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

int main() {
    struct node *head = NULL;
    struct node *p;
    struct node *q;
    int n, i, x;

    printf("Number of initial nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        p = malloc(sizeof(struct node));
        scanf("%d", &p->data);
        p->prev = NULL;
        p->next = head;

        if (head) {
            head->prev = p;
        }
        head = p;
    }

    printf("Value to insert at beginning: ");
    scanf("%d", &x);

    p = malloc(sizeof(struct node));
    p->data = x;
    p->prev = NULL;
    p->next = head;

    if (head) {
        head->prev = p;
    }
    head = p;

    for (q = head; q; q = q->next) {
        printf("%d ", q->data);
    }

    return 0;
}
