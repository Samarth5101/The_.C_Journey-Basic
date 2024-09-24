#include<stdio.h>
#include<string.h>

typedef struct customer 
{
    int account_no;
    float DOB; //dd.mm
    char name;
}cust;

void display(cust c)
{
    printf("The account number of  person is %d\n",c.account_no);
    printf("The account DOB of  person is %f\n",c.DOB);
    printf("The Name of  person is %s\n",c.name);
} 
int main()
{
    cust cnums[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the account number of %d customer\n", i+1);
        scanf("%d", &cnums[i].account_no);

        printf("Enter the DOB of %d customer\n", i+1);
        scanf("%f", &cnums[i].DOB);

        printf("Enter the name of %d customer\n", i+1);
        scanf("%s", &cnums[i].name);

    }
    
    for (int i = 0; i<3; i++)
    {
        display(cnums[i]);
    }
    
    return 0;
}