#include <iostream.h>
#include <conio.h>
#include <iomanip.h>

void main()
{
	clrscr();
	int num;
	for (int i=1; i<10001; i++)
	{
		num = i*i;
		cout<<setw(7)<<num;
	}
	getch();
}