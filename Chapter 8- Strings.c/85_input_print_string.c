//program to show how to take input from user and print it using string
#include<stdio.h>

int main()
{
    char string[50];
    printf("Enter your name: ");
    scanf("%s", string);
    printf("Your name is %s", string);
    return 0;
}
/* But the problem here is that our string only takes one 
word character or we can say it doesn't entertain space or more than one word
so for this you should watch the next program i.e.. 86