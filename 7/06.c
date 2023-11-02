#include <stdio.h>

int main(void)
{
    int count = 0;
    char ch;
    while ((ch = getchar()) != '#')
    {
        if (ch == 'e')
        {
            if (getchar() == 'i')
            {
                count++;
            }
        }
    }
    printf("the number of times that the sequence ei occurs is %d", count);
    getchar();
    getchar();
    return 0;
}