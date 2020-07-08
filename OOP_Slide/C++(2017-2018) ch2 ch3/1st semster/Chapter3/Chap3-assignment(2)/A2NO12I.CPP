#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	int r;
	int s;
	int c;
	for (r=1; r<=5; r++)
	{
		for(s=1;s<=5-r;s++)
		{
			cout<<" ";
		}
		for(c=1; c<=r*7/6;c++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
	getch();
}