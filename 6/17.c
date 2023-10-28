#include <stdio.h>
int main(void)
{
    double money = 100.0;
    int i;
    for (i = 0; money > 0; i++)
    {
        money += money * 0.08;
        money -= 10;
    }
    printf("It will take %d years.", i);
    getchar();
    return 0;
}