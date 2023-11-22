#include <stdio.h>

int main(void)
{
    int spaces = 0, newline = 0, other = 0;
    char ch;
    while ((ch = getchar()) != '#')
    {
        if (ch == ' ')
        {
            spaces += 1;
        }
        else if (ch == '\n')
        {
            newline += 1;
        }
        else
        {
            other += 1;
        }
    }
    printf("the number of spaces read is %d\n"
            "the number of newline characters read is %d\n"
            "and the number of all other characters read is %d\n"
            , spaces, newline, other);
    while (getchar() != EOF)
    {
        continue;
    }
    getchar();
    return 0;
}