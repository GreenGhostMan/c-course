#include<iostream.h>
#include<conio.h>

struct timee
{
	int hr,min,sec;
};

int main()
{
	timee time1;
	
	cout<<"Enter time in hours:";cin>>time1.hr;
	cout<<"Enter time in  minutes:";cin>>time1.min;
	cout<<"Enter time in seconds:";cin>>time1.sec;
	
	long totalsecs=time1.hr*3600+time1.min*60+time1.sec;
	
	
	cout<<"Total seconds="<<totalsecs<<endl;
	return 0;
}
