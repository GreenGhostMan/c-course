#include<iostream.h>
#include<conio.h>

enum etype{ laborer, secretary, manager, accountant, executive, researcher};


	
class  employee{
 
     	private:
     	       int  enumber;
     	       float salary;
     	       int    d,m,y;
     	        etype e;
         public:	
		
			void getemploy()
			{
				cout<<endl;
				cout<<"Enter employee's number : ";
				   cin>>enumber;
				cout<<"Enter the employee's salary :$ ";
				   cin>>salary;
				cout<<"Enter the employment date :";
				  cin>>d>>m>>y; 
				  
   	 	      char ch;
    
              cout<<"\nlaborer, secretary, manager, accountant, executive, researcher\n";
       	      cout<<"Enter the employee type(first letter only): ";
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
             
		      }
		
			void putemploy()
			{
				cout<<"Employee's number is "<<enumber<<endl;
				cout<<"Employee's salary is $"<<salary<<endl;
				cout<<"Employee's type is "<<endl;
				cout<<"Employment date is"<<d<<"/"<<m<<"/"<<y<<endl;
				 
				 switch(e)
                {
            	case 0: cout<<"Employee type is Laborer"<<endl;break;
    	        case 1: cout<<"Employee type is Secreatary"<<endl;break;
             	case 2: cout<<"Employee type is Manager"<<endl;break;
            	case 3: cout<<"Employee type is Accountant"<<endl;break;
            	case 4: cout<<"Employee type is Executive"<<endl;break;
            	case 5: cout<<"Employee type is Researcher"<<endl;break;
                 }
				cout<<endl;
			}                
          

};


int main()
{
  employee e1,e2,e3;
  
  
  e1.getemploy();
  e2.getemploy();  
  e3.getemploy();
  
  cout<<"====================";
  e1.putemploy();
  e2.putemploy();
  e3.putemploy();	
	
	
	return 0;
}
