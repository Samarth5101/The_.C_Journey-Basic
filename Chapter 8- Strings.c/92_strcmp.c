/*programe showig the functionality of strcmp --> compare two strings 
it subtract's the two strings using there ascii value shows -ve, 0, +ve value following etter by letter */
#include<stdio.h>
#include<string.h>

int main()
{
    char string1[50];
    char string2[50];
    printf("Enter string 1\n");
    gets(string1);
    printf("Enter string 2\n");
    gets(string2);
    int val = strcmp(string1, string2);
    printf("now the value of difference between two strings is %d", val);
    return 0;
}
