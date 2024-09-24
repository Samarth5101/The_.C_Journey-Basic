//programe to tell if you can drive or not ,by observing your age
#include <stdio.h>

int main()
{
    int age;
    printf("enter your age\n");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("you can drive as you are %d that is a legal age to drive\n", age);
    }
    else
    {
        printf("you can not drive\n", age);
    }
    return 0;
}