#include<iostream.h>
#include<conio.h>

void swap(int&, int&);

int main()
{
	int n1=1,n2=10;
	swap(n1,n2);
	cout<<"n1=1, n2=10 but n1 becomes "<<n1<<" and n2 becomes "<<n2;
	cout<<endl;
}

void swap(int& nn1, int& nn2)
{
	int temp= nn1;
	nn1 = nn2;
	nn2 = temp;
}