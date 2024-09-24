//programe to give you the table of any number till it's 10th count
#include<stdio.h>

int main()
{
    int Table[10];
    int number;
    printf("Enter the number whoose table you want\n");
    scanf("%d", &number);
    printf("\n");
    printf("\n");
    printf("The table of number %d is:\n", number);
    printf("\n");
    printf("\n");
    for(int i = 0; i<10 ; i++)
    {
        Table[i] = number*(i+1);
    }

    for(int i = 0; i<10 ; i++)
    {
        printf("\n");
        printf("%d * %d = %d\n", number, i+1, Table[i]);
    }
    return 0;
}