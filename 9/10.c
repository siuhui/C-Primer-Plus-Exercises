#include <stdio.h>
void to_base_n(unsigned long n, int base);
int main(void)
{
    unsigned long n;
    int base;
    printf("Enter an integer and base (split by spaces): ");
    scanf("%lu %d", &n, &base);
    to_base_n(n, base);
    getchar();
    getchar();
    return 0;
}
void to_base_n(unsigned long n,int base)
{
    int r = n % base;
    if (n >= base)
    {
        to_base_n(n / base, base);
    }
    printf("%d", r);
}