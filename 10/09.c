#include <stdio.h>
// n * m
void copy(int n, int m, double target[][m], double source[][m]);
void print_arr(int n, int m, double arr[][m]);
int main(void)
{
    double source[3][5] = 
    {
        {1.1, 2.2, 3.3, 4.4, 5.5},
        {6.6, 7.7, 8.8, 9.9, 1.1},
        {2.2, 3.3, 4.4, 5.5, 6.6}
    };
    double target[3][5];
    copy(3, 5, target, source);
    print_arr(3, 5, target);
    getchar();
    return 0;
}
void copy(int n, int m, double target[][m], double source[][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            target[i][j] = source[i][j];
        }
    }
}
void print_arr(int n, int m, double arr[][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%lf ", arr[i][j]);
        }
        printf("\n");
    }
}
