#include<iostream.h>
#include<conio.h>
struct phone
{
 int areacode;
 int exchange;
 int number;
 };
 
 int main()
 {
  phone Phone1,Phone2;
  
  Phone1.areacode=212;
  Phone1.exchange=767;
  Phone1.number=8900;	
	
	
	cout<<"Enter your code, exchange, and number:";
	  cin>>Phone2.areacode>>Phone2.exchange>>Phone2.number;
	
	cout<<"My number is"<<"("<<Phone1.areacode<<")"<<" "<<Phone1.exchange<<"-"<<Phone1.number<<endl;
	cout<<"Your number is"<<"("<<Phone2.areacode<<")"<<" "<<Phone2.exchange<<"-"<<Phone2.number<<endl;
	return 0;
 }
	
	  
	
	
