//programe to show the value and address of a variable with the help of pointer
#include <stdio.h>

int main()
{
    int a = 6;
    int *ptr;
    ptr = &a;
    printf("The value of a is %d\n", a);
    printf("The address of  a is %u\n", ptr);
    printf("The value of a is %d\n", *ptr);
    return 0;
}