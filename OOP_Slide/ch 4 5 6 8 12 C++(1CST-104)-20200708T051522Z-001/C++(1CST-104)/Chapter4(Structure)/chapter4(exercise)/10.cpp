#include<iostream.h>
#include<conio.h>

struct fraction
{
	int numerator,denominator;
};



int main()
{
   fraction f1,f2;
     
   int ans1,ans2;
   char operator1,z,ans;
   do{
	 cout<<"Enter first fraction";
	 cin>>f1.numerator>>z>>f1.denominator;
	 
	 cout<<"Enter second fraction";
	 cin>>f1.denominator>>z>>f1.denominator;
	 
	 cout<<"Enter operator";
	 cin>>operator1;
  
   switch(operator1)
      {

      case'+':ans1=f1.numerator*f2.denominator+f1.denominator*f2.numerator;
	          ans2=f1.denominator*f2.denominator;
	          cout<<"Answeris"<<ans1<<z<<ans2;endl;break;

      case'-':ans1=f1.numerator*f2.denominator-f1.denominator*f2.numerator;
        	  ans2=f1.denominator*f2.denominator;
	          cout<<"Answer is"<<ans1<<"z"<<ans2;endl;break;


      case'*':ans1=f1.numerator*f2.numerator;
	          ans2=f1.denominator*f2.denominator;
	          cout<<"Answer is"<<ans1<<"z"<<ans2;endl;break;

       case'/':ans1=f1.numerator*f2.denominator;
	           ans2=f1.denominator*f2.numerator;
	           cout<<"Answer is"<<ans1<<"z"<<ans2;endl;break;
		}

	 cout<<" Continue?(Y/N) ";
	 cin>>ans;
	 }while(ans!='N');
	 
	 return 0;
       }