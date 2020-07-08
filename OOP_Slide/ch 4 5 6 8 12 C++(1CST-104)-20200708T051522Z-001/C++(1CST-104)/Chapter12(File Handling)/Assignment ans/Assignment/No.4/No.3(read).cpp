#include<iostream.h>
#include<conio.h>
#include<stdio.h>

int main()
{
	FILE *fp;
	fp=fopen("Fibonnaci.txt","rt");
	
	long next=0;
   long last=1;
   long sum;	
	 while(next<=54)
   {
	 cout<<last<<"\t";
	 sum=next+last;
     next=last;
     last=sum;
     fscanf(fp,"%d",&last);
	 
	}
	fclose(fp);
	return 0;
}