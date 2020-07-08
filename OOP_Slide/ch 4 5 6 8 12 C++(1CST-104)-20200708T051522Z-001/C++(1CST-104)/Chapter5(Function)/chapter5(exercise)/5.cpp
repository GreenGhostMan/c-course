#include<iostream.h>

long hms_to_secs(int, int, int);

int main()
{
	int h,m,s;
	char ch;
   do{
   	cout<<"Enter the time zone:";
      cin>>h>>m>>s;
     cout<<"Time zone: "<<h<<":"<<m<<":"<<s<<endl;
	 long sec = hms_to_secs(h, m ,s);
     cout<<"Total seconds= "<<sec<<"s"<<endl;
     cout<<"Do you want to continue?";
	   cin>>ch; 
   }while(ch == 'y');

return 0;
}

long hms_to_secs(int h1, int m1, int s1)
{
	long sec = h1*3600+ m1*60 + s1;
	return sec;
	 
}