// wap to sort an array using pointer and find the second largest number in the array
#include <stdio.h>

void secondLargest(int *);
int main()
{
    int array[5] = {34,11,2,56,9};
    secondLargest(array);
    return 0;
}
void secondLargest(int *p)
{
    int i, j,temp;
    for (i = 0; i < 5; i++)
    {
        for (j = i+1; j < 5; j++)
        {
            if (*(p + i) > *(p + j))
            {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }
    // for(i=0;i<5;i++)
    // {
    //     printf("sorted numbers: %d",*(p+i));
    // }
    printf("The second largest number is %d\n", *(p + 1));
}
