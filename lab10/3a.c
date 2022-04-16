// wap to read name and roll number of 30 students from user and store them in a file. The file
// already exist your program should add now data to the end of file

# include <stdio.h>
int main()
{
    FILE *ptr;
    char name[20];
    int i,rollno;
    ptr = fopen("student.txt","a+");
    if(ptr != NULL)
    {
        printf("file opened successfully\n");
    }
    else
    {
        printf("Error opening the file\n");
        return -1;
    }
    // taking the data of the students
    for(i=0;i<2;i++)
    {
        printf("Enter your name: ");
        scanf("%s",name);
        fprintf(ptr,"%s",name);
        printf("Enter your roll no:\n");
        scanf("%d",&rollno);
        fprintf(ptr,"%d",rollno);
    }
    fclose(ptr);
    return 0;
}
