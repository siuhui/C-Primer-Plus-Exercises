#include <stdio.h>

int main(void)
{
    char firstname[40], lastname[40];
    printf("Enter your first name:");
    scanf("%s", firstname);
    printf("Enter your last name:");
    scanf("%s", lastname);
    printf("%s,%s",firstname, lastname);
    getchar();
    getchar();
    return 0;
}