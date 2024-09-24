//program to show how one can print string using while loop
#include<stdio.h>

int main()
{
    char str[] = "Samarth";
    char *ptr = str;
    while (*ptr!= '\0')
    {
        printf ("%c", *ptr );
        ptr++;
    }
    return 0;
}