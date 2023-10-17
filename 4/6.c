#include <stdio.h>
#include <string.h>

int main(void)
{
    char firstname[40], lastname[40];
    printf("Enter your first name:");
    scanf("%s", firstname);
    printf("Enter your last name:");
    scanf("%s", lastname);
    int lenth_f = strlen(firstname);
    int lenth_l = strlen(lastname);
    printf("%s %s\n", firstname, lastname);
    printf("%*d %*d\n", lenth_f, lenth_f, lenth_l, lenth_l);
    printf("%s %s\n", firstname, lastname);
    printf("%*d %*d\n", -lenth_f, lenth_f, -lenth_l, lenth_l);
    getchar();
    getchar();
    return 0;
}