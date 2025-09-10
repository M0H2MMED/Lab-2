#include <stdio.h>

void main() {
    float pp, dv, ys;
    printf("Enter purchase price = ");
    scanf("%f", &pp);
    printf("Enter depreciation value = ");
    scanf("%f", &dv);
    printf("Enter years of service = ");
    scanf("%f", &ys);
    printf("Salvage price = %.2f\n", pp - (dv * ys));
}