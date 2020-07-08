#include<iostream.h>
#include<conio.h>

struct date 
{

  int day,month,year;	

};


enum etype
	{
  
   laborer, secretary, manager, accountant, executive, researcher
};


struct employee
{
  int num;
  float com;	
  etype e;
  date d;
	
};


int main()
{
    employee emp[3];	
    char ch;
	
	for(int i=1; i<=3; i++)	
	{
	
	
	cout<<"Enter an employee's number:";
	cin>>emp[i].num;
    cout<<endl;
    
	cout<<"Enter an employee's compensation:"<<endl;
	cin>>emp[i].com;
    cout<<endl;
    
	cout<<"Enter an employee's type:"<<endl;
	cin>>ch;
	cout<<endl;
	
	switch(ch)
	{
		case'l': emp[i].e=laborer;break;
		case's': emp[i].e=secretary;break;
		case'm': emp[i].e=manager;break;
		case'a': emp[i].e=accountant;break;
		case'e': emp[i].e=executive;break;
		case'r': emp[i].e=researcher;break;
		
	} 
	
    
	cout<<"Enter an employee's date of first employment:";
	cin>>emp[i].d.day>>emp[i].d.month>>emp[i].d.year;
	cout<<endl;
	}
	
    for(int j=1; j<=3; j++)
	{
	
	cout<<"Employee"<<j<<"'s number:"<<emp[j].num<<endl<<endl;
	cout<<"Employee"<<j<<"'s compensation:"<<emp[j].com<<endl<endl;
	
	switch(emp[j].e)
    {
    	case 0: cout<<"Employee"<<j<<"type is Laborer"<<endl;break;
    	case 1: cout<<"Employee"<<j<<"type is Secreatary"<<endl;break;
    	case 2: cout<<"Employee"<<j<<"type is Manager"<<endl;break;
    	case 3: cout<<"Employee"<<j<<"type is Accountant"<<endl;break;
    	case 4: cout<<"Employee"<<j<<"type is Executive"<<endl;break;
    	case 5: cout<<"Employee"<<j<<"type is Researcher"<<endl;break;
    }
	
	
	cout<<"Employee"<<j<<"'s date of first employment:"<<emp[j].d.day<<"/"<<emp[j].d.month<<"/"<<emp[j].d.year<<endl<<endl;
}
	
return 0;	
}