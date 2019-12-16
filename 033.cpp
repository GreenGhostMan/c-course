#include <iostream>
using namespace std;

int main(){
	int i =10;
	int &ri = i;

	++ri;
	cout<<"i = "<< i <<endl;
	++i;
	cout<<"ri = "<< ri <<endl;

	return 0;
}	
