#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	int h1,h2,h3,m1,m2,m3,s1,s2,s3;
	char a;
	cout<<"Enter first time: ";
	cin>>h1>>a>>m1>>a>>s1;
	cout<<"Enter second time: ";
	cin>>h2>>a>>m2>>a>>s2;
	s3 = s1 + s2;
	m3 = m1 + m2;
	h3 = h1 + h2;
	if (s3>59)
	m3+=1, s3-=60;
	if (m3>59)
	h3+=1, m3-=60;
	cout<<"Sum of two times: "<<h3<<a<<m3<<a<<s3;
	getch();
}