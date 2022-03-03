// wap that swaps the two numbers

# include <stdio.h>
//int swap(*int,*int);
int main()
{
    int a, b;
    printf("Enter the number 1:\n");
    scanf("%d",&a);
    printf("enter the second number 2:\n");
    scanf("%d",&b);
    printf("Before swapping:");
    printf("a = %d b = %d\n",a,b);
    swap(&a,&b);
    printf("After swapping a = %d b = %d\n",a,b);
    return 0;
}

int swap(int *c, int *d)
{
    int e;
    e = *c;
    *c = *d;
    *d = e;
}