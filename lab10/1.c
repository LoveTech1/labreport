// wap to read integers from the user until user choices "no" after reading data from the user , write 
// all odd numbers in "odd.txt" and even numbers in "even.txt". 

# include <stdio.h>
# include <string.h>
# define CHOICE n
int main()
{
    int num;
    char choice[5];
    int *even,*odd;
    even = fopen("even.txt","w");
    odd = fopen("odd.txt","w");
    printf("enter a number:\n");
    scanf("%d",&num);
    if(num == 0)
    {
        printf("%d is even",num);
    }
    while(num!=0)
    {
        if(num%2 == 0)
        {
            fprintf("%d is even",num);
        }
        else
        {
            fprintf("%d is odd\n",num);
        }
    }
    fclose(even);
    fclose(odd);

    return 0;
}