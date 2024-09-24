//programe to calculate income tax
#include <stdio.h>

int main()
{
    float tax = 0, income;
    printf("Enter your yearly income\n");
    scanf("%f", &income);

    if (income < 250000)
    {
        printf("No tax is imposed on your income\n");
    }
    if (income >= 250000 && income < 500000)
    {
        tax = tax + 0.05 * (income - 250000);
    }
    if (income >= 500000 && income > 1000000)
    {
        tax = tax + 0.20 * (income - 500000);
    }
    if (income >= 1000000)
    {
        tax = tax + 0.30 * (income - 1000000);
    }

    printf("your net income tax to be paid by 2nd day of this month is %f\n", tax);

    return 0;
}