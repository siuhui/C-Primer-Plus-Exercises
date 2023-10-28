#include <stdio.h>
int main(void)
{
    char ch = 'A';
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= i; j++, ch++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
    getchar();
    return 0;
}