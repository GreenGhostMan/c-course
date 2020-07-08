#include<iostream.h>
#include<conio.h>
void main()
{
       clrscr();
       int inches;
       int i;
       int y;
       int f;
       int a1;
       int a2;
       cout<< " Enter inches:  ";
       cin>>inches;
       a1=(inches% 12);
       y=(a1 % 3 ) ;
       a2=(inches % 12);
       f=(a2 / 2);
       i=(inches / 16);
       cout<< " Equivalent in yard,feet and inches = "<<y<<"-yards,"<<f<<"-feet,"<<i<<"-inches";
       getch();
       }