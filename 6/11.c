#include <stdio.h>

int main(void)
{
    int arr[8];
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 7; i >=0; i--)
    {
        printf("%d ", arr[i]);
    }
    getchar();
    getchar();
    return 0;
}