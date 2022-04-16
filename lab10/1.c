// wap to read integer from the user until user choices "no". After reading data from user, 
// write all odd numbers in odd.txt and all even numbers in even.txt.

# include <stdio.h>
# include <string.h>
int main()
{

    FILE *even,*odd;
    int number;
    char user[4];
    even = fopen("even.txt","a");
    odd = fopen("odd.txt","a");
    if(even || odd == NULL)
    {
        printf("Error in running the file\n");
    }
    do{  
        printf("Enter the number:\n");
        scanf("%d",&number);
        if(number %2 == 0)
        {
            fprintf(even,"%d",number);
        }
        else
        {
            fprintf(odd,"%d",number);
        }
        printf("Do you want to continue?\n");
        scanf("%s",user);
    }while(strcmp(user,"no")!=0);
    if(even != NULL & odd!=NULL)
    {
        printf("file closed successfully\n");
    }
    fclose(even);
    fclose(odd);
    return 0;
}