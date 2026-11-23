// practical 11 - insertion in single linked list 
#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *head = NULL;
void insert(int x, int pos) {
    struct node *n = malloc(sizeof(struct node));
    struct node *t = head;
    int i;
    if (n == NULL) return;
    n->data = x;
    if (pos == 1) {
        n->next = head;
        head = n;
        return;
    }
    for (i = 1; t && i < pos - 1; i++)
        t = t->next;
    if (t == NULL) {
        printf("Invalid position!\n");
        free(n);
        return;
    }
    n->next = t->next;
    t->next = n;
}
void display() {
    struct node *t = head;
    while (t) {
        printf("%d -> ", t->data);
        t = t->next;
    }
    printf("NULL\n");
}
int main() {
    int ch, x, pos;
    do {
        printf("\n1. Beginning\n2. End\n3. Specific Position\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);
        if (ch >= 1 && ch <= 3) {
            printf("Enter data: ");
            scanf("%d", &x);
            if (ch == 1)
                pos = 1;
            else if (ch == 2) {
                struct node *t = head;
                pos = 1;
                while (t) {
                    pos++;
                    t = t->next;
                }
            } else {
                printf("Enter position: ");
                scanf("%d", &pos);
            }
            insert(x, pos);
            display();
        }
    } while (ch != 4);
    return 0;
}