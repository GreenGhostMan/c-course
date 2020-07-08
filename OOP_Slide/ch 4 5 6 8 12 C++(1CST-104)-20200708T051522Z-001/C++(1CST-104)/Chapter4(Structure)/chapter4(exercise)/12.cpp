#include<iostream.h>
#include<conio.h>

struct fraction{
	
int a,b,c,d,ans1,ans2;	
	
};

int main()
{
 
   fraction fraction1;
   char operator1,z,ans;
   do{
	 cout<<"Enter first fraction:";
	 cin>>fraction1.a>>z>>fraction1.b;
	 cout<<"Enter second fraction:";
	 cin>>fraction1.c>>z>>fraction1.d;
	 cout<<"Enter operator:";
	 cin>>operator1;
   switch(operator1)
      {

      case'+':fraction1.ans1=fraction1.a*fraction1.d+fraction1.b*fraction1.c;
	      fraction1.ans2=fraction1.b*fraction1.d;
	      cout<<"Answeris"<<fraction1.ans1<<z<<fraction1.ans2<<endl;break;

      case'-':fraction1.ans1=fraction1.a*fraction1.d-fraction1.b*fraction1.c;
	      fraction1.ans2=fraction1.b*fraction1.d;
	      cout<<"Answer is"<<fraction1.ans1<<"/"<<fraction1.ans2<<endl;break;


      case'*':fraction1.ans1=fraction1.a*fraction1.c;
	      fraction1.ans2=fraction1.b*fraction1.d;
	      cout<<"Answer is"<<fraction1.ans1<<"/"<<fraction1.ans2<<endl;break;

       case'/':fraction1.ans1=fraction1.a*fraction1.d;
	       fraction1.ans2=fraction1.b*fraction1.c;
	       cout<<"Answer is"<<fraction1.ans1<<"/"<<fraction1.ans2<<endl;break;
		}

	 cout<<" Continue?(Y/N) ";
	 cin>>ans;
	 }while(ans!='N');
	
	return 0;      
	}