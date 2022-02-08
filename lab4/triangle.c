// wap to calculate area and perimeter of the triangle

# include <stdio.h>
# include <math.h>
int main()
{
    // variable declaration on float cause the numbers can be on fractional value
    float a, b, c,area,perimeter; 
    printf("Enter the side a:\n");
    scanf("%f",&a);

    printf("Enter the side b:\n");
    scanf("%f",&b);

    printf("Enter the side c:\n");
    scanf("%f",&c);

    if(a && b !=0)
    {
        if(a == b )
        {
            printf("Two sides are equal hence, isosceles triangle.\n");
            area = (0.5 * b * c);
            printf("area is %f",area);
            perimeter = 2*a + b;
            printf("Perimetr is %f",perimeter);
        }
        else if (a==b==c)
        {
            printf("It is an equilateral triangle.\n");
            area = (sqrt(3)/ 4 * a * a);
            printf("the area is %f",area);
            perimeter = 3 * a * b * c;
            printf("The perimeter of equi. triangle is %f",perimeter);
        }
        if(c > a && c > b)
        {
            printf("It is an right angled triangle.\n");
            area =  (a * b)/2;
            printf("The area is %f",area);
            perimeter = a + b + sqrt(pow(a,2) + pow(b,2));
            printf("the perimeter is %f",perimeter);
        }
    }
    else{
        printf("Invalid (Not a triangle).\n");
    }
    return 0;
}