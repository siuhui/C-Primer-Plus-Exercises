#include <stdio.h>
int main(void)
{
    char end;
    printf("Enter an uppercase letter:");
    scanf("%c", &end);
    for (char ch = 'A'; ch <= end; ch++)
    {
        for (int i = end - ch; i > 0; i--)
        {
            printf(" ");
        }
        for (char ch1 = 'A'; ch1 <= ch; ch1++)
        {
            printf("%c", ch1);
        }
        for (char ch2 = ch - 1; ch2 >= 'A'; ch2--)
        {
            printf("%c", ch2);
        }
        printf("\n");
    }
    getchar();
    getchar();
    return 0;
}