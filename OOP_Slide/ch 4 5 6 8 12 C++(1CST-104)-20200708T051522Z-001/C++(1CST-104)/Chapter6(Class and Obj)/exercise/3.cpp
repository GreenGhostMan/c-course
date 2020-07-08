#include<iostream.h>
#include<conio.h>

class timee
{
    private:
          int hr,min,sec;
          
     public:
	      timee():hr(0), min(0), sec(0)
		  {}     
          
		  timee(int hr1, int min1, int sec1): hr(hr1), min(min1), sec(sec1)
		  {}
		  
		  void display()
		  {
  			cout<<hr<<":"<<min<<":"<<":"<<sec;
		  }
            
		  void add(timee t1,timee t2)
		  {
  		    sec = t1.sec + t2.sec;
            if(sec>59)
			{
			 min+=sec/60;
			 sec=sec%60;
		   }
		    min = t1.min+ t2.min;	
			if(min>59)
			{
			   hr+=min/60;
			   min=min%60;
			}		   
		    hr = t1.hr + t2.hr;
		  }
          	
};
int main()
{
	timee t3;
	timee t1(1,15,30);
	timee t2(1,45,30);
    t3.add(t1,t2);
	t3.display();
	
 return 0;	
}