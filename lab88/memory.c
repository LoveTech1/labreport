// write a program to ask no of student in a class to calculate average marks and for a subject using
// dynamic memory allocation.

#include <stdio.h>
#include <stdlib.h>
struct student
{
    char student[20];
    float mp,eng,c,math,acc;
    float average;
};
int main()
{
    int *ptr,marks;
    int n, i,sum=0;
    ptr=&marks;
    // stud = (struct student *)malloc(sizeof(struct student));
    printf("How man0y students average do you want? ");
    scanf("%d", &n);
    ptr = malloc(sizeof(int)*n);
    printf("Enter the marks of mp:\n");
    
    for (i = 0; i < n; i++)
    {
        printf("Enter the marks of mp:\n");
        scanf("%d",(ptr+i));
    }

    for (i = 0; i < n; i++)
    {
        printf("Marks:%d:\n",*(ptr+i));
        sum+=*(ptr+i);
    }
    
    free(ptr);


    
    /*if (stud == NULL)
    {
        printf("Out of memory \n");
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            printf("Enter student name:\n");
            scanf("%s", stud->student);
            printf("Enter the marks of mp:\n");
            scanf("%f",&stud->mp);
        }
    }
    //stud = (struct student *)malloc(sizeof(struct student));
    */

}
