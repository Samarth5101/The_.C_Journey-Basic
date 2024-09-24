//programe to print first n numbers using do while loop
#include <stdio.h>

int main()
{
    int i = 0;
    int n;
    printf("Enter a number n\n");
    scanf("%d", &n);

    do
    {
        printf("The number is %d\n", i + 1);
        i++;
    } while (i < n);
    return 0;
}
