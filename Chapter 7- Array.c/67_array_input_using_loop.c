//program to demonstrate the saving and showing the inputs by client using loop(mostly used)
#include<stdio.h>

int main()
{
    int marks[5];

    for (int i = 0 ; i < 5 ; i++)
    {
    printf("Enter the value of marks for student %d :  ", i+1);
    scanf("%d", &marks[i]);
    }    
 
    printf("Therfore\n");
    
    for (int i = 0; i < 5 ; i++)
    {
    printf("The value of marks for student %d is %d:  \n", i+1, marks[i]);
        
    }
    
    return 0;
}