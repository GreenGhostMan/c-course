#include<iostream.h>
#include<conio.h>

class fraction{
          private:
		      int numerator,denominator;
		  public:
		      void data()
		      {
      			char ch;
				  cout<<"Enter the first fraction:";
      			  cin>>numerator>>ch>>denominator;
      			cout<<"Enter the second fraction:";
				  cin>>numerator>>ch>>denominator;
		       }
		       
		       void Sum()
		       {
       			  int n,d,sum;
       			  n= (numerator*denominator)+(numerator*denominator);
       			  d=(denominator*denominator);
                  cout<<"Sum="<<n<<"/"<<d;         			 
				  	 }

};

int main()
{
	fraction f1;
	char ch;
	do{
		f1.data();
		f1.Sum();
		cout<<endl;
		cout<<"DO YOU WANT TO CONTINUE?(y/n):";
		   cin>>ch;
		}while(ch=='y');
getch();
return 0;
}

