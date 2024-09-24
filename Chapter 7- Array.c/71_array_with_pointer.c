//programe to demonstrate the forming an array with pointer and executing it with pointer also.
#include<stdio.h>

int main()
{
    int Marks[4];
    int *ptr;
    ptr = &Marks[0]; //or ptr = Marks;
    
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the marks of student %d: \n", i+1);
        scanf("%d", ptr);
        ptr++;
    }

    for (int i = 0; i < 4; i++)
    {
        printf("The marks of student %d is: %d\n", i+1 , Marks[i]);
    }
    return 0;
}
