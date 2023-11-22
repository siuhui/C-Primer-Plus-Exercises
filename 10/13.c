#include <stdio.h>
void input(int row, int col, double arr[][col]);
double set_average(int row, int col, double arr[][col]);
double total_average(int row, int col, double arr[][col]);
double max(int row, int col, double arr[][col]);
int main(void)
{   
    double data[3][5];
    printf("Enter three sets of five double numbers each\n");
    input(3, 5, data);
    for(int i = 0; i < 3; i++)
    {
        printf("The average of set %d of five values is %lf\n", i+1, set_average(i, 5, data));
    }
    printf("The average of all the values is %lf\n", total_average(3, 5, data));
    printf("The largest value of the 15 values is %lf\n", max(3, 5, data));
    getchar();
    getchar();
    return 0;
}
void input(int row, int col, double arr[][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%lf", &arr[i][j]);
        }
    }
}
double set_average(int row, int col, double arr[][col])
{
    double sum = 0;
    for (int i = 0; i < col; i++)
    {
        sum += arr[row][i];
    }
    return sum/5.0;
}
double total_average(int row, int col, double arr[][col])
{
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        sum += set_average(i, 5, arr);
    }
    return sum/3.0;
}
double max(int row, int col, double arr[][col])
{
    double maxi = arr[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > maxi)
            {
                maxi = arr[i][j];
            }
        }
    }
    return maxi;
}
