#include<iostream.h>
#include<conio.h>
void main()
{
       clrscr();
       float Ctemp;
       float Ftemp;
       int one;
       cout<< " Type oneconvert Fahrenheit to Celsius,\n 2 to convert Celsius to Fahrenheit";
       cin>> one;
       if(one==1)
      {cout<< " Enter temperature in Fahrenheit: ";
       cin>>Ftemp;
       Ctemp=(Ftemp-32)*5/9;
       cout<< " In Celsius that's "<<Ctemp;}
       else if (one==2)
      {cout<< "Enter temperature in Celsius: ";
       cin>>Ctemp;
       Ftemp=Ctemp*9/5+32;
       cout<< "In Fahrenheit that's "<<Ftemp;}
	getch();
	  }