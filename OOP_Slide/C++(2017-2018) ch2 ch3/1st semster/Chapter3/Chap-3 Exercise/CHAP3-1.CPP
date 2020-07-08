#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
  clrscr();
  int num;
  cout<<"Enter your number ";
  cin>>num;
  for(int i=1;i<=200;i++)
  {
      cout<<setw(5)<<num*i;
      if (i%10==0)
      {
	 cout<<"\n";
	 }
      }
      getch();
      }
