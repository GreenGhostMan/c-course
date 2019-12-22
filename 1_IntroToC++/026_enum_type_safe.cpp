#include <iostream>
using namespace std;

enum class Mark{
	Undefined,Low,Medium,High
};

Mark myMark(int value){
	switch(value){
		case 1: return Mark::Low;
		case 2: return Mark::Medium;
		case 3: return Mark::High;
		default: return Mark::Undefined;
	}
}
int main(){
	Mark m1(2);
	return 0;
}

