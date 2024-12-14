#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two integers (for swapping using a third variable): ");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;

    printf("After swapping using a third variable: a = %d, b = %d\n", a, b);

    return 0;
}
