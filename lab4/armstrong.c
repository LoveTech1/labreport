// program that prints the armstrong from 1 to 999

#include <stdio.h>
void main()
{
    int num, remainder,remain1,remain2, cube, sum = 0, temporary;

    printf("Enter the three digit num:\n");
    scanf("%d", &num);

    while (num <= 999)
    {
        remainder = num % 10;
        remain1 = num / 10;
        remainder = num % 10;
        remain2 = num / 10;
    }
}