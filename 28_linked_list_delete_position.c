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
    int n, i, pos;

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

    printf("Position to delete (1-based): ");
    scanf("%d", &pos);

    if (pos == 1 && head) {
        p = head;
        head = head->next;
        free(p);
    } else if (pos > 1 && head) {
        q = head;
        for (i = 1; q && i < pos - 1; i++) {
            q = q->next;
        }

        if (q && q->next) {
            p = q->next;
            q->next = p->next;
            free(p);
        } else {
            printf("Invalid position\n");
        }
    } else {
        printf("Invalid position\n");
    }

    for (q = head; q; q = q->next) {
        printf("%d ", q->data);
    }

    return 0;
}
