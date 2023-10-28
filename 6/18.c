#include <stdio.h>
int main(void)
{
    const int dunbar = 150;
    int friends = 5;
    int i;
    for (i = 1; friends <= dunbar; i++)
    {
        friends -= i;
        friends *= 2;
        printf("After %d week(s), he will have %d friends.\n", i, friends);
    }
    printf("It will take %d weeks.", i-1);
    getchar();
    return 0;
}