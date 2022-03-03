// wap that adds the sum of the first twenty natural numbers

# include <stdio.h>
void natural(void);
int main()
{
    natural();
    return 0;
}

void natural()
{
    int n,i,count=0;
    n = 20;
    for(i = 1 ; i<=20;i++)
    {
        count = count + i;
    }
    printf("The sum of twenty natural numbers is %d\n",count);
}