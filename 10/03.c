#include <stdio.h>
int max(int * arr, int n);
int main(void)
{
    int arr[5] = {1, 3, 5, 4, 2};
    int result = max(arr, 5);
    printf("%d", result);
    getchar();
    return 0;
}
int max(int * arr, int n)
{
    int maxi = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    return maxi;
}