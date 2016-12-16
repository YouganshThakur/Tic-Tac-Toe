//                        CREATED BY YOUGANSH THAKUR :)
#include<iostream.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdio.h>
struct winline
{
  int a;
  int b;
  int c;
 }w;
void computer();
void draw();
void ps(int x,char ch);
int user();
int bctrx(int);
int bctry(int);
char a[9]={'E','E','E','E','E','E','E','E','E'};
char win='n';
int b[9]={0,0,0,0,0,0,0,0,0};
int ch=0,ctrx,ctry,r;
int bctrx(int x)
{
  int r;
  switch(x)
  {
    case 0:
    case 3:
    case 6:r=ctrx-60;
	   break;
    case 1:
    case 4:
    case 7:r=ctrx;
	    break;
    case 2:
    case 5:
    case 8:r=ctrx+60;
	   break;
   }
  return r;
 }
int bctry(int y)
{
  int r;
  switch(y)
  {
    case 0:
    case 1:
    case 2:r=ctry-60;
	   break;
    case 3:
    case 4:
    case 5:r=ctry;
	    break;
    case 6:
    case 7:
    case 8:r=ctry+60;
	   break;
   }
  return r;
 }
int user()
{
  start1:
  ch=getch()-48;
  if(ch==65)
  {
    return 0;
   }
  else
  {
    if(a[ch]=='E')
    {
      ps(ch,'c');
      outtextxy(bctrx(ch),bctry(ch),"X");
      a[ch]='x';
      for(int i=0;i<=6;i=i+3)
      {
	if(a[i]=='x'&&a[i+1]=='x'&&a[i+2]=='x')
	{
	  win='u';
	  w.a=i;
	  w.b=i+1;
	  w.c=i+2;
	  return 1;
	 }
       }
      for(int j=0;j<3;j++)
      {
	if(a[j]=='x'&&a[j+3]=='x'&&a[j+6]=='x')
	{
	  win='u';
	  w.a=j;
	  w.b=j+3;
	  w.c=j+6;
	  return 1;
	 }
       }
      return 1;
     }
    else
    {
      goto start1;
     }
   }
 }
void computer()
{
  int x,y,z,p,q,e,f,g,h;
  if(a[4]=='E')
  {
    ps(4,'u');
    outtextxy(bctrx(4),bctry(4),"O");
    a[4]='o';
   }
  else
  {
    for(int e=0;e<=6;e=e+3)
    {
      if(a[e]=='o'&&a[e+2]=='o'&&a[e+1]=='E')
      {
	ps(e+1,'u');
	outtextxy(bctrx(e+1),bctry(e+1),"O");
	a[e+1]='o';
	win='c';
	w.a=e;
	w.b=e+1;
	w.c=e+2;
	goto end;
       }
     }
    for(f=0;f<=2;f++)
    {
      if(a[f]=='o'&&a[f+6]=='o'&&a[f+3]=='E')
      {
	ps(f+3,'u');
	outtextxy(bctrx(f+3),bctry(f+3),"O");
	a[f+3]='o';
	win='c';
	w.a=f;
	w.b=f+3;
	w.c=f+6;
	goto end;
       }
     }
    for(g=0;g<=6;g=g+3)
    {
      if(a[g+2]=='o'&&a[g+1]=='o'&&a[g]=='E')
      {
	ps(g,'u');
	outtextxy(bctrx(g),bctry(g),"O");
	a[g]='o';
	win='c';
	w.a=g;
	w.b=g+1;
	w.c=g+2;
	goto end;
       }
      if(a[g]=='o'&&a[g+1]=='o'&&a[g+2]=='E')
      {
	ps(g+2,'u');
	outtextxy(bctrx(g+2),bctry(g+2),"O");
	a[g+2]='o';
	win='c';
	w.a=g;
	w.b=g+1;
	w.c=g+2;
	goto end;
       }
     }
    for(h=0;h<=2;h++)
    {
      if(a[h]=='o'&&a[h+3]=='o'&&a[h+6]=='E')
      {
	ps(h+6,'u');
	outtextxy(bctrx(h+6),bctry(h+6),"O");
	a[h+6]='o';
	win='c';
	w.a=h;
	w.b=h+3;
	w.c=h+6;
	goto end;
       }
      if(a[h+3]=='o'&&a[h+6]=='o'&&a[h]=='E')
      {
	ps(h,'u');
	outtextxy(bctrx(h),bctry(h),"O");
	a[h]='o';
	win='c';
	w.a=h;
	w.b=h+3;
	w.c=h+6;
	goto end;
       }
      }
     if(a[0]=='o'&&a[4]=='o'&&a[8]=='E')
     {
	ps(8,'u');
	outtextxy(bctrx(8),bctry(8),"O");
	a[8]='o';
	win='c';
	w.a=0;
	w.b=4;
	w.c=8;
	goto end;
       }
     if(a[4]=='o'&&a[8]=='o'&&a[0]=='E')
     {
       ps(0,'u');
       outtextxy(bctrx(0),bctry(0),"O");
       a[0]='o';
       win='c';
       w.a=0;
       w.b=4;
       w.c=8;
       goto end;
      }
     if(a[2]=='o'&&a[4]=='o'&&a[6]=='E')
     {
       ps(6,'u');
       outtextxy(bctrx(6),bctry(6),"O");
       a[6]='o';
       win='c';
       w.a=2;
       w.b=4;
       w.c=6;
       goto end;
      }
     if(a[4]=='o'&&a[6]=='o'&&a[2]=='E')
     {
       ps(2,'u');
       outtextxy(bctrx(2),bctry(2),"O");
       a[2]='o';
       win='c';
       w.a=2;
       w.b=4;
       w.c=6;
       goto end;
      }
     //checking when can't win
     if(a[0]=='x'&&a[4]=='x'&&a[8]=='E')
     {
       ps(8,'u');
       outtextxy(bctrx(8),bctry(8),"O");
       a[8]='o';
       goto end;
      }
     if(a[8]=='x'&&a[4]=='x'&&a[0]=='E')
     {
	ps(0,'u');
	outtextxy(bctrx(0),bctry(0),"O");
	a[0]='o';
	goto end;
       }
     if(a[2]=='x'&&a[4]=='x'&&a[6]=='E')
     {
	ps(6,'u');
	outtextxy(bctrx(6),bctry(6),"O");
	a[6]='o';
	goto end;
       }
     if(a[4]=='x'&&a[6]=='x'&&a[2]=='E')
     {
	ps(2,'u');
	outtextxy(bctrx(2),bctry(2),"O");
	a[2]='o';
	goto end;
       }
     for(x=0;x<=6;x=x+3)
     {

      if(a[x]=='x'&&a[x+2]=='x'&&a[x+1]=='E')
      {
	 ps(x+1,'u');
	outtextxy(bctrx(x+1),bctry(x+1),"O");
	a[x+1]='o';
	goto end;
       }
     }
    for(y=0;y<=2;y++)
    {
      if(a[y]=='x'&&a[y+6]=='x'&&a[y+3]=='E')
      {
   ps(y+3,'u');
	outtextxy(bctrx(y+3),bctry(y+3),"O");
	a[y+3]='o';
	goto end;
       }
     }
    for(p=0;p<=6;p=p+3)
    {
      if(a[p]=='x'&&a[p+1]=='x'&&a[p+2]=='E')
      {
   ps(p+2,'u');
	outtextxy(bctrx(p+2),bctry(p+2),"O");
	a[p+2]='o';
	goto end;
       }
      if(a[p+2]=='x'&&a[p+1]=='x'&&a[p]=='E')
      {
   ps(p,'u');
	outtextxy(bctrx(p),bctry(p),"O");
	a[p]='o';
	goto end;
       }
     }
    for(q=0;q<=2;q++)
    {
      if(a[q]=='x'&&a[q+3]=='x'&&a[q+6]=='E')
      {
	 ps(q+6,'u');
	outtextxy(bctrx(q+6),bctry(q+6),"O");
	a[q+6]='o';
	goto end;
       }
      if(a[q+6]=='x'&&a[q+3]=='x'&&a[q]=='E')
      {
	 ps(q,'u');
	outtextxy(bctrx(q),bctry(q),"O");
	a[q]='o';
	goto end;
       }
     }
     do
     {
     r=rand()%10;
     if(a[r]=='E')
     {
       ps(r,'u');
	outtextxy(bctrx(r),bctry(r),"O");
	a[r]='o';
	goto end;
      }
     }while(a[r]!='E');
     /*for(z=0;z<=8;z++)
    {
      if(a[z]=='E')
      {
	 ps(z,'u');
	outtextxy(bctrx(z),bctry(z),"o");
	a[z]='o';
	goto end;
       }
     }  */
    end:
   }
 }

void draw()
{
  char s[50],name[50];
  cleardevice();
  rectangle(0,0,getmaxx(),getmaxy());
  rectangle(10,10,getmaxx()-10,getmaxy()-10);
  settextstyle(1,0,7);
  setcolor(4);
  outtextxy(164,50,"TIC");
  setcolor(2);
  outtextxy(264,50,"TAC");
  setcolor(1);
  outtextxy(381,50,"TOE");
  setcolor(15);
  line(ctrx-30,ctry-90,ctrx-30,ctry+90);
  line(ctrx+30,ctry-90,ctrx+30,ctry+90);
  line(ctrx-90,ctry-30,ctrx+90,ctry-30);
  line(ctrx-90,ctry+30,ctrx+90,ctry+30);
  setcolor(8);
  settextstyle(0,0,2);
  for(int i=0;i<9;i++)
  {

    sprintf(s,"%d",i);
    outtextxy(bctrx(i),bctry(i),s);
   }
 }
 void ps(int x,char ch)//ps=pieslice
 {
   setcolor(0);
   pieslice(bctrx(x),bctry(x),0,360,26);
   if(ch=='c')
   {
     setcolor(2);
    }
   else
   {
     setcolor(1);
    }
  }

void main()
{
  clrscr();
  char temp;
  int f=1,i;
  int gm,gd=DETECT;

  initgraph(&gd,&gm,"c:\\turboc3\\bgi");
  ctrx=getmaxx()/2;
  ctry=getmaxy()/2;

  start:
  //a[9]={'E','E','E','E','E','E','E','E','E'};

  for(int k=0;k<9;k++)
  {
    a[k]='E';
   }
  draw();
    setcolor(5);
  outtextxy(15,15,"Press Q To Exit");

  win='n';
  f=1;

  settextstyle(0,0,2);
  setfillstyle(1,0);
  for(i=0;i<5&&f==1&&win=='n';i++)
  {

    f=user();
    //computer();
    delay(200);
    if(win=='n'&&i!=4)
    {
    //f=user();
    computer();
    delay(200);
    }
    else
    {
      goto end;
     }
   }
  end:
  if(f==1)
  { settextstyle(0,0,5);
    setcolor(4);
    if(win!='n')
    line(bctrx(w.a)+7,bctry(w.a)+7,bctrx(w.c)+7,bctry(w.c)+7);
    if(win=='u')
    {
      outtextxy(ctrx-180,ctry+140,"YOU WIN!!!");
     }
    else
    {
      if(win=='c')
      {
	outtextxy(ctrx-180,ctry+140,"YOU LOSS!!!");
       }
       else//when loop breaks because of i.
      {
	outtextxy(ctrx-220,ctry+140,"MATCH TIED!!!");
       }

     }
   }

   temp=getch();
   switch(temp)
   {
   case 'q': closegraph();
	     break;
   default:goto start;
   }
 }