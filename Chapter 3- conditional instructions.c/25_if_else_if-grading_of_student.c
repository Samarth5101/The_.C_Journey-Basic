//programe to allot grades to a given student's marks
#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks\n");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100)
    {
        printf("wrong entery");
    }
    else if (marks < 60)
    {
        printf("Alloted grade is F\n");
    }
    else if (marks >= 60 && marks < 70)
    {
        printf("Alloted grade is D\n");
    }
    else if (marks >= 70 && marks < 80)
    {
        printf("Alloted grade is C\n");
    }
    else if (marks >= 80 && marks < 90)
    {
        printf("Alloted grade is B\n");
    }
    else if (marks >= 90 && marks <= 100)
    {
        printf("Alloted grade is A\n");
    }
    return 0;
}