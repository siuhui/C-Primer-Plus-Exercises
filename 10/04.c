#include <stdio.h>
int max_index(double * arr, int n);
int main(void)
{
    double arr[5] = {1.1, 3.3, 5.5, 4.4, 2.2};
    int result = max_index(arr, 5);
    printf("%d", result);
    getchar();
    return 0;
}
int max_index(double * arr, int n)
{
    int index = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[index])
        {
            index = i;
        }
    }
    return index;
}