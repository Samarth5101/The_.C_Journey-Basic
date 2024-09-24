#include<stdio.h>

int main()
{
    FILE *table;
    int num;
    printf("Enter the number whoose table you want\n");
    scanf("%d", &num);
    table = fopen("multable.txt", "w");
    for (int i = 0; i < 10; i++)
    {
        fprintf(table, "%d X %d = %d\n", num, i+1, num*(i+1));
    }
    fclose(table);
    printf("Succefully generated the multiplication table of %d in multable.txt\n", num);
    return 0;
}