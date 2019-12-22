#include <iostream>
#include <map>

using namespace std;

int n{2};
string s{"alma"};

map<string,string> m{ 
	{"Englang","Lodon"},
		{"Hungary","Budapest"},
		{"Romania","Bucharest"}
};

struct Person{
	string name;
	int age;
};

int main(){
	Person p{"Ghostman",38};
	cout<<p.name<<endl;
	cout<<p.age<<endl;


	return 0;
}

