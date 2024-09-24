//program to verify the location of ellement of an array using pointer
#include<stdio.h>

int main()
{
    int array[10];
    int *ptr = array; //or int *ptr = &array[0];
    ptr = ptr+2;
    if (ptr == &array[2])
    {
        printf("These points to the same location in the memory\n");
    }
    else
    {
        printf("These do not  points to the same location in the memory\n");   
    }
    return 0;
}