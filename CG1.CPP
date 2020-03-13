/*Sunil (Nalanda,Bihar) & co......C++*/
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#define max 100
int main(void)
{

   int d = DETECT, m;
   initgraph(&d, &m, "c:\\tc\\bgi");
   line(0,0,150,150);
   circle(getmaxx()/2,getmaxy()/2,50);
   rectangle(400,20,600,120);
   ellipse(500,400,0,360,100,50);
   arc(100,400,0,180,100);
   getch();
   closegraph();
   return 0;
}

