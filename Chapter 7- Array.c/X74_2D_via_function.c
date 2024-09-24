//programe to create a 2D array and presenting it by function calling
#include<stdio.h>

void two_Dimensional_array(int r, int c, int array[r][c])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter the element of row %d of Column %d\n", i+1, j+1);
            scanf("%d", &array[i][j]);
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

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("The element of row %d of column %d is: %d\n", i+1, j+1, array[i][j]);
        }
    }
}
    
int main()
{
    int rows = 2;
    int columns  = 3;
    int array[2][3];
    two_Dimensional_array(rows, columns, array[rows][columns] );    
    return 0;
}