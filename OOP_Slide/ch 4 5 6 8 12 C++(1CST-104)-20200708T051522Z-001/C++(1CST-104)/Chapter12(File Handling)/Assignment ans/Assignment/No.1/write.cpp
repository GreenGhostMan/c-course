#include<iostream.h>
#include<conio.h>
#include<stdio.h>

int main()
{
  FILE *fp;
  fp=fopen("Multiplication table.txt","wt");
  int i,b,a;
  
   for(a=1; a<=12; a++)
    {
    	for(b=1; b<=16; b++)
    	{
	    	i=b*a;
    	  cout<<a<<"*"<<b<<"="<<i<<endl;
		fprintf(fp,"%d* %d= %d\n",a,b,i);
 
    
		}
    
    cout<<endl;
   	}
	fclose(fp);
  	return 0;	
}