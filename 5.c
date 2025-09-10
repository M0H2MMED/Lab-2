#include <stdio.h>

int main()
{
    float a;
    printf("Enter the temperature of centigrade = ");
    scanf("%f", &a);
    printf("%.2f is equivalent temprature of fahrenheit.\n", (a*9/5)+32);
}