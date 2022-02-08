// wap to calculate the salesman commission on the basis of his daily sales

#include <stdio.h>
int main()
{
    float totalSales, com1,com2,com3,com4,sales ;
    printf("HOw much salesman made on a day:\n");
    scanf("%f",&sales);
    if (sales < 5000)
    {
        com1 = (0.01 * sales);
        printf("You get 1 pecent commision which is: %f",com1);
    }
    else if (sales < 8000 && sales >= 5000)
    {
        com2 = (0.03 * sales);
        printf("you get 3 percent commsion which is: %f",com2);

    }
    else if(sales < 11000 && sales >= 8000)
    {
        com3 = (0.05 * sales);
        printf("You get 5 percent commission which is: %f",com3);
    }
    else 
    {
        com4 = (0.1 * sales);
        printf("You get 10 percent commision which is : %f", com4);
    }
    
    return 0;
}