//programe to execute integers from 10 to 20
#include <stdio.h>

int main()
{
    int a = 0;
    scanf("%d", &a);

    while (a <= 20)
    {
        if (a >= 10)
        {
            printf("the next number according to the programe is %d\n", a);
        }
        a++;
    }
    return 0;
}