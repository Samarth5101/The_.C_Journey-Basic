//programe to count a specific letter in a string 
#include<stdio.h>
int find(char str[], char c)
{
    int count = 0;
    char *ptr = str;
    while (*ptr!= '\0')
    {
        if (*ptr == c)
        {
            count++;
            printf("Given letter is there in the string\n");
        }
        else
        {
            printf("Given letter is not there in the string");
    
        }
        ptr++;
    }
    return count;
}
int main()
{
    char str[] = "Samarth";
    int count = find(str, 'a');
    printf(" given word is coming= %d times in string", count);
    return 0;
}
