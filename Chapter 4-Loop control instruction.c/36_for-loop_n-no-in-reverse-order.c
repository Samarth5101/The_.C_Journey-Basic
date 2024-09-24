//programe to execute no in decrimenting way
#include <stdio.h>

int main()
{
    int i;
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);

    for (i = n; i; i--)
    {
        printf("%d\n", i);
    }
    return 0;
}