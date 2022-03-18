# include <stdio.h>
int main()
{
    int position,temp,i,num;
    int arr[10];

    printf("Enter the elements of the array:\n");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d", &arr[i]);
    }
     // storing the first index value to a temporary variable
    // printf("Enter the position in the array:\n");
    // scanf("%d\n",&position);

    temp = arr[0];
    for(i=0;i<num;i++)
    {
        arr[i] = arr[1 + i];
    }
    arr[num-1] = temp;

    printf("AFter shifiting the array:\n");
    for(i=0;i<num;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}