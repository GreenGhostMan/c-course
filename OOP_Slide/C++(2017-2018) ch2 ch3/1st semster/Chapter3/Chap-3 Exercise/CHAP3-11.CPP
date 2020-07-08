#include<conio.h>
#include<iostream.h>
void main()
{
   clrscr();
   int pd1,sh1,pe1;
   int pd2,sh2,pe2;
   char a;
   float num;
   char operator1;
   cout<<"Enter the first amount:\x9c";
     cin>>pd1>>a>>sh1>>a>>pe1;
   cout<<"Enter the second amount:\x9c";
     cin>>pd2>>a>>sh2>>a>>pe2;
   cout<<"Enter opearator ";
     cin>>operator1;

       switch(operator1)
   {
    case'+':    pd1+=pd2;
		sh1+=sh2;
		pe1+=pe2;


		if(pe1>11)
	      {
		sh1+=pe1/12;
		pe1=pe1%12;
	       }
		if(sh1>19)
	      {
		pd1+=sh1/20;
		sh1=sh1%20;
	       }
		cout<<"Total is \x9c"<<pd1<<a<<sh1<<a<<pe1;break;

     case'-':    if(pd2>pd1)

	       {
		    if(pe1<pe2)
		     {
		       --sh1;
		       pe1+=12;
		       pe1-=pe2;
		      }
		      else
			  pe1-=pe2;

		     if(sh1<sh2)
		      {
		       --pd1;
		       sh1+=20;
		       sh1-=sh2;
		       }
		       else
			   sh1-=sh2;
			   pd2-=pd1;
		  }

		 cout<<" Total is \x9c"<<pd1<<a<<sh1<<a<<pe1;break;

       case'*': cout<<"Enter a number: ";
		cin>>num;
		pd1*=num;
		sh1*=num;
		pe1*=num;


		if(pe1>11)
	      {
		sh1+=pe1/12;
		pe1=pe1%12;
	       }
		if(sh1>19)
	      {
		pd1+=sh1/20;
		sh1=sh1%20;
	       }
		cout<<"The result is \x9c"<<pd1<<a<<sh1<<a<<pe1;break;
       }
	 getch();
	 }