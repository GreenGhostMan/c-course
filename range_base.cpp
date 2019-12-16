#include <iostream>
using namespace std;

int main(){
	int elements[]={1,3,5,7,9};
	for(auto& e: elements){
		cout<<e<<endl;
	}
	elements[1]=100;
	for(auto i: elements){
		cout<<i<<endl;
	}
	return 0;
}


