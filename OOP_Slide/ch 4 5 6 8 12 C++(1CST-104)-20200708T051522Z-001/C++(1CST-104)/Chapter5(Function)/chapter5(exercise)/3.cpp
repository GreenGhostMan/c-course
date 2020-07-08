#include<iostream.h>

void zerosmaller(int&, int&);

int main()
{
	int num1=2,num2=5;
    cout<<"num1="<<num1<<", num2="<<num2<<endl;
	zerosmaller(num1,num2);
     cout<<"Num1 becomes"<<num1<<", Num2 becomes"<<num2<<endl;
return 0;
}
 void zerosmaller(int& nn1, int& nn2)
 {
 	if(nn1<nn2)
 	
	     nn1=0;
     else
	     nn2=0; 	
	 
 }