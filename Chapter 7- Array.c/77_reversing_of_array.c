
//programe to reverse an array by calling a function
#include<stdio.h>
void reverse(int *ptr, int n)
{
    int temp;
    for (int i = 0; i < (n/2); i++)
    {
        temp = ptr[i];
        ptr[i] = ptr[n-i-1];
        ptr[n-i-1] = temp;
    }
    
}
int main()
{
    int array[] = {1,2,3,4,5,6,7};
    reverse(array, 7);
    for (int i = 0; i < 7; i++)
    {
        printf("The Element %d is swapped out by %d element{in array indexes from 0 to 6 for 7 elements} and the swaped value is: %d\n", i, 6-i, array[i]);
        printf("\n");
    }
    
    return 0;
}