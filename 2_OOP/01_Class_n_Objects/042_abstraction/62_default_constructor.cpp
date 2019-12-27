#include <iostream>
using namespace std;

class X{
	int i=4;
	int j{5};

public:
	X(int a) : i{a} {};
	X() = default;
};

int main()
{
	X y;
	X z{2};

	return 0;
}
