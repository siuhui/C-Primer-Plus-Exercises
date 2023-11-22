#include <stdio.h>
double power(double n, int p);
int main(void)
{
    double n;
    int p;
    printf("Enter a number and an integer exponent (split by spaces): ");
    scanf("%lf %d", &n, &p);
    printf("The value is %lf", power(n, p));
    getchar();
    getchar();
    return 0;
}
double power(double n, int p)
{
    double pow = 1;
    if (p > 0)
    {
        for (int i = 1; i <= p; i++)
        {
            pow *= n;
        }
    }
    else
    {
        for (int i = -1; i >= p; i--)
        {
            pow /= n;
        }
    }
    return pow;
}