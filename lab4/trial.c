// program that prints out the triangle

# include <stdio.h>
# include <math.h>
int main()
{
    float a,b,c;
    float areaForScalene, perimeter,semiPerimeter,area;
    printf("Enter the first side of the triangle:\n");
    scanf("%f",&a);
    printf("Enter the second side of the triangle:\n");
    scanf("%f",&b);
    printf("Enter the third side of the triangle:\n");
    scanf("%f",&c);
    if (a < (b+c) || b < (a+c) || c < (b+c)) // this makes the triangle existent
    {
        if ((a && b && c)> 0) // this makes the side of triangle positive
        {
            
            if (a == b && b == c)
            {
                printf("It is an equilateral triangle\n");
                area = (sqrt(3) / 4) * a * a;
                perimeter = 3 * a;
                printf("The area of equilateral triangle is %f\n",area);
                printf("The perimter of the equilateral triangle is %f",perimeter);
            }
            else if (a == b || b == c || c == a )
            {
                printf("It is an isosceles triangle.\n");
                area = (b*sqrt((4*a*a)-(b*b))) / 4 ;
                perimeter = 2*a + b;
                printf("The area of isosceles triangle is %f\n",area);
                printf("The perimeter of isosceles triangle is %f\n",perimeter);
            }
            
            else if (a !=b && b!=c && c!=a)
            {
                printf("It is scalane triangle\n");
                semiPerimeter = (a + b + c) / 2;
                area = (semiPerimeter * (semiPerimeter - a) * (semiPerimeter - b) * (semiPerimeter - c));
                areaForScalene = sqrt(area);
                perimeter = a + b + c;
                printf("The area of scalene triangle is %f\n",areaForScalene);
                printf("The perimeter of scalene triangle is %f\n",perimeter);
            }
            else {
                printf("It is right angled triangle.\n");
                perimeter = a + b + sqrt(a*a + b* b);
                area = (a * b ) / 2;
                printf("The area of the right angled triangle is %f\n",perimeter);
                printf("The perimeter of the right angled triangle is %f\n",area);
            }
        }
        else 
        {
            printf("Please enter the positive side of triangle:\n");
        }

    }
    else {
        printf("The given side doesn't make up a triangle\n");
    }
    return 0;
}