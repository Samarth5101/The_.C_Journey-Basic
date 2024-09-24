//program to make a 2 dimensional structured vector
#include<stdio.h>

struct vector
{
    int x;
    int y;
};

int main()
{
    struct vector v1, v2;
    v1.x = 34;
    v1.y = 54;
    printf("for 1st vector : X dim is %d, and y dim %d\n", v1.x, v1.y);

    v2.x = 10;
    v2.y = 20;
    printf("for 2nd vector : x dim is %d, and y dim %d\n", v2.x, v2.y);
    return 0;
}