#include <iostream>
using namespace std;

class X{
public:
	X(int) = delete;
	X(double a){}
};

int main()
{
	X x1(3.14);
	X x2(10); // int to double conversion

	return 0;
}