// programt that runs the 2d array

# include <stdio.h>
int array(int countOdd[] , int n);
int main()
{
    int i,j;
    // int arr[][30] = {{2,3},{4,5}};
    // for(i=0;i<2;i++)
    // {
    //     for(j=0;j<2;j++)
    //     {
    //         printf("%d \t",arr[i][j]);
    //     }
    //     printf("\n");
    // }

    // int marks[2][3] = {{40,51,60},{89,34,87}};
    // for(i=0;i<2;i++)
    // {
    //     for(j=0;j<2;j++)
    //     {
    //         if(marks[i][j] % 2 != 0)
    //         {
    //             printf("%d is odd\n",marks[i][j]);
    //         }
    //     }
    // }
    int ar[] = {4,5,6,7,8};
    printf("%d",array(ar,5));
    return 0;
}

int arr(int countOdd[],int n)
{
    int i;
    int count = 0;
    for(i=0;i<n;i++)
    {
        if(countOdd[i] % 2 !=0)
        {
            count++;
        }
    }
}


