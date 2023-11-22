#include <stdio.h>
 int main(void)
 {
    float height;
    printf("Enter your height in inch:");
    scanf("%f", &height);
    printf("Your height is %.2f centimetres.", height * 2.54);
    getchar();
    getchar();
    return 0;
 }