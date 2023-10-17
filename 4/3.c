#include <stdio.h>

int main(void)
{
    float number;
    printf("Enter a floating-point number:");
    scanf("%f", &number);
    printf("The input is %f or %e.", number, number);
    getchar();
    getchar();
    return 0;
}