#include<iostream.h>
#include<conio.h>

enum type {CD,VCD,DVD}; 

struct Disk{
	int num;
	float cost;
	char type;
};

int main()
{
	Disk disk;
	
	cout<<"How many disks?:";cin>>disk.num;
	cout<<"Enter the cost:";cin>>disk.cost;
	cout<<"Choose the type of disk(CD,VCD,DVD): ";
	cin>>disk.type;
	
	if(disk.type=='c')
	   disk.type=0;
	   
	  else if(disk.type=='v')
	     disk.type=1;
		 
	else  if(disk.type=='d')
		   disk.type=2;
		   
		   
		   switch(disk.type)
		   {
   	         case 0:cout<<"Disk number="<<disk.num<<endl<<"Cost="<<disk.cost<<endl<<"Type=CD";break;
	         case 1:cout<<"Disk number="<<disk.num<<endl<<"Cost="<<disk.cost<<endl<<"Type=VCD";break;
			 case 2:cout<<"Disk number="<<disk.num<<endl<<"Cost="<<disk.cost<<endl<<"Type=DVD";break;
								
   		 }  
	
	return 0;
	
}