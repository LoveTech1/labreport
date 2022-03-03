// wap to check whether the given number is prime or not
# include <stdio.h>
void prime(void);
int main()
{
    prime();
    return 0;
}

void prime()
{
    int num,count=0,i;
    printf("Enter the number:\n");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++)
    {
        if(num % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("%d is prime number\n",num);
    }
    else
    {
        printf("%d is not a prime number\n",num);
    }
}