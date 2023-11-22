#include <stdio.h>

int main(void)
{
    int integer;
    printf("Enter an integer:");
    scanf("%d", &integer);
    int i = 0;
    while (i <= 10)
    {
        printf("%d ", integer+i);
        i++;
    }
    getchar();
    getchar();
    return 0;
}