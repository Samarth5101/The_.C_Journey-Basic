#include<stdio.h>

int main()
{
    FILE *get1;
    char c;
    get1 = fopen("fgetc.txt", "r");
    c = fgetc(get1);
    while (c != EOF) // EOF--> End of File
    {
        printf("%c", c);
        c = fgetc(get1);
    }
    
    return 0;
}