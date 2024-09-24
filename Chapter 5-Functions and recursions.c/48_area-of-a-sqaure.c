//programe to show area of a square with it's input side length a
#include <stdio.h>
int area();
int a;
int c;
int main()
{
    printf("Enter the length of square\n");
    scanf("%d", &a);
    area();
    printf("Area w.r.t to given parameters is %d square meters\n", c);
    return 0;
}

int area()
{
    c = a * a;
}