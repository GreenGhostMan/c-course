#include<iostream.h>
#include<conio.h>
void main()
{
   clrscr();
   int a,b,c,d,ans1,ans2;
   char operator1,z,ans;
   do{
	 cout<<"Enter first fraction";
	 cin>>a>>z>>b;
	 cout<<"Enter second fraction";
	 cin>>c>>z>>d;
	 cout<<"Enter operator";
	 cin>>operator1;
   switch(operator1)
      {

      case'+':ans1=a*d+b*c;
	      ans2=b*d;
	      cout<<"Answeris"<<ans1<<"/"<<ans2;endl;break;

      case'-':ans1=a*d-b*c;
	      ans2=b*d;
	      cout<<"Answer is"<<ans1<<"/"<<ans2;endl;break;


      case'*':ans1=a*c;
	      ans2=b*d;
	      cout<<"Answer is"<<ans1<<"/"<<ans2;endl;break;

       case'/':ans1=a*d;
	       ans2=b*c;
	       cout<<"Answer is"<<ans1<<"/"<<ans2;endl;break;
		}

	 cout<<" Continue?(Y/N) ";
	 cin>>ans;
	 }while(ans!='N');
	 getch();
       }