//programe to show the functioning of pointer to pointer command
#include <stdio.h>

int main()
{
    int i = 30;
    int *ptr;
    int **ptr_to_ptr;

    ptr = &i;
    ptr_to_ptr = &ptr;

    printf("The value of i is %d\n", **ptr_to_ptr);
    printf("The address of i is %d\n", ptr);
    printf("The address of ptr is %d\n", ptr_to_ptr);
    printf("The address of ptr_to_ptr  is %d\n", &ptr_to_ptr);
    return 0;
}