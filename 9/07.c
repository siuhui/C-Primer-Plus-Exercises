#include <stdio.h>
int location(char ch);
int main(void)
{
    char ch;
    while ((ch = getchar()) != '\n')
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            printf("%c is a letter.( Location = %d )\n", ch, location(ch));
        }
        else
        {
            printf("%c is not a letter.\n", ch);
        }
    }
    getchar();
    return 0;
}
int location(char ch)
{
    if (ch >= 'a')
    {
        return ch - 'a' + 1;
    }
    else
    {
        return ch - 'A' + 1;
    }
}