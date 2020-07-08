#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	if (num%2==0)
	cout<<"\nIt is an even number.";
	else
	cout<<"\nIt is an odd number.";
	getch();
}