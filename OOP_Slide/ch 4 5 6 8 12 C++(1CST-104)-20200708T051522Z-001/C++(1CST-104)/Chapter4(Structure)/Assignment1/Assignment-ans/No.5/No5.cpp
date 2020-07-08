#include <iostream.h>

enum mer {AM,PM};

struct timee{
	int hour;
	int min;
	int sec;
	mer m1;
};

int main()
{
	timee t1;
	char z, m;
	cout<<"Enter time value: ";
	cin>>t1.hour>>z>>t1.min>>z>>t1.sec;
	cout<<"\nEnter meridium (a or p): ";
	cin>>m;
	
	if (m == 'a')
 	t1.m1 = AM;
 	
 	if (m == 'p')
 	t1.m1 = PM; 
 	
 	if (t1.m1 == 0)
 	
 	{	
	 	if (t1.hour < 10)
 		cout<<"0"<<t1.hour<<":";
 	
 		else
 		cout<<t1.hour<<":";
 	
 		if (t1.min < 10)
 		cout<<"0"<<t1.min<<":";
 	
 		else
 		cout<<t1.min<<":";
 	
 		if (t1.sec < 10)
 		cout<<"0"<<t1.sec;
 	
 		else
 		cout<<t1.sec;
 	
 		cout<<"AM"<<endl;
 	}
 	
 	if (t1.m1 == 1)
 	
 	{	
 		cout<<t1.hour+12<<":";
	 
 		if (t1.min < 10)
 		cout<<"0"<<t1.min<<":";
 	
 		else
 		cout<<t1.min<<":";
	 
 		if (t1.sec < 10)
 		cout<<"0"<<t1.sec;
 	
 		else
 		cout<<t1.sec;
 	
 		cout<<"PM"<<endl;
 	}
 	
	return 0;
}