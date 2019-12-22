#include <iostream>
#include "041_Employee.h"
using namespace std;

void Employee::setName(string n)
{
	name = n;
}
string Employee::getName()
{
	return name;
}
int main(){

	Employee kaung;
	
	kaung.setName("Kaung Htet Tun");
	//cout<< kaung.name<<endl;
	cout<< kaung.getName() << endl;



	return 0;
}