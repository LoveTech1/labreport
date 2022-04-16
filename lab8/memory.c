// write a program to ask no of student in a class to calculate average marks and for a subject using
// dynamic memory allocation.

#include <stdio.h>
#include <stdlib.h>
struct student
{
    char student[20];
    float mp;
};
int main()
{
    int *ptr,marks;
    float average;
    int n, i,sum=0;
    ptr=&marks;
    // stud = (struct student *)malloc(sizeof(struct student));
    printf("How man0y students average do you want? ");
    scanf("%d", &n);
    ptr = malloc(sizeof(int)*n);
    // printf("Enter the marks of mp:\n");
    
    for (i = 0; i < n; i++)
    {
        printf("Enter the marks of mp:\n");
        scanf("%d",(ptr+i));
    }

    for (i = 0; i < n; i++)
    {
        printf("Marks:%d ",*(ptr+i));
        sum+=*(ptr+i);
    }
    average = sum / 2;
    printf("The average is %f\n",average);
    free(ptr);

}
