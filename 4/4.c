#include <stdio.h>

int main(void)
{
    float height;
    char name[40];
    printf("Enter a your height in inches and your name (split by spaces):");
    scanf("%f %s", &height, name);
    printf("%s,you are %f feet tall.", name, height/12.0);
    getchar();
    getchar();
    return 0;
}