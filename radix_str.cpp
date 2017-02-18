#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
class Queue
{
 public:
 char qu[100][100];
 int front,rear,m,item,n,length[100],big;
 Queue();
 void create();
 void display();
 void process();
 void sort();
};
Queue::Queue()
{
 front=0;
 rear=0;
}
void Queue::create()
{
 cout<<"\nEnter number of elements in the Queue:";
 cin>>n;
 cout<<"\nEnter the elements in Capital Letters:";
 if(front==0)
 {cout<<"\n\t\t\t\tEnter String "<<front+1<<":";
  gets(qu[front]);
  front++;
  rear=front;
 }
 do
 {
  if(rear>=n)
  break;
  for(int i=1;i<n;++i)
  {++rear;
  cout<<"\n\t\t\t\tEnter String "<<i+1<<":";
  gets(qu[i]);
  }
 }while(rear<n);
 for(m=0;m<rear;m++)
 {
   for(int j=0;qu[m][j]!='\0';++j)
   qu[m][j]=toupper(qu[m][j]);
 }
 }
 void Queue::process()
 {
   for(int k=0;k<n;++k)
 {
  for(int i=0;qu[k][i]!='\0';++i);
  length[k]=i;
 }
 big=length[0];
 for(int i=0;i<n;++i)
 {
  if(big<=length[i])
  {
   big=length[i];
  }
 }
 for(i=0;i<n;++i)
 {
   for(int y=0;y<big;++y)
  {
    if(y+1>length[i])
   {
    qu[i][y]='\0';
   }
  }
 }
}
void Queue::sort()
{
 for(int j=big-1;j>=0;--j)
  {
   for(int k=0;k<n;++k)
   {
    for(int i=0;i<n;++i)
    {
     if(qu[i][j]>qu[i+1][j])
     {char temp[100];
      strcpy(temp,qu[i+1]);
      strcpy(qu[i+1],qu[i]);
      strcpy(qu[i],temp);
      delete temp;
     }
    }
   }
  }
}
 void Queue::display()
 {
  int count=1;
  cout<<"\nThe Sorted Queue is:";
  for(m=0;;++m)
  {
   int g=strlen(qu[m]);
   if(g!=0)
   {
    cout<<"\n\t\t\t\tString "<<count<<":";
    for(int j=0;qu[m][j]!='\0';++j)
    {
     cout<<qu[m][j];
     qu[m][j]='\0';
    }
    count++;
    if(count>n)
    break;
    }
   }
  }

 void main()
 { clrscr();

	   gotoxy(12,5);cout<<"ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»";
	  gotoxy(12,6); cout<<"º                                                        º";
	  gotoxy(12,7); cout<<"º                                                        º";
	  gotoxy(12,8); cout<<"º                   W E L C O M E    T O                 º";
	  gotoxy(12,9); cout<<"º                                                        º";
	  gotoxy(12,10);cout<<"º                                                        º";
	  gotoxy(12,11);cout<<"º              ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿            º";
	  gotoxy(12,12);cout<<"º              ³   RADIX SORT FOR STRINGS   ³            º";
	  gotoxy(12,13);cout<<"º              ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ            º";
	  gotoxy(12,14);cout<<"º                                                        º";
	  gotoxy(12,15);cout<<"º                                                        º";
	  gotoxy(12,16);cout<<"º                                                        º";
	  gotoxy(12,17);cout<<"º                                                        º";
	  gotoxy(12,18);cout<<"ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼";
	  gotoxy(28,20);
	  textcolor(WHITE);cprintf("Press any key to continue");
	  getch();
  flushall();
  clrscr();
  Queue z;
  z.create();
  z.process();
  z.sort();
  z.display();
  getch();
 }

