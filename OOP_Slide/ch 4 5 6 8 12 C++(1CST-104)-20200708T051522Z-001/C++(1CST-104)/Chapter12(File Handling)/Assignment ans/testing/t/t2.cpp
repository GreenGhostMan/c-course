#include<iostream.h>
#include<fstream.h>

int main()
{
	char ch;
	int j;
	double d;
	char str1[80];
	char str2[80];
	
	ifstream infile("testing.txt");
	
	infile>>ch>>j>>d>>str1>>str2;
	cout<<ch<<endl<<j<<endl<<d<<endl<<str1<<endl<<str2<<endl;
	
	infile.close();
	return 0;
}