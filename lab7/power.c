// wap to calulate the power

# include <stdio.h>
int power(int a, int b);
int main()
{
    int a,b;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    printf("Enter the value of b:\n");
    scanf("%d",&b);
    printf("The power %d to the power %d is %d",a,b,power(a,b));
    return 0;
}
int power(int a, int b)
{
    int i,pow=1;
    
    for(i=b;i!=0;i--)
    {
        pow *= a;
    }   
    return pow;
}