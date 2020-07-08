#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	char input;
	cout<<"Please enter a character: ";
	cin>>input;
	 
        if (input == 'a' ||input == 'e' ||input == 'i' 
            ||input == 'o' ||input == 'u')
	
        cout<<"It is a vowel.";
	else
	cout<<"It is not a vowel.";
	getch();
}