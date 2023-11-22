#include <stdio.h>
#define MI_TO_KM 1.609
#define GAL_TO_L 3.785

int main(void)
{
    float mile, gallon;
    printf("Enter the number of miles traveled and "
            "the number of gallons of gasoline consumed (split by spaces):");
    scanf("%f %f", &mile, &gallon);
    float liter = gallon * GAL_TO_L;
    float hundred_kilometer = mile * MI_TO_KM / 100.0;
    printf("U.S. way of expressing fuel consumption: %.1f miles-per-gallon\n", mile/gallon);
    printf("European way of expressing fuel consumption: %.1f liters-per-100-km\n", liter/hundred_kilometer);
    getchar();
    getchar();
    return 0;
}