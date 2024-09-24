
//area of circle and cylinder with the help of given radius(specified) of a circle
#include <stdio.h>

int main()
{
    int radius = 2;
    float pi = 3.14;
    int hieght = 5;
    printf("The area of the given circle is %f \n", pi * radius * radius);
    printf("The area of the given cylinder is %f \n", pi * radius * radius * hieght);
    return 0;
}