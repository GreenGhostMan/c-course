#include<iostream.h>
#include<conio.h>
#include<stdio.h>


	int main()
{
	
	
	FILE *fp;
	fp=fopen("Ascii.txt","wt");
	
	char ascii;
//	char c1[52]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
//		int i[52]={65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122};
	
	for(int j=0; j<=255; j++)
	{
        ascii=(char)j;
		cout<<ascii<<endl;	
		fprintf(fp,"%c\n",ascii);
	}

     fclose(fp);
     return 0;
}