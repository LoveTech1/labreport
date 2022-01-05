// wap to determine the character

# include <stdio.h>
void main()
{
    char c;
    printf("Enter character:\n");
    scanf("%c",&c);
    (c>=65 && c=<90) ? printf("It is capital letter\n"):
    (c>=97 && c<=122)? printf("The entered character is in small letter\n") :
    (c>=48 && c=<57))? printf("The numbers are between 0 to 9\n"):
    ((c>=0 && c=<47) || (c>=58 && c=<64) || (c>=91 && c=<96) || (c>=123 && c=<127))?
    printf("These are special characters.\n"):
    printf("Invalid character.\n");


}