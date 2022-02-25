# include <stdio.h>
int main()
{
    char name[20],bloodGroup[4];
    int year,month,day;
    char num[20];
    /*
    unsigned int rollno[20],mobileno[20];
    char bloodGroup[5];
    char dob[20];
    */

    printf("Enter the student name:\n");
    gets(name);

    printf("Enter the year:\n");
    scanf("%d",&year);

    printf("Enter the month:\n");
    scanf("%d",&month);

    printf("Enter day:\n");
    scanf("%d",&day);

    printf("Enter the number:\n");
    scanf("%s",&num);

    printf("Enter the blood group:\n");
    scanf("%s",&bloodGroup);

    printf("___________________________");
    printf("|\t Asian College Of higher Studies\t");
    printf("|name: %d                           \t",name);
    printf("|");
    printf("|");
    printf("|");
    return 0;
}