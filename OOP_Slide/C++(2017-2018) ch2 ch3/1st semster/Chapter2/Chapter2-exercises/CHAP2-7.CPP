#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int ctemp;
    cout<<"Enter temperature in Celsius";
    cin>>ctemp;
    int ftemp=(ctemp*9)/5+2;
	cout<<"Equivalent in Fahrenheit"<<ftemp<<'\n';
	getch();
	}