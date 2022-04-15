// programt that runs the 2d array

# include <stdio.h>
int array(int countOdd[] , int n);
int main()
{
    int i,j;
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
    return count;
}


