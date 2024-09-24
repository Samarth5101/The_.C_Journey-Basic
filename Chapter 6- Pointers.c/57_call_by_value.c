//programe to demonstrate the function of call by value and clearing doubts about variables
#include <stdio.h>
int sum(int a, int b);
int main()
{
    int x;
    int y;
    printf("Enter the value of x\n");
    scanf("%d", &x);
    printf("Enter the value of y\n");
    scanf("%d", &y);
    printf("The sum of %d and %d is %d \n", x, y, sum(x, y));
    return 0;
}

int sum(int a, int b)
{
    int c;
    c = a + b;
    a = 3495; /*------------>They are Ignored*/ 
    b = 4534;/*------------>They are Ignored*/ 
    return c;
}