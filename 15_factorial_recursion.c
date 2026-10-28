#include <stdio.h>

long long fact(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * fact(n - 1);
}

int main() {
    int n;

    printf("Enter a non-negative number (up to 20): ");
    scanf("%d", &n);

    if (n < 0 || n > 20) {
        printf("Invalid input\n");
    } else {
        printf("Factorial = %lld\n", fact(n));
    }

    return 0;
}
