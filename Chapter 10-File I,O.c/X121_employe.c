#include<stdio.h>

int main()
{
    int sal1, sal2;
    char str1[10]; 
    char str2[10];
    printf("Enter the name of first employee\n");
    gets(str1);

    printf("Enter the sallary of first employee\n");
    scanf("%d", &sal1);

    printf("Enter the name of second employee\n");
    gets(str2);

    printf("Enter the sallary of second employee\n");
    scanf("%d", &sal2);

    FILE *emp;
    emp = fopen("employee.txt", "w");
    fprintf(emp, "The name and sallary of first employee is: %s, %d\n", str1, sal1);
    fprintf(emp, "The name and sallary of second employee is: %s, %d\n", str2, sal2);
    fclose(emp);
    return 0;
}