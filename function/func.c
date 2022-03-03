// program that prints demonstrates the function

# include <stdio.h>
int sub(int,int);
int add(int,int);
int main()
{
    int a = 30,b= 2,subtraction,addition;
    subtraction = sub(a,b);
    addition = add(a,b);
    printf("The sub is %d\n",subtraction);
    printf("The addition between two numbers is %d\n",addition);
    return 0;
}

int sub(int a, int b)
{
    return (a-b);
}

int add(int a, int b)
{
    return (a+b);
}