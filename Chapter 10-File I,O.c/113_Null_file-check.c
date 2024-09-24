#include<stdio.h>

int main()
{
    FILE *ptr;
    int num;
    int num2;
    ptr = fopen("samarth.txt", "r");
    //ptr = fopen("samarth1.txt", "r"); for checking of samarth1.txt file
    if (ptr == NULL)
    {
        printf("This file does not exist\n");
    }
    
    else
    {
        fscanf(ptr, "%d", &num); //--> in the bracket (kha se, "kya", kisme).
        fscanf(ptr, "%d", &num2);
        fclose(ptr);//--> for closing the file.
        printf("Samarth's DOB is %d\n", num);// --> execute till the spacebaar in samarth.txt
        printf("Shruti's DOB is %d\n", num2);// --> execute afte the spacebaar and till next spacebaar in samarth.txt
    }
    return 0;
}