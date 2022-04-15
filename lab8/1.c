// wap to create the a structure with real and imaginery as members.Initialize structure variables 
// with any values and display them

#include <stdio.h>
#include <stdlib.h>

struct num{
    float real;
    float imag;
};
int main()
{
    struct num number1,number2,difference;
    printf("Enter the first real and imaginery number: ");
    scanf("%f %f",&number1.real,&number1.imag);

    printf("Enter the second real and imaginery number: ");
    scanf("%f %f",&number2.real,&number2.imag);

    difference.real = number1.real - number2.real;
    difference.imag = number1.imag - number2.imag; 

    printf("difference = %0.2f - i %0.2f\n",difference.real,difference.imag);
    return 0;
}