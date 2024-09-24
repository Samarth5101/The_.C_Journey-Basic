//to show that any input no. is divisible by 40 or not if it is divisble it shows 0 remainder
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number to check divisibility test \n");
    scanf("%d", &num);
    printf("divisibility test returns: %d\n", num % 40);
    return 0;
}