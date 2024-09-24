// calloc function where the user define the size.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    //for int inputs
    int *ptr;
    int n;
    printf("Enter the number of entries you want to put\n");
    scanf("%d", &n);
    ptr = (int *) calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d element:\n", i+1);
        scanf("%d", &ptr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("The value of %d element is: %d\n", i+1, ptr[i]);

    }

    //for float inputs 
    /*float *ptr;
    int n;
    printf("Enter the number of entries you want to put");
    scanf("%d", &n);
    ptr = (float *) malloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d element:\n", i+1);
        scanf("%f", &ptr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("The value of %d element is: %f\n", i+1, ptr[i]);

    }*/
    return 0;
}