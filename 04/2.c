#include <stdio.h>
#include <string.h>

int main(void)
{
    char firstname[40];
    printf("Enter your first name:");
    scanf("%s", firstname);
    int lenth = strlen(firstname);
    printf("\"%s\"\n",firstname);
    printf("\"%20s\"\n",firstname);
    printf("\"%-20s\"\n",firstname);
    printf("%*s", lenth+3, firstname);
    getchar();
    getchar();
    return 0;
}