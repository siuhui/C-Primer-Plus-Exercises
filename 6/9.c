#include <stdio.h>

float caculate(float first, float second)
{
    return (first-second) / (first*second);
}

int main(void)
{
    float first, second;
    printf("Enter two floating-point numbers"
            "(split by spaces, 'q' to quit): ");
    while (scanf("%f %f", &first, &second) == 2)
    {
        float result = caculate(first, second);
        printf("The value of their difference divided by their product is %f\n",result);
        printf("Enter two floating-point numbers(split by spaces, 'q' to quit): ");
    }
    return 0;
}