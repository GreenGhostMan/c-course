#include<iostream.h>
#include<conio.h>

class SN
{
      private:
           static int count;
           int sn;
           
     
	   public:
	      SN()
		  {
  			count++;
  			sn=count;
           }
         void display()
           {
            cout<<"I am number"<<sn<<endl;
           }
           
           
};
int SN::count=0;
int main()
{
	SN o1,o2,o3;
	o1.display();
	o2.display();
	o3.display();
}
