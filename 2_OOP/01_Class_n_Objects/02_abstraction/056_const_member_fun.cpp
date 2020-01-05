#include <iostream>
#include "041_Employee.h"

using namespace std;

void foo(const Employee& ee){
	//cout<<ee.displayName()<<endl; // this is not member function
	cout<<ee.getName()<<endl;
}
int main(){
	Employee e;
	e.setName("mg mg");
	cout<< e.getName() << endl;

	foo(e);


	return 0;
}