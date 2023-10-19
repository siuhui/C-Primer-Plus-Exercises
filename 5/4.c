#include <stdio.h>

int main(void)
{
    float height;
    printf("Enter a height in centimeters:");
    scanf("%f", &height);
    while (height > 0)
    {   
        float inches = height / 2.54;
        int feet = inches / 12;
        printf("%.1f cm = %d feet, %.1f inches:\n", height, feet, inches - feet * 12);
        printf("Enter a height in centimeters (<=0 to quit) :");
        scanf("%f",&height);
    }
    return 0;
}