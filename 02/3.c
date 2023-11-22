#include <stdio.h>

int main()
{
    int age = 20;
    //Let's say 365 days per year
    int days = age * 365;
    printf("I'm %d years old and it's been %d days.", age, days);
    getchar();
    return 0;
}