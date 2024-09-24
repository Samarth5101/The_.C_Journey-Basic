//programe to show how to print elements of an array
#include<stdio.h>

int main()
{
    int Marks[4];//this statement allocates space for 4 integers
    printf("Enter the marks of  student 1:");
    scanf("%d", &Marks[0]);
    printf("Enter the marks of  student 2:");
    scanf("%d", &Marks[1]);
    printf("Enter the marks of  student 3:");
    scanf("%d", &Marks[2]);
    printf("Enter the marks of  student 4:");
    scanf("%d", &Marks[3]);
    printf("The marks of student 1 is %d ,student 2 is %d, student 3 is %d and student 4 is %d", Marks[0], Marks[1], Marks[2], Marks[3]);
    return 0;
}