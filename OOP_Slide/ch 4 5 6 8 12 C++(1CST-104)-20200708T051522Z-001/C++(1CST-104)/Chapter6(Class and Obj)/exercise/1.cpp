#include<iostream.h>

class Int{
 
         private:
		    int a;
			
		  public:
		     Int():a(0)
			 { }
			 
			 Int(int value): a(value)
			 { }
			 
			 void display()
			 {
 				cout<<a;
 			 }
			  
			  void add(Int i1, Int i2)
			  {
  			     a = i1.a + i2.a;	
  			 }	   
   	
};

int main()
{
	Int i1;
    Int i2(7);
    Int i3(3);
    i1.add(i2,i3);
    i1.display();
    cout<<endl;
}