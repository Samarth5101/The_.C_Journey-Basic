//programe to show how to make a message decrypted on very basic level
#include<stdio.h>

int main()
{
    char c[] = "Tbnbsui!Njtisb";//paste the result of the previous programe in the replacement of "Whatever return in b/w semicolons"
    decrypt(c);
    printf("decrypted string is %s", c);
    return 0;
}

void decrypt(char *c)
{
    char *ptr = c;
    while (*ptr!= '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
    
}