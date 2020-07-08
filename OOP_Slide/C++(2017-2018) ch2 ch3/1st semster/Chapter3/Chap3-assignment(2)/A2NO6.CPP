#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	int num;
	cout<<"Please enter a month(1-12): ";
	cin>>num;
	switch (num)
	{
		case 1: cout<<"The month is January with 31 days.";
			  break;
		case 2: cout<<"The month is February with 28 days.";
			  break;
		case 3: cout<<"The month is March with 31 days.";
			  break;
		case 4: cout<<"The month is April with 30 days.";
			  break;
		case 5: cout<<"The month is May with 31 days.";
			  break;
		case 6: cout<<"The month is June with 30 days.";
			  break;
		case 7: cout<<"The month is July with 31 days.";
			  break;
		case 8: cout<<"The month is August with 31 days.";
			  break;
		case 9: cout<<"The month is September with 30 days.";
			  break;
		case 10: cout<<"The month is October with 31 days.";
			  break;
		case 11: cout<<"The month is November with 30 days.";
			  break;
		case 12: cout<<"The month is December with 31 days.";
			  break;
	}
	getch();
}