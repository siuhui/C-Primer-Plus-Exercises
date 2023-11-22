#include <stdio.h>
double min(double x, double y);
int main(void)
{
    double result = min(1.2, 1.3);
    printf("%lf", result);
    getchar();
    return 0;
}
double min(double x, double y)
{
    if (x < y)
    {
        return x;
    }
    else
    {
        return y;
    }
}