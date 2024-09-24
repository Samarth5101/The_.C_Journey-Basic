//programe to demonstrate the calling of a function consisting array
#include<stdio.h>

/*void printarray(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d\n", i+1, *(ptr+i));
    }
    
}*/ 
//                                  OR

void printarray(int ptr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d\n", i+1, ptr[i]);
    }
    
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    printarray(arr, 7);
    return 0;
}