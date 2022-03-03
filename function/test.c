// program

#include <stdio.h>
#include <stdlib.h>
void main()
{
    // if else
    // take input age from the user and display if the user is eligible to vote or not

    int num;
    int a, b, c;
    jump:
        printf("Enter 1. for addition\n");
        printf("Enter 2. for subtraction\n");
        printf("Enter 3. to exit the program\n");
        scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("Enter the number a:\n");
        printf("Enter the number b:\n");
        scanf("%d", &a);
        scanf("%d", &b);
        c = a + b;
        printf("The addition of two numbers is %d\n", c);
        goto jump;
        break;

    case 2:
        printf("Enter the number a:\n");
        printf("Enter the number b:\n");
        scanf("%d", &a);
        scanf("%d", &b);
        c = a - b;
        printf("The subtraction of two numbers is %d\n", c);
        goto jump;

    case 3:
        exit(0);

    default:
        printf("Enter the valid number:\n");
    }
}