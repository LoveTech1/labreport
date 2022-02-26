// c program that counts the number of words, number of sentence and number of lines in the paragraph.

# include <stdio.h>
# include <string.h>

int main()
{
    int count=0,words=0,sentence=0,len,i,line=1;
    char string[100];
    printf("Enter the string:\n");
    gets(string);

    len = strlen(string);
    for(i=0;string[i]!= '\0';i++)
    {
        if(string[i] == '\t' || string[i] == ' ' || string[i] == '.' || string[i] == '\n')
        {
            words++;
        }   
        if(string[i] == "\n")
        {
            line++;
        }
        if(string[i] == '.' || string[i] == '?' || string[i] == '!')
        {
            sentence++;
        }
    }
    printf("The number of words is %d\n",words);
    printf("The number of line is %d\n",line);
    printf("The number of sentence is %d\n",sentence);

    return 0;
}