// wap to ask the coordinate of center of the circle and radius from the user and draw a circle
#include <graphics.h>
#include <stdio.h>
int main()
{
    int gd = DETECT, gm;
    int xcor,ycor,radius;
    // initilizing the graphic driver and graphic mode 
    initgraph(&gd,&gm," ");
    // asks the user for the coordinate and the radius of the circle
    // printf("Enter the coordinate of the circle:\n");
    // scanf("%d %d",&xcor,&ycor);
    // printf("Enter the radius of the circle:\n");
    // scanf("%d",radius);
    // gotoxy(xcor,ycor);
    circle(250,100,50);  
    delay(5000);
    closegraph();
}