#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
struct student
{
 
 char name[100];
 int Rollnum;
 double Phnum;
 };
 
int main()
{
	student detail;
	cout<<"Enter your name:";
      cin.get(detail.name,50);
    cout<<"Enter your Rollnumber:";
	   cin>>detail.Rollnum;
	 cout<<"Enter your Phone-number:";
	   cin>>detail.Phnum;
	  
	 cout<<endl<<endl;  
	 cout<<"Name-"<<detail.name<<endl;
	 cout<<"RollNumber-"<<detail.Rollnum<<endl;
	 cout<<setiosflags(ios::fixed)<<setprecision(0)<<"PhoneNumber-0"<<detail.Phnum<<endl;
	 
	 return 0;
 } 