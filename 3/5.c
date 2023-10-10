#include <stdio.h>
 int main(void)
 {
    int age;
    printf("Enter your age:");
    scanf("%d", &age);
    float second = age * 3.156e7;
    printf("%d years equal to %e seconds", age, second);
    getchar();
    getchar();
    return 0;
 }