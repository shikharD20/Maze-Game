#include <stdlib.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
#include <stdio.h>

void ui()
 {
 int gm=0,gd=0,a,b,c,d,i;
 unsigned char n[40]="Welcome to maze";
 initgraph(&gd,&gm,"C:\\turboc3\\bgi");
 for(a=400,b=0;a>0;a-=50,b++)
 {
  setfillstyle(1,b);
  setcolor(b);
  circle(320,240,a);
  floodfill(320,240,b);
  delay(250);
 }
 setfillstyle(1,15);
 c=getmaxx();
 d=getmaxy();
 bar(50,200,c-50,d-200);
// for(i=0;i<=17;i++)
// {
  settextstyle(7,0,5);
  outtextxy(81,205,n);
 getch();
}
