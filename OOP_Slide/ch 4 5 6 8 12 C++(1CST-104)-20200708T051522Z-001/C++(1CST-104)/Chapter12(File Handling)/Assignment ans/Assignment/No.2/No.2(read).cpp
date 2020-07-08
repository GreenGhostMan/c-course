#include<iostream.h>
#include<conio.h>
#include<stdio.h>

int main()
{
	FILE *fp;
	fp=fopen("Ascii.txt","rt");
	
	char ascii;
	
	
	for(int a=0; a<=255; a++)
	{
        ascii=(char)a;
		fscanf(fp,"%c\n",&ascii); 	
		cout<<ascii<<endl;
	}
	fclose(fp);
	return 0;
}