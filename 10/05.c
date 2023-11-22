#include <stdio.h>
double diff(double * arr, int n);
int main(void)
{
    double arr[5] = {1.1, 3.3, 5.5, 4.4, 2.2};
    double result = diff(arr, 5);
    printf("%lf", result);
    getchar();
    return 0;
}
double diff(double * arr, int n)
{
    double maxi, mini;
    maxi = mini = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
        if (arr[i] < mini)
        {
            mini = arr[i];
        }
    }
    return maxi - mini;
}