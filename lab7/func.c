// program that executes the factorial of the number

# include <stdio.h>
# include "header.h"
int main()
{
    int factor,answer,number,i,factorial=1;
    printf("Enter the factor:\n");
    scanf("%d", &number);
    printf("The factorial  of %d is  %d\n",number,fact(number));
    return 0;
}

