#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	int num[100];
	int prime[100];
	num[0]=1;
	num[1]=1;
	int i=1;
	int sum=0;
	int a=2;
	prime[0]=1;
	prime[1]=1;
	cout<<"Enter 0 to quit";
	while (num[i-1] != 0)
	{
		cout<<"\nPlease enter an integer ";
		cin>>num[i];
		i++;
	}
	i=1;
	while (num[i-1] != 0)
	{
		if (num[i]%2 != 0)
		sum += num[i];
		i++;
	}
	int b=1;
	//int count=0;
	while (num[b-1] !=0)
	{
		a=2;
		while( num[b]%a !=0)
		{
			a++;
		}
		/*for(int d=2; d<=num[d]; d++)
		{
			if(num[b]%d==0)
			count++;
		}*/
		if (num[b]==a)
		//if (count>0)
		prime[b] =num[b];
		b++;
	}
	cout<<"The sum of odd numbers is: "<<sum;
	cout<<"\nThe prime numbers are: ";
	int c=1;
	while (c<b-1)
	{
		cout<<" "<<prime[c];
		c++;
	}
	getch();
}