//programe to demonstrate, how one can read strings by two different ways (by using ) %c and %s
#include<stdio.h>
#include<string.h>

int main()
{
    char str1[34];
    char str2[34];
    char c;
    int i = 0;
    printf("Enter first string\n");
    scanf("%s", str1);
    printf("Enter second string character by character\n");

    while (c!='\n')
    {
        fflush(stdin);
        scanf("%c", &c);
        str2[i] = c;
        i++;
    }
    str2[i-1] = '\0';

    printf("The value of str1 is %s\n", str1);
    printf("The value of str2 is %s\n", str2);
    printf("Strcmp for these strings is  %d", strcmp(str1, str2));
    return 0;
}// error is we want all characters in str2 but here we are getting only one letter