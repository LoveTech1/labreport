// arguement yes and return yes

//     AY       RY
//     AN       RN

#include <stdio.h>
int sum(int,int);
int sub(int,int);
int mult(int,int);
int div(int,int);
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
            pass1 = sum(4,5);
            printf("The addition is %d\n",pass1);
            break;

        case '-':
            pass2 = sub(5,4);
            printf("The subtraction is %d\n",pass2);
            break;

        case '*':
            pass3 = mult(5,4);
            printf("The multiplication is %d\n",pass3);
            break;
        
        case '/':
            pass4 = div(10,5);
            printf("The division is %d\n",pass4);
            break;
    }
    return 0;
}


int sum(int a, int b)
{
    return a + b;
}

int sub(int a,int b)
{
    return a - b;
}

int mult(int a,int b)
{
    return a * b;
}

int div(int a, int b)
{
    return a / b;
}