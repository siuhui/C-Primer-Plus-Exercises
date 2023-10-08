#include <stdio.h>

void print_smile(void);

int main(void)
{
    for(int i = 3; i > 0; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            print_smile();
        }
        printf("\n");
    }
    getchar();
    return 0;
}

void print_smile(void)
{
    printf("smile!");
}