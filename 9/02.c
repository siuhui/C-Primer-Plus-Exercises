#include <stdio.h>
void chline(char ch, int i, int j);
int main(void)
{
    char ch;
    int i, j;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("Enter the two numbers of colunms (split by spaces): ");
    scanf("%d %d", &i, &j);
    chline(ch, i, j);
    getchar();
    getchar();
    return 0;
}
void chline(char ch, int i, int j)
{
    for (int k = 1; k <= j; k++)
    {
        if (k < i)
        {
            printf(" ");
        }
        else
        {
            printf("%c", ch);
        }
    }
}