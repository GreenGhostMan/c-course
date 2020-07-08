#include<iostream>

using namespace std;

class Distance
{
  private:
  	     int feet;
  	     float inches;
  public:
        Distance(): feet(0), inches(0.0){}
        Distance(int ft, float in): feet(ft), inches(in) {}

        void getdist()
        {
        	cout<<"Enter feet : ";cin>>feet;cout;
        	cout<<"Enter inches : ";cin>>inches;
        	cout<<endl;
        }

        void showdist()
        {
        	cout<<feet<<","<<inches;
        }

        Distance operator-(Distance);	     

};

Distance Distance::operator-(Distance dist2)
{
  

  int f = feet - dist2.feet; 
  float in = inches - dist2.inches;
  
  if(in<0)
  {
  	in+=12.0;
  	f--;
   }

 

  return  Distance(f,in);
}

int main()
{
	Distance d1,d2,d3;
	d1.getdist();
	d2.getdist();

	d3 = d1 - d2;
	d3.showdist();

	return 0;
}























