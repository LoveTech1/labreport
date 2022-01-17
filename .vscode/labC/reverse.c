// wap to reverse the number

# include <stdio.h>
# include <string.h>
int main()
{           
    unsigned int number, remainder, reverse = 0;
    printf("Enter the number:\n");
    scanf("%u",&number);
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number/=10;

        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number/=10;

        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number/=10;

        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number/=10;

        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number/=10;

       
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number/=10;

    printf("The number is %u\n",reverse);

    return 0;
}