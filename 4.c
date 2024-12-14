#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers (for swapping without a third variable): ");
    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping without a third variable: a = %d, b = %d\n", a, b);

    return 0;
}
