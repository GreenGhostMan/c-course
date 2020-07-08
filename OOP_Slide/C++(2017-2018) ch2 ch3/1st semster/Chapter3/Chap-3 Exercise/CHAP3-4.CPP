#include<conio.h>
#include<iostream.h>
void main()
{
   clrscr();
   float num1,num2;
   char operator1,a,n;
   do{
      cout<<"Enter first number, operator , another number ";
      cin>>num1>>operator1>>num2;

   switch(operator1)
     {
       case'+': cout<<"Answer = "<<num1+num2;break;
       case'-': cout<<"Answer = "<<num1-num2;break;
       case'*':cout<<"Answer = "<<num1*num2;break;
       case'/':cout<<"Answer = "<<num1/num2;break;
     }
       cout<<endl<<"Do another (y/n)? ";
       cin>>a;
       }while(a!='n');
       getch();
   }



