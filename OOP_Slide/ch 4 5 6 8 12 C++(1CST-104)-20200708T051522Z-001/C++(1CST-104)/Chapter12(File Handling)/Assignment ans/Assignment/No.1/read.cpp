#include<iostream.h>
#include<conio.h>
#include<stdio.h>

int main()
{
	
	FILE *fp;
	fp=fopen("Multiplication Table.txt","rt");
	int a,b,i;
	
	for(a=1; a<=12; a++)
    {
    	for(b=1; b<=16; b++)
    	{
	fscanf(fp,"%d*%d=%d",&b,&a,&i);
	cout<<b<<"*"<<a<<"="<<i<<endl;
	     }
    cout<<endl;}
	fclose(fp);
	return 0;
}