#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[256];
    char ch;
    int i = 0;
    while (i < 255 && scanf("%c", &ch) && ch != '\n')
    {
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    for (int i = strlen(str) - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    getchar();
    return 0;
}