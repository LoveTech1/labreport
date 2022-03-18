// wap to check whether the given number is prime or not
# include <stdio.h>
int prime(int);
int main()
{
    int a;
    prime(21);
    //printf("%d\n",a);
    return 0;
}

int prime(num)
{
    int count=0,i;
    // printf("Enter the number:\n");
    // scanf("%d",&num);
    
    for(i=1;i<=num;i++)
    {
        if(num % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("%d is prime number\n");
    }
    else
    {
        printf("%d is not prime number:\n");
    }
}