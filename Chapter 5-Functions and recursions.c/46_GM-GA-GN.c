//programe to show the working of modular programming by calling good morning, good afternoon , good night text
#include <stdio.h>
void display1(); // ----> function prototype
void display2(); // ----> function prototype
void display3(); // ----> function prototype

int main()
{
    int a;
    display1(); // ----> function call
    display2(); // ----> function call
    display3(); // ----> function call
    return 0;
}

//Function definations
void display1()
{
    printf("Good morning\n");
}

void display2()
{
    printf("Good afternoon\n");
}

void display3()
{
    printf("Good night\n");
}
