#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
#include<dos.h>

int xc=150,yc=200,r=60;
int x[15],y[15];

void drawcircles()
{
setcolor(WHITE);
}

void main()
{
double angle=0,theta;
int i,a;
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");

while(!kbhit())
{

theta=M_PI*angle/180;
cleardevice();
drawcircles();
line(150,200,130,400);
line(150,200,170,400);

for(i=0;i<20;i++)
{
theta=M_PI*angle/180;
x[i]=xc+r*cos(theta);
y[i]=yc+r*sin(theta);
angle+=90;
line(xc,yc,x[i],y[i]);
}

angle+=5;

for(i=0;i<20;i++)
{
theta=M_PI*angle/180;
x[i]=xc+r*cos(theta);
y[i]=yc+r*sin(theta);
angle+=90;
line(xc,yc,x[i],y[i]);
}
angle+=5;
delay(50);
}
}