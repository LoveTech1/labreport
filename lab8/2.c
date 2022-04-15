// wap to create a structure student with members name,rollno and marks. Marks should hold mark of
// 5 sujects. Create structure variable to store 3 students information and display them in the screen.

#include <stdio.h>

int main()
{
    struct marks
    {
        float mp;
        float english;
        float Cprogramming;
        float Account;
        float maths;
    };

    struct student
    {
        char name[20];
        int rollno;
        struct marks subjects;
    };
    struct student bibek = {};
    struct student abhaya = {};
    struct student rojan = {};
    printf("\t\t\t\t------First Student Details------ \n");

    printf("Enter name:\n");
    // scanf("%s", bibek.name);
    scanf("%[^\n]s",bibek.name);

    printf("Enter rollno: ");
    scanf("%d", &bibek.rollno);

    printf("Enter marks of mp:\n");
    scanf("%f", &bibek.subjects.mp);

    printf("Enter marks of english:\n");
    scanf("%f", &bibek.subjects.english);

    printf("Enter marks of account:\n");
    scanf("%f", &bibek.subjects.Account);

    printf("Enter marks of maths:\n");
    scanf("%f", &bibek.subjects.maths);

    printf("Enter marks of cProgramming:\n");
    scanf("%f", &bibek.subjects.Cprogramming);

    printf("Name = %s | Rollno = %d | mp = %f | eng = %f | acc = %f | maths = %f | c = %f |\n", bibek.name, bibek.rollno, bibek.subjects.mp, bibek.subjects.english, bibek.subjects.Account, bibek.subjects.maths, bibek.subjects.Cprogramming);

    printf("\v");
    printf("\t\t\t\t------Second Student Details------ \n");

    printf("Enter name: \n");
    // scanf("%s", bibek.name);
    scanf("%[^\n]s",abhaya.name);
    // gets(abhaya.name);
    printf("Enter rollno: \n");
    scanf("%d", &abhaya.rollno);

    printf("Enter marks of mp:\n");
    scanf("%f", &abhaya.subjects.mp);

    printf("Enter marks of english:\n");
    scanf("%f", &abhaya.subjects.english);

    printf("Enter marks of account:\n");
    scanf("%f", &abhaya.subjects.Account);

    printf("Enter marks of maths:\n");
    scanf("%f", &abhaya.subjects.maths);

    printf("Enter marks of cProgramming:\n");
    scanf("%f", &abhaya.subjects.Cprogramming);

    printf("Name = %s | Rollno = %d | mp = %f | eng = %f | acc = %f | maths = %f | c = %f |", abhaya.name, abhaya.rollno, abhaya.subjects.mp, abhaya.subjects.english, abhaya.subjects.Account, abhaya.subjects.maths, abhaya.subjects.Cprogramming);

    printf("\v");
    printf("\t\t\t\t------Third Student Details------ \n");

    printf("Enter name:\n");
    // scanf("%s", bibek.name);
    scanf("%[^\n]s",rojan.name);

    printf("Enter rollno: ");
    scanf("%d", &rojan.rollno);

    printf("Enter marks of mp:\n");
    scanf("%f", &rojan.subjects.mp);

    printf("Enter marks of english:\n");
    scanf("%f", &rojan.subjects.english);

    printf("Enter marks of account:\n");
    scanf("%f", &rojan.subjects.Account);

    printf("Enter marks of maths:\n");
    scanf("%f", &rojan.subjects.maths);

    printf("Enter marks of cProgramming:\n");
    scanf("%f", &rojan.subjects.Cprogramming);

    printf("Name = %s | Rollno = %d | mp = %f | eng = %f | acc = %f | maths = %f | c = %f |", rojan.name, rojan.rollno, rojan.subjects.mp, rojan.subjects.english, rojan.subjects.Account, rojan.subjects.maths, rojan.subjects.Cprogramming);
    return 0;
}