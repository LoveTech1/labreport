// arguement and return 

//     AY       RY
//     AN       RN

#include <stdio.h>
int sum();
int sub();
int mult();
int div();
int main()
{
    int total,num1,num2,pass1,pass2,pass3,pass4;
    char ch;
    printf("Enter + for addition:\n");
    printf("Enter - for subtraction:\n");
    printf("Enter * for multiplication:\n");
    printf("Enter / for division:\n");
    scanf("%c",&ch);
    printf("----------------------\n");
    switch(ch)
    {
        case '+':
            pass1 = sum();
            printf("The addition is %d\n",pass1);
            break;

        case '-':
            pass2 = sub();
            printf("The subtraction is %d\n",pass2);
            break;

        case '*':
            pass3 = mult();
            printf("The multiplication is %d\n",pass3);
            break;
        
        case '/':
            pass4 = div();
            printf("The division is %d\n",pass4);
            break;
    }
    return 0;
}


int sum()
{
    int add = 4 + 5;
    return add;
}

int sub()
{
    int subtract = 4 - 5;
    return subtract;
}

int mult()
{
    int multiply = 5 * 4;
    return multiply;
}

int div()
{
    int division = 10 / 5;
    return division;
}