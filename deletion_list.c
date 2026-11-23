#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
} *head = NULL;
void del(int pos) {
    struct node *t = head, *p;
    if (!t || pos < 1) {
        printf("Invalid deletion\n");
        return;
    }
    if (pos == 1) {
        head = t->next;
        free(t);
        return;
    }
    for (int i = 1; t && i < pos - 1; i++)
        t = t->next;
    if (!t || !t->next) {
        printf("Invalid position\n");
        return;
    }
    p = t->next;
    t->next = p->next;
    free(p);
}
void display() {
    struct node *t = head;
    while (t) {
        printf("%d -> ", t->data);
        t = t->next;
    }
    printf("NULL\n");
}
void insert(int x) {
    struct node *n = malloc(sizeof(struct node)), *t = head;
    if (!n) return;
    n->data = x;
    n->next = NULL;
    if (!head) head = n;
    else {
        while (t->next) t = t->next;
        t->next = n;
    }
}
int main() {
    int n, x, ch, pos;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter data: ");
        scanf("%d", &x);
        insert(x);
    }
    display();
    do {
        printf("\n1.Beginning  2.End  3.Position  4.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);
        if (ch >= 1 && ch <= 3) {
            if (ch == 1) pos = 1;
            else if (ch == 2) {
                struct node *t = head;
                pos = 0;
                while (t) {
                    pos++;
                    t = t->next;
                }
            } else {
                printf("Enter position: ");
                scanf("%d", &pos);
            }
            del(pos);
            display();
        }
    } while (ch != 4);
    return 0;
}