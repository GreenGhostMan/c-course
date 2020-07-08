#include<conio.h>
#include<iostream.h>
void main()
{
    clrscr();
    char a;
    int  pd1,s1,pe1;
    int pd2,s2,pe2;

    do{
       cout<<"Enter first amount:\x9c ";
       cin>>pd1>>a>>s1>>a>>pe1;
       cout<<"Enter second amount:\x9c ";
       cin>>pd2>>a>>s2>>a>>pe2;

	pd1=pd1+pd2;
	s1=s1+s2;
	pe1=pe1+pe2;

       if(pe1>11)
       {
	s1+=pe1/12;
	pe1=pe1%12;
	}

	if(s1>19)
	{
	 pd1+=s1/20;
	 s1+=s1%20;
	 }
	cout<<"Total is \x9c"<<pd1<<a<<s1<<a<<pe1<<endl;
	cout<<"Do you wish to continue (y/n)? ";
	cin>>a;
	}while(a!='n');
	getch();
	}

