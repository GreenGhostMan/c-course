#include<iostream.h>
#include<conio.h>

void func1();
void func2();

int count=1;

int main()
{
	int num,times;

	cout<<"Function 1 or 2:";
	  cin>>num;   
	cout<<"How many times:";
	  cin>>times;
	  
	

  		if(num==1)
  		{
		  	for(int i=1; i<=times; i++)
		  	func1();
		     
        }
		  
		 else if(num==2 )
		 {
 			for(int j=1; j<=times; j++)
 		    func2();
		 } 
  	

 return 0;
}


void func1()
{
	
	cout<<"I have been called "<<count<<"times";
	count++;
	cout<<endl;
}

void func2()
{
	static int count1=1;
	cout<<"I have been called "<<count1<<"times";
    count++;
	cout<<endl;
}