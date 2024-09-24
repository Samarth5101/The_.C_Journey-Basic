//programe to show the difference b/w the address of variable in main function and in defined function
//but the value of variable will be same as it is a programe of "call by value"
#include <stdio.h>
void printadd(int a);
int main()
{
    int i = 4;
    printf("The value of i is %d\n", i);
    printadd(i);
    printf("The address of i  %d\n", &i);
    return 0;
}

void printadd(int a)
{
    printf("The address of variable  a is %u\n", &a);
    printf("The value of a is %d\n", a);
}