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
    int n, i, pos, x;

    printf("Number of nodes: ");
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

    printf("Value and position (1-based): ");
    scanf("%d%d", &x, &pos);

    p = malloc(sizeof(struct node));
    p->data = x;

    if (pos == 1) {
        p->next = head;
        head = p;
    } else {
        q = head;
        for (i = 1; q && i < pos - 1; i++) {
            q = q->next;
        }

        if (!q) {
            printf("Invalid position\n");
            free(p);
            return 0;
        }

        p->next = q->next;
        q->next = p;
    }

    for (q = head; q; q = q->next) {
        printf("%d ", q->data);
    }

    return 0;
}
