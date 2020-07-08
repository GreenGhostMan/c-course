#include<iostream.h>
#include<conio.h>
void main()
{
     clrscr();
     float BP,FF,GD,JY,USD;
     cout<<"Enter an amount in dollars" ;
     cin>>USD;
     BP=USD/1.487;
     FF=USD/0.172;
     GD=USD/0.584;
     JY=USD/0.00955;
     cout<<"The value in BP"<<BP<<endl;
     cout<<"The value in FF"<<FF<<endl;
     cout<<"The value in GD"<<GD<<endl;
     cout<<"The value in JY"<<JY<<endl;
     getch();
     }