//getc function read a file's *character* 
#include<stdio.h>

int main()
{
    FILE *get;
    //fgetc demo for reading a file
    get = fopen("fgetc.txt", "r");
    char c = fgetc(get);
    printf("The value of my character is %c\n", c); //--> print the first letter of the txt file
    //print the txt file word by word by below given commands(but for the first letter of the txt file u must have to put the above given command).
    printf("The value of my character is %c\n", fgetc(get));
    printf("The value of my character is %c\n", fgetc(get));
    printf("The value of my character is %c\n", fgetc(get));
    printf("The value of my character is %c\n", fgetc(get));
    printf("The value of my character is %c\n", fgetc(get));
    printf("The value of my character is %c\n", fgetc(get));
    printf("The value of my character is %c\n", fgetc(get));
    printf("The value of my character is %c\n", fgetc(get));
    printf("The value of my character is %c\n", fgetc(get));
    printf("The value of my character is %c\n", fgetc(get));
    printf("The value of my character is %c\n", fgetc(get));
    printf("The value of my character is %c\n", fgetc(get));
    printf("The value of my character is %c\n", fgetc(get));
    printf("The value of my character is %c\n", fgetc(get));
    printf("The value of my character is %c\n", fgetc(get));
    printf("The value of my character is %c\n", fgetc(get));
    printf("The value of my character is %c\n", fgetc(get));
    printf("The value of my character is %c\n", fgetc(get));
    printf("The value of my character is %c\n", fgetc(get));
    printf("The value of my character is %c\n", fgetc(get));
    printf("The value of my character is %c\n", fgetc(get));
    printf("The value of my character is %c\n", fgetc(get));
    printf("The value of my character is %c\n", fgetc(get));
    printf("The value of my character is %c\n", fgetc(get));
    printf("The value of my character is %c\n", fgetc(get));
    printf("The value of my character is %c\n", fgetc(get));
    printf("The value of my character is %c\n", fgetc(get));
    return 0;
}