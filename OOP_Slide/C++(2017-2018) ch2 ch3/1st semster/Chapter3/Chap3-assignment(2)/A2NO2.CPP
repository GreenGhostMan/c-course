#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	int marks;
	cout<<"Please enter an exam marks: ";
	cin>>marks;
	if (marks >= 40)
	cout<<"The exam result passes.";
	else
	cout<<"The exam result fails.";
	getch();
}