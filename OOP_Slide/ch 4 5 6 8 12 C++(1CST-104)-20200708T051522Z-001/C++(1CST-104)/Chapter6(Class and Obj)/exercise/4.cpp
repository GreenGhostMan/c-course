#include<iostream.h>

class employee{
	private:
	   int num;
	   float com;
	   
	 public:
	    void getdata()
		{
			cout<<"Enter your ID number:";
			  cin>>num;
		    cout<<"Enter your compensation:"; 
              cin>>com;	  		
		      cout<<endl;
		} 
		void display()
		{
			cout<<num<<",$"<<com<<endl;
		} 
};

int main()
{
	employee e1,e2,e3;
	e1.getdata();
	e2.getdata();
	e3.getdata();
	
	cout<<"Employee 1 ="<< e1.display();
    cout<<"Employee 2 ="<< e2.display();
	cout<<"Employee 3 ="<< e3.display();	

	return 0;
}
