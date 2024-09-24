//programe to convert temprature in degree celcius to degree farenhiet using modular programing
#include <stdio.h>
float converter(float celcius);
float celcius;
int main()
{
    float c;
    printf("Enter the degree celcius temprature\n");
    scanf("%f", &c);
    printf("Farehniet temprature w.r.t given degree of celcius is %.2f\n", converter(c));
    return 0;
}

float converter(float celcius)
{
    float result = celcius * 9 / 5 + 32;
    return result;
}