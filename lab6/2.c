// wap to find the largest among three numbers using user defined function

# include <stdio.h>
void largest(void);
int main()
{
    // int arr[3];
    // int i;
    largest();
    return 0;
}

void largest()
{
    int arr[3];
    int large;
    int i;
    for(i=0;i<3;i++)
    {
        printf("Enter the number :\n");
        scanf("%d", &arr[i]); 
    }

    large = arr[0];
    //printf("I am working\n");
    for(i=0;i<3;i++)
    {
        if(large < arr[i])
        {
            large = arr[i];
        }
    }
    printf("The largest number is %d\n",large);
}


