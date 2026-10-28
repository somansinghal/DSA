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
        p->next = NULL;

        if (!head) {
            head = p;
        } else {
            q = head;
            while (q->next) {
                q = q->next;
            }
            q->next = p;
        }
    }

    p = malloc(sizeof(struct node));
    printf("Value to insert: ");
    scanf("%d", &p->data);
    p->next = NULL;

    if (!head) {
        head = p;
    } else {
        q = head;
        while (q->next) {
            q = q->next;
        }
        q->next = p;
    }

    for (q = head; q; q = q->next) {
        printf("%d ", q->data);
    }

    return 0;
}
