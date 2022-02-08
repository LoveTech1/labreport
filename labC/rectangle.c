// c program to find out area and perimeter

#include <stdio.h>
int main(){
    float l,b, area, perimeter;
    
    printf("Enter length: \n");
    scanf("%f",&l);
    printf("Enter breadth: \n");
    scanf("%f",&b);
    area = l * b;
    perimeter = 2 * (l + b);
    printf("The area of rectangle is %f\n",area);
    printf("The perimeter of the rectangle is %f\n",perimeter);
    return 0;
}