#include<iostream.h>
#include<fstream.h>
#include<string.h>

int main()
{
	char ch='x';
	int j=77;
	double d=6.02;
	char *str1="Kakoe";
	char *str2="Kekek";
	
	ofstream outfile("testing.txt");
	outfile<<ch<<j<<' '<<d<<str1<<' '<<str2;
	cout<<"File wrtten";
	outfile.close();
}