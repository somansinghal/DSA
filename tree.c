// practical 13 - implementation of tree
#include <stdio.h>
#include <stdlib.h>
struct node {
  int data;
  struct node *left, *right;
};
struct node *insert(struct node *root, int x) {
  if (root == NULL) {
    struct node *n = malloc(sizeof(struct node));
    n->data = x;
    n->left = n->right = NULL;
    return n;
  }
  if (x < root->data)
    root->left = insert(root->left, x);
  else if (x > root->data)
    root->right = insert(root->right, x);
  return root;
}
void inorder(struct node *root) {
  if (root != NULL) {
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
  }
}
int main() {
  struct node *root = NULL;
  int n, x, i;
  printf("Enter number of nodes: ");
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    printf("Enter data: ");
    scanf("%d", &x);
    root = insert(root, x);
  }
  printf("Inorder Traversal: ");
  inorder(root);
  printf("\n");
  return 0;
}
