#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	int a;
	int b;
	cout<<"Please enter a number:";
	cin>>a;
	cout<<"Please enter a number:";
	cin>>b;
	if (a>b)
	cout<<"Maximum number is "<<a<<" and minimum number is "<<b;
	else
	cout<<"Maximum number is "<<b<<" and minimum number is "<<a;
	getch();
}