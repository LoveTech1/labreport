// Id card
#include <stdio.h>

int main()
{
    char name[20], blood_group[5];
    int id, roll_no, year, mn, day;
    char phn_no[10];

    printf("Enter Your name: ");
    gets(name);

    printf("Enter your ID number: ");
    scanf("%d", &id);

    printf("Enter your Roll number: ");
    scanf("%d", &roll_no);

    printf("!!!!!! Please Enter your Date of Birth !!!!!!\n");

    printf("Year: ");
    scanf("%d", &year);

    printf("Month: ");
    scanf("%d", &mn);

    printf("Day: ");
    scanf("%d", &day);

    printf("Enter your Mobile number: ");
    scanf("%s",phn_no);

    printf("Enter your Blood Group: ");
    scanf("%s",blood_group);

    printf("Your ID card is READY!!!! \n");
    printf("__________________________________________\n");
    printf("|    Asian College of Higher Studies     |\n");
    printf("| Name:   %s \t\t",name);printf("_________|\n");
    printf("| ID number: %d \t\t|",id);
    printf("\t||\n");
    printf("| Roll no: %d \t",roll_no);printf("\t\t|");
    printf("(Photo)||\n");
    printf("| DOB: %d / ",year);
    printf("%d / ",mn);
    printf("%d",day);
    printf("\t\t");printf("|_______||\n");
    printf("| Phone no: %s",phn_no);
    printf("\t\t _______ |\n");
    printf("| Blood Group: %s ",blood_group);
    printf("\t\t  (sign) |\n");
    printf("|________________________________________|\n");
    

    return 0;
}