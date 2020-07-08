#include<iostream.h>

struct Distance{
	int feet;
	int inches;
};

Distance larger(Distance, Distance);
void display(Distance);
	
	
	int main()
{
	Distance d1,d2,d3;
	cout<<"Enter first distance:";cin>>d1.feet>>d1.inches;
	cout<<"Enter second distance:";cin>>d2.feet>>d2.inches;


   d3 = larger(d1,d2);
   cout<<endl;
   display(d3);
   cout<<endl;
return 0;
}
  
    void display(Distance dd)
	{
		
		cout<<"The larger distance is "<<dd.feet<<"feet and "<<dd.inches<<"inches";
	}  



 Distance larger(Distance dd1,Distance dd2)
 {
 	//Distance dd3;
	 if(dd1.feet>dd2.feet)
 	  return dd1;
 	if(dd1.feet<dd2.feet)
	  return dd2;
	  
	 if(dd1.feet == dd2.feet)
	 {
 		if(dd1.inches>dd2.inches)
 		 return dd1;
        else 
		  return dd2;
    }    
 }