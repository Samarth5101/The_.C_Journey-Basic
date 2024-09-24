//programe to show a no. is prime or not
#include <stdio.h>

int main()
{
    int i;
    int n;
    printf("Enter a number to check\n");
    scanf("%d", &n);
    int prime = 1;

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0, n != 2)
    {
        printf("%d is not a prime number\n", n);
    }
    else
    {
        printf("%d is  a prime number\n", n);
    }
    return 0;
}