#include <stdio.h>
#define OVERTIME 40
#define TAX_1 300
#define TAX_1_RATE 0.15
#define TAX_2 150
#define TAX_2_RATE 0.20
#define TAX_3_RATE 0.25
int main(void)
{
    for(int i = 0; i <= 66; i++)
    {
        printf("*");
    }
    printf("\nEnter the number corresponding to the desired pay rate or action:\n");
    printf("1) $8.75/hr                        2) $9.33/hr\n"
            "3) $10.00/hr                       4) $11.20/hr\n"
            "5) quit\n");
    for(int i = 0; i <= 66; i++)
    {
        printf("*");
    }
    printf("\n");
    double basic;
    while (1)
    {
        int choice;
        scanf("%d", &choice);
        if (choice<1 || choice>5)
        {
            printf("Enter an integer from 1 to 5\n");
            continue;
        }
        else
        {
            switch (choice)
            {
            case 1:
                basic = 8.75;
                break;
            case 2:
                basic = 9.33;
                break;
            case 3:
                basic = 10.00;
                break;
            case 4:
                basic = 11.20;
                break;
            default:
                goto END;
                break;
            }
            break;
        }
    }
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
    gross_pay = basic * total_hour;
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
    END:
    getchar();
    return 0;
}