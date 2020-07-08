#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	char ch[100];
	int num;
	int vowelcount=0;
	int conscount=0;
	cout<<"Please enter the number of characters you would like to input: ";
	cin>>num;
	for (int i=0; i<num; i++)
	{
		cout<<"Please enter a character: ";
		cin>>ch[i];
	}
	for (int a=0; a<num; a++)
	{
		if (ch[a] == 'a' || ch[a] == 'e' || ch[a] == 'i' || ch[a] == 'o' || ch[a] == 'u')
		vowelcount++;
		else
		conscount++;
	}
	cout<<"Total vowel count is "<<vowelcount
	<<"\nTotal consonant count is "<<conscount;
	getch();
}