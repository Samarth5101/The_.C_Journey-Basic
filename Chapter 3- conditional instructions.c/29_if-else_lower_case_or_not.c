//programe to define that a given character is a lowercase or not
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character\n");
    scanf("%c", &ch);

    if (ch >= 97 && ch <= 122)
    {
        printf("Entered character is a lowercase character\n");
    }
    else
    {
        printf("Entered character is not a lowercase character\n");
    }
    return 0;
}