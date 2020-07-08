#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	int sum=0;
	for (int i=7; i<=43; i+=4)
	{
		sum += i;
	}
	cout<<"The sum of the successive integers is: "<<sum;
	getch();
}