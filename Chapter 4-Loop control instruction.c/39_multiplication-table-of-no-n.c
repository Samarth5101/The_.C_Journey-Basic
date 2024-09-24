//programe to show the table of a number n
#include <stdio.h>

int main()
{
    int i;
    int n;

    printf("Enter a number n\n");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++)
        printf("%d * %d = %d\n", n, i, n * i);
    return 0;
}