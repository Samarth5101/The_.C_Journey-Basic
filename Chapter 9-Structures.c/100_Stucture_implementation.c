//This programe will demonstrate that how one can make a structure
#include<stdio.h>
#include<string.h>

struct Employee
{
    int E_ID;
    float Sallary;
    char Name[10];
};

int main()
{
    int a = 2;
    float b = 2.1;
    char c = 's'; 
    
    struct Employee e1;
    e1.E_ID = 100;
    e1.Sallary = 34.345;
    //e1.name = "Samarth" ------> Doesn't Work
    strcpy(e1.Name, "Samarth");
    printf("%d\n", e1.E_ID);
    printf("%f\n", e1.Sallary);
    printf("%s\n", e1.Name);
    return 0;
}