#include <stdio.h>
int main(void)
{
    int lower, upper;
    printf("Enter the lower and upper integer limits for the table(split by spaces):");
    scanf("%d %d", &lower, &upper);
    printf("integer   square     cube\n");
    for (int i = lower; i <= upper; i++)
    {
        printf("%7d  %7d  %7d\n", i, i*i, i*i*i);
    }
    getchar();
    getchar();
    return 0;
}