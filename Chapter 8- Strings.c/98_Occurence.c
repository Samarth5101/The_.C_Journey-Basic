//programe to count repetition of  a letter in a string 
#include<stdio.h>
int occourence(char str[], char c)
{
    int count = 0;
    char *ptr = str;
    while (*ptr!= '\0')
    {
        if (*ptr == c)
        {
            count++;
        }
        ptr++;
    }
    return count;
}
int main()
{
    char str[] = "Samarth";
    int count = occourence(str, 'a');
    printf("Occurence = %d", count);
    return 0;
}

