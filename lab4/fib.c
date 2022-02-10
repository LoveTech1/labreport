// program that generates the fibanacci series upto n

# include <stdio.h>
int main()
{
    int num, firstTerm = 0, secondterm = 1,nextTerm,i;
    printf("Enter the num:\n");
    scanf("%d",&num);
    
    nextTerm = firstTerm + secondterm;
    printf("The fib series is %d %d ",firstTerm,secondterm);

    for(i=2;i<num;i++)
    {
        printf("%d ",nextTerm);
        firstTerm = secondterm;
        secondterm = nextTerm;
        nextTerm = firstTerm + secondterm;
    }

    return 0;
}