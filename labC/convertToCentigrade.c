// program that converts fahreneit to centigrade

#include <stdio.h>
int main()
{
    double centigrade, fahreneit;
    printf("Enter the temperature in fahreneit: \n");
    scanf("%lf",&fahreneit);
    centigrade = (5 * (fahreneit - 32)) / 9;
    printf("The temperature in centigrade is : %lf\n",centigrade);
    return 0;
}
