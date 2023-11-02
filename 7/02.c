#include <stdio.h>

int main(void)
{
    char ch;
    int index = 0;
    while ((ch = getchar()) != '#')
    {
        index++;
        printf("%d ", ch);
        if (index%8 == 0)
        {
            printf("\n");
        }
    }
    getchar();
    getchar();
    return 0;
}