#include <stdio.h>

int main(void)
{
    int letters[26];
    char element = 'a';
    for(int i = 0; i < 26; i++, element++)
    {
        letters[i] = element;
    }
    for(int i = 0; i < 26; i++, element++)
    {
        printf("%c ", letters[i]);
    }
    getchar();
    return 0;
}