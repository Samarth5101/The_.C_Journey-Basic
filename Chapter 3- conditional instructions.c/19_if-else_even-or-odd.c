//programe to check whether a number is odd or even
#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number \n");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("given number %d is even\n", a);
    }
    else
    {
        printf("given number %d is odd\n", a);
    }
    return 0;
}