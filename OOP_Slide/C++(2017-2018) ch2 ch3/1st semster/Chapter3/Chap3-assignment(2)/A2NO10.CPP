#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	double sum=0;
	int count=0;
	for (int i=5; i<=50; i+=5)
	{
		sum += i;
		count++;
	}
	cout<<"The average of the successive integers is: "<<sum/count;
	getch();
}