#include <stdio.h>

int main(void)
{
    for (int i = 0; i <= 5; i++)
    {
        for (char ch = 'F';ch >= 'F' - i; ch--)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
    getchar();
    return 0;
}