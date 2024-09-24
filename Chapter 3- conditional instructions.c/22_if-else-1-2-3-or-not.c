//programe shows that the given no. is either 1 , 2 or 3 or none of the given
#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number\n", num);
    scanf("%d", &num);

    if (num == 1)
    {
        printf("Given number is 1\n");
    }
    else if (num == 2)
    {
        printf("given no. is 2\n");
    }
    else if (num == 3)
    {
        printf("given number is 3\n");
    }
    else
    {
        printf("given number is nighther 1,2 nor 3\n");
    }
    return 0;
}