#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>

using namespace std;

class Employee {
protected:
	string name;
	int age;
	string education;

public:
	void setName(string n);
	string getName();

	void setAge(int age);
	int getAge();

	void setEdu(string edu);
	string getEdu();

};



#endif