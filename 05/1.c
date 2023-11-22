#include <stdio.h>
#define M_P_H 60

int main(void)
{
    int time = 1;
    while (time > 0)
    {
        printf("Enter the time in minutes:");
        scanf("%d", &time);
        int minutes = time % M_P_H;
        int hours = time / M_P_H; 
        printf("%d mintues is %d hour(s) and %d mintue(s).\n", time, hours, minutes);
    }
    return 0;
}