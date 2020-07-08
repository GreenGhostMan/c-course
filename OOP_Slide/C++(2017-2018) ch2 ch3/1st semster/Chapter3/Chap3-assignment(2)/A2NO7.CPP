#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	int sum=0;
	for (int i=1; i<=100; i++)
	{
		sum += i;
	}
	cout<<"The sum of the successive integers is: "<<sum;
	getch();
}