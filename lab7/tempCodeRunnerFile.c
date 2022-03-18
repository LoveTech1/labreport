# include <stdio.h>
int main()
{
    int temp,i,num;
    int arr[10];

    printf("Enter the elements of the array:\n");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d", &arr[i]);
    }

    temp = arr[0]; // storing the first index value to a temporary variable