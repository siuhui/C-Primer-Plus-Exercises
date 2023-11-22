#include <stdio.h>

int main(void)
{
    int count = 0;
    char ch;
    while ((ch = getchar()) != '#')
    {
        switch (ch)
        {
        case '.':
            putchar('!');
            count++;
            break;
        case '!':
            putchar('!');
            putchar('!');
            count++;
            break;
        default:
            putchar(ch);
            break;
        }
    }
    printf("\nNumber of substitutions made: %d\n", count);
    getchar();
    getchar();
    return 0;
}