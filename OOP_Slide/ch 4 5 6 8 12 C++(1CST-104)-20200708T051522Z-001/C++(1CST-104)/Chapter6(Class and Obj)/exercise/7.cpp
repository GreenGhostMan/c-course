#include<iostream.h>
#include<conio.h>
class angle{
      
	  private:
	     int deg;
		 float min;
		 char dir;
		 
	 public:
	   void input()
	   {
   		cout<<"Enter your direction(Degrees and minutes):";
   		   cin>>deg>>min;
   		cout<<"Enter your direction(N,S,E,W):";
		   cin>>dir;
       }
	   
	   void display()
	   {
   	    cout<<deg<<"\xF8 "<<min<<"' "<<dir;	
   	    }
		angle(): deg(0), min(0),dir(0)
		{}
		 
		angle(int d1, float m1, char dir1): deg(d1), min(m1), dir(dir1)
		{} 
		    	 	
};
int main()
{
	char choice;
	angle a2;
	angle a1(179,55.5,'E');
	a1.display();
	cout<<endl;
do{
	a2.input();
	a2.display();
     cout<<"Do again?(y/n):";
       cin>>choice;
}while(choice=='y');
	
	return 0;
}   
