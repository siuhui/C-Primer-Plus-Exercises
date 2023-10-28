#include <stdio.h>
#include <math.h>
int main(void)
{
    int arr[8];
    for (int i = 0; i < 8; i++)
    {
        arr[i] = pow(2, i+1);
    }
    int i = 0;
    do
    {
        printf("%d ", arr[i]);
        i++;
    } while (i < 8);
    getchar();
    return 0;
}