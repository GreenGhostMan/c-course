#include<iostream.h>
#include<conio.h>

enum etype{ laborer, secretary, manager, accountant, executive, researcher
	
};

int main()
{
	etype e;
	char ch;
	cout<<"Enter employee type(first letter only):";
	cin>>ch;
	
	
	switch(ch)
	{
		case'l': e=laborer;break;
		case's': e=secretary;break;
		case'm': e=manager;break;
		case'a': e=accountant;break;
		case'e': e=executive;break;
		case'r': e=researcher;break;
		
	} 
	
    switch(e)
    {
    	case 0: cout<<"Employee type is Laborer"<<endl;break;
    	case 1: cout<<"Employee type is Secreatary"<<endl;break;
    	case 2: cout<<"Employee type is Manager"<<endl;break;
    	case 3: cout<<"Employee type is Accountant"<<endl;break;
    	case 4: cout<<"Employee type is Executive"<<endl;break;
    	case 5: cout<<"Employee type is Researcher"<<endl;break;
    }

   return 0;   	
}