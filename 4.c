#include <stdio.h>

void main() {
    int a, b;
    printf("Enter first number = ");
    scanf("%d", &a);
    printf("Enter second number = ");
    scanf("%d", &b);
    printf("Before swapping\nA = %d and B = %d\n", a, b);
    printf("After swapping\nA = %d and B = %d\n", b, a);
}