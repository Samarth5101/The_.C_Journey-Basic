//programe to show the function of typdef; typdef set an alias name for structured data type
#include <string.h> 
#include<stdio.h>

typdef struct employee
{
    int code;
    float salary;
    char name[20];
} emp;

void show( emp emp1) //error after void(suggestion to put ;)
{
    printf("The code of employee is : %d\n", emp1.code);
    printf("The salary of employee is : %f\n", emp1.salary);
    printf("The name of employee is : %s\n", emp1.name);
    return 0;
}

int main()
{

    emp e1;
    emp *ptr; 
    
    ptr = &e1;
    
    //(*ptr).code = 101; //or ptr->code = 101;
    ptr->code = 101;
    ptr->salary = 11.11;
    strcpy(ptr->name, "samarth");
    show(e1);

    return 0;
}