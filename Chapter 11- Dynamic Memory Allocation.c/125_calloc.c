//calloc allocates space for inputs with a default initialising value of 0
#include<stdio.h>
#include<stdlib.h>
int main()
{
    //for int inputs
    int *ptr;
    ptr = (int *) calloc(6, sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        printf("Enter the value of %d element:\n", i+1);
        scanf("%d", &ptr[i]);
    }
    
    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element is: %d\n", i+1, ptr[i]);

    }

    //for float inputs 
    /*float *ptr;
    ptr = (float *) malloc(6 * sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        printf("Enter the value of %d element:\n", i+1);
        scanf("%f", &ptr[i]);
    }
    
    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element is: %f\n", i+1, ptr[i]);

    }*/
    return 0;
}