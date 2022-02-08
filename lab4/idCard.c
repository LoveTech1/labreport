// that displays the information in the form of id

# include <stdio.h>
void main()
{
    char name[20];
    int studentId[20];
    int dob[20];
    long int mobileNo[20];
    char bloodGroup[20];

    printf("Enter the name:\n");
    scanf("%s",name);
    printf("The entered name is %s\n",name);

    printf("Enter the student Id:\n");
    scanf("%d",&studentId);
    printf("The entered student is %d",studentId);

    printf("Enter dob:\n");
    scanf("%d",&dob);
    printf("The dob is %d\n",dob);

    printf("Enter mobileNo");
    scanf("%lu",&mobileNo);
    printf("The entered mobile no is %lu",mobileNo);

    printf("Enter the bloodGroup:\n");
    scanf("%s",&bloodGroup);
    printf("your blood group is %s\n",bloodGroup);


    printf("Id card\n");
    printf("|name :       %s........................|\n",name);
    printf("|student Id:  %d........................|\n",studentId);
    printf("|dob:         %d/.......................|\n",dob);
    printf("|mobile no:   %lu.......................|\n",mobileNo);
    printf("|blood group: %s........................|\n",bloodGroup);
    
    
}