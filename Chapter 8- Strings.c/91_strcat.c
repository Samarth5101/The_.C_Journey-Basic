//program to show the functionality of strcat function it concatenate two or more strings(without space bar so tu put space b/w 2 strings put space bar in strings only within the "").
#include<stdio.h>
#include<string.h>

int main()
{
    char str2[45] = "Hey ";
    char *str1 = "Samarth";
    strcat(str2, str1);
    printf("The new string of hey is : %s", str2);
    return 0;
}