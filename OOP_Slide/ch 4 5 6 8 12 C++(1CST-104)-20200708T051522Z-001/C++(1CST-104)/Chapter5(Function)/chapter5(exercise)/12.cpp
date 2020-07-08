#include<iostream.h>
#include<conio.h>

struct fraction{
	
int a,b,c,d,ans1,ans2;	
	};
	
fraction fadd(fraction);
fraction fsub(fraction);
fraction fmul(fraction);
fraction fdiv(fraction);
	

int main()
{
 
   fraction fraction1;
   char operator1,z,ans;
   
	 cout<<"Enter first fraction:";
	     cin>>fraction1.a>>z>>fraction1.b;
	 cout<<"Enter second fraction:";
	     cin>>fraction1.c>>z>>fraction1.d;
	 cout<<"Enter operator:";
	    cin>>operator1;
   switch(operator1)
      {

      case'+':fadd(fraction1);
	          break;

      case'-':fsub(fraction1);
	          break;


      case'*':fmul(fraction1);
	          break;

       case'/':fmul(fraction1);
 	           break;
		}



fraction fadd(fraction fraction1)
{
          fraction1.ans1=fraction1.a*fraction1.d+fraction1.b*fraction1.c;
	      fraction1.ans2=fraction1.b*fraction1.d;
	      cout<<"Answeris"<<fraction1.ans1<<z<<fraction1.ans2<<endl;	
}
fraction fsub(fraction fraction1)
{
	fraction1.ans1=fraction1.a*fraction1.d-fraction1.b*fraction1.c;
	      fraction1.ans2=fraction1.b*fraction1.d;
	      cout<<"Answer is"<<fraction1.ans1<<"/"<<fraction1.ans2<<endl;
}
fraction fmul(fraction fraction1)
{
fraction1.ans1=fraction1.a*fraction1.c;
	      fraction1.ans2=fraction1.b*fraction1.d;
	      cout<<"Answer is"<<fraction1.ans1<<"/"<<fraction1.ans2<<endl;	
}
fraction fdiv(fraction fraction1)
{
	fraction1.ans1=fraction1.a*fraction1.d;
	       fraction1.ans2=fraction1.b*fraction1.c;
	       cout<<"Answer is"<<fraction1.ans1<<"/"<<fraction1.ans2<<endl;
}
	