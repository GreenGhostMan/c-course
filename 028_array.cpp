#include <iostream>
#include <array>
//using namespace std;

int main()
{
	std::array<int,5> arr {10,20,40,50,90};
	std::cout<< "Array size = " << arr.size() <<std::endl;
	for(auto i: arr){
		std::cout<<i<<std::endl;
	}
	return 0;
}
