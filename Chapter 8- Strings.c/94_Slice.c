//programe to show the functionality of slice function --> cut the string from the place you suggest
#include<stdio.h>

void slice(char *str, int m, int n)
{
    int i = 0;
    while (i+m<n)
    {
        str[i] = str[i+m];
        i++;
    }
    str[i] = '\0';
}


int main()
{
    char str[] = "SamarthMishra";
    slice(str, 7, 13);
    printf("%s", str);
    return 0;
}