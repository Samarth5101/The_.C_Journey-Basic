//to find simple interest when p,r,t are specified
#include <stdio.h>

int main()
{
    int principal = 2000, rate = 4, year = 1;
    int SimpleInterest = (principal * rate * year) / 100;
    printf("The value of SimpleInterst is %d\n", SimpleInterest);
    return 0;
}
