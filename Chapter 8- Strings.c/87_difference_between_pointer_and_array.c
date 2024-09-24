//program to show the difference between assgning a string via *ptr  and  ptr[]
#include <stdio.h>

int main()
{
    char *ptr = "Samarth Mishra";
    //char ptr[] = "Samarth Mishra" --> This will  give error
    ptr = "Samarth Mishra";
    printf("%s", ptr);
    return 0;
}