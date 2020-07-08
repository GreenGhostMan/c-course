#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    unsigned long fact;
    int num;
    char y;
    do
      {
      fact = 1;
    cout<<"Enter a number ";
    cin>>num;
       for(int j=num;j>=1;j--)
      {
       fact*=j;
       }
       cout<<"Factorial of "<<num<<"="<<fact<<endl;

       cout<<"Type y to continue or enter 0 to exit? ";
       cin>>y;
       }
	while(y!='0');
	getch();
       }