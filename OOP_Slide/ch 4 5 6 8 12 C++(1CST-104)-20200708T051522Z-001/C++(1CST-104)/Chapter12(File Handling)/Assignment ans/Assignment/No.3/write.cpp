#include<iostream.h>
#include<conio.h>
#include<stdio.h>

int main()
{
	FILE *fp;
	fp=fopen("income_dat.txt","wt");
	
	int income;
	
	
	cout<<"Enter your income amount:$";
	  cin>>income;
	
    fprintf(fp,"%d",income);
    fclose(fp);
    return 0;
}