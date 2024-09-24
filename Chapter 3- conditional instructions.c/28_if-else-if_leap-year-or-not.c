//programe to find whether the given year is a leap year or not
#include <stdio.h>

int main()
{
    int year;
    printf("Enter a year to check\n");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        printf("The entered year is a leap year\n");
    }
    else if (year % 400 == 0)
    {
        printf("The entered year is a leap year\n");
    }
    else if (year % 100 == 0)
    {
        printf("The entered year is not a leap year\n");
    }
    else
    {
        printf("The entered year is not a leap year\n");
    }
    return 0;
}