// wap to find the largest among three numbers using user defined function

# include <stdio.h>
int largest(int, int,int);
int main()
{
    int arr[3];
    int num1,num2,num3,large;
    // for(i=0;i<3;i++)
    // {
    //     printf("Enter the number :\n");
    //     scanf("%d",&arr[i]); 
    // }
    // printf("Enter the num1:\n");
    // scanf("%d",&num1);
    // printf("Enter the num2:\n");
    // scanf("%d",&num2);
    // printf("Enter the num3\n");
    // scanf("%d",&num3);
    largest(6,8,3);
    return 0;
}

int largest(int num1,int num2,int num3)
{
    // int arr[3];
    // int large;
    // int temp=0,i;

    // for(i=0;i<3;i++)
    // {
    //     if(arr[i] > arr[i+1])
    //     {
    //         temp = arr[i];
    //         arr[i] = arr[i+1];
    //         arr[i+1] = temp;
    //     }
    // }
    
   
    // printf("The largest number is %d\n",arr[i+1]);

    //int num1,num2,num3;
    (num1 > num2 && num1 > num3)?
    printf("%d is greater\n",num1):
    (num2 > num3 && num2> num1)?
    printf("%d is greater\n",num2)?
    (num3 > num1 && num3 > num2):
    printf("%d is greater\n",num3):
    printf("The value is same:\n");
  
    
}


