#include<iostream.h>
#include<conio.h>
void main()
{
   clrscr();
   char ch;
   unsigned long total=0;
   cout<<"Enter up to six digit ";
   while((ch=getche())!='\r')
   {total=total*10+ch-48;}
   cout<<endl<<total;
   getch();
   }