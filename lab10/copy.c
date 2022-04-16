

#include <stdio.h>
int main()
{
    FILE *p,*q;
    p = fopen("source.txt","w");
    q = fopen("destination.txt","w");
    if(p == NULL)
    {
        fprintf("Null value\n");
    }
    else
    {
        while(strcpy(p,q)!=0){
            
        }
    }
    return 0;
}

