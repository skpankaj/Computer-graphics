/*Sunil (Nalanda,Bihar) & co......C++*/
#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#define ROUND(a) ((int)(a+0.5))
void lineDDA(int xa,int ya,int xb, int yb)
{
int dx=xb-xa,dy=yb-ya,steps,k;
float xincrem,yincrem,x=xa,y=ya;
if(abs(dx)>abs(dy))
steps=abs(dx);
else
steps=abs(dy);
xincrem=dx/(float)steps;
yincrem=dy/(float)steps;
putpixel(ROUND(x),ROUND(y),15);
for(k=0;k<steps;k++)
{
x=x+xincrem;
y=y+yincrem;
putpixel(ROUND(x),ROUND(y),15);
}
}
void main()
{
int a,b,c,d;
int dr = DETECT, m;
initgraph(&dr, &m, "c:\\tc\\bgi");
printf("enter value");
scanf("%d%d%d%d",&a,&b,&c,&d);
lineDDA(a,b,c,d);
getch();
closegraph();
}