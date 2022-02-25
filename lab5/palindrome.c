// wap to check if the given string is palindrome or not

# include <stdio.h>
# include <string.h>
int main()
{
    int i,len;
    int flag=1;
   // char revString[20];
    char str[20];
    
    printf("Enter the string:\n");
    gets(str);
    len = strlen(str);

    for (i=0;i<len;i++)
    {
        if(str[i] != str[len-1-i] )
        {
            flag = 0; 
            break;
        }
    }
    
    if(flag)
    {
        printf("It is palindrome:\n");
    }
    else {
        printf("It is not palindrome:\n");
    }
    return 0;
}

