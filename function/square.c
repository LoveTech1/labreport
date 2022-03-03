// program that finds the square and cube of the numbers

# include <stdio.h>
int cube(int);
int square(int);
int main()
{
    int num,squa,cub;
    printf("Enter the num:\n");
    scanf("%d",&num);
    cub = cube(num);
    squa = square(num);
    printf("The square of the given number is %d\n",squa);
    printf("The cube of the given number is %d\n",cub);
    return 0;
}
int cube(int b)
{
    return b * b * b;
}

int square(int a)
{
    return a*a;
    //printf("The square is %d\n",square);
}