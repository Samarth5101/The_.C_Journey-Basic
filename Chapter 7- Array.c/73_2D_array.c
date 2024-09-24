//programe to demonstrate the working of 2D array
#include<stdio.h>

int main()
{
    int n_students = 3;
    int n_subjects = 5;
    int Marks[3][5];

    for (int i = 0; i < n_students; i++)
    {
        for (int j = 0; j < n_subjects; j++)
        {
            printf("Enter the marks of %d student in %d subject\n", i+1, j+1);
            scanf("%d", &Marks[i][j]);
        }
    }
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("So the marksheet will be given as\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    for (int i = 0; i < n_students; i++)
    {
        for (int j = 0; j < n_subjects; j++)
        {
            printf("The marks of %d student in %d subject is: %d\n", i+1, j+1, Marks[i][j]);
        }
    }
    return 0;
}