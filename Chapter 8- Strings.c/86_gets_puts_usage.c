//programe to show the usage of gets(used for multiword strings) and puts(used to print a string and placing the cursor on the next line)
#include<stdio.h>

int main()
{
    char string[50];
    printf("Enter your name: ");
    gets(string);
    puts(string);
    //printf("Your name is %s", string);
    return 0;
}