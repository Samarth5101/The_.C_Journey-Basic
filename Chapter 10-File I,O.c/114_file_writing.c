//for writing INTEGER in a file

#include<stdio.h>

int main()
{
    FILE *wptr;
    int number = 5101;
    wptr = fopen("generated.txt", "w");
    fprintf(wptr, "The numer is %d\n", number); // --> in the bracket (kha se, kya, in kya)
    fprintf(wptr, "Thanks for using fprintf");
    fclose(wptr);
    return 0;
}