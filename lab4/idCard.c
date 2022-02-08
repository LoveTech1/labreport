// wap to design the identity card

# include <stdio.h>
void main()
{
    unsigned long int mobNum, id,rollno;
    char name[20]; 
    char bloodGroup[20],dob[20];
    int n = 1,i;

    // this is wihout using array

    printf("Enter your name:\n"); 
    fgets(name,20,stdin); 

    printf("Enter you dob:\n");
    fgets(dob,20,stdin);

    // this line takes until it encounters new line
    // scanf("%[^\n]*%c",&name); 
    for(i=0; i<n; i++)
    {
        printf("Enter the blood group:\n");
        scanf("%s",&bloodGroup[i]);
    }
    printf("Enter the mobile number:\n");
    scanf("%lu",&mobNum);

    printf("Enter the rollno.\n");
    scanf("%lu",&rollno);

    /*
    printf("your name is %s\n",name);
    printf("your mobile number is %lu\n",mobNum);
    printf("Your roll no is %lu\n",rollno);
    printf("your blood group is: %s\n",bloodGroup);
    */
    printf("| \tAsian College Of Higher Studies\t " "|\n");
    printf("|                                     " "|\n");
    printf("|" "Name: %s                            " " |\n",name);
    printf("|" "Rollno: %lu                          " "|\n",rollno);
    printf("|" "Blood Group:                         " "|\n",bloodGroup);
    printf("|" "DOB: %s                              " "|\n",dob);
    printf("|" "mobile no: %lu                       " "|\n",mobNum);


}