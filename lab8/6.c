/*
wap to create date struct with members mm, dy, yy and structure employees with members id, name, salary
and enrolldate (Date structure variable)
Initialize desired value to Employee structure variable and display them
*/

# include <stdio.h>
struct date{
    char mm[3];
    char dy[3];
    char yy[5];
};
struct employees{
    int id;
    char name[20];
    unsigned int salary;
    struct date enroll;
};

int main()
{
    struct employees data = {210616 ,"bibek",100000,{"06","20","2001"}};   
    struct employees hari = {20066 ,"hari",200000,{"07","18","2020"}};   
    
    printf("Id\tName\tsalary\tenrolldate\n");
    printf("\v");
    printf("%d\t%s\t%u\t%s-%s-%s\n",data.id,data.name,data.salary,data.enroll.mm,data.enroll.dy,data.enroll.yy);
    printf("%d\t%s\t%u\t%s-%s-%s\n",hari.id,hari.name,hari.salary,hari.enroll.mm,data.enroll.dy,data.enroll.yy);
    return 0;
}