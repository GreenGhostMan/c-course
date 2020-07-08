#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	int sum=0;
	for (int i=2; i<=200; i+=2)
	{
		sum += i;
	}
	cout<<"The sum of the successive integers is: "<<sum;
	getch();
}