#include <stdio.h>
void sort(double * a, double * b, double * c);
int main(void)
{
    double a, b, c;
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("a = %lf, b = %lf, c = %lf\n", a, b, c);
    sort(&a, &b, &c);
    printf("a = %lf, b = %lf, c = %lf now", a, b, c);
    getchar();
    getchar();
    return 0;
}
void sort(double * a, double * b, double * c)
{
    double temp;
    if (*a > *b)
    {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*b > *c)
    {
        temp = *b;
        *b = *c;
        *c = temp;
    }
     if (*a > *b)
    {
        temp = *a;
        *a = *b;
        *b = temp;
    }
}