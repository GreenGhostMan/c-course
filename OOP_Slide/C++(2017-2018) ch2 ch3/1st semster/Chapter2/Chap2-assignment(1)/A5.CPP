#include<iostream.h>
#include<conio.h>
void main()
{
     clrscr();
     int y;
     int f;
     int i;
     float a1;
     float a2;
     cout<< " Enter decimal yards " ;
     cin>>a1;
     y=a1;
     a2=(a1-y)*3;
     f=a2;
     i=(a2-f)*12;
     cout<< "Equivalent in yards,feet and inches = "<<y<<"-yards,"<<f<<"-feet,"<<i<<" -inches";
     getch();
     }