//programe to show the average of any 3 numbers using modduler programing
#include <stdio.h>
int average(int a, int b, int c);
int a;
int b;
int c;
int d;
int main()
{
    printf("Enter first number\n");
    scanf("%d", &a);
    printf("Enter second number\n");
    scanf("%d", &b);
    printf("Enter third number\n");
    scanf("%d", &c);
    average(a, b, c);
    printf("Average of given 3 numbers is %d", d);
    return 0;
}

int average(int a, int b, int c)
{
    d = (a + b + c) / 3;
    return d;
}