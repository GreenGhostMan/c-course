#include <iostream>

using namespace std;
void sayHello(const string &who){
	cout<<who<<endl;
//	who = "hello world";
}
void show(int* t){
	for(int i=0;i<3;i++){
		cout << t[i]<<endl;
	}
}
const int N = 10;
int t[3]={2,4,8};

int main(){
	const string str="Hellow ghostman";
	sayHello(str);
	show(t);
	return 0;
}
