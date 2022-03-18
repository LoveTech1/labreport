// wap that adds the sum of the first twenty natural numbers

# include <stdio.h>
int natural(int);
int main()
{
    int c;
    c = natural(5);
    printf("%d\n",c);
    return 0;
}

int natural(int n)
{
    int i,count=0;
    for(i = 1 ; i<=n;i++)
    {
        count = count + i;
    }
    return count;
}