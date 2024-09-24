//programe to calculate the force of attraction exerted by earth on a body of mass m using standards g= 9.8m/s^2
#include <stdio.h>
float force(float mass);
int main()
{
    float m;
    printf("Enter the mass of body\n");
    scanf("%f", &m);
    printf("The force exerted by earth on the given body is %.2f m/s^2 \n", force(m));
    return 0;
}

float force(float mass)
{
    float result = mass * 9.8;
    return result;
}