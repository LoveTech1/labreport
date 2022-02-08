// program to find out the leap year
#include <stdio.h>
void main()
{
    int year;
    printf("Enter the leap year\n");
    scanf("%d", &year);

    if (year % 4 == 0)
    { // to check the divisibility with 4
        if (year % 100 == 0)
        {                        // to check centurian year
            if (year % 400 == 0) // if it is centurian as well as divisible by 400
            {
                printf("%d is leap year\n", year);
            }
            else
                printf("%d is not leap year\n", year);
        }
        else
            printf("%d is leap year\n", year);
    }
    else
        printf("%d is not leap year\n", year);
}