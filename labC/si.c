// program to calculate the simple interest and amount

# include <stdio.h>
int main(){
    double principal, time, rate, simpleInterest, amount; // declaring the double value to different variable used
    printf("Enter the principal: \n");
    scanf("%lf",&principal);        // takes principal value
    printf("Enter time: \n");
    scanf("%lf",&time);             // takes time as double
    printf("Enter rate: \n");
    scanf("%lf",&rate);             // takes rate as double
    simpleInterest = (principal * time * rate) / 100 ;
    amount = principal + simpleInterest;
    printf("The simple interest is : %lf\n",simpleInterest);
    printf("The amount is : %lf\n",amount);
    return 0;
}