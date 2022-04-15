# include <stdio.h>
int power(int,int);
int main()
{
    int base,exp,result;
    printf("enter the base: \n");
    scanf("%d",&base);
    printf("Enter the power: \n");
    scanf("%d",&exp);
    result = power(base,exp);
    printf("%d^%d is %d\n",base,exp,result);
    return 0;
}
int power(int base,int exp)
{
    if(exp!=0)
    {
        return base * power(base,exp-1);
    }
    else
    {
        return 1;
    }
}