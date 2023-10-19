#include <stdio.h>

void Temperatures(double F_temp);

int main(void)
{
    double F_temp;
    printf("Enter a Fahrenheit temperature ('q' to quit): ");
    while (scanf("%lf",&F_temp) == 1)
    {
        Temperatures(F_temp);
    }
    return 0;
}

void Temperatures(double F_temp)
{
    const double F_C_FACTOR = 5.0 / 9.0;
    const double F_C_OFFSET = 32.0;
    const double C_K_OFFSET = 273.16;
    double C_temp = F_C_FACTOR * (F_temp - F_C_OFFSET);
    double K_temp = C_temp + C_K_OFFSET;
    printf("Celsius temperature is %lf.\n", C_temp);
    printf("Kelvin temperature is %lf.\n", K_temp);
}