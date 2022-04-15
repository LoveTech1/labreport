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
    struct student *stud;
    int n, i;
    stud = (struct student *)malloc(sizeof(struct student));
    printf("How many students average do you want? ");
    scanf("%d", &n);
    if (stud == NULL)
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
            printf("Enter the marks of acc:\n");
            scanf("%f",&stud->acc);
            printf("Enter the marks of math:\n");
            scanf("%d",&stud->math);
            printf("Enter the marks of eng:\n");
            scanf("%d",&stud->eng);
            printf("Enter the marks of c:\n");
            scanf("%d",&stud->c);
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%f", stud->acc);
        printf("%f", stud->math);
        printf("%f", stud->eng);
        printf("%f", stud->c);
        printf("%f", stud->mp);
        // printf("%s", stud->);
    }
    return 0;
}
