// always interpreted as integers
// so u can compare enumeration values from completely different types
#include <iostream>
using namespace std;
enum Fruit{apple,strawberry,melon};
enum Vegatable{tomato,cucumber,onion};
void foo(){
	if(tomato == apple){
		cout<<"tomato and apple are same values"<<endl;
	}
}
int main(){
	foo();
	return 0;
}

