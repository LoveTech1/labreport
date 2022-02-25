# include <stdio.h>
# include <string.h>
// # include <ctype.h>
int main()
{
    int i,vowel=0,consonant=0;
    int length;
    char str[30];
    printf("Enter the string:\n");
    gets(str);
    length = strlen(str);
    for(i=0;i<length;i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowel++;
        }
        else 
        {
            consonant++;
        }
    }
    printf("vowel = %d\n",vowel);
    printf("consonant = %d\n",consonant);
    return 0;
}
