// wap to to ask three numbers and find out the largest among them

# include <stdio.h>
void main()
{
    int num1, num2, num3;
    printf("Enter first number: \n");   
    scanf("%d",&num1);  
    printf("Enter second number:\n");
    scanf("%d",&num2);
    printf("Enter third number:\n"); 
    scanf("%d",&num3);
    printf("\v");   // for vertical spacing

    (num1>num2 && num1>num3)?printf("The largest number = %d\n",num1):
    (num2>num1 && num2>num3)?printf("Largest number is %d\n",num2):
    (num3>num1 && num3>num1)?printf("The largest number is %d\n",num3):printf("The given numbers are equal\n");
    
}