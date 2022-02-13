// example for the switch cases
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    // menu driven program that has the following functions
    // factorial of a number, prime or not, odd or evenand exit
    int num;
    int i,sum=0,count=0,fact=1,numPrime;
    printf("Enter 1. for Factorial of number:\n");
    printf("Enter 2. for prime number:\n");
    printf("Enter 3. for odd or even:\n");
    printf("Enter 4. to exit:\n");
    scanf("%d",&num);
    
    switch(num)
    {
        case 1:
            
            printf("------factorial of Number----------\n");
            printf("Enter the number:\n");
            scanf("%d",&num);
            
            for(i = 1; i <=num; i++)
            {
                fact = fact * i;
               // sum = sum + fact;
            }
            printf("The factorial of %d is %llu",num,fact);
            break;
        case 2:
            printf("----------Prime Numbers---------\n");
            printf("Enter the number to check prime or not:\n");
            scanf("%d",&numPrime);
            
            for ( i = 1; i<=numPrime ;i++)
            {
                if ( numPrime % i == 0)
                {
                    count++;
                }
            }
            if ( count == 2)
            {
                printf("It is prime number .\n");
            }
            else
            {
                printf("It is not prime number.\n");
            }
            
            break;
        case 3:
            printf("---------Odd or even numbers------------\n");
            printf("Enter the number to check odd or even\n");
            scanf("%d",&num);
            (num % 2 == 0)? printf("It is even number.\n"):
            printf("It is odd number:\n");
            break;
            
        default:
            printf("Please! enter the valid number.\n");
    }
    return 0;
}