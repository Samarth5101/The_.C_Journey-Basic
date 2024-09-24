//program to verify that the value doesn't get changed after calling it by value.
#include <stdio.h>
int x10(int a);
int main()
{
    int i;
    printf("Enter the value of i\n");
    scanf("%d", &i);
    printf("The value of i is %d\n", i);
    printf("The address of i is %d\n", &i);
    printf("The value of i after amplification is %d\n", x10(i));

    return 0;
}

int x10(int a)
{
    int temp;
    temp = 10 * a;
    a = temp;
    return temp;
}
