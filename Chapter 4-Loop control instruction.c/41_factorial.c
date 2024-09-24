//programe to show the factorialof of any no. n
#include <stdio.h>

int main()
{
    int i;
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    int factorial = 1;

    for (i = 1; i <= n; i++)
    {
        factorial *= i; //(a *= b) can be written as (a = a * b)
    }
    printf("The value of %d! is %d", n, factorial);
    return 0;
}