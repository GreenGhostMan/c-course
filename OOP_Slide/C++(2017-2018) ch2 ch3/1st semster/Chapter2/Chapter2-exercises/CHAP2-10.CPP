#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
	float po,s,pe,decpounds;
	cout<< " Enter pounds: ";
	cin>>po;
	cout<< " Enter shillings: " ;
	cin>>s;
	cout<< " Enter pence:  " ;
	cin>>pe;
	decpounds=po+s/20+pe/240;
	cout<< "Decimal pounds =\x9c"<<setprecision(2)<<decpounds;
	getch();
	}