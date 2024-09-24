//programe to find whether a student is pass or fale by total and indivudally taking subjects also
#include <stdio.h>

int main()
{
    int physics, chemistry, maths;
    float total;

    printf("Enter physics marks out of 100\n");
    scanf("%d", &physics);

    printf("Enter chemistry marks out of 100\n");
    scanf("%d", &chemistry);

    printf("Enter maths marks out of 100\n");
    scanf("%d", &maths);

    total = (physics + chemistry + maths) / 3;

    if ((total < 40) || physics < 33 || chemistry < 33 || maths < 33)
    {
        printf("Your percentage is %f so you are failed\n", total);
    }
    else
    {
        printf("Your percantage is %f so you are passed\n", total);
    }

    return 0;
}