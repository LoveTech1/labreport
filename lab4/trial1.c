
# include <stdio.h>
int main()
{
    int i=0,length;
    char subjectname[5][20]={
	    "ScienceArray",
	    "MathArray",
	    "EnglishArray",
	    "NextArray",
	    "NextArray"
	};
//int subjectmarks[5]={45,55,65,50,60};
int subjectmarks[5]={0,0,0,0,0};
clrscr();
for(i=0;i<5;++i) {
	scanf("%d",&subjectmarks[i]);
}

for(i=0;i<5;++i){
	printf("%s:",subjectname[i]);
	printf("%d\n",subjectmarks[i]);
}
getch();


return 0;
    return 0;
}