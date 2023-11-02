#include <stdio.h>

int is_prime(int i);
int main(void)
{
    int integer;
    printf("Enter a positive integer:");
    while (1)
    {
        scanf("%d", &integer);
        if (integer <= 0)
        {
            printf("Enter a positive integer:");
            continue;
        }
        else if (integer == 1)
        {
            printf("No prime numbers smaller than or equal to %d", integer);
        }
        else
        {
            printf("Prime numbers smaller than or equal to %d are: ", integer);
            for (int i = 2; i <= integer; i++)
            {
                if (is_prime(i))
                {
                    printf("%d ", i);
                }
            }
        }
        break;
    }
    getchar();
    getchar();
    return 0;
}

int is_prime(int integer)
{
    for (int i = 2; i*i <= integer; i++)
    {
        if (integer % i == 0)
        {
            return 0;
        }
    }
    return 1;
}