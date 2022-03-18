// switch case 

# include <stdio.h>
int sum(int,int);
int sub(int,int);
int mult(int,int);
int div(int, int);
int main()
{
    int total,num1,num2;
    char ch;
    int multiplication, subtraction, division;
    printf("Enter + for addition:\n");
    printf("Enter - for subtraction:\n");
    printf("Enter * for multiplication:\n");
    printf("Enter / for division:\n");
    scanf("%c",&ch);
    printf("----------------------\n");
    printf("enter the num1:\n");
    scanf("%d",&num1);
    printf("Enter the num2\n");
    scanf("%d",&num2);
    switch(ch)
    {
        case '+':

            total = sum(num1,num2);
            printf("The sum is %d\n",total);
            break;

        case '-':
            subtraction = sub(num1,num2);
            printf("The subtraction between two numbers is %d\n",subtraction);
            break;

        case '*':
            multiplication = mult(num1,num2);
            printf("The multiplication between two numbers is %d\n",multiplication);
            break;
        
        case '/':
            division = div(num1,num2);
            printf("The division between two numbers is %d\n",division);
            break;
    }
    return 0;
}


int sum(int num1, int num2)
{
    //int num1,num2,addition;
    return num1 + num2;
    // addition = num1 + num2;
    // printf("The sum of %d and %d is %d\n",num1,num2,addition);
}

int sub(int num1, int num2)
{
    // int a,b;
    // printf("enter the num1:\n");
    // scanf("%d",&num1);
    // printf("Enter the num2\n");
    // scanf("%d",&num2);
    return num1 - num2;
    // subtraction = num1 - num2;
    // printf("The subtraction of %d and %d is %d\n",num1,num2,subtraction);
}

int mult(int num1,int num2)
{
    // int a,b;
    // printf("enter the num1:\n");
    // scanf("%d",&a);
    // printf("Enter the num2\n");
    // scanf("%d",&b);
    return num1 * num2;
    // multiplication = num1 * num2;
    // printf("The multiplication of %d and %d is %d\n",num1,num2,multiplication);
}

int div(int num1, int num2)
{
  
    // printf("enter the num1:\n");
    // scanf("%d",&a);
    // printf("Enter the num2\n");
    // scanf("%d",&b);
    return (num1 / num2);
}