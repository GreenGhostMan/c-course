#include <iostream>
#include <string>
using namespace std;
bool isShorter(const string &s1,const string &s2);

int main(){

        const int j = 10;
	//j++; // ERROR j is read only
        int const *k = &j; // OR // const int *k = &j;
        // *k = *k +30; // ERROR


	cout<<"j = "<< j <<endl;
	cout<<"*k = "<< *k <<endl;

	const string s1="We are";
	const string s2="Green Hackers";

	cout<<"s1 < s2 = "<< isShorter(s1,s2)<<endl; 
	return 0;
}
bool isShorter(const string &x,const string &y)
{
	return x.size() < y.size();
}
