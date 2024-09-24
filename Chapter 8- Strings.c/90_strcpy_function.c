//program to show the function of strcpy.
#include<stdio.h>
#include <string.h>

int main()
{
    char *string = "Samarth Mishra";
    char string2[50]; // capacity is a something which we can take As a precaution.
    strcpy(string2, string); // strcpy(first we write the target in which we have to paste the oringinal string, secondly we write the main string which we have to copied)
    printf("Now the new string is: %s", string2);
    return 0;
}