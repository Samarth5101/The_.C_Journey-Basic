// programe to show a no. is less then 5 or not by one liner statement
#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number \n");
    scanf("%d", &a);

    (a < 5) ? printf("given number is less than 5") : printf("A is greater than 5"); //----> This is a linear statement
    return 0;
}