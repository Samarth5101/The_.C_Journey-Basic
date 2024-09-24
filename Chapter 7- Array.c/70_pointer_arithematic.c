/*program to understand the bytes of int,char and float integer using pointer arithematic*/
#include<stdio.h>

int main()
{
    // section - 1 = of int(difference of 4 bytes)
    int i = 24;
    int *ptr_int = &i;
    printf("The value of ptr_int is %u\n", ptr_int);// real address of i
    ptr_int = ptr_int + 1;
    printf("The value of ptr_int is %u\n", ptr_int);
    ptr_int--;
    printf("The value of ptr_int is %u\n", ptr_int);
    ptr_int++;
    printf("The value of ptr_int is %u\n", ptr_int);
    ptr_int = ptr_int - 1;
    printf("The value of ptr_int is %u\n", ptr_int);
    printf("This section gives you conclusion that a integer is of 4 bytes\n");

    //section - 2 = of float(difference of 4 bytes)
    float a = 3.4;
    float *ptr_float = &a;
    printf("The value of ptr_float is %u\n", ptr_float);// real address of i
    ptr_float = ptr_float + 1;
    printf("The value of ptr_float is %u\n", ptr_float);
    ptr_float--;
    printf("The value of ptr_float is %u\n", ptr_float);
    ptr_float++;
    printf("The value of ptr_float is %u\n", ptr_float);
    ptr_float = ptr_float - 1;
    printf("The value of ptr_float is %u\n", ptr_float);
    printf("This section gives you conclusion that a float is of 4 bytes\n");

    //section - 3 = of char(difference of 1 byte)
    char c = '3';
    char *ptr_char = &c;
    printf("The value of ptr_char is %u\n", ptr_char);
    ptr_char = ptr_char + 1;
    printf("The value of ptr_char is %u\n", ptr_char);
    ptr_char--;
    printf("The value of ptr_char is %u\n", ptr_char);
    ptr_char++;
    printf("The value of ptr_char is %u\n", ptr_char);
    ptr_char = ptr_char - 1;
    printf("The value of ptr_char is %u\n", ptr_char);
    printf("This section gives you conclusion that a char is of 1 bytes\n");
    return 0;

}