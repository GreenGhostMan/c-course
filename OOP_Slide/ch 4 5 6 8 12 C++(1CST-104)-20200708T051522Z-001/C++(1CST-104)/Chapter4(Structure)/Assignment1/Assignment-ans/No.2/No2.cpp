#include <iostream.h>
#include<conio.h>

struct date
{
	int day;
	int month;
	int year;
};

struct employee
{
	int num;
	float comp;
	date d1;
};

int main( )
{
	employee em[5];
	
	for(int a=0; a<5; a++)
	{
		cout<<"Enter your number:";cin>>em[a].num;
		cout<<"Enter your compensation:";cin>>em[a].comp;
		cout<<"Enter your starting date(day,month,year):";cin>>em[a].d1.day>>em[a].d1.month>>em[a].d1.year;
		cout<<endl<<endl;
			
     }
     
     for(int j=0; j<5; j++)
     {
     	cout<<"Number:"<<em[j].num<<",";
     	cout<<"Compensation:"<<em[j].comp<<","
     	cout<<"Date:"<<em[j].d1.day<<"/"<<em[j].d1.month<<"/"<<em[j].d1.year;
         cout<<endl<<endl; 
	 }
	
	return 0;	
}