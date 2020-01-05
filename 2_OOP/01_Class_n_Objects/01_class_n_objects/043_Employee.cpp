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

void Employee::setAge(int n)
{
	age = n;
}

int Employee::getAge()
{
	return age;
}

void Employee::setEdu(string edu)
{
	education = edu;
}

string Employee::getEdu()
{
	return education;
}

int main(){

	Employee thaw;
	
	thaw.setName("Thaw Lin Naing");
	thaw.setAge(25);
	thaw.setEdu("BE(mec)");

	cout<< thaw.getName() << endl;
	cout<< thaw.getAge() <<endl;
	cout<< thaw.getEdu() << endl;


	return 0;
}