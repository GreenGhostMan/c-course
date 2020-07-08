#include<iostream.h>
#include<conio.h>
void main()
{
       int shillings;
       float decpounds;
       int pounds;
       float decfracsh;
       int pence;
       float decfracpe;
       cout<< " Enter decimal pounds: ";
       cin>>decpounds;
       pounds=decpounds;
       decfracsh=(decpounds-pounds)*20;
       shillings=decfracsh;
       decfracpe=(decfracsh-shillings)*12;
       pence=decfracpe;
       cout<< "Equivalent in old notation =\x9c"<<pounds<<"."<<shillings<<"."<<pence<<".";
       getch();
       }