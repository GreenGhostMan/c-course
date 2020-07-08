#include<iostream.h>
#include<conio.h>
struct date 
{
  int day,month,year;	
};

int main()
{
	date d;
	
	cout<<"Enter day,month,year:";
	cin>>d.day>>d.month>>d.year;
	cout<<endl;
	
	cout<<d.day<<"/"<<d.month<<"/"<<d.year<<endl;
	
	
	return 0;
}
