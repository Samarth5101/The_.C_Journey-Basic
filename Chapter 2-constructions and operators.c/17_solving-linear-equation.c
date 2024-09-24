// solving a linear equation and understanding of operater's preferences
#include <stdio.h>

int main()
{
    int x = 2;
    int y = 3;
    /* preferences are like- 
    1> *,/,%
    2> +,-
    3> = 
    */
    printf("the result of linear equation 3*x + 2*y is %d\n", 3 * x + 2 * y);
    // * and / follows left to right associativity
    printf("the value of linear equation 9 * x / (2 * y) is %d\n", 9 * x / (2 * y));
    return 0;
}