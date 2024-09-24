#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float sallary;
    char name[20];
};

int main()
{
    struct employee samarth  = {100, 10000000, "samarth" };
    
    printf("code is: %d\n", samarth.code);
    printf("sallary is: %f\n", samarth.sallary);
    printf("name is: %s\n", samarth.name);

    return 0;
}