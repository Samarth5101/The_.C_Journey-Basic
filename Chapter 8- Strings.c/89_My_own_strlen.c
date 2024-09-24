// program to make our own strlen function using loop = counts letter of strings
#include<stdio.h>

int main()
{
    char str[] = "Samarth";
    int l = strlen(str);
    printf("The length of this string is %d", l);
    return 0;
}

int strlen(char * str)
{
    char *ptr = str;
    int len = 0;
    while (*ptr!= '\0')
    {
        len++;
        ptr++;

    }
    return len;
}