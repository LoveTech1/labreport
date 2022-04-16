// wap to create a structure mobile with members as brandname, modelno and price.
// create a structure variable and pointer of structure to display values of member variable using both
// (indirection operator and arrow-operator)
# include <stdio.h>
#include <string.h>

struct mobile{
    char brandname[10];
    char modelno[10];
    double price;
    float discount;
};
void display(struct mobile *);

int main()
{   struct mobile e,*p;
    p = &e;
    display(&e);
    return 0;
}

void display(struct mobile *q)
{
    struct mobile m,n, *p;        
    p = &m;
    strcpy(p->brandname,"Nokia");  
    strcpy(p->modelno,"1200");
    p->price=4500; 
    p->discount=0.05;
    printf("%s",m.brandname); 
    printf("\n%s",p->modelno);
    printf("\n%0.3f\n",p->price);
}

