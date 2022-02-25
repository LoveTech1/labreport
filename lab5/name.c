// c program that takes and prints the first name and last name
# include <stdio.h>
# include <string.h>
int main()
{
    char fName[20];
    char lName[20];
    char fullName;
    printf("Enter the first name:\n");
    gets(fName);
    printf("Enter you last name:\n");
    gets(lName);
    strcat(fName," "); // this is for adding space after first name
    strcat(fName,lName);
    puts(fName);


    return 0;
}