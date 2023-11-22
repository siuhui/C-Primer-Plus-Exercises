#include <stdio.h>
#define BASIC 10.00
#define OVERTIME 40
#define TAX_1 300
#define TAX_1_RATE 0.15
#define TAX_2 150
#define TAX_2_RATE 0.20
#define TAX_3_RATE 0.25
int main(void)
{
    double hour, total_hour;
    printf("Enter the hours worked in a week:");
    scanf("%lf", &hour);
    if (hour <= OVERTIME)
    {
        total_hour = hour;
    }
    else
    {
        total_hour = OVERTIME + 1.5 * (hour- OVERTIME);
    }
    double gross_pay, net_pay, taxes;
    gross_pay = BASIC * total_hour;
    if (gross_pay <= TAX_1)
    {   
        taxes = gross_pay * TAX_1_RATE;
    }
    else if (gross_pay <= TAX_1 + TAX_2)
    {
        taxes = TAX_1 * TAX_1_RATE + (gross_pay - TAX_1) * TAX_2_RATE;
    }
    else
    {
        taxes = TAX_1 * TAX_1_RATE + TAX_2 * TAX_2_RATE + (gross_pay - TAX_1 - TAX_2) * TAX_3_RATE;
    }
    net_pay = gross_pay - taxes;
    printf("The gross pay is $%.2lf, the taxes is $%.2lf, and the net pay is $%.2lf", gross_pay, taxes, net_pay);
    getchar();
    getchar();
    return 0;
}