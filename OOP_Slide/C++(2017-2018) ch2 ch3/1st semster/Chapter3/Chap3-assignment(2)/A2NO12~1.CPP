#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	int r;
	int c;
	int s;
	for (r=1;r<=5;r++)
	{
	   for (s=1;s<=r-1;s++)
	    {
		cout<<" ";
	    }

	   for (c=5;c>=r;c--)
	    {
		cout<<"*";
	    }
		cout<<"\n";
	}
	getch();
}