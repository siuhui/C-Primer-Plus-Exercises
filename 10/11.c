#include <stdio.h>
void show(int arr[][5], int row);
void double_arr(int arr[][5], int row);
int main(void)
{
    int arr[3][5] = 
    {
        {1, 2, 3, 4, 5},
        {6, 7, 8 ,9, 1},
        {2, 3, 4, 5, 6}
    };
    show(arr, 3);
    double_arr(arr, 3);
    show(arr, 3);
    getchar();
    return 0;
}
void show(int arr[][5], int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }
}
void double_arr(int arr[][5], int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[i][j] = 2 * arr[i][j];
        }
    }
}