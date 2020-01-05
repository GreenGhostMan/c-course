#include <iostream>
#include "041_Employee.h"
using namespace std;

class GreenHackerEmployee : public Employee
{
private:
	int salary;
public:
	void setSalary(int i) { salary= i;};
	int getSalary() const{ return salary; };
};

class RomRoboticsEmployee : public Employee
{
private:
	int salary;
public:
	void setSalary(int i) { salary=i; };
	int getSalary() const { return salary; };
};

int main(){
	GreenHackerEmployee thaw;
	RomRoboticsEmployee kaung;

	thaw.setName("Thaw Lin naing");
	thaw.setAge(26);
	thaw.setEdu("Mec");
	thaw.setSalary(200000);
	cout<< "=================================="<<endl;
	cout<< thaw.getName()<< endl;
	cout<< thaw.getAge() << endl;
	cout<< thaw.getEdu() << endl;
	cout<< thaw.getSalary() <<endl;
	cout<< "=================================="<<endl;
	kaung.setName("kaung Htet Tun");
	kaung.setAge(26);
	kaung.setEdu("Mec");
	kaung.setSalary(200000);

	cout<< kaung.getName()<< endl;
	cout<< kaung.getAge() << endl;
	cout<< kaung.getEdu() << endl;
	cout<< kaung.getSalary() <<endl;
	cout<< "=================================="<<endl;

	return 0;
}