// wap to calculate the marks obtained from five subjects and calculate the marks obtained 

# include <stdio.h>
void main()
{
    float total, account, microprocessor, cProgramming, maths, english,percentage;
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

    total = (account + microprocessor + cProgramming + maths + english);

    printf("The total marks is %f\n",total);
    percentage = total / 5;
    
    if (percentage >=80.00 && percentage <=100.0)
    {
        printf("You got %f ,You got distinction\n",percentage);
    }
    else if (percentage >=60.00 && percentage <=79.00)
    {
        printf("you got %f which is considered first division\n",percentage);
    }
    else if (percentage >=40.00 && percentage <= 60.00)
    {
        printf("you got %f, You just passed consider working harder\n",percentage);
    }
    else
    {
        printf("you got %f, you failed\n",percentage);
    }

}