/*
wap to create a structure with real and imaginery as members. Make structure variables to perform complex 
number addtion and mulitplication using user define function
*/

# include <stdio.h>
float addoperation(void);
float muloperation(void);
struct addMul{
    float imag;
    float real;
};
int main()
{
    addoperation();
    muloperation();
    return 0;
}
float addoperation()
{
    struct addMul num1,num2,add;
    printf("Enter first real and imaginery numbers:\n");
    scanf("%f %f",&num1.real,&num1.imag);
    printf("Enter second real and imaginer numberes:\n");
    scanf("%f %f",&num2.real,&num2.imag);
    add.real = num1.real + num2.real;
    add.imag = num1.imag + num2.imag;
    printf("Output: %0.2f + i %0.2f\n",add.real,add.imag);
}
float muloperation()
{
    struct addMul num1,num2,add;
    printf("Enter first real and imaginery numbers for multiplication:\n");
    scanf("%f %f",&num1.real,&num1.imag);
    printf("Enter second real and imaginery numberes for multiplication:\n");
    scanf("%f %f",&num2.real,&num2.imag);
    add.real = num1.real * num2.real;
    add.imag = num1.imag * num2.imag;
    printf("output: %0.2f + %0.2f i\n",add.real,add.imag);
} 