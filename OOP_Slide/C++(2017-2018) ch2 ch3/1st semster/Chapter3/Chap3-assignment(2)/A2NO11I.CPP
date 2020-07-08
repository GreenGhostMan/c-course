#include <iostream.h>
#include <conio.h>
#include <iomanip.h>

void main()
{
	clrscr();
	for (int i=2; i<=1024; i*=2)
	{
		cout<<setw(5)<<i;
	}
	getch();
}