#include <iostream>
#include "041_Employee.h"

using namespace std;

int main()
{
	Employee emp; // start life cycle <---------------
	emp.setName("Aung Aung");//                      |
	cout<< emp.displayName()<< endl;//               |
//													 |
	Employee *demp = new Employee();// <-----------  |
	demp->setName("pu pu");//                     |  |
	cout<< demp->displayName()<< endl;//          |  |
	delete demp; // <------------------------------  |
//													 |
	return 0; // <------------------------------------

}