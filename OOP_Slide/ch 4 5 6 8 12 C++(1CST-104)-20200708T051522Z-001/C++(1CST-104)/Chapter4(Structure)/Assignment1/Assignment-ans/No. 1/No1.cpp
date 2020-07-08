#include <iostream.h>

struct Distance
{
	int feet;
	float inch;
};

int main()
{
	Distance d[5];
	for (int i=0; i<5; i++)
	{
		cout<<"\nEnter feet: ";
		cin>>d[i].feet;
		cout<<"\nEnter inches: ";
		cin>>d[i].inch;
	}
	
		for (int i=0; i<5; i++)
	{
		cout<<"\nValue for distance "<<i+1<<" is: ";
		cout<<d[i].feet<<"\'"<<d[i].inch<<"\""<<endl;
	}
	
	return 0;
}