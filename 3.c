#include <stdio.h>

void main() {
    float ut, a, t = 10, distance;
    printf("Enter the initial velocity = ");
    scanf("%f", &ut);
    printf("Enter acceleration = ");
    scanf("%f", &a);
    distance = ut * t + 0.5 * a * t * t;
    printf("After %.0f seconds the distance = %.2f m\n", t, distance);
}