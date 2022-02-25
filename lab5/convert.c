// convert the lower to upper and upper to lower

# include <stdio.h>
# include <string.h>
int main()
{
    int i,len;
    char str[20];
    char upperCase[20];
    char lowerCase[20];
    printf("Enter the string:\n");  //  b i b e k
    gets(str);
    len = strlen(str);
    /// a = 65 || A = 97 || difference = 32
    for(i=0;i<len;i++)
    {
        //printf("%c\n",str[i]);
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32; // uppercase
        }
        else  
        //if(str[i]>97 && str[i]<=129)
        {
            str[i] = str[i] - 32;
        }
    }
    printf("The uppercase letter is %s\n",str);
    //printf("The lower case is %s\n",lowerCase);

}