// wap to calculate the marks obtained from five subjects and calculate the marks obtained 

# include <stdio.h>
void main()
{
    float total, account, microprocessor, cProgramming, maths, english;
    printf("Enter the marks in account:\n");
    scanf("%f",&account);

    printf("Enter the marks in microprocessor:\n");
    scanf("%f",&microprocessor);

    printf("Enter the marks in cProgramming:\n");
    scanf("%f",&cProgramming);

    printf("Enter the marks in maths:\n");
    scanf("%f",&maths);

    printf("Enter the marks in english:\n");
    scanf("%f",&english);

    total = (account + microprocessor + cProgramming + maths + english) / 5 ;

    printf("The total marks is %f\n",total);
    
    if (total >=80 && total <=100)
    {
        printf("You got %f ,You got distinction\n",total);
    }
    else if (total >=60 && total <=79)
    {
        printf("you got %f which is considered first division",total);
    }
    else if (total >=40 && total <= 60)
    {
        printf("you got %f, You just passed consider working harder\n",total);
    }
    else
    {
        printf("you got %f, you failed",total);
    }

}