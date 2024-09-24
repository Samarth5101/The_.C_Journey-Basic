#include<stdio.h>

int main()
{
    int a, b, c, d;
    FILE *getint;
    getint = fopen("4int.txt", "r");
    fscanf(getint, "%d %d %d %d", &a, &b, &c, &d);
    printf("The first no is %d\n", a);
    printf("The second no is %d\n", b);
    printf("The third no is %d\n", c);
    printf("The fourth no is %d\n", d);
    return 0;
}