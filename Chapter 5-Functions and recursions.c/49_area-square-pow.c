/*programe to show the area of square using pow function
here, pow function= raised to the power always return float type so use %f*/

#include <stdio.h>
#include <math.h>

int main()
{
    float side;

    printf("Enter the length of side\n");
    scanf("%f", &side);
    printf("The value of area is %f", pow(side, 2));
    return 0;
}