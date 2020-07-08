#include<iostream.h>
#include<conio.h>
#include<ctype.h>
void main()
{
  clrscr();
  char letter;
  cout<<"Enter a letter";
  cin>>letter;
  int ans=islower(letter);
  cout<<ans;
  getch();
  }