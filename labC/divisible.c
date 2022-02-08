// wap that asks a number and tests whether the number is exactly divisible by 5 but not by 11.

# include <stdio.h>
int main()
{
    int num;
    printf("Enter number to check divisibility by 5 but not 11:\n");
    scanf("%d",&num);
    (num%5==0 && num%11!=0)?printf("The number is divisible by 5 but not 11\n"):
    printf("The condition is not satisfied.\n");
    
    return 0;
}