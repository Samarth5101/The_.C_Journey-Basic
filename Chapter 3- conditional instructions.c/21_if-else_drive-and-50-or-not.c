//programe to show if u can drive by observing your age as a standard of 18 and congrats you if you are 50
#include <stdio.h>

int main()
{
    int age;
    printf("enter your age\n");
    scanf("%d", &age);

    if (age > 18)
    {
        printf("you can drive as you are %d that is greater than 18\n", age);
    }
    else
    {
        printf("you can not drive\n", age);
    }

    if (age == 50)
    {
        printf("congrats! half centuary\n", age);
    }
    else
    {
        printf("not 50\n", age);
    }

    return 0;
}