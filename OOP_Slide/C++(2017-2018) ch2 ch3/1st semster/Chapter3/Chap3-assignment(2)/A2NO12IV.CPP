#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	int r;
	int c;
	for (r=1;r<=5;r++)
	{
	 for (c=1;c<=r;c++)
		cout<<'*';
		cout<<"\n";
	}

	getch();
}