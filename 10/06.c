#include <stdio.h>
void reverse(double * target, double * source, int n);
void show(double * arr, int n);
int main(void)
{
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target[5];
    reverse(target, source, 5);
    show(target, 5);
    getchar();
    return 0;
}
void reverse(double * target, double * source, int n)
{
    for (int i = 0; i < n; i++)
    {
        target[n-1-i] = source[i];
    }
}
void show(double * arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%lf  ", arr[i]);
    }
    printf("\n");
}