#include <stdio.h>
int fibonacci(int n);
int main(void)
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("The fibonacci number is %d", fibonacci(n));
    getchar();
    getchar();
    return 0;
}
int fibonacci(int n)
{
    int f1 = 1, f2 = 1;
    int result;
    if (n == 1 || n == 2)
    {
        result = 1;
    }
    else
    {
        for (int i = 3; i <= n; i++)
        {
            result = f1 + f2;
            f1 = f2;
            f2 = result;
        }
    }
    return result;
}