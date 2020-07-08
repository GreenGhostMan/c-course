#include<iostream>
using namespace std;

struct Timee{
	
 int hr,min,sec,totalsec,totalsecs1,totalsecs2;	
};


long time_to_secs(Timee);
Timee secs_to_time(long);


int main()
{
	Timee t1,t2;
	int h,m,s;
    int Totalseconds; 
	cout<<"Enter first time-interval in hours:";cin>>t1.hr;
	cout<<"Enter first time-interval in  minutes:";cin>>t1.min;
	cout<<"Enter first time-interval in seconds:";cin>>t1.sec;
	
	cout<<endl<<endl;
	
//	cout<<"Enter second time-interval in hours:";cin>>t2.hr;
//	cout<<"Enter second time-interval in  minutes:";cin>>t2.min;
//	cout<<"Enter second time-interval in seconds:";cin>>t2.sec;
	
    Totalseconds=time_to_secs(t1);
    
	cout<<"Total seconds="<<Totalseconds;
	cout<<endl;
   	
   	secs_to_time(Totalseconds);
   	
    cout<<"Time format of totalseconds="<<h<<":"<<m<<":"<<s;
    cout<<endl;
    
    
return 0;	 
}

Timee time_to_secs(Timee tt1,Timee tt2)
{
  unsigned long totalsec;
   
  int totalsecs1= (tt1.hr*3600)+(tt1.min*60)+tt1.sec;
  int totalsecs2= (tt2.hr*3600)+(tt2.min*60)+tt2.sec;
	
  totalsec= totalsecs1+totalsecs2;
  return totalsec;
     		

}

Timee secs_to_time(long Totalseconds)
{
   int h1,min1,s1;
   Timee t3;
   min1 = Totalseconds/60;
   s1 = Totalseconds%60;
   
   h1 = min1/60;
   min1 = min1%60;
   
   return h1,min1,s1;  
	
}

 
