#include<stdio.h>

int main()
{
    int num, after;
    FILE *duo;
    duo =  fopen("double_integer.txt", "r");
    fscanf(duo, "%d", &num);
    fclose(duo);
    printf("The value given in the file is %d\n", num);
    after = num*2;
    duo = fopen("double_integer.txt", "w");
    fprintf(duo, "The modified number is: %d\n", after);
    fclose(duo);
    return 0;
}