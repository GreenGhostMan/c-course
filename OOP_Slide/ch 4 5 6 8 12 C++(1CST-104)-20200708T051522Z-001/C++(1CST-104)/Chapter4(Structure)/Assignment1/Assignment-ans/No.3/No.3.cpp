#include<iostream.h>
#include<conio.h>

struct student{
	char name[5000];
	long roll_num;
} ;

int main()
{
  const int SIZE=100;
  student student1[SIZE];
  
  for(int i=0; i<101; i++ )
  {
  	cout<<"Enter your name:";cin>>student1[i].name;
  	cout<<"Enter your Roll Number:";cin>>student1[i].roll_num;
  	cout<<endl;
  }
  
  for(int j=0; j<=101; j++)
  {
  	cout<<"Name-"<<student1[j].name;
  	cout<<"Roll Number-"<<student1[j].roll_num;
  	cout<<endl<<endl;
  }	
	
	
	
	return 0;
	
	
}