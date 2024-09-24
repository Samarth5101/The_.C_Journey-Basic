// programe to show the functioning of * , %u , & and etc
#include <stdio.h>

int main()
{
    int i = 70;
    int *j = &i; /*int value is stored by i and
                  *j = &i describes that j(pointer to integer) points towards the
                   integer value stored at the address of i */
    int **k = &j;
    printf("1 The value of i is %d\n", i);     //describes value of i
    printf("2 The value of i is %d\n", *j);    //*j states the (int)value stored at j as address of i is stored in j it shows value at j
    printf("3 The address of i is %u\n", &i);  //states address of i
    printf("4 The address of i is %u\n", j);   // as address of i is stored in j so it states the stored item in j i.e.. address of i
    printf("5 The value of j is %d\n", *(&j)); //shows the value at address of address at j = item stored in j is addres of i
    printf("6 The address of j is %u\n", &j);  //shows the addres of j which is mostly very likely to the item or number stored at j
    printf("7 The value of i is %d\n", **k);
    printf("8 The address of i is %d\n", *k);
    return 0;
}