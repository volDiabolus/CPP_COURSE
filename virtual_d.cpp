#include <iostream>
#include <vector>

using namespace std;
class A
{
	vector<double> d;
public:
	A(){d.resize(500,5.0);};
	virtual void print(){cout<<"A "<<d.size();}
};

class B: public A
{
public:
	virtual void print(){cout<<"B "<<d.size();}
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
