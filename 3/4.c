#include <stdio.h>

int main(void)
{
    float n;
    printf("Enter a floating-point value: ");
    scanf("%f",&n);
    printf("fixed-point notation: %f\n", n);
    printf("exponential notation: %e\n", n);
    printf("p notation: %a", n);
    getchar();
    getchar();
    return 0;
}