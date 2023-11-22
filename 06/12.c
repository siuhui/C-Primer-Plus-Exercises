#include <stdio.h>
#include <math.h>
int main(void)
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n > 0)
    {
        double sum1 = 0, sum2 = 0;
        for (int i = 1; i <= n; i++)
        {
            sum1 += (1.0/i);
            sum2 += (1.0/i) * pow(-1, i+1);
        }
        printf("%lf\n%lf\n", sum1, sum2);
        printf("Enter an integer: ");
        scanf("%d", &n);
    }
    getchar();
    getchar();
    return 0;
}