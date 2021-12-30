// program that takes input in celsius and convert to fahreneit

#include <stdio.h>
int main(){
    float celsius, fahreneit;
    printf("Enter the temperature in celsius: \n");
    scanf("%f",&celsius);
    fahreneit = celsius * 9/5 + 32;
    printf("The temperature in fahreneit is: %f\n",fahreneit);
    return 0;
}