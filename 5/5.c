#include <stdio.h>

int main(void)
{
    int integer;
    int sum = 0, count = 0;
    printf("Enter an integer:");
    scanf("%d", &integer);
    while (count++ < integer)
    {
        sum += count;
    }
    printf("sum = %d", sum);
    getchar();
    getchar();
    return 0;
}