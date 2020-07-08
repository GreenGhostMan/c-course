#include<iostream.h>
#include<conio.h>

double dpower(double, int p=2);
char cpower(char, int p=2);
int ipower(int, int p=2);
long lpower(long, int p=2);
float fpower(float, int p=2);

int main()
{
	int number,ans,p;
	char type;
	
	cout<<"Enter a number:  ";
	   cin>number;
	cout<<"Do you want to add a power? ";
	   cin>>ch;
   
     if(ch=='y')
     {
     	cout<<"Enter power:";
		 cin>>p;
     	cout<<"Choose data type(double,char,int,long,float";
     	  cin>>type;
		   
		switch(type)
		{
			case'double': ans=dpower(number,p);
                          cout<<ans;
						break;
		
 	        case'char': cout<<"ERROR";
                        break;
			
			case'int': ans=ipower(number,p);
                        break;
                        
	       	case'long': ans=lpower(number,p);
                        break;
					
		    case'float': ans=fpower(number,p);
                        break;					 										
	     }    
	    	 
     }
      else
          ans=dpower(number);
          cout<<ans;

return 0;
}


double dpower(double n, int p)
{
	double result=1.0;
	for(int i=1; i<=p; i++)
	   result*=n;
}



int ipower(int n, int p)
{
	double result=1.0;
	for(int i=1; i<=p; i++)
	   result*=n;
}

long lpower(long n, int p)
{
	double result=1.0;
	for(int i=1; i<=p; i++)
	   result*=n;
}

float fpower(float n, int p)
{
	double result=1.0;
	for(int i=1; i<=p; i++)
	   result*=n;
}