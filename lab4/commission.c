// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    float commission,sales;
    printf("Enter the amount of sales you made:\n");
    scanf("%f",&sales);
    if (sales >= 11000)
    {
        commission = sales * 0.1; // 10% if sales is greater than 11000
        printf("%f is the commission amount, you got 10%% \n",commission);
    }
    else if ( sales>=8000 && sales<11000)
    {
        // 5% if sales is  than 11000 and greater than 8000
        commission = sales * 0.05; 
        printf("%f is the commission amount,you got 5%% \n",commission);
    }
    else if (sales>=5000 && sales<=8000)
    {
        commission = sales * 0.03;
        printf("%f is the commission amount, you got 3%% \n",commission);
    }
    else{
        commission = sales * 0.01;
        printf("%f is the commission amount,you got 1%% \n",commission);
    }
    
    return 0;
}