#include <stdio.h>
void copy_arr(double target[], double source[], int n);
void show(double * arr);
int main(void)
{   double source[7] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
    double target[3];
    double * source_start = &source[2];
    copy_arr(target, source_start, 3);
    show(target);
    getchar();
    return 0;
}
void copy_arr(double target[], double source[], int n)
{
    for (int i = 0; i < n; i++)
    {
        target[i] = source[i];
    }
}
void show(double * arr)
{
    for (int i = 0; i < 3; i++)
    {
        printf("%lf ", arr[i]);
    }
}