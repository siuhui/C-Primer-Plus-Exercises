#include <stdio.h>

int main(void)
{
    int num_even = 0, num_odd = 0, sum_even = 0, sum_odd = 0;
    int temp;
    printf("Enter some integers ( 0 to terminate ): ");
    while (scanf("%d", &temp) && temp != 0)
    {
        if (temp%2 == 0)
        {
            num_even++;
            sum_even += temp;
        }
        else
        {
            num_odd++;
            sum_odd += temp;
        }
    }
    printf("the total number of even integers (excluding the 0) entered is %d\n"
        "the average value of the even integers is %f\n"
        "the total number of odd integers entered is %d\n"
        "the average value of the odd integers is %f\n"
        , num_even, num_even != 0 ? (double)sum_even/num_even : 0
        , num_odd, num_odd != 0 ? (double)sum_odd/num_odd : 0);
    getchar();
    getchar();
    return 0;
}