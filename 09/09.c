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
    if (p == 0)
    {
        return 1.0;
    }
    else if (p < 0)
    {
        return power(1/n, -p);
    }
    else
    {
        return n * power(n, p-1);
    }

}