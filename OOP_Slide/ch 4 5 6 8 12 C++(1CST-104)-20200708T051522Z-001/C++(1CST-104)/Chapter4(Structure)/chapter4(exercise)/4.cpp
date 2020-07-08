#include<iostream.h>
#include<conio.h>
struct employee
{
  int num;
  float com;	
	
};

int main()
{
   
   const int SIZE=3; 
 
   employee e[SIZE];
   
     for(int i=0; i<SIZE; i++)   
   {
   	
   
   	cout<<"Enter id of employee's number:";
  	cin>>e[i].num;
  	cout<<"Enter the employee's compensation:$";
 	cin>>e[i].com;
   }
  	
   for(int j=0; j<SIZE; j++)
  {
  	
  
	cout<<"Employee's number:"<<e[j].num<<"="<<e[j].com<<endl;
		
			}
return 0;	
}
