//programe to find the sum of first n number using recursion
#include <stdio.h>
int sum(int n);
int main()
{
    int a;
    printf("Enter the first n number till which you want sum\n");
    scanf("%d", &a);
    printf("The value of summition till the %d number is %d\n", a, sum(a));
    return 0;
}

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + (n - 1);
    }
}