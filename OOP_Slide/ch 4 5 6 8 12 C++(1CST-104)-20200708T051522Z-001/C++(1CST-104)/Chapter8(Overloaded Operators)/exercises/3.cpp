#include<iostream>

using namespace std;

class Timee
{
	private:
		int hr,min,sec,integer;
		float tm;
    public:
	      Timee(): hr(0), min(0), sec(0){ }
		  Timee(int hr1,int min1, int sec1 ): hr(hr1), min(min1), sec(sec1){ }
		  
		  void gettime()
		  {
		     cout<<"Enter the time zone : ";
			 cin>>hr>>min>>sec;    
		  }
		  
		  void showtime()
		  {
		  	cout<<"Total Time ="<<hr<<"/"<<min<<"/"<<sec;
		   }
		   
		   Timee operator +(Timee);
		   Timee operator -(Timee);
		   Timee operator *(Timee);
		     
	/*   	void multiply()
	   	{
	   	   cout<<"Enter an integer to multiply : ";
		   cin>>interger;
		   
		   sec = sec * interger;
		   if(sec >= 60)
		   {
			 sec = sec % 60;
			 min+= sec/60;
			}	
		    
		    min = min * integer;
		    if( min>=60)
		    {
		      min = min % 60;
			  hr += hr/60;	
		    }
		    
		    hr = hr *interger; 
		    
		} */
};

Timee Timee :: operator + (Timee t2)
{
  int totalhr = hr + t2.hr;
  int totalmin = min + t2.min;
  int totalsec = sec + t2.sec;
  
  if(totalsec >= 60)
  {
  	totalsec = totalsec % 60;
  	totalmin+= totalsec / 60;
   }
 
   if(totalmin >= 60)
  {
  	totalmin = totalsec % 60;
  	totalhr+= totalsec / 60;
  }

  return Timee(totalhr,totalmin,totalsec);
  
}

Timee Timee :: operator - (Timee t2)
{
   int totalhr,totalmin,totalsec; 
  
  if(t2.sec > sec)
  {
  	totalsec = sec - t2.sec;
  }
  
   else
     {
	   totalsec = sec - t2.sec;
	 }

   
   
   if(t2.min > min)
  {
  	totalmin = min - t2.min;
  }
  
    else
     {
	   totalmin = min - t2.min;
	 }

      if(t2.hr > hr)
  {
  	totalhr = hr - t2.hr;
  }
  
 else
     {
	   totalhr = hr - t2.hr;
	 }
      
    return Timee(totalhr,totalmin,totalsec);
}

Timee Timee :: operator * (float n)
{
  	float s = sec * n ;
  	float m = min * n ; 
  	float h = hr * n;
	  
	  return  Timee(s,m,h); 
}



int main()
{
	Timee t1,t2,t3;
	t1.gettime();
	t2.gettime();
    int choice,i;
  
	cout<<"Enter 1 to add, 2 to subtract, 3 to multiply : ";
	   cin>>choice;
	   
	if( choice == 1)   
	{
    	t3 = t1 + t2;
    	t3.showtime();
    }
    
    else if( choice == 2 )
    {
       t3 = t1  - t2;
       t2.showtime();
	   	}
	else if( choice == 3)
     {
      cout<<"Enter an integer : ";
      cin>>i;
      t3 = t1 * i;
      t3.showtime();
	 }	


 return 0;
}

















