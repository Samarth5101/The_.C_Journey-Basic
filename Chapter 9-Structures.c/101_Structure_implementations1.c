#include<stdio.h>
#include<string.h>

struct employe
{
    int code;
    float sallary;
    char name[10];
};


int main()
{
    struct employe e1, e2, e3;
    printf("Enter the code of employe e1 : \n");
    scanf("%d", &e1.code);
    printf("Enter the sallary of employe e1 : \n");
    scanf("%f", &e1.sallary);
    printf("Enter the name of employe e1 : \n");
    scanf("%s", e1.name);

    printf("Enter the code of employe e2 : \n");
    scanf("%d", &e2.code);
    printf("Enter the sallary of employe e2 : \n");
    scanf("%f", &e2.sallary);
    printf("Enter the name of employe e2 : \n");
    scanf("%s", e2.name);

    printf("Enter the code of employe e3 : \n");
    scanf("%d", &e3.code);
    printf("Enter the sallary of employe e3 : \n");
    scanf("%f", &e3.sallary);
    printf("Enter the name of employe e3 : \n");
    scanf("%s", e3.name);

    printf("%d\n", e1.code);
    printf("%f\n", e1.sallary);
    printf("%s\n", e1.name);

    printf("%d\n", e2.code);
    printf("%f\n", e2.sallary);
    printf("%s\n", e2.name);

    printf("%d\n", e3.code);
    printf("%f\n", e3.sallary);
    printf("%s\n", e3.name);


    return 0;
}