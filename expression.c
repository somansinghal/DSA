#include <ctype.h>
#include <math.h>
#include <stdio.h>

char s[100];
int top = -1;

void infix(char a[]) {
  char p[100], x;
  int i, j = 0;

  top = -1;

  for (i = 0; a[i]; i++) {
    if (isalnum(a[i]))
      p[j++] = a[i];
    else if (a[i] == '(')
      s[++top] = a[i];
    else if (a[i] == ')') {
      while (top != -1 && s[top] != '(')
        p[j++] = s[top--];

      if (top != -1)
        top--;
    } else {
      while (top != -1 && s[top] != '(' &&
             (s[top] == '*' || s[top] == '/' || a[i] == '+' || a[i] == '-'))
        p[j++] = s[top--];

      s[++top] = a[i];
    }
  }
  while (top != -1)
    p[j++] = s[top--];

  p[j] = '\0';
  printf("Postfix: %s\n", p);
}

void postfix(char a[]) {
  int v[100], t = -1, i, x, y;

  for (i = 0; a[i]; i++) {
    if (isdigit(a[i]))
      v[++t] = a[i] - '0';
    else {
      y = v[t--];
      x = v[t--];

      switch (a[i]) {
      case '+':
        v[++t] = x + y;
        break;
      case '-':
        v[++t] = x - y;
        break;
      case '*':
        v[++t] = x * y;
        break;
      case '/':
        if (y == 0) {
          printf("Division by zero\n");
          return;
        }
        v[++t] = x / y;
        break;
      case '^':
        v[++t] = (int)pow(x, y);
        break;
      }
    }
  }
  printf("Result: %d\n", v[t]);
}

int main() {
  int c;
  char a[100];

  printf("1. Infix to Postfix\n2. Postfix Evaluation\n");
  printf("Enter choice: ");
  scanf("%d", &c);

  printf("Enter expression: ");
  scanf("%99s", a);

  if (c == 1)
    infix(a);
  else if (c == 2)
    postfix(a);
  else
    printf("Invalid choice\n");

  return 0;
}