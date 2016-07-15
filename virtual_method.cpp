#include <iostream>
using namespace std;
class A
{
public:
	virtual void print(){cout<<"A";}
};
class B: public A
{
public:
	virtual void print(){cout<<"B";}
};

int main()
{
	A* a = new B();
	B* b = new B();
	a->print();
	b->print();
	delete a;
	delete b;
	return 0;
}
