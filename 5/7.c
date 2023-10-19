#include <stdio.h>

void cubed(double number);

int main(void)
{
    double number;
    printf("Enter a type double number:");
    scanf("%lf", &number);
    cubed(number);
    getchar();
    getchar();
    return 0;
}

void cubed(double number)
{
    printf("The value of the number cubed is:%lf", number*number*number);
}