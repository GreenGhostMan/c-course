#include<iostream.h>
#include<conio.h>

struct timee
{
	int hr,min,sec;
};

int main()
{
	timee time1,time2;
	
	cout<<"Enter first time-interval in hours:";cin>>time1.hr;
	cout<<"Enter first time-interval in  minutes:";cin>>time1.min;
	cout<<"Enter first time-interval in seconds:";cin>>time1.sec;
	
	cout<<endl<<endl;
	
	cout<<"Enter second time-interval in hours:";cin>>time2.hr;
	cout<<"Enter second time-interval in  minutes:";cin>>time2.min;
	cout<<"Enter second time-interval in seconds:";cin>>time2.sec;
	
    int totalsecs1= (time1.hr*3600)+(time1.min*60)+time1.sec;
	int totalsecs2= (time2.hr*3600)+(time2.min*60)+time2.sec;
	
	 unsigned long totalsec= totalsecs1+totalsecs2;
	
	int Hr,Min,Sec;
	
	Min= totalsec / 60;
	Sec= totalsec % 60;
     
     Hr= Min / 60;
     Min= Min % 60;
     

	 cout<<endl<<endl;
	 cout<<"Total seconds="<<totalsec<<endl;
	 cout<<"The result in format="<<Hr<<":"<<Min<<":"<<Sec<<endl;
	 
	 return 0;  
}
    
	
	
	
	
	
	
	
	
	




