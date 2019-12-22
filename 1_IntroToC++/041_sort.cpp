#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;




int main(){

	vector<int> vect={4,7,1,7,9,0,32,1,44,568,98};
	
	sort(vect.begin(),vect.end() );
	for(auto vec: vect){
		cout<< vec<< endl;
	}

	
	return 0;
}