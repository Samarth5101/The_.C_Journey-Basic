//program to show the function of strlen. = count the letters
#include<stdio.h>
#include <string.h>

int main()
{
    //char *str = "Samarth"; 
    char *str = "Samarth Mishra"; //strlen will also count this space bar. 
    int a = strlen(str);
    printf("The length of your name is of: %d letters", a );

    return 0;
}