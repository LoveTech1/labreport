//  wap program to swap two numbers using pointers
# include <stdio.h>
void swap(int num1,int num2);
int main()
{
    int num1,num2;
    printf("Enter the first number:\n");
    scanf("%d",&num1);
    printf("Enter the second number:\n");
    scanf("%d",&num2);
    printf("Before swapping = %d %d\n",num1,num2);
    swap(num1,num2);
    return 0;
}
void swap(int number1,int number2)
{
    int *p,*q,*t;
    t = &number1;
    q = &number2;
    *p = *q;
    *q = *t;
    printf("After swapping = %d %d\n",*p,*q);
}
