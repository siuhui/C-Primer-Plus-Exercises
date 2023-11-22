#include <stdio.h>
int main(void)
{
    double daphne = 100.0, deirdre = 100.0;
    int i = 0;
    while (daphne >= deirdre)
    {
        daphne += 100 * 0.1;
        deirdre += deirdre * 0.05;
        i++;
    }
    printf("It will take %d years.", i);
    getchar();
    return 0;
}