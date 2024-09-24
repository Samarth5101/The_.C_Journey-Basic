//programe to give you the table of any number till any factor using array and functions
#include<stdio.h>
void printtable(int *multable, int n, int m)
{
    printf("The table of the number %d is:\n\n", n);
    for (int i = 0; i < m; i++)
    {
        multable[i] = n*(i+1);
    }

    for (int i = 0; i < m; i++)
    {
        printf("%dX%d = %d\n", n, i+1, multable[i]);
    }
    
    printf("*************************************************************************\n\n");
}
int main()
{
    int n;
    int m;
    printf("Enter the number whoose table you want\n");
    scanf("%d", &n);
    printf("Enter the Factor till which you want the table of given number\n");
    scanf("%d", &m);
    int multable[n][m];
    printtable(multable[n], n, m);
    return 0;
}