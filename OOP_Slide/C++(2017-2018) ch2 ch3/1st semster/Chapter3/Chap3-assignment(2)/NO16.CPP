#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	unsigned long fact=1;
	cout<<"0! = 1";
	for(int i=1;i<=20;i++)
	{
		fact=1;
		cout<<"\n"<<i<<"! = ";
		for(int a=1;a<=i;a++)
		{
			fact *= a;
			cout<<a<<"*";
		}
		cout<<"\b ="<<fact;
	}
	getch();
}