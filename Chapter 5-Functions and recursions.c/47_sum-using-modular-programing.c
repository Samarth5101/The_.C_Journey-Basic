//programe to add 2 numbers and executing using modular programing
#include <stdio.h>
int sum(int a, int b);

int main()
{
    int a;
    int b;
    int c;
    printf("Enter a value a\n");
    scanf("%d", &a);

    printf("Enter a value b\n");
    scanf("%d", &b);

    c = sum(a, b);
    printf("The value of sum is %d\n", c);
    return 0;
}

int sum(int a, int b)
{
    int result;
    result = a + b;
    return result;
}