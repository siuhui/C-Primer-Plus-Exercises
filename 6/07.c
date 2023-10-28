#include <stdio.h>
#include <string.h>
int main(void)
{
    char letter[40];
    printf("Enter a letter:");
    scanf("%s",letter);
    for (int i = strlen(letter) - 1; i >= 0; i--)
    {
        printf("%c", letter[i]);
    }
    getchar();
    getchar();
    return 0;
}