# include <stdio.h>
# include <string.h>
int main()
{
    FILE *fp;
    char c;
    fp = fopen("example.txt","w"); // created for writing a file
    printf("This is the random text\n");
    fclose(fp);
    return 0;
}