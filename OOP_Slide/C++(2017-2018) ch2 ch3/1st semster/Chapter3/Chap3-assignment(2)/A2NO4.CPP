#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	int a;
	int b;
	int c;
	int num1;
	int num2;
	int num3;
	cout<<"Enter a number:";
	cin>>a;
	cout<<"Enter a number:";
	cin>>b;
	cout<<"Enter a number:";
	cin>>c;
	if (a<b && b<c)
	cout<<a<<"\t"<<b<<"\t"<<c;

	if (a<c && c<b)
	cout<<a<<"\t"<<c<<"\t"<<b;

	if (b<a && a<c)
	cout<<b<<"\t"<<a<<"\t"<<c;

	if (b<c && c<a)
	cout<<b<<"\t"<<c<<"\t"<<a;

	if (c<a && a<b)
	cout<<c<<"\t"<<a<<"\t"<<b;

	if (c<b && b<a)
	cout<<c<<"\t"<<b<<"\t"<<a;

	getch();
}