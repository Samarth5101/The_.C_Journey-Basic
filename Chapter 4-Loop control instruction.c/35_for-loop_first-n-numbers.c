//programe to show first n number using for loop
#include <stdio.h>

int main()
{
    int i = 0;
    int n;
    printf("Enter a number n\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("%d", i + 1);
        printf("\n");
    }

    return 0;
}
