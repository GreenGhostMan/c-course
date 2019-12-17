short 2B
int 4B
long 4B
long long 8B // C++11 range depends on compiler -usually 8 Bytes
float 4B
double 8B
long double 8B
bool 1B
char 1B
char16_t  1B, // C++11
char32_t 1B  // C++11
wchar_t 2B
auto (C++11) // C++11 and above
decltype(expression)   // C++11
	int i=10;
	decltype(i) j=20; // j will be int


eg. 
	struct A{double x;}
	const A* a;
	decltype(a->x) y; // TYPE OF Y IS DOUBLE (DECLARED TYPE)
	decltype((a->x)) z = y; // TYPE OF Z IS CONST & (value expression)
