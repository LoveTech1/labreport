# include "marks.h"
# include "mak.h"
# include <stdio.h>
int main()
{
    float average,percentage;
    average = marks(30.00,30.5,50.8);
    printf("The average is %f\n",average);
    percentage = mark(60.5,40.8,80.7);
    printf("The percentage is %f\n",percentage);
    return 0;
}