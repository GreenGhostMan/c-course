#include <iostream>
#include <stdexcept>
using namespace std;
double divide(double a,double b){
	if(b==0){
		throw exception();
	}else{
		return a/b;
	}
}

int main(){
	try{
		cout<<divide(1,0)<<endl;
	}catch(const exception& e) {
		cout<<"Exception was caught!"<<endl;
	}

	return 0;

}
