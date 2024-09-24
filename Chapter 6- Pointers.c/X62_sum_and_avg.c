//program to find the sum and average of two given numbers
#include <stdio.h>
void SumAndAvg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (*sum) / 2;
}
int main()
{
    int i, j, sum;
    float avg;
    i = 6;
    j = 4;
    SumAndAvg(i, j, &sum, &avg);
    printf("The value of sum is %d\n", sum);
    printf("The value of average is %d\n", avg);
    return 0;
}