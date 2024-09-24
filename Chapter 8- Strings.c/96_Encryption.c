//programe to show how to make a message encrypted on very basic level
#include<stdio.h>

int main()
{
    char c[] = "Samarth Mishra";
    encrypt(c);
    printf("Encrypted string is %s", c);
    return 0;
}

void encrypt(char *c)
{
    char *ptr = c;
    while (*ptr!= '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
    
}
//NOTE: Please view the next program i.e.. decryption(copy the result from this programe)