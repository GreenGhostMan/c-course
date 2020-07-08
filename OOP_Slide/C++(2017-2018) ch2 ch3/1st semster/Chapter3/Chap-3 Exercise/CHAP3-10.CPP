#include<iostream.h>
#include<conio.h>
void main()
{
   clrscr();
   int year;
   float iamount,famount,interest;
   cout<<"Enter initial amount ";
   cin>>iamount;
   cout<<"Enter final amount ";
   cin>>famount;
   cout<<"Enter interest rate ";
   cin>>interest;
   while(iamount<famount)
   {
      year++;
      iamount=iamount+(iamount*interest/100);
      }

      getch();
      }