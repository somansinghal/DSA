#include <stdio.h>

void hanoi(int n, char a, char b, char c) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", a, c);
        return;
    }
    hanoi(n - 1, a, c, b);
    printf("Move disk %d from %c to %c\n", n, a, c);
    hanoi(n - 1, b, a, c);
}

int main() {
    int n;

    printf("Enter number of disks: ");
    scanf("%d", &n);

    if (n > 0 && n <= 10) {
        hanoi(n, 'A', 'B', 'C');
    } else {
        printf("Enter disks from 1 to 10\n");
    }

    return 0;
}
