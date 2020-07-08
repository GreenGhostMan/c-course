#include<iostream.h>
#include<conio.h>
class tollBooth
{
    private:
	      unsigned int car;
		  double amount;
		  
    public:
	  tollBooth(): car(0), amount(0)
	  {}
	  
	  void paying_car()
	  {
  		amount=+0.50;
	    car++;
		}
		
		void nopaycar()
		{
		 car++;
		}
		
		void display()
		{
			cout<<"Total cars= "<<car;
			cout<<"Total cash= "<<amount;
		}		  	
};

int main()
{
	tollBooth t1;
	char ch;
	cout<<"Press 'Y' to count cars.";
do{	
	   ch=getche();
    if(ch=='1')
	    t1.paying_car();
	if(ch=='0')
	    t1.nopaycar();
      }while(ch!=27);
      
	   t1.display();

return 0;	    
}