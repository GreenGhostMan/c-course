#include <iostream>
using namespace std;

int main(){
	int i =10;
	int &ri = i;
	int *j = &i;
	//int &ri1; // ERROR reference must be initialized
	cout<<"i = "<< i <<endl;
	cout<<"ri = "<< ri <<endl;
	cout<<"*j = "<< *j <<endl;
	++i;	
	cout<<endl;
	cout<<"i = "<< i <<endl;
	cout<<"ri = "<< ri <<endl;
	cout<<"*j = "<< *j <<endl;
	++ri;	
	cout<<endl;
	cout<<"i = "<< i <<endl;
	cout<<"ri = "<< ri <<endl;
	cout<<"*j = "<< *j <<endl;
	++*j;	
	cout<<endl;
	cout<<"i = "<< i <<endl;
	cout<<"ri = "<< ri <<endl;
	cout<<"*j = "<< *j <<endl;


	return 0;
}	
