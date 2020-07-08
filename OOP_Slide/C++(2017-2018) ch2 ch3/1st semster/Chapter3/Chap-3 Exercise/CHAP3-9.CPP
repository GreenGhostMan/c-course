#include<iostream.h>
#include<conio.h>
void main()
{
   clrscr();
   int chair,guest;
   int long ans=1;
   cout<<" Enter the number of guests ";
   cin>>guest;
   cout<<" Enter the number of chairs ";
   cin>>chair;
   for(int i=guest;i>guest-chair;i--)
   ans=ans*i;
   cout<<" the number of possible arrrangement: "<<ans;
   getch();
   }
