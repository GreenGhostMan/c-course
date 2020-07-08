#include<iostream.h>
#include<conio.h>
#include<stdio.h>

int main()
{
	FILE *fp;
	fp=fopen("Fibonnaci.txt","wt");
	
   long next=0;
   long last=1;
   long sum;
   while(last<=55)
   {
     
     fprintf(fp,"%d ",last);
	 sum=next+last;
     next=last;
     last=sum;
   
    }
	fclose(fp);

}