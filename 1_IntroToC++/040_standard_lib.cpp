#include <iostream>
#include <vector>
#include <iostream>

using namespace std;

int main(){
	vector<string> fruits{"apple","melon"};

	fruits.push_back("pear");
	fruits.push_back("nut");

	// iterate
	for(auto it=fruits.begin(); it!=fruits.end();++it) {
		cout<< *it <<endl;
	}

	for(auto & at : fruits) {
		cout<< at <<endl;
	}


	return 0;
}