//programe to show the multiplication table of any number in reverse order
#include <stdio.h>

int main()
{
    int i;
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);

    printf("****Multiplication table of %d in reverse order is****\n\n", n);
    for (i = 10; i; i--)
    {
        printf("%d X %d = %d\n", n, i, n * i);
    }
    return 0;
}