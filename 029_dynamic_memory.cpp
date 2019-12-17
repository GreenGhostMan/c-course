// In C malloc calloc with stdlib
#include <iostream>
using namespace std;

int main(){
	int *x = new int;
	int ctarray[3]; // on stack
	int * rtarray = new int[3]; // on heap
	
	delete x;
	delete [] rtarray;
	cout<<"Done"<<endl;
	return 0;
}


