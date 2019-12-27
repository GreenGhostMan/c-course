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
	void setName(string n)
	{
		name = n;
	}
	
	string getName() const
	{
		return name;
	}

	string displayName()
	{
		return name;
	}	

	void setAge(int n)
	{
		age = n;
	}

	int getAge() const
	{
		return age;
	}

	void setEdu(string edu)
	{
		education = edu;
	}

	string getEdu() const
	{
		return education;
	}


};



#endif