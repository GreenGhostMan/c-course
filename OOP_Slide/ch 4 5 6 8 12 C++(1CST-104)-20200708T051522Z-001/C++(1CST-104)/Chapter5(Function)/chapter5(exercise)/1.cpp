#include<iostream.h>

float cirArea(float);
int main()
{
	float r;
	cout<<"Enter radius:";
	  cin>>r;
	float A = cirArea(r);
	cout<<A<<endl;
}

   float cirArea(float R)
   {
   	  float A = 3.14*R*R;
   	  return A;
   }