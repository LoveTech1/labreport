// wap to calculate the sum of square of natural numbers upto n using recursion
# include <stdio.h>
// # include <math.h>
int natural(int);
int main()
{   int num,result;
    printf("HOw many square numbers do you want?\n");
    scanf("%d",&num);
    result = natural(num);
    printf("The square of natural numbers is %d\n",result);
    return 0;
}
int natural(int number)
{
    if(number!=0)
    {
        return number*(number+1)*(2*number+1)/6;       
    }
    else
    {
        return 1;
    }
}

 
