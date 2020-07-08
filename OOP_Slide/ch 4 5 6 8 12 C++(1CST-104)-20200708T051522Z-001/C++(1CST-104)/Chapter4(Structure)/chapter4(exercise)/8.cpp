#include<iostream.h>
#include<conio.h>
struct fraction{
	
	int numerator,denominator;
	
};

int main()
{
	fraction fraction1,fraction2,fraction3;
    char a;
	
	cout<<"Enter first fraction:";
	cin>>fraction1.numerator>>a>>fraction1.denominator;
	 
	cout<<"Enter second fraction:";
	cin>>fraction2.numerator>>a>>fraction2.denominator;
	
	
	fraction3.numerator=fraction1.numerator+fraction2.numerator;
	fraction3.denominator=fraction1.denominator+fraction2.denominator;
	
	cout<<"Sum="<<fraction3.numerator<<a<<fraction3.denominator<<endl;
	


return 0;
}