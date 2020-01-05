#include <iostream>
using namespace std;

class ConstRef{
public:
	ConstRef(int& ii): cmi(ii),rmi(ii)
{
	mi = ii;
	//cmi = ii;
	//rmi = ii;
}
private:
	int mi;
	const int cmi;
	int& rmi;


};



int main(){
	//const int jk;
	//int& e;


	return 0;
}