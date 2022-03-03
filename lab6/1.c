
# include <stdio.h>
void sum(void);
void sub(void);
void mult(void);
void div(void);
void input(void);
int main()
{
    int total,num1,num2;
    char ch;
    printf("Enter the operator:\n");
    scanf("%c",&ch);
    switch(ch)
    {
        case '+':
            sum();
            // printf("The sum of %d and %d is %d\n",num1,num2,(num1+num2));
            break;

        case '-':
            input();
            sub();
            break;

        case '*':
            mult();
            break;
        
        case '/':
            div();
            break;
    }
    return 0;
}
void input()
{
    int num1,num2,addition;
    printf("enter the num1:\n");
    scanf("%d",&num1);
    printf("Enter the num2\n");
    scanf("%d",&num2);     
}

void sum()
{
    int num1,num2,addition;
    // printf("enter the num1:\n");
    // scanf("%d",&num1);
    // printf("Enter the num2\n");
    // scanf("%d",&num2);
    input();
    addition = num1 + num2;
    printf("The sum of %d and %d is %d\n",num1,num2,addition);
}

void sub()
{
    int num1,num2,subtraction;
    printf("enter the num1:\n");
    scanf("%d",&num1);
    printf("Enter the num2\n");
    scanf("%d",&num2);
    subtraction = num1 - num2;
    printf("The sum of %d and %d is %d\n",num1,num2,subtraction);
}

void mult()
{
    int num1,num2,multiplication;
    printf("enter the num1:\n");
    scanf("%d",&num1);
    printf("Enter the num2\n");
    scanf("%d",&num2);
    multiplication = num1 * num2;
    printf("The sum of %d and %d is %d\n",num1,num2,multiplication);
}

void div()
{
    int num1,num2,division;
    printf("enter the num1:\n");
    scanf("%d",&num1);
    printf("Enter the num2\n");
    scanf("%d",&num2);
    division = num1 / num2;
    printf("The sum of %d and %d is %d\n",num1,num2,division);
}