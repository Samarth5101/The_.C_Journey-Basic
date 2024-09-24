//progam to demonstrate the saving of element and showing them in a easy way using {} of int and float values
#include<stdio.h>

int main()
{
    int i[3] = {11,22,33};
    printf("The value of i[0] is %d\n", i[0]);
    printf("The value of i[1] is %d\n", i[1]);
    printf("The value of i[2] is %d\n", i[2]);
    
    printf("And for the deciaml values\n");
    
    float f[3] = {11.1,22.2,33.3};
    printf("The value of f[0] is %0.1f\n", f[0]);
    printf("The value of f[1] is %0.1f\n", f[1]);
    printf("The value of f[2] is %0.1f\n", f[2]);
    
    return 0;
}
