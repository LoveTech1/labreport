// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int i;
    int acc,math,cpgrm,mp,eng;
    float percentage,total=0;
    //char sub[10] = {"Acc","Math", "cpgrm","eng","percentage"};
    int  marks[5];
    
    for (i=0;i<=5;i++)
    {
        printf("Enter the marks:\n");
        //scanf("%f",&marks[i]);
        scanf("%d",&marks[i]);
    }
    for(i=0;i<4;i++)
    {
        total = total + marks[i];
    }
    percentage = total / 5;
    // printf("You got %lf",percentage);
    if (total >=80 && total <=100)
    {
        printf("You got %lf ,You got distinction\n",total);
    }
    else if (total >=60 && total <=79)
    {
        printf("you got %lf which is considered first division",total);
    }
    else if (total >=40 && total <= 60)
    {
        printf("you got %lf, You just passed consider working harder\n",total);
    }
    else
    {
        printf("you got %lf, you failed",total);
    }
   
    
    return 0;
}