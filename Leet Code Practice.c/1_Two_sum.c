/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.*/

#include<stdio.h>
#include<stdlib.h>

int sumnum(int nums[], int size)
{

}
int main()
{
    int target;
    int *nums;
    printf("Enter a target till which the output should score\n");
    scanf("%d", &target);
    nums = (int *) malloc(4*sizeof(int));
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the %d number\n", i);
        scanf("%d", &nums[i]);
    }
    

    sumnum[] = sum(*nums, 4);
    return 0;
}

 