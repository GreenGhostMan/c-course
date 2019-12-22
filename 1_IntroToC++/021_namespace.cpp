#include <iostream>
using namespace std;

namespace space1{
	void foo(){
		cout<<"this is nampspace 1"<<endl;
	}
};
namespace space2{
	void foo(){
		cout<<"this is namespace 2"<<endl;
	}
};
int main(){
	space1::foo();
	space2::foo();

	return 0;
}
