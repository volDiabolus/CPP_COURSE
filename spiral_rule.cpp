// http://c-faq.com/decl/spiral.anderson.html

#include <iostream>

int a=10;

using namespace std;

void some_func(int a, void (*fp)(int))
{
	fp(a);
}

void b(int a){a++;}

int main()
{
	some_func(a,&b);
	cout<<a<<"\n";
	return 0;
}

