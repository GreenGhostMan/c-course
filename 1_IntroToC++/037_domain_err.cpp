#include <iostream>
#include <stdexcept>

using namespace std;

double divide(double dividend, double divisor)
{
	if(divisor==0){
		throw domain_error("Division by Zero");
	}else{
		return dividend/divisor;
	}
}
int main(){
	try{
		cout<<divide(1,0)<<endl;
	}catch(const exception &e){
		cout<<"Exception : "<<e.what()<<endl;
	}
}
