#include <stdio.h>
void print_ch(char ch, int row, int column);
int main(void)
{
    char ch;
    int row, column;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("Enter the number of rows and columns (split by spaces): ");
    scanf("%d %d", &row, &column);
    print_ch(ch, row, column);
    getchar();
    getchar();
    return 0;
}
void print_ch(char ch, int row, int column)
{
    for (int k = 0; k < row; k++)
    {
        for (int k = 0; k < column; k++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
}