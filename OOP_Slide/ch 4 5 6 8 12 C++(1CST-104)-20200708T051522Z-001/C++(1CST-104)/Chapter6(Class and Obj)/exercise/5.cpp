#include<iostream.h>


class date{
 
      private:
	    int month,day,year;
	  public:
	     void getdate()
		 {
 			char ch;
			 cout<<"Enter date(dd/mm/yy):";
 			  cin>>day>>ch>>month>>ch>>year;
 		}
		 void display()
		 {
 			char ch;
			 cout<<"Time format:"<<day<<ch<<month<<ch<<year;
			 cout<<endl;
 		}		
};

int main()
{
	date d;
	d.getdate();
	d.display();
	
	return 0;
	
}