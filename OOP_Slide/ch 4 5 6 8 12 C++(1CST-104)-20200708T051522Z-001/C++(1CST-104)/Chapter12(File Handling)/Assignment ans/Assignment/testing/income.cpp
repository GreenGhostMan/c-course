#include<iostream.h>
#include<conio.h>
#include<stdio.h>

int main()
{
	FILE *fp1;
	fp1=fopen("income_dat.txt","wt");
	
	int income;
	
	
	cout<<"Enter your income amount:$";
	  cin>>income;
	
    fprintf(fp1,"%d",income);
    fclose(fp1);
    
	
	

    int income1;
    int tax;	
	
	fp1= fopen("income_dat.txt","rt");
	fscanf(fp1,"%d",&income1);
	
    if(income1<=1000)  
	     {
  		   tax=(income1*5)/100;
        
	     }
	     
	else if(income1<=2000)  
	     {
  		   tax=(income1*10)/100;
        
	     }
   else	if(income1<=3000)  
	     {
  		   tax=(income1*15)/100;
        
	     }
	else if(income1<=4000)  
	     {
  		   tax=(income1*20)/100;
        
	     }
	else if(income1>4000)  
	     {
  		   tax=(income1*25)/100;
        
	     }
	   
	 
	cout<<"Income\tTax"<<endl<<endl;
	cout<<"$"<<income1<<"\t"<<"$"<<tax;
	cout<<endl;
	       
 fclose(fp1);

return 0;
}