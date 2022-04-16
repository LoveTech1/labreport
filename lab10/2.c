// wap program to copy content from one file source.txt to another file "destination.txt"
# include <stdio.h>
int main()
{
    FILE *s,*d;
    // for opening the file
    s = fopen("source.txt","r");
    d = fopen("destination.txt","a+");

    if(s == NULL)
    {
        printf("Error opening file\n");
    }
    printf("File opened successfully\n");

    char ch[30];
    char ch1[30];
    if(fgets(ch,30,s)!=NULL)
    {
        puts(ch);
    }
    // printf("%s",ch);
    fputs(ch,d);

    fclose(s);
    fclose(d);
    return 0;
}