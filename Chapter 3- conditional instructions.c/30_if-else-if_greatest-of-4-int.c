//programe to identify the greatest integer amongst all the 4 given integers
#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter a number for a\n");
    scanf("%d", &a);

    printf("Enter a number for b\n");
    scanf("%d", &b);

    printf("Enter a number for c\n");
    scanf("%d", &c);

    printf("Enter a number for d\n");
    scanf("%d", &d);

    if (a > b && a > c && a > d)
    {
        printf("%d is the greatest integer amongst all 4\n", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("%d is the greatest integer amongst all 4\n", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf("%d is the greatest integer amongst all 4\n", c);
    }
    else if (d > a && d > b && d > c)
    {
        printf("%d is the greatest integer amongst all 4\n", d);
    }

    return 0;
}