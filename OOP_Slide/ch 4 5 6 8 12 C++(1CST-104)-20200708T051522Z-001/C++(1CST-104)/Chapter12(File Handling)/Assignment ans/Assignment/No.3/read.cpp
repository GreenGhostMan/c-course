#include<iostream.h>
#include<conio.h>
#include<stdio.h>

int main()
{
	int income;
    int tax;	
	
	FILE *fp;
	fp= fopen("income_dat.txt","rt");
	fscanf(fp,"%d",&income);
	
    if(income<=1000)  
	     {
  		   tax=(income*5)/100;
        
	     }
	     
	else if(income<=2000)  
	     {
  		   tax=(income*10)/100;
        
	     }
   else	if(income<=3000)  
	     {
  		   tax=(income*15)/100;
    
	     }
	else if(income<=4000)  
	     {
  		   tax=(income*20)/100;
         
	     }
	else if(income>4000)  
	     {
  		   tax=(income*25)/100;
        
	     }
	   
	 
	cout<<"Income\tTax"<<endl<<endl;
	cout<<"$"<<income<<"\t"<<"$"<<tax;
	cout<<endl;
	       
 fclose(fp);
 
return 0;
}