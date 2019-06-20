#include <graphics.h>   //program for translation
#include <conio.h>
#include <iostream.h>

int main()
{
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"");
  int x,y,m,n,a,b,x1,y1,m1,n1;
  cout<<"enter the coordinates of rectangle \nenter left bottom(x1,y1) ";
  cin>>x>>y;
  cout<<"\nenter right top(x2,y2) ";
  cin>>m>>n;
  y=getmaxy()-y;
  n=getmaxy()-n;
  cleardevice();
  line(0,getmaxy(),0,10);
  line(0,getmaxy(),getmaxx()-10,getmaxy());
  rectangle(x,y,m,n);
  getch();
  cleardevice();
  cout<<"Enter translation coordinates\nenter X ";
  cin>>a;
  cout<<"Enter Y ";
  cin>>b;
  x1=x+a;
  m1=m+a;
  y1=y-b;
  n1=n-b;
  cleardevice();
  line(0,getmaxy(),0,10);
  line(0,getmaxy(),getmaxx()-10,getmaxy());
  outtextxy(x,y+10,"before translation");
  rectangle(x,y,m,n);
  outtextxy(x1,y1+10,"after translation");
  rectangle(x1,y1,m1,n1);
  getch();
  closegraph();
  return 0;
}
