#include <stdio.h>
void large_of(double * x, double * y);
int main(void)
{
    double x, y;
    printf("Enter the value of x and y (split by spaces): ");
    scanf("%lf %lf", &x, &y);
    printf("x = %lf, y = %lf\n", x, y);
    large_of(&x, &y);
    printf("After large_of(), x = %lf, y = %lf\n", x, y);
    getchar();
    getchar();
    return 0;
}
void large_of(double * x, double * y)
{
    if (*x > *y)
    {
        *y = *x;
    }
    else
    {
        *x = *y;
    }
}