//programe to show how to make your own strcpy function
#include<stdio.h>
#include<string.h>
char strcpy( char *str2, char str1)
{
    char temp;
    str1 = temp;
    temp = str2;
    return str2;
}

int main()
{
    char *str1 = "Samarth";
    char str2[100];
    char temp;
    strcpy(str2, str1);
    printf("Now the str2 is updated with %s", str2);
    return 0;
}