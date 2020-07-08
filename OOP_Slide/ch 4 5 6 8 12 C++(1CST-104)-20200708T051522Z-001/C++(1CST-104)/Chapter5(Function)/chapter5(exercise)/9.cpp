#include<iostream.h>
#include<conio.h>

struct Timee{
	int hr,min,sec;	
	};

Timee swap(Timee&,Timee&);

Timee swap(Timee& s1,Timee& s2,Timee& temp)
{	
      temp= s1;
      s1 = s2;
      s2 = temp;
}

int main()
{
	
	Timee t1,t2,temp;
	
	
	cout<<"Enter first time-interval in hours:";cin>>t1.hr;
	cout<<"Enter first time-interval in  minutes:";cin>>t1.min;
	cout<<"Enter first time-interval in seconds:";cin>>t1.sec;
	
	cout<<endl<<endl;
	
	cout<<"Enter second time-interval in hours:";cin>>t2.hr;
	cout<<"Enter second time-interval in  minutes:";cin>>t2.min;
	cout<<"Enter second time-interval in seconds:";cin>>t2.sec;
     
    cout<<endl<<endl;
    
	swap(t1,t2,temp);
    cout<<"First time-interval becomes="<<t1.hr<<":"<<t1.min<<":"<<t1.sec<<endl;
    cout<<"Second Time-interval becomes="<<t2.hr<<":"<<t2.min<<":"<<t2.sec<<endl;
    
return 0;
}